// FUN_1805d79b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d79b0 */

ulonglong FUN_1805d79b0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_res8 [2];
  int local_res18 [4];
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0x28;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = FUN_1805d80c0(param_2);
  local_res8[0] = (uint)uVar6;
  if (local_res8[0] != 0) {
    return uVar6;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar2;
  uVar7 = FUN_18057abe0(uVar2,0x2088,local_res8);
  if (local_res8[0] == 0) {
    local_res8[0] = FUN_1805d8400(uVar7,param_1,param_2);
    if (local_res8[0] != 0) {
      FUN_18057abd0(uVar2,uVar7);
      return (ulonglong)local_res8[0];
    }
    param_1[2] = uVar7;
    local_res8[0] = 0;
  }
  uVar4 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  iVar3 = FUN_1805788b0(param_2,*(int *)(param_2 + 8) + -4);
  if (iVar3 == 0) {
    uVar4 = FUN_1805785e0(param_2,local_res18);
    if (local_res18[0] == 0) {
      FUN_1805788b0(param_2,uVar1);
      if ((uVar4 != 0) && (uVar4 < 0xa000)) {
        uVar8 = FUN_18057abe0(uVar2,uVar4,local_res8);
        if (local_res8[0] == 0) {
          uVar5 = FUN_1805d8590(uVar7,0,uVar8,uVar4);
          if (uVar5 == uVar4) {
            FUN_1805d8230();
            FUN_18057abd0(uVar2,uVar7);
            param_1[5] = FUN_1805d8810;
            param_1[2] = 0;
            *(uint *)(param_1 + 1) = uVar4;
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            *param_1 = uVar8;
            param_1[4] = 0;
            return (ulonglong)local_res8[0];
          }
          FUN_1805d8590(uVar7,0,0,0);
          FUN_18057abd0(uVar2,uVar8);
        }
        uVar6 = 0;
        goto LAB_1805d7b87;
      }
      goto LAB_1805d7b7a;
    }
    FUN_1805788b0(param_2,uVar1);
LAB_1805d7b7e:
    uVar4 = 0x7fffffff;
  }
  else {
LAB_1805d7b7a:
    if (uVar4 == 0) goto LAB_1805d7b7e;
  }
  uVar6 = (ulonglong)local_res8[0];
LAB_1805d7b87:
  *(uint *)(param_1 + 1) = uVar4;
  param_1[4] = FUN_1805d8880;
  param_1[5] = FUN_1805d8810;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = 0;
  return uVar6;
}



