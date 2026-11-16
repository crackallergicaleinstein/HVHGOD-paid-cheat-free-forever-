// FUN_1804e2ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2ad0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804e2ad0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  if (*(undefined8 **)(param_1 + 0xa8) != param_2) {
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    puVar1 = puVar6 + *(int *)(param_1 + 0x68);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      FUN_1804e5a80(param_1,*puVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (((lVar5 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
       (pcVar3 = *(code **)(*(longlong *)(param_1 + 0xa8) + 0x10), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1);
      lVar5 = *(longlong *)(param_1 + 0xa0);
    }
    *(undefined8 **)(param_1 + 0xa8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      puVar4 = &DAT_1808595bc;
    }
    else {
      puVar4 = (undefined *)*param_2;
    }
    *(undefined **)(param_1 + 0xb0) = puVar4;
    if (((lVar5 != 0) && (param_2 != (undefined8 *)0x0)) && ((code *)param_2[1] != (code *)0x0)) {
      (*(code *)param_2[1])(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    puVar1 = puVar6 + *(int *)(param_1 + 0x68);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      FUN_1804e59e0(param_1,*puVar6);
    }
    plVar7 = *(longlong **)(param_1 + 0x70);
    plVar2 = plVar7 + *(int *)(param_1 + 0x68);
    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      lVar5 = *plVar7;
      puVar6 = *(undefined8 **)(lVar5 + 0x28);
      puVar1 = puVar6 + *(int *)(lVar5 + 0x20);
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        FUN_1804e5b10(param_1,lVar5,*puVar6);
      }
    }
  }
  return;
}



