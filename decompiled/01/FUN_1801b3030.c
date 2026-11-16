// FUN_1801b3030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b3030 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b3030(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = plVar2;
  while (plVar4 != plVar3) {
    plVar8 = (longlong *)plVar4[2];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar4 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar6 = (longlong *)plVar4[1];
      plVar8 = plVar4;
      while ((plVar4 = plVar6, cVar1 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar6 = (longlong *)plVar4[1];
        plVar8 = plVar4;
      }
    }
  }
  if ((plVar2 == *(longlong **)*param_1) && (*(char *)((longlong)plVar3 + 0x19) != '\0')) {
    FUN_1801ab4e0(param_1);
  }
  else {
    while (plVar2 != plVar3) {
      plVar4 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar6 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar8 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        while (cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
      }
      else {
        plVar4 = (longlong *)plVar2[1];
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        plVar6 = plVar2;
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar6 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (longlong *)plVar8[1];
          plVar6 = plVar8;
        }
        plVar4 = (longlong *)plVar2[1];
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        plVar6 = plVar2;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar6 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar6 = plVar5;
        }
      }
      uVar7 = FUN_1801511e0(param_1,plVar2);
      FUN_1804547d0(uVar7,0x28);
      plVar2 = plVar8;
    }
  }
}



