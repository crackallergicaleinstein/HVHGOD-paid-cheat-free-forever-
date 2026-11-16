// FUN_1805dbbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dbbc0 */

int FUN_1805dbbc0(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 6;
  }
  uVar2 = *param_1;
  switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  default:
    local_res8[0] = 6;
    goto LAB_1805dbcf9;
  }
  iVar5 = param_2[1];
  if (param_3[2] == 0) {
    if (param_2[2] < 0) goto LAB_1805dbc4b;
LAB_1805dbcac:
    bVar1 = false;
  }
  else {
    if (-1 < param_3[2]) goto LAB_1805dbcac;
LAB_1805dbc4b:
    bVar1 = true;
  }
  FUN_18057abd0(uVar2,*(undefined8 *)(param_3 + 4));
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  *(undefined1 *)((longlong)param_3 + 0x1a) = 2;
  iVar11 = *param_2;
  *param_3 = iVar11;
  param_3[1] = param_2[1];
  if ((param_4 != 0) && (iVar5 % param_4 != 0)) {
    iVar5 = iVar5 - iVar5 % param_4;
    if (param_4 < 1) {
      iVar5 = iVar5 - param_4;
    }
    else {
      iVar5 = iVar5 + param_4;
    }
  }
  uVar2 = FUN_18057ac40(uVar2,iVar5,0,iVar11,0,local_res8);
  *(undefined8 *)(param_3 + 4) = uVar2;
  if (local_res8[0] != 0) {
    return local_res8[0];
  }
  iVar11 = -iVar5;
  if (!bVar1) {
    iVar11 = iVar5;
  }
  param_3[2] = iVar11;
LAB_1805dbcf9:
  pbVar4 = *(byte **)(param_2 + 4);
  pbVar6 = *(byte **)(param_3 + 4);
  if (param_2[2] < 0) {
    pbVar4 = pbVar4 + -(longlong)((*param_2 + -1) * param_2[2]);
  }
  if (param_3[2] < 0) {
    pbVar6 = pbVar6 + -(longlong)((*param_3 + -1) * param_3[2]);
  }
  switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
  case 1:
    *(undefined2 *)(param_3 + 6) = 2;
    for (iVar5 = *param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar9 = pbVar4;
      pbVar10 = pbVar6;
      for (uVar8 = (uint)param_2[1] >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar10 = bVar7 >> 7;
        pbVar10[1] = bVar7 >> 6 & 1;
        pbVar10[2] = bVar7 >> 5 & 1;
        pbVar10[3] = bVar7 >> 4 & 1;
        pbVar10[4] = bVar7 >> 3 & 1;
        pbVar10[5] = bVar7 >> 2 & 1;
        pbVar10[7] = bVar7 & 1;
        pbVar10[6] = bVar7 >> 1 & 1;
        pbVar10 = pbVar10 + 8;
      }
      uVar8 = param_2[1] & 7;
      if (uVar8 != 0) {
        uVar3 = (uint)*pbVar9;
        do {
          iVar11 = (int)uVar3 >> 7;
          uVar3 = uVar3 * 2;
          *pbVar10 = (byte)iVar11 & 1;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar8 != 0);
      }
      pbVar4 = pbVar4 + param_2[2];
      pbVar6 = pbVar6 + param_3[2];
    }
    break;
  case 2:
  case 5:
  case 6:
    iVar5 = param_2[1];
    *(undefined2 *)(param_3 + 6) = 0x100;
    for (iVar11 = *param_2; iVar11 != 0; iVar11 = iVar11 + -1) {
      FUN_18063aed0(pbVar6,pbVar4,iVar5);
      pbVar4 = pbVar4 + param_2[2];
      pbVar6 = pbVar6 + param_3[2];
    }
    break;
  case 3:
    *(undefined2 *)(param_3 + 6) = 4;
    for (iVar5 = *param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar9 = pbVar4;
      pbVar10 = pbVar6;
      for (uVar8 = (uint)param_2[1] >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar10 = bVar7 >> 6;
        pbVar10[1] = bVar7 >> 4 & 3;
        pbVar10[3] = bVar7 & 3;
        pbVar10[2] = bVar7 >> 2 & 3;
        pbVar10 = pbVar10 + 4;
      }
      uVar8 = param_2[1] & 3;
      if (uVar8 != 0) {
        uVar3 = (uint)*pbVar9;
        do {
          iVar11 = (int)uVar3 >> 6;
          uVar3 = uVar3 << 2;
          *pbVar10 = (byte)iVar11 & 3;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar8 != 0);
      }
      pbVar4 = pbVar4 + param_2[2];
      pbVar6 = pbVar6 + param_3[2];
    }
    break;
  case 4:
    *(undefined2 *)(param_3 + 6) = 0x10;
    for (iVar5 = *param_2; iVar5 != 0; iVar5 = iVar5 + -1) {
      pbVar9 = pbVar4;
      pbVar10 = pbVar6;
      for (uVar8 = (uint)param_2[1] >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar10 = bVar7 >> 4;
        pbVar10[1] = bVar7 & 0xf;
        pbVar10 = pbVar10 + 2;
      }
      if ((*(byte *)(param_2 + 1) & 1) != 0) {
        *pbVar10 = *pbVar9 >> 4;
      }
      pbVar4 = pbVar4 + param_2[2];
      pbVar6 = pbVar6 + param_3[2];
    }
    break;
  case 7:
    *(undefined2 *)(param_3 + 6) = 0x100;
    iVar5 = *param_2;
    if (iVar5 != 0) {
      pbVar4 = pbVar4 + 2;
      do {
        iVar11 = param_2[1];
        if (iVar11 != 0) {
          pbVar9 = pbVar4;
          pbVar10 = pbVar6;
          do {
            bVar7 = pbVar9[1];
            if (bVar7 != 0) {
              bVar7 = bVar7 - (char)(((uint)pbVar9[-2] * (uint)pbVar9[-2] * 0x127b +
                                      (uint)pbVar9[-1] * (uint)pbVar9[-1] * 0xb714 +
                                      (uint)*pbVar9 * (uint)*pbVar9 * 0x3671 >> 0x10) / (uint)bVar7)
              ;
            }
            *pbVar10 = bVar7;
            pbVar9 = pbVar9 + 4;
            pbVar10 = pbVar10 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        pbVar6 = pbVar6 + param_3[2];
        pbVar4 = pbVar4 + param_2[2];
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return local_res8[0];
}



