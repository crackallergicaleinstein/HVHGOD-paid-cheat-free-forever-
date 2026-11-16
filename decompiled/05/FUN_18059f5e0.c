// FUN_18059f5e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059f5e0 */

ulonglong FUN_18059f5e0(uint *param_1,uint param_2,longlong param_3,int param_4,uint param_5,
                       char param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_res18 [2];
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  uVar9 = (ulonglong)param_2;
  local_res18[0] = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 0) {
      if (param_2 < 0xe6) {
        uVar8 = FUN_18057ac40(uVar1,2,0,uVar9,0,local_res18);
        *(undefined8 *)(param_1 + 2) = uVar8;
        if (local_res18[0] != 0) goto LAB_18059f8b6;
        puVar11 = &DAT_180671660;
        goto LAB_18059f883;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        uVar8 = FUN_18057ac40(uVar1,2,0,uVar9,0,local_res18);
        *(undefined8 *)(param_1 + 2) = uVar8;
        if (local_res18[0] != 0) goto LAB_18059f8b6;
        puVar11 = &DAT_180671830;
        goto LAB_18059f883;
      }
    }
    else if ((param_5 == 2) && (param_2 < 0x58)) {
      uVar8 = FUN_18057ac40(uVar1,2,0,uVar9,0,local_res18);
      *(undefined8 *)(param_1 + 2) = uVar8;
      if (local_res18[0] != 0) goto LAB_18059f8b6;
      puVar11 = &DAT_180671980;
LAB_18059f883:
      FUN_18063aed0(uVar8,puVar11,uVar9 * 2);
      goto LAB_18059f891;
    }
LAB_18059f845:
    local_res18[0] = 3;
  }
  else {
    param_1[1] = param_4 + param_5;
    local_res18[0] = FUN_1805788b0(param_3);
    if (local_res18[0] != 0) goto LAB_18059f8b6;
    bVar3 = FUN_180578210(param_3,local_res18);
    *param_1 = (uint)bVar3;
    if (local_res18[0] != 0) goto LAB_18059f8b6;
    lVar13 = 2;
    puVar7 = (undefined2 *)FUN_18057ac40(uVar1,2,0,param_2,0,local_res18);
    *(undefined2 **)(param_1 + 2) = puVar7;
    if (local_res18[0] != 0) goto LAB_18059f8b6;
    *puVar7 = 0;
    uVar12 = *param_1;
    if (uVar12 == 0) {
      if (param_2 != 0) {
        local_res18[0] = FUN_180577bf0(param_3,param_2 * 2 + -2);
        if (local_res18[0] != 0) goto LAB_18059f8b6;
        if (1 < param_2) {
          uVar14 = (ulonglong)(param_2 - 1);
          do {
            lVar2 = *(longlong *)(param_1 + 2);
            uVar6 = FUN_180577ed0(param_3);
            *(undefined2 *)(lVar2 + lVar13) = uVar6;
            lVar13 = lVar13 + 2;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        FUN_180577d30(param_3);
      }
    }
    else {
      if ((uVar12 != 1) && (uVar12 != 2)) goto LAB_18059f845;
      uVar14 = 1;
      if (1 < param_2) {
        while (uVar4 = FUN_180578720(param_3,local_res18), local_res18[0] == 0) {
          if (*param_1 == 2) {
            uVar5 = FUN_180578720();
            uVar12 = (uint)uVar5;
          }
          else {
            bVar3 = FUN_180578210(param_3,local_res18);
            uVar12 = (uint)bVar3;
          }
          if (local_res18[0] != 0) break;
          uVar10 = 0;
          uVar15 = 0xffff - uVar4;
          if ((uint)uVar4 < 0xffff - uVar12 || (uint)uVar4 == 0xffff - uVar12) {
            uVar15 = uVar12;
          }
          lVar13 = uVar14 * 2;
          while (uVar10 <= uVar15) {
            uVar10 = uVar10 + 1;
            uVar12 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
            *(ushort *)(lVar13 + *(longlong *)(param_1 + 2)) = uVar4;
            lVar13 = lVar13 + 2;
            uVar4 = uVar4 + 1;
            if (param_2 <= uVar12) goto LAB_18059f891;
          }
        }
        goto LAB_18059f8b6;
      }
    }
LAB_18059f891:
    if (param_6 == '\0') {
      uVar9 = (ulonglong)local_res18[0];
    }
    else {
      uVar9 = FUN_18059f470(param_1,uVar9,uVar1);
      local_res18[0] = (uint)uVar9;
    }
    if ((int)uVar9 == 0) {
      return uVar9;
    }
  }
LAB_18059f8b6:
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_18057abd0(uVar1,*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  return (ulonglong)local_res18[0];
}



