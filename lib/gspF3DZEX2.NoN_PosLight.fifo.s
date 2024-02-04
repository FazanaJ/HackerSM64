#include "macros.inc"
.set UCODE_SIZE, 0x800

.section .text

.balign 16
glabel gspF3DZEX2_NoN_PosLight_fifoTextStart
    .incbin "lib/PR/f3dzex/fifo/F3DEX3_BrW.code"
glabel gspF3DZEX2_NoN_PosLight_fifoTextEnd

/* DATA SECTION START */

.section .data

.balign 16
glabel gspF3DZEX2_NoN_PosLight_fifoDataStart
    .incbin "lib/PR/f3dzex/fifo/F3DEX3_BrW.data"
glabel gspF3DZEX2_NoN_PosLight_fifoDataEnd
