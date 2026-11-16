// FUN_1805ccbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ccbd0 */

undefined8 FUN_1805ccbd0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_res8 [2];
  
  iVar5 = 0;
  pbVar1 = param_2 + 7;
  iVar6 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  for (iVar7 = iVar6; iVar7 != 0; iVar7 = iVar7 + -1) {
    bVar2 = *pbVar1;
    pbVar1 = pbVar1 + 4;
    iVar5 = iVar5 + 1 + (uint)bVar2;
  }
  uVar3 = iVar5 + 1;
  local_res8[0] = 0;
  if (*(uint *)(param_1 + 0x2c) < uVar3) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar4 = FUN_18057ac40(param_3,4,*(uint *)(param_1 + 0x2c),uVar3,*(undefined8 *)(param_1 + 0x30),
                          local_res8);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (local_res8[0] != 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  puVar8 = *(uint **)(param_1 + 0x30);
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    uVar3 = (uint)CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]);
    iVar7 = (byte)param_2[7] + 1;
    do {
      *puVar8 = uVar3;
      uVar3 = uVar3 + 1;
      puVar8 = puVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    param_2 = param_2 + 4;
  }
  *puVar8 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



