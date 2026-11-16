// FUN_180591f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180591f80 */

ulonglong FUN_180591f80(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  
  lVar8 = *(longlong *)(param_1 + 0xa0);
  lVar1 = *(longlong *)(param_1 + 0x408);
  uVar2 = *(undefined8 *)(lVar8 + 0x30);
  if (param_2 == '\0') {
    *(undefined1 *)(lVar1 + 0x40) = 1;
    uVar9 = 0x48564152;
  }
  else {
    *(undefined1 *)(lVar1 + 0x50) = 1;
    uVar9 = 0x56564152;
  }
  uVar7 = (**(code **)(param_1 + 0x2a0))(param_1,uVar9,lVar8,local_res8);
  local_res10[0] = (uint)uVar7;
  if (local_res10[0] != 0) {
    return uVar7;
  }
  iVar4 = FUN_1805780f0(lVar8);
  sVar3 = FUN_180578720(lVar8,local_res10);
  if (local_res10[0] != 0) {
    return (ulonglong)local_res10[0];
  }
  uVar7 = FUN_180578910(lVar8,2);
  local_res10[0] = (uint)uVar7;
  if (local_res10[0] == 0) {
    if (sVar3 != 1) {
      return 8;
    }
    iVar5 = FUN_180578540(lVar8,local_res10);
    if (local_res10[0] != 0) {
      return (ulonglong)local_res10[0];
    }
    iVar6 = FUN_180578540(lVar8,local_res10);
    if (local_res10[0] != 0) {
      return (ulonglong)local_res10[0];
    }
    lVar8 = FUN_18057aad0(uVar2,0x38,local_res10);
    if (param_2 == '\0') {
      *(longlong *)(lVar1 + 0x48) = lVar8;
    }
    else {
      *(longlong *)(lVar1 + 0x58) = lVar8;
    }
    if (local_res10[0] != 0) {
      return (ulonglong)local_res10[0];
    }
    uVar7 = FUN_180588c10(param_1,iVar5 + iVar4,lVar8);
    local_res10[0] = (uint)uVar7;
    if (local_res10[0] == 0) {
      if (iVar6 != 0) {
        uVar7 = FUN_180589180(param_1,iVar6 + iVar4,lVar8 + 0x20,lVar8,local_res8[0]);
        local_res10[0] = (uint)uVar7;
        if (local_res10[0] != 0) goto LAB_1805920ef;
      }
      local_res10[0] = 0;
      goto LAB_1805920f3;
    }
  }
LAB_1805920ef:
  if (local_res10[0] != 0) {
    return uVar7;
  }
LAB_1805920f3:
  if (param_2 == '\0') {
    *(undefined1 *)(lVar1 + 0x41) = 1;
    *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) | 2;
  }
  else {
    *(undefined1 *)(lVar1 + 0x51) = 1;
    *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) | 0x10;
  }
  return (ulonglong)local_res10[0];
}



