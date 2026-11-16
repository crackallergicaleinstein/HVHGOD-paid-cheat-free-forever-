// FUN_1806115d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806115d0 */

undefined4 FUN_1806115d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_18060aa1c(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_180611584();
      uVar1 = FUN_18061164c(param_1,param_2);
      FUN_180611590(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}



