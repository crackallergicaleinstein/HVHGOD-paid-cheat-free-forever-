// FUN_1805a7970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a7970 */

ulonglong FUN_1805a7970(uint *param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_18 [4];
  
  uVar7 = FUN_1805788b0(param_2,param_4);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_180578720(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  if (uVar5 <= param_3) {
    return 6;
  }
  uVar7 = FUN_180578910(param_2,param_3 * 5);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar5 = FUN_180578720(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  uVar6 = FUN_180578680(param_2,local_18);
  if (local_18[0] != 0) {
    return (ulonglong)local_18[0];
  }
  *param_1 = (uint)uVar5;
  param_1[1] = uVar6;
  uVar7 = FUN_1805788b0(param_2);
  local_18[0] = (uint)uVar7;
  if (local_18[0] != 0) {
    return uVar7;
  }
  uVar7 = FUN_180577bf0(param_2,(uint)uVar5);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  pbVar1 = puVar4 + uVar5;
  if (puVar4 + 0xd <= pbVar1) {
    param_1[2] = (int)((uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]) << 8) >> 8;
    param_1[3] = (int)((uint)CONCAT21(CONCAT11(puVar4[3],puVar4[4]),puVar4[5]) << 8) >> 8;
    param_1[4] = (int)((uint)CONCAT21(CONCAT11(puVar4[6],puVar4[7]),puVar4[8]) << 8) >> 8;
    pbVar9 = puVar4 + 0xd;
    param_1[5] = (int)((uint)CONCAT21(CONCAT11(puVar4[9],puVar4[10]),puVar4[0xb]) << 8) >> 8;
    bVar2 = puVar4[0xc];
    uVar7 = 0;
    if ((bVar2 & 4) != 0) {
      uVar6 = (uint)((bVar2 & 8) != 0);
      uVar7 = (ulonglong)(uVar6 + 1);
      if ((bVar2 & 3) == 0) {
        uVar7 = (ulonglong)(uVar6 + 4);
      }
    }
    if ((bVar2 & 0x10) != 0) {
      iVar10 = (int)uVar7;
      uVar7 = (ulonglong)(iVar10 + 1);
      if ((bVar2 & 0x20) != 0) {
        uVar7 = (ulonglong)(iVar10 + 2);
      }
    }
    if (pbVar9 + uVar7 <= pbVar1) {
      lVar12 = 2;
      if ((bVar2 & 4) != 0) {
        if ((bVar2 & 8) == 0) {
          uVar6 = (uint)*pbVar9;
          lVar11 = 1;
        }
        else {
          uVar6 = (int)(short)((ushort)*pbVar9 << 8) | (uint)(byte)puVar4[0xe];
          lVar11 = 2;
        }
        pbVar8 = pbVar9 + lVar11;
        param_1[7] = uVar6;
        pbVar9 = pbVar8;
        if ((bVar2 & 3) == 0) {
          pbVar9 = pbVar8 + 3;
          param_1[9] = (int)((uint)CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]) << 8) >> 8;
        }
      }
      if ((bVar2 & 0x10) != 0) {
        if ((bVar2 & 0x20) == 0) {
          uVar6 = (uint)*pbVar9;
          lVar12 = 1;
        }
        else {
          uVar6 = (int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1];
        }
        param_1[8] = uVar6;
        pbVar9 = pbVar9 + lVar12;
      }
      pbVar8 = pbVar9;
      if ((bVar2 & 0x40) != 0) {
        pbVar8 = pbVar9 + 1;
        if (pbVar1 < pbVar8) goto LAB_1805a7c46;
        uVar6 = (uint)*pbVar9;
        if (*pbVar9 != 0) {
          do {
            if ((pbVar1 < pbVar8 + 2) || (pbVar8 = pbVar8 + 2 + *pbVar8, pbVar1 < pbVar8))
            goto LAB_1805a7c46;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      local_18[0] = 0;
      if (pbVar8 + 5 <= pbVar1) {
        bVar2 = pbVar8[1];
        bVar3 = *pbVar8;
        param_1[10] = (uint)CONCAT11(bVar3,bVar2);
        param_1[0xb] = (uint)CONCAT21(CONCAT11(pbVar8[2],pbVar8[3]),pbVar8[4]);
        if (param_5 == '\0') goto LAB_1805a7c4e;
        if (pbVar8 + 6 <= pbVar1) {
          param_1[10] = (uint)CONCAT12(pbVar8[5],CONCAT11(bVar3,bVar2));
          goto LAB_1805a7c4e;
        }
      }
    }
  }
LAB_1805a7c46:
  local_18[0] = 8;
LAB_1805a7c4e:
  FUN_180577d30(param_2);
  return (ulonglong)local_18[0];
}



