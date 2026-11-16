// FUN_1805a0cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a0cb0 */

ulonglong FUN_1805a0cb0(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  uint local_res20 [2];
  byte local_28 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = FUN_1805780f0(param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (param_4 == '\0') {
    uVar3 = FUN_180578720(param_2,local_res20);
    uVar5 = (uint)uVar3;
    if (local_res20[0] != 0) goto LAB_1805a0e27;
    uVar4 = 3;
  }
  else {
    uVar5 = FUN_180578540();
    if (local_res20[0] != 0) goto LAB_1805a0e27;
    uVar4 = 5;
  }
  uVar8 = (ulonglong)local_res20[0];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  if (uVar5 == 0) {
LAB_1805a0e23:
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
  else {
    bVar2 = FUN_180578210(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_1805a0e27;
    if ((byte)(bVar2 - 1) < 4) {
      iVar7 = (uVar5 + 1) * (uint)bVar2;
      *(uint *)(param_1 + 2) = uVar5;
      *(byte *)((longlong)param_1 + 0x14) = bVar2;
      *(int *)(param_1 + 3) = *(int *)((longlong)param_1 + 0xc) + iVar7 + (int)param_1[1];
      local_res20[0] = FUN_180578910(param_2,iVar7 - (uint)bVar2);
      if (local_res20[0] != 0) goto LAB_1805a0e27;
      uVar5 = 0;
      local_res20[0] = FUN_180578100(*param_1,local_28,*(undefined1 *)((longlong)param_1 + 0x14));
      if ((local_res20[0] == 0) && (*(byte *)((longlong)param_1 + 0x14) != 0)) {
        pbVar6 = local_28;
        uVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0x14);
        do {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar5 = uVar5 << 8 | (uint)bVar2;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      else if (local_res20[0] != 0) goto LAB_1805a0e27;
      if (uVar5 != 0) {
        *(uint *)((longlong)param_1 + 0x1c) = uVar5 - 1;
        if (param_3 == '\0') {
          uVar8 = FUN_180578910(param_2);
        }
        else {
          uVar8 = FUN_180577d80(param_2,uVar5 - 1,param_1 + 5);
        }
        local_res20[0] = (uint)uVar8;
        goto LAB_1805a0e23;
      }
    }
    local_res20[0] = 8;
  }
LAB_1805a0e27:
  FUN_18057abd0(uVar1,param_1[4]);
  param_1[4] = 0;
  return (ulonglong)local_res20[0];
}



