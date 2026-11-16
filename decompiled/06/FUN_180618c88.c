// FUN_180618c88 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180618c88 */

undefined8 FUN_180618c88(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_180611584();
    uVar1 = FUN_180618cf4(param_1,param_2);
    FUN_180611590(param_1);
  }
  return uVar1;
}



