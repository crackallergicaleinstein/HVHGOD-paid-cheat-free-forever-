// FUN_180661fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180661fc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180661fc0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_18015a450(&DAT_1808da7d8);
  FUN_18015a520(&DAT_1808da7e8);
  lVar3 = DAT_1808da7d0;
  if (DAT_1808da7e0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18060ab3c();
  }
  if (DAT_1808da7d0 != 0) {
    LOCK();
    piVar1 = (int *)(DAT_1808da7d0 + 8);
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



