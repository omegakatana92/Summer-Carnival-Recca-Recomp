# Summer-Carnival-92---Recca-Japan NESRecomp output

This folder contains C source generated from `Summer Carnival '92 - Recca (Japan).nes`.

## Build the generated source

Windows PowerShell:

```powershell
.\build.ps1
```

macOS or Linux:

```sh
./build.sh
```

The build creates the `nesrecomp_game` static library. This confirms that the
generated source compiles; it is not a complete playable port by itself.

To make a playable port, add game-specific configuration and integrate the
library with the NESRecomp runner. Existing game repositories are useful
starting points: https://github.com/mstan/nesrecomp
