// FUN_180151780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180151780 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180151780(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  plVar6 = plVar2;
  while (plVar6 != plVar3) {
    plVar4 = (longlong *)plVar6[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar6 = plVar4;
      plVar4 = (longlong *)*plVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar6 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar1 = *(char *)(plVar6[1] + 0x19);
      plVar5 = (longlong *)plVar6[1];
      plVar4 = plVar6;
      while ((plVar6 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar6[2]))) {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar5 = (longlong *)plVar6[1];
        plVar4 = plVar6;
      }
    }
  }
  if ((plVar2 == *(longlong **)*param_1) && (*(char *)((longlong)plVar3 + 0x19) != '\0')) {
    FUN_1801516e0(param_1);
  }
  else {
    while (plVar2 != plVar3) {
      plVar6 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        plVar4 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar6 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar5 = (longlong *)plVar2[1];
        plVar4 = plVar2;
        while ((plVar6 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar4 = plVar6;
        }
      }
      FUN_180140da0(param_1,plVar2);
      plVar2 = plVar6;
    }
  }
}



