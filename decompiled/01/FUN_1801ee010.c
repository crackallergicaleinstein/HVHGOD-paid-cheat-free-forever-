// FUN_1801ee010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ee010 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1801ee010(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  plVar6 = (longlong *)FUN_180113860(&DAT_180bb9388);
  lVar5 = DAT_180bb9380;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar4 = (byte)DAT_180bb9388;
  DAT_180bb9388 = (longlong)plVar6;
  if ((bVar4 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  if (((DAT_1808da689 == '\0') && (DAT_180bb93af == '\0')) &&
     ((*(char *)(lVar5 + 0xc0) != '\0' || (*(longlong *)(lVar5 + 0xb0) != 0)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (plVar6 == (longlong *)0x0) {
    return uVar7;
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar5 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return uVar7;
}



