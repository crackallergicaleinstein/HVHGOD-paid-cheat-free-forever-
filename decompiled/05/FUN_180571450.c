// FUN_180571450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180571450 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180571450(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = DAT_180c63000;
  DAT_180c62ff8 = 0;
  DAT_180c63000 = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
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
  FUN_180520a30(1);
  return;
}



