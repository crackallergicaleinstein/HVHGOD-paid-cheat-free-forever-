// FUN_1806104c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806104c0 */

undefined4 FUN_1806104c0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_180611584();
    uVar1 = FUN_180610658(param_1,param_2,param_3,param_4);
    FUN_180611590(param_1);
  }
  return uVar1;
}



