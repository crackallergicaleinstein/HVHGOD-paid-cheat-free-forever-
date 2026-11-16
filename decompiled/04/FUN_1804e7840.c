// FUN_1804e7840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e7840 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804e7840(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_1804e75f0(&local_res8,param_1);
  FUN_1804e7bc0(param_1);
  FUN_1804e6dd0(param_1,local_res8,local_resc);
  FUN_1804e7950(param_1);
  lVar4 = *(longlong *)(param_1 + 0x80);
  lVar6 = (longlong)*(int *)(param_1 + 0x78) * 0xa0 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0xa0) {
    lVar3 = *(longlong *)(lVar4 + 0x88);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
    }
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))(param_1,lVar4);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar7 + *(int *)(param_1 + 0x68);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar4 = *plVar7;
    puVar5 = *(undefined8 **)(lVar4 + 0x28);
    puVar2 = puVar5 + *(int *)(lVar4 + 0x20);
    for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      FUN_1804e5b10(param_1,lVar4,*puVar5);
    }
  }
  return;
}



