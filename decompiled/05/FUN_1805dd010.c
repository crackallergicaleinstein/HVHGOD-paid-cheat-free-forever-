// FUN_1805dd010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dd010 */

ulonglong FUN_1805dd010(ulonglong *param_1,uint *param_2,ulonglong param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  uint local_res20 [2];
  
  uVar7 = 1;
  if (param_4 == 0) {
    uVar7 = 5;
  }
  if ((param_3 != 0) && (param_2 == (uint *)0x0)) {
    return 0xffffffffffffffff;
  }
  if (param_3 < uVar7) {
    if ((param_3 != 0) && (param_4 != 1)) {
      local_res20[0] = 0xfd2fb528;
      if (4 < param_3) {
        param_3 = 4;
      }
      FUN_18063aed0(local_res20,param_2,param_3);
      if (local_res20[0] != 0xfd2fb528) {
        local_res20[0] = 0x184d2a50;
        FUN_18063aed0(local_res20,param_2,param_3);
        if ((local_res20[0] & 0xfffffff0) != 0x184d2a50) {
          return 0xfffffffffffffff6;
        }
      }
    }
    return uVar7;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((param_4 != 1) && (*param_2 != 0xfd2fb528)) {
    if ((*param_2 & 0xfffffff0) != 0x184d2a50) {
      return 0xfffffffffffffff6;
    }
    if (param_3 < 8) {
      return 8;
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    uVar12 = *param_2;
    *(undefined4 *)(param_1 + 3) = 8;
    *(uint *)((longlong)param_1 + 0x1c) = uVar12 + 0xe7b2d5b0;
    *param_1 = (ulonglong)param_2[1];
    return 0;
  }
  bVar3 = *(byte *)((uVar7 - 1) + (longlong)param_2);
  uVar8 = 0;
  if (((bVar3 & 0x20) == 0) || (lVar9 = 1, bVar3 >> 6 != 0)) {
    lVar9 = 0;
  }
  uVar6 = lVar9 + (ulonglong)(~(uint)bVar3 >> 5 & 1) +
                  *(longlong *)(&DAT_1806869d8 + (ulonglong)(uint)(bVar3 >> 6) * 8) +
                  *(longlong *)(&DAT_1806869f8 + (ulonglong)(bVar3 & 3) * 8) + uVar7;
  if (param_3 < uVar6) {
    return uVar6;
  }
  uVar10 = 0xffffffffffffffff;
  uVar12 = 0;
  *(int *)(param_1 + 3) = (int)uVar6;
  bVar3 = *(byte *)((uVar7 - 1) + (longlong)param_2);
  bVar4 = bVar3 >> 6;
  bVar11 = bVar3 & 3;
  if ((bVar3 & 8) != 0) {
    return 0xfffffffffffffff2;
  }
  if ((bVar3 & 0x20) == 0) {
    pbVar2 = (byte *)(uVar7 + (longlong)param_2);
    uVar7 = uVar7 + 1;
    bVar1 = (*pbVar2 >> 3) + 10;
    if (0x1f < bVar1) {
      return 0xfffffffffffffff0;
    }
    uVar8 = 1L << bVar1;
    uVar8 = (ulonglong)(*pbVar2 & 7) * (uVar8 >> 3) + uVar8;
  }
  if (bVar11 == 1) {
    uVar12 = (uint)*(byte *)(uVar7 + (longlong)param_2);
    uVar7 = uVar7 + 1;
  }
  else if (bVar11 == 2) {
    uVar12 = (uint)*(ushort *)(uVar7 + (longlong)param_2);
    uVar7 = uVar7 + 2;
  }
  else if (bVar11 == 3) {
    uVar12 = *(uint *)(uVar7 + (longlong)param_2);
    uVar7 = uVar7 + 4;
  }
  if (bVar4 != 0) {
    if (bVar4 == 1) {
      uVar10 = (ulonglong)*(ushort *)(uVar7 + (longlong)param_2) + 0x100;
      goto LAB_1805dd280;
    }
    if (bVar4 == 2) {
      uVar10 = (ulonglong)*(uint *)(uVar7 + (longlong)param_2);
      goto LAB_1805dd280;
    }
    if (bVar4 == 3) {
      uVar10 = *(ulonglong *)(uVar7 + (longlong)param_2);
      goto LAB_1805dd280;
    }
  }
  if ((bVar3 & 0x20) != 0) {
    uVar10 = (ulonglong)*(byte *)(uVar7 + (longlong)param_2);
  }
LAB_1805dd280:
  *param_1 = uVar10;
  *(uint *)((longlong)param_1 + 0x1c) = uVar12;
  *(uint *)(param_1 + 4) = bVar3 >> 2 & 1;
  if ((bVar3 & 0x20) == 0) {
    uVar10 = uVar8;
  }
  param_1[1] = uVar10;
  uVar5 = 0x20000;
  if (uVar10 < 0x20000) {
    uVar5 = (int)uVar10;
  }
  *(undefined4 *)(param_1 + 2) = uVar5;
  return 0;
}



