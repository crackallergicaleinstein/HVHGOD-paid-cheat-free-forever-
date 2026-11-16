// FUN_180588920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180588920 */

ulonglong FUN_180588920(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint local_res8 [2];
  undefined8 local_res18 [2];
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x408) == 0) {
    uVar2 = FUN_180588160(param_1,0);
    local_res8[0] = (uint)uVar2;
    if (local_res8[0] != 0) {
      return uVar2;
    }
  }
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x408) + 0x18);
  if (*(ushort *)(param_1 + 0xe) < param_2) {
    return 6;
  }
  if (param_2 == 0) {
    FUN_18057abd0(uVar3,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar3 = FUN_18057ade0(uVar3,*(undefined8 *)(param_1 + 0x428),local_res8);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar5 = (ulonglong)param_2 * 0x10 + *(longlong *)(puVar1 + 6);
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x158))
                      (param_1,*(undefined2 *)(lVar5 + -8),local_res18);
    local_res8[0] = (uint)uVar2;
    if (local_res8[0] != 0) {
      return uVar2;
    }
    FUN_18057abd0(uVar3,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = local_res18[0];
    uVar3 = *(undefined8 *)(lVar5 + -0x10);
    uVar4 = *puVar1;
  }
  uVar2 = FUN_180587f30(param_1,uVar4,uVar3);
  if ((int)uVar2 + 2U < 2) {
    uVar2 = 0;
  }
  return uVar2;
}



