// FUN_1804111e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804111e0 */

void FUN_1804111e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_38;
  undefined1 local_30 [16];
  
  local_30 = (undefined1  [16])0x0;
  plVar3 = (longlong *)FUN_180416b80();
  lVar1 = *plVar3;
  local_30._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_18017bf40(&local_38);
    plVar3 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar3 = *plVar3 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    uVar6 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 10;
  }
  local_30._8_4_ = uVar6;
  if (*(char *)*param_1 != '\0') {
    uVar2 = param_1[2];
    lVar5 = *(longlong *)param_1[1];
    if (lVar5 != 0) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      FUN_1801ad810(lVar5,uVar2);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
    }
  }
  if ((*(char *)param_1[3] != '\0') && (lVar5 = *(longlong *)param_1[4], lVar5 != 0)) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_180416070(lVar5);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  if (lVar1 != 0) {
    FUN_18017bf40(&local_38);
    plVar3 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar3 = *plVar3 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    *(undefined4 *)(lVar1 + 0x20) = uVar6;
  }
  return;
}



