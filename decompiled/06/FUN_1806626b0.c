// FUN_1806626b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806626b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1806626b0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = DAT_180bb9388;
  if (DAT_180bb9388 != 0) {
    LOCK();
    piVar1 = (int *)(DAT_180bb9388 + 8);
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



