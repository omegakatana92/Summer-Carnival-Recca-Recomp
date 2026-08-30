@echo off
setlocal EnableExtensions EnableDelayedExpansion
chcp 65001 >nul
title ReccaRecomp - Windows Build Script

echo ============================================================
echo   ReccaRecomp Build Script (Windows)
echo ============================================================
echo.

set "REQUIRED_TOOLS=cmake ninja clang python git"
set "MISSING_TOOLS="

for %%t in (%REQUIRED_TOOLS%) do (
    where %%t >nul 2>&1
    if errorlevel 1 (
        echo [ERROR] Required tool not found: %%t
        set "MISSING_TOOLS=!MISSING_TOOLS! %%t"
    )
)

if defined MISSING_TOOLS (
    echo.
    echo [ERROR] The following required tools are missing:!MISSING_TOOLS!
    echo.
    echo Please install them and ensure they are in your PATH:
    echo   - CMake  : https://cmake.org/download/
    echo   - Ninja   : https://github.com/ninja-build/ninja/releases (or via CMake installer)
    echo   - Clang   : https://releases.llvm.org/ or https://github.com/llvm/llvm-project/releases
    echo   - Python  : https://www.python.org/downloads/
    echo   - Git     : https://git-scm.com/download/win
    echo.
    pause
    exit /b 1
)

echo [OK] All required tools found.
echo.

echo [0/3] Regenerating C sources from game.toml...
set "NESRECOMP=%~dp0nesrecomp-recca\build\Release\NESRecomp.exe"
set "ROM=%~dp0nesrecomp-cli-windows-x86_64\games\Summer Carnival '92 - Recca (Japan).nes"
set "GAME_TOML=%~dp0game.toml"
set "CMAKE_BAK=%~dp0CMakeLists.txt.bak"
if not exist "%CMAKE_BAK%" (
    if exist "%~dp0CMakeLists.txt" (
        copy /Y "%~dp0CMakeLists.txt" "%CMAKE_BAK%" >nul
        echo [OK] Backed up CMakeLists.txt to CMakeLists.txt.bak
    )
)
if exist "%NESRECOMP%" (
    pushd "%~dp0"
    "%NESRECOMP%" "%ROM%" --game "%GAME_TOML%" 2>&1
    popd
    if errorlevel 1 (
        echo [ERROR] NESRecomp regeneration failed.
        pause
        exit /b 1
    )
    echo [OK] Regeneration complete.
) else (
    echo [WARN] NESRecomp not found at %NESRECOMP%, skipping regeneration.
)
echo.

echo [1/3] Restoring CMakeLists.txt if overwritten...
if exist "%CMAKE_BAK%" (
    copy /Y "%CMAKE_BAK%" "%~dp0CMakeLists.txt" >nul
    echo [OK] CMakeLists.txt restored from backup.
) else (
    echo [WARN] No CMakeLists.txt backup found, skipping restore.
)
echo.

echo [2/3] Configuring CMake (Ninja + Clang, Release)...
cmake -S "%~dp0" -B "%~dp0build" -G Ninja -DCMAKE_C_COMPILER=clang -DCMAKE_BUILD_TYPE=Release -DSDL2_DIR="%~dp0nesrecomp-recca\runner\external\SDL2\cmake"
if errorlevel 1 (
    echo.
    echo [ERROR] CMake configuration failed.
    pause
    exit /b 1
)
echo [OK] Configuration complete.
echo.

echo [3/3] Building Release...
cmake --build "%~dp0build" --config Release
if errorlevel 1 (
    echo.
    echo [ERROR] Build failed.
    pause
    exit /b 1
)
echo [OK] Build complete.
echo.

echo [4/4] Verifying executable...
if exist "%~dp0build\ReccaRecomp.exe" (
    echo [OK] Executable found: %~dp0build\ReccaRecomp.exe
    for %%f in ("%~dp0build\ReccaRecomp.exe") do echo [OK] Size: %%~zf bytes
) else (
    echo [ERROR] Executable not found after build.
    pause
    exit /b 1
)

echo.
echo ============================================================
echo   Build finished successfully.
echo ============================================================
echo.
echo To run the game:
echo   cd build
echo   .\ReccaRecomp.exe
echo.
pause
