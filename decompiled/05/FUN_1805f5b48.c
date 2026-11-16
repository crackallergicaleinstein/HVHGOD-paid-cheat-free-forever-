// FUN_1805f5b48 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5b48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1805f5b48(uint param_1)

{
  int iVar1;
  
  if (DAT_180bacd99 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f66cc(5);
    }
    iVar1 = __scrt_is_ucrt_dll_in_use();
    if ((iVar1 == 0) || (param_1 != 0)) {
      DAT_180bacda0 = 0xffffffffffffffff;
      uRam0000000180bacda8 = 0xffffffffffffffff;
      _DAT_180bacdb0 = 0xffffffffffffffff;
      _DAT_180bacdb8 = 0xffffffffffffffff;
      uRam0000000180bacdc0 = 0xffffffffffffffff;
      _DAT_180bacdc8 = 0xffffffffffffffff;
    }
    else {
      iVar1 = _initialize_onexit_table(&DAT_180bacda0);
      if ((iVar1 != 0) || (iVar1 = _initialize_onexit_table(&DAT_180bacdb8), iVar1 != 0)) {
        return 0;
      }
    }
    DAT_180bacd99 = '\x01';
  }
  return 1;
}



