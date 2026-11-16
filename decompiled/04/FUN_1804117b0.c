// FUN_1804117b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804117b0 */

undefined1 FUN_1804117b0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_38;
  undefined1 local_30 [16];
  
  local_30 = (undefined1  [16])0x0;
  plVar5 = (longlong *)FUN_180416b80();
  lVar1 = *plVar5;
  local_30._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_18017bf40(&local_38);
    plVar5 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar5 = *plVar5 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    uVar8 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 7;
  }
  local_30._8_4_ = uVar8;
  uVar2 = *(undefined8 *)param_1[2];
  uVar3 = *(undefined8 *)param_1[1];
  lVar7 = *(longlong *)*param_1;
  uVar4 = 0;
  if (lVar7 != 0) {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    uVar4 = FUN_1804160e0(lVar7,0x2b,uVar3,uVar2);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
  }
  if (lVar1 != 0) {
    FUN_18017bf40(&local_38);
    plVar5 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar5 = *plVar5 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    *(undefined4 *)(lVar1 + 0x20) = uVar8;
  }
  return uVar4;
}



