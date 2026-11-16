// FUN_1805f61a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f61a8 */

ulonglong FUN_1805f61a8(undefined1 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1805f6310(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_1805f61f8(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = __scrt_dllmain_crt_thread_attach();
  }
  else {
    if (param_2 != 3) {
      return 1;
    }
    bVar1 = FUN_1805f5ab0();
  }
  return (ulonglong)bVar1;
}



