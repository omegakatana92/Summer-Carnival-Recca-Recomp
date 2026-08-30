#include "game_extras.h"
#include "nes_runtime.h"
#include <SDL.h>
#include <stdio.h>
#include <string.h>

uint32_t game_get_expected_crc32(void) { return 0xF31DCC15u; }

const char *game_get_name(void) { return "Summer Carnival '92 - Recca"; }

static int s_init_milestone_logged = 0;

void game_on_init(void) {
    printf("[DIAG] game_on_init: PPUCTRL=%02X PPUMASK=%02X PPUSTATUS=%02X\n",
           g_ppuctrl, g_ppumask, g_ppustatus);
    printf("[DIAG] game_on_init: RAM[$00]=%02X RAM[$01]=%02X RAM[$02]=%02X\n",
           g_ram[0x00], g_ram[0x01], g_ram[0x02]);
}

void game_on_frame(uint64_t frame_count) {
    static uint64_t s_last_log = 0;
    if (frame_count - s_last_log >= 30 || frame_count < 5) {
        int non_zero = 0;
        for (int i = 0; i < 256 * 240; i++) {
            extern uint32_t *runner_get_framebuffer(void);
            uint32_t px = runner_get_framebuffer()[i];
            if (px != 0xFF000000 && px != 0) { non_zero = 1; break; }
        }
        extern const char *g_last_recomp_func;
        printf("[DIAG] frame=%llu PPUCTRL=%02X PPUMASK=%02X PPUSTATUS=%02X fb_nonzero=%d func=%s\n",
               (unsigned long long)frame_count, g_ppuctrl, g_ppumask, g_ppustatus,
               non_zero, g_last_recomp_func ? g_last_recomp_func : "?");
        fflush(stdout);
        s_last_log = frame_count;
    }
}

void game_post_nmi(uint64_t frame_count) { (void)frame_count; }

int game_handle_arg(const char *key, const char *val) { (void)key; (void)val; return 0; }

const char *game_arg_usage(void) { return ""; }

void game_run_nmi(void) { func_NMI(); }

void game_run_main(void) { func_RESET(); }

int game_dispatch_override(uint16_t addr) { (void)addr; return 0; }

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) { (void)pc; (void)addr; return val; }

void game_post_render(uint32_t *framebuf) { (void)framebuf; }

void game_fill_frame_record(void *record) { (void)record; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) { (void)cmd; (void)id; (void)json; return 0; }

const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";
