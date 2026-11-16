// FUN_1805dc120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dc120 */

void FUN_1805dc120(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x75f0) != 0) {
    iVar1 = *(int *)(param_1 + 0x7504);
    plVar2 = *(longlong **)(param_1 + 0x7608);
    local_res8[0] = iVar1;
    uVar5 = FUN_1805e3eb0(local_res8,4,0);
    lVar3 = plVar2[1];
    uVar5 = lVar3 - 1U & uVar5;
    iVar4 = FUN_1805dd6e0(*(undefined8 *)(*plVar2 + uVar5 * 8));
    while ((iVar4 != iVar1 && (iVar4 != 0))) {
      uVar5 = (uVar5 & lVar3 - 1U) + 1;
      iVar4 = FUN_1805dd6e0(*(undefined8 *)(*plVar2 + uVar5 * 8));
    }
    lVar3 = *(longlong *)(*plVar2 + uVar5 * 8);
    if (lVar3 != 0) {
      FUN_1805dd640(*(undefined8 *)(param_1 + 0x75e8));
      *(undefined4 *)(param_1 + 0x75f8) = *(undefined4 *)(param_1 + 0x7504);
      *(undefined8 *)(param_1 + 0x75e8) = 0;
      *(longlong *)(param_1 + 0x75f0) = lVar3;
      *(undefined4 *)(param_1 + 0x7600) = 0xffffffff;
    }
  }
  return;
}



