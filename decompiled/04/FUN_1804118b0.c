// FUN_1804118b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804118b0 */

undefined1 FUN_1804118b0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong local_38;
  undefined1 local_30 [16];
  
  local_30 = (undefined1  [16])0x0;
  plVar6 = (longlong *)FUN_180416b80();
  lVar1 = *plVar6;
  local_30._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    FUN_18017bf40(&local_38);
    plVar6 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar6 = *plVar6 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    uVar9 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 8;
  }
  local_30._8_4_ = uVar9;
  uVar2 = *(undefined8 *)param_1[3];
  uVar3 = *(undefined8 *)param_1[2];
  uVar4 = *(undefined8 *)param_1[1];
  lVar8 = *(longlong *)*param_1;
  uVar5 = 0;
  if (lVar8 != 0) {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    uVar5 = FUN_180416120(lVar8,uVar4,uVar3,uVar2);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
  }
  if (lVar1 != 0) {
    FUN_18017bf40(&local_38);
    plVar6 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar6 = *plVar6 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    *(undefined4 *)(lVar1 + 0x20) = uVar9;
  }
  return uVar5;
}



