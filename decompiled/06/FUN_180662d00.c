// FUN_180662d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662d00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180662d00(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = DAT_180bbf078;
  if (DAT_180bbf078 != 0) {
    LOCK();
    piVar1 = (int *)(DAT_180bbf078 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)lVar3)(lVar3);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)lVar3 + 8))(lVar3);
      }
    }
  }
  return;
}



