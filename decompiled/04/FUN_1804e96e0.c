// FUN_1804e96e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e96e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1804e96e0(longlong param_1,undefined2 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x38) == 0) ||
     (uVar4 = FUN_1804b13e0((int *)(param_1 + 0x38),param_2,param_2), -1 < (int)uVar4)) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar8 + *(int *)(param_1 + 0x20);
    while( true ) {
      if (plVar8 == plVar1) {
        return 0;
      }
      lVar6 = *(longlong *)(*plVar8 + 0x88);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar2 + 0xa8);
      }
      iVar3 = (**(code **)(lVar6 + 0x28))(lVar2,*plVar8,param_2);
      if (iVar3 != 0) break;
      plVar8 = plVar8 + 1;
    }
    return 1;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (uVar4 >> 0x10 & 0xff) * 8);
  lVar5 = *(longlong *)(lVar6 + 0x88);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar2 + 0xa8);
  }
  if (*(code **)(lVar5 + 0x30) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(lVar5 + 0x30))(lVar2,lVar6,uVar4 & 0xffff);
  return uVar7;
}



