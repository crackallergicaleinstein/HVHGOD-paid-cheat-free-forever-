// FUN_1805f61f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f61f8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1805f61f8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  cVar2 = FUN_1805f5b0c(0);
  if (cVar2 != '\0') {
    uVar3 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180bacd88 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f66cc(7);
    }
    DAT_180bacd88 = 1;
    cVar2 = FUN_1805f5a70();
    if (cVar2 != '\0') {
      FUN_1805f6858();
      FUN_1805f6818();
      FUN_1805f6834();
      iVar4 = FUN_18061b024(&DAT_1806661e8,&DAT_180666220);
      if ((iVar4 == 0) && (cVar2 = __scrt_dllmain_after_initialize_c(), cVar2 != '\0')) {
        FUN_18061afec(&DAT_180665918,&DAT_1806661e0);
        DAT_180bacd88 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock(uVar3);
    if (!bVar1) {
      plVar5 = (longlong *)FUN_1805f6850();
      if ((*plVar5 != 0) && (cVar2 = FUN_1805f5bd4(plVar5), cVar2 != '\0')) {
        (*(code *)*plVar5)(param_1,2,param_2,_guard_dispatch_icall);
      }
      DAT_180bad340 = DAT_180bad340 + 1;
      return 1;
    }
  }
  return 0;
}



