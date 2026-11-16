// FUN_180533590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180533590 */

void FUN_180533590(undefined1 *param_1)

{
  undefined8 *puVar1;
  
  DAT_180bbef4a = *param_1;
  puVar1 = (undefined8 *)(param_1 + 8);
  if (puVar1 != &DAT_1808e6650) {
    FUN_18015c010();
    DAT_1808e6650 = *puVar1;
    uRam00000001808e6658 = *(undefined8 *)(param_1 + 0x10);
    DAT_1808e6660 = *(undefined8 *)(param_1 + 0x18);
    DAT_1808e6668 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xf;
    *(undefined1 *)puVar1 = 0;
  }
  FUN_18015c010(puVar1);
  return;
}



