// FUN_1800e4010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e4010 */

void FUN_1800e4010(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_18015a450(param_1 + 0xf8);
  FUN_18015a520(param_1 + 0x108);
  if (*(int *)(param_1 + 0x100) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18060ab3c();
  }
  FUN_180111a20(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_1804547d0(uVar1,0x10);
  FUN_180111910(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_1804547d0(uVar1,0x10);
  FUN_1800efed0(param_1 + 0x50);
  return;
}



