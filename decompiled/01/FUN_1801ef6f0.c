// FUN_1801ef6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ef6f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801ef6f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  size_t _Size;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *_Buf2;
  longlong lVar9;
  undefined8 uVar10;
  
  plVar8 = (longlong *)FUN_180113860(&DAT_180bb9388);
  lVar5 = DAT_180bb9380;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar4 = (byte)DAT_180bb9388;
  DAT_180bb9388 = (longlong)plVar8;
  if ((bVar4 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  lVar3 = *(longlong *)(lVar5 + 0x40);
  for (lVar9 = *(longlong *)(lVar5 + 0x38); lVar9 != lVar3; lVar9 = lVar9 + 0xd8) {
    _Buf2 = (undefined8 *)(lVar9 + 0x40);
    if (0xf < *(ulonglong *)(lVar9 + 0x58)) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    _Size = param_1[1];
    if ((_Size == *(size_t *)(lVar9 + 0x50)) &&
       (((_Size == 0 || (iVar7 = memcmp((void *)*param_1,_Buf2,_Size), iVar7 == 0)) &&
        (cVar6 = FUN_1801ef840(lVar9), cVar6 != '\0')))) break;
  }
  if (((lVar9 == *(longlong *)(lVar5 + 0x40)) || (cVar6 = FUN_1801ef550(lVar9), cVar6 == '\0')) ||
     (cVar6 = FUN_1801efc70(lVar9), cVar6 == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  return uVar10;
}



