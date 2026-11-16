// FUN_1805f6310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6310 */

undefined1
FUN_1805f6310(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (DAT_180bad340 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_180bad340 = DAT_180bad340 + -1;
    uVar1 = __scrt_acquire_startup_lock();
    if (DAT_180bacd88 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f66cc(7);
    }
    uVar2 = uVar1;
    __scrt_dllmain_uninitialize_c();
    FUN_1805f6828();
    FUN_1805f6894();
    DAT_180bacd88 = 0;
    __scrt_release_startup_lock(uVar1);
    uVar1 = __scrt_uninitialize_crt(param_1,0,param_3,param_4,uVar2);
    FUN_1805f5af8();
  }
  return uVar1;
}



