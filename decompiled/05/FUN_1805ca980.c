// FUN_1805ca980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ca980 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ca980(undefined8 param_1,longlong param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  cVar3 = '\0';
  uVar9 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (param_3 == (byte *)0x0) {
  }
  if (param_2 == 0) {
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
  }
  if (param_3 < *(byte **)(param_2 + 0x40)) {
  }
  if ((byte *)(*(longlong *)(param_2 + 0x80) + -2 + (ulonglong)*(uint *)(param_2 + 0x88)) < param_3)
  {
  }
  bVar1 = *param_3;
  pbVar8 = param_3 + 1;
  *param_4 = (uint)bVar1;
  if (0x20 < bVar1) {
  }
  if (bVar1 == 1) {
    if (pbVar8 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 5) + *(longlong *)(param_2 + 0x80)) <
        pbVar8) {
    }
    bVar1 = *pbVar8;
    if (*(uint *)(param_2 + 0x28) < (uint)bVar1) {
    }
    iVar5 = CONCAT31(CONCAT21(CONCAT11(param_3[2],param_3[3]),param_3[4]),param_3[5]);
    if (*(uint *)(param_2 + 0x28) < iVar5 + (uint)bVar1) {
    }
    param_4[2] = (uint)bVar1;
    param_4[3] = 0;
    *(ulonglong *)(param_4 + 4) = (ulonglong)(uint)(iVar5 * 4) + *(longlong *)(param_2 + 0x30) + 4;
  }
  if (bVar1 - 2 < 2) {
    if (pbVar8 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar8) {
    }
    pbVar11 = param_3 + 5;
    *(ushort *)(param_4 + 2) = CONCAT11(*pbVar8,param_3[2]);
    *(ushort *)((longlong)param_4 + 10) = CONCAT11(param_3[3],param_3[4]);
    if (bVar1 == 3) {
      if (pbVar11 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar11) {
      }
      local_68 = &local_58;
      cVar3 = FUN_1805c9fe0(param_1,param_2,
                            CONCAT31(CONCAT21(CONCAT11(*pbVar11,param_3[6]),param_3[7]),param_3[8]),
                            1);
      if (cVar3 == '\0') {
      }
      *(short *)((longlong)param_4 + 10) = *(short *)((longlong)param_4 + 10) + (short)local_58;
    }
    *param_4 = 2;
  }
  if (bVar1 == 0xb) {
    if (pbVar8 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) <
        pbVar8) {
    }
    param_4[2] = (uint)CONCAT11(*pbVar8,param_3[2]);
  }
  if (pbVar8 < *(byte **)(param_2 + 0x40)) {
  }
  pbVar11 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80));
  if (pbVar11 + -4 < pbVar8) {
  }
  pbVar10 = param_3 + 4;
  uVar6 = (uint)CONCAT21(CONCAT11(*pbVar8,param_3[2]),param_3[3]);
  if (uVar6 == 0) {
  }
  pbVar8 = param_3 + uVar6;
  if (pbVar8 < *(byte **)(param_2 + 0x40)) {
  }
  if (pbVar11 <= pbVar8) {
  }
  if ((bVar1 == 4) || (cVar3 = '\x01', bVar1 == 5)) {
    cVar4 = FUN_1805ca920(param_2,pbVar8,param_4 + 2,cVar3);
    if (cVar4 == '\0') {
    }
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 0xc) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    param_4[10] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1]) << 0x10;
    param_4[0xb] = ((int)(short)((ushort)pbVar10[2] << 8) | (uint)pbVar10[3]) << 0x10;
    param_4[0xc] = ((int)(short)((ushort)pbVar10[4] << 8) | (uint)pbVar10[5]) << 0x10;
    param_4[0xd] = ((int)(short)((ushort)pbVar10[6] << 8) | (uint)pbVar10[7]) << 0x10;
    pbVar8 = pbVar10 + 0xc;
    param_4[0xe] = ((int)(short)((ushort)pbVar10[8] << 8) | (uint)pbVar10[9]) << 0x10;
    param_4[0xf] = ((int)(short)((ushort)pbVar10[10] << 8) | (uint)pbVar10[0xb]) << 0x10;
    if (cVar3 != '\0') {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      local_68 = &local_58;
      cVar3 = FUN_1805c9fe0(param_1,param_2,
                            CONCAT31(CONCAT21(CONCAT11(*pbVar8,pbVar10[0xd]),pbVar10[0xe]),
                                     pbVar10[0xf]),6);
      if (cVar3 == '\0') {
      }
      param_4[10] = param_4[10] + (int)local_58 * 0x10000;
      param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
      param_4[0xc] = param_4[0xc] + (int)uStack_50 * 0x10000;
      param_4[0xd] = param_4[0xd] + uStack_50._4_4_ * 0x10000;
      param_4[0xe] = param_4[0xe] + (int)local_48 * 0x10000;
      param_4[0xf] = param_4[0xf] + local_48._4_4_ * 0x10000;
    }
    *param_4 = 4;
  }
  cVar3 = '\0';
  if ((bVar1 == 6) || (cVar3 = '\x01', bVar1 == 7)) {
    cVar4 = FUN_1805ca920(param_2,pbVar8,param_4 + 2,cVar3);
    if (cVar4 == '\0') {
    }
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 0xc) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    param_4[10] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1]) << 0x10;
    param_4[0xb] = ((int)(short)((ushort)pbVar10[2] << 8) | (uint)pbVar10[3]) << 0x10;
    uVar9 = ((int)(short)((ushort)pbVar10[4] << 8) | (uint)pbVar10[5]) << 0x10;
    if ((int)uVar9 < 0) {
      uVar9 = 0x7fffffff;
    }
    param_4[0xc] = uVar9;
    param_4[0xd] = ((int)(short)((ushort)pbVar10[6] << 8) | (uint)pbVar10[7]) << 0x10;
    pbVar8 = pbVar10 + 0xc;
    param_4[0xe] = ((int)(short)((ushort)pbVar10[8] << 8) | (uint)pbVar10[9]) << 0x10;
    uVar9 = ((int)(short)((ushort)pbVar10[10] << 8) | (uint)pbVar10[0xb]) << 0x10;
    if ((int)uVar9 < 0) {
      uVar9 = 0x7fffffff;
    }
    param_4[0xf] = uVar9;
    if (cVar3 != '\0') {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      local_68 = &local_58;
      cVar3 = FUN_1805c9fe0(param_1,param_2,
                            CONCAT31(CONCAT21(CONCAT11(*pbVar8,pbVar10[0xd]),pbVar10[0xe]),
                                     pbVar10[0xf]),6);
      if (cVar3 == '\0') {
      }
      param_4[10] = param_4[10] + (int)local_58 * 0x10000;
      param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
      param_4[0xc] = param_4[0xc] + (int)uStack_50 * 0x10000;
      param_4[0xd] = param_4[0xd] + uStack_50._4_4_ * 0x10000;
      param_4[0xe] = param_4[0xe] + (int)local_48 * 0x10000;
      param_4[0xf] = param_4[0xf] + local_48._4_4_ * 0x10000;
    }
    *param_4 = 6;
  }
  cVar3 = '\0';
  if ((bVar1 == 8) || (cVar3 = '\x01', bVar1 == 9)) {
    cVar4 = FUN_1805ca920(param_2,pbVar8,param_4 + 2,cVar3);
    if (cVar4 == '\0') {
    }
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 8) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    param_4[10] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)pbVar10[1]) << 0x10;
    param_4[0xb] = ((int)(short)((ushort)pbVar10[2] << 8) | (uint)pbVar10[3]) << 0x10;
    pbVar8 = pbVar10 + 8;
    param_4[0xc] = ((int)(short)((ushort)pbVar10[4] << 8) | (uint)pbVar10[5]) << 2;
    param_4[0xd] = ((int)(short)((ushort)pbVar10[6] << 8) | (uint)pbVar10[7]) << 2;
    if (cVar3 != '\0') {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      local_68 = &local_58;
      cVar3 = FUN_1805c9fe0(param_1,param_2,
                            CONCAT31(CONCAT21(CONCAT11(*pbVar8,pbVar10[9]),pbVar10[10]),pbVar10[0xb]
                                    ),4);
      if (cVar3 == '\0') {
      }
      param_4[10] = param_4[10] + (int)local_58 * 0x10000;
      param_4[0xb] = param_4[0xb] + local_58._4_4_ * 0x10000;
      param_4[0xc] = param_4[0xc] + (int)uStack_50 * 4;
      param_4[0xd] = param_4[0xd] + uStack_50._4_4_ * 4;
    }
    *param_4 = 8;
  }
  if (bVar1 == 10) {
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    *(byte **)(param_4 + 2) = pbVar8;
    *(undefined1 *)(param_4 + 4) = 0;
    param_4[6] = (uint)CONCAT11(*pbVar10,param_3[5]);
  }
  if (bVar1 - 0xc < 2) {
    *(byte **)(param_4 + 2) = pbVar8;
    *(undefined1 *)(param_4 + 4) = 0;
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    pbVar8 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80));
    if (pbVar8 + -4 < pbVar10) {
    }
    uVar9 = (uint)CONCAT21(CONCAT11(*pbVar10,param_3[5]),param_3[6]);
    if (uVar9 == 0) {
    }
    param_3 = param_3 + uVar9;
    if (param_3 < *(byte **)(param_2 + 0x40)) {
    }
    if (pbVar8 <= param_3) {
    }
    if (pbVar8 + -0x18 < param_3) {
    }
    pbVar8 = param_3 + 0x18;
    param_4[6] = CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]);
    param_4[9] = CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),param_3[7]);
    param_4[7] = CONCAT31(CONCAT21(CONCAT11(param_3[8],param_3[9]),param_3[10]),param_3[0xb]);
    param_4[10] = CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]),param_3[0xf]);
    param_4[8] = CONCAT31(CONCAT21(CONCAT11(param_3[0x10],param_3[0x11]),param_3[0x12]),
                          param_3[0x13]);
    param_4[0xb] = CONCAT31(CONCAT21(CONCAT11(param_3[0x14],param_3[0x15]),param_3[0x16]),
                            param_3[0x17]);
    if (bVar1 == 0xd) {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      local_68 = &local_58;
      cVar3 = FUN_1805c9fe0(param_1,param_2,
                            CONCAT31(CONCAT21(CONCAT11(*pbVar8,param_3[0x19]),param_3[0x1a]),
                                     param_3[0x1b]),6);
      if (cVar3 == '\0') {
      }
      param_4[6] = param_4[6] + (int)local_58;
      param_4[9] = param_4[9] + local_58._4_4_;
      param_4[7] = param_4[7] + (int)uStack_50;
      param_4[10] = param_4[10] + uStack_50._4_4_;
      param_4[8] = param_4[8] + (int)local_48;
      param_4[0xb] = param_4[0xb] + local_48._4_4_;
    }
    *param_4 = 0xc;
  }
  if (bVar1 - 0xe < 2) {
    *(byte **)(param_4 + 2) = pbVar8;
    *(undefined1 *)(param_4 + 4) = 0;
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    pbVar8 = param_3 + 8;
    param_4[6] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)param_3[5]) << 0x10;
    param_4[7] = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 0x10;
    if (bVar1 == 0xf) {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      local_68 = &local_58;
      cVar3 = FUN_1805c9fe0(param_1,param_2,
                            CONCAT31(CONCAT21(CONCAT11(*pbVar8,param_3[9]),param_3[10]),param_3[0xb]
                                    ),2);
      if (cVar3 == '\0') {
      }
      param_4[6] = param_4[6] + (int)local_58 * 0x10000;
      param_4[7] = param_4[7] + local_58._4_4_ * 0x10000;
    }
    *param_4 = 0xe;
  }
  if (bVar1 - 0x10 < 8) {
    *(byte **)(param_4 + 2) = pbVar8;
    *(undefined1 *)(param_4 + 4) = 0;
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    pbVar8 = param_3 + 6;
    uVar6 = ((int)(short)((ushort)*pbVar10 << 8) | (uint)param_3[5]) << 2;
    param_4[6] = uVar6;
    if (bVar1 - 0x10 < 4) {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      pbVar8 = param_3 + 8;
      uVar6 = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 2;
    }
    param_4[7] = uVar6;
    if (((bVar1 == 0x12) || (bVar1 == 0x13)) || (bVar1 - 0x16 < 2)) {
      if (pbVar8 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar8) {
      }
      pbVar11 = pbVar8 + 4;
      param_4[8] = ((int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1]) << 0x10;
      uVar9 = ((int)(short)((ushort)pbVar8[2] << 8) | (uint)pbVar8[3]) << 0x10;
    }
    else {
      param_4[8] = 0;
      pbVar11 = pbVar8;
    }
    param_4[9] = uVar9;
    if ((bVar1 == 0x11) || (((bVar1 - 0x13 & 0xfffffff9) == 0 && (bVar1 != 0x19)))) {
      if (pbVar11 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar11) {
      }
      uVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar11,pbVar11[1]),pbVar11[2]),pbVar11[3]);
      if (bVar1 == 0x11) {
        local_68 = &local_58;
        cVar3 = FUN_1805c9fe0(param_1,param_2,uVar7,2);
        if (cVar3 == '\0') {
        }
        param_4[6] = param_4[6] + (int)local_58 * 4;
        param_4[7] = param_4[7] + local_58._4_4_ * 4;
      }
      if (*param_4 == 0x13) {
        local_68 = &local_58;
        cVar3 = FUN_1805c9fe0(param_1,param_2,uVar7,4);
        if (cVar3 == '\0') {
        }
        param_4[6] = param_4[6] + (int)local_58 * 4;
        param_4[8] = param_4[8] + (int)uStack_50 * 0x10000;
        param_4[9] = param_4[9] + uStack_50._4_4_ * 0x10000;
        param_4[7] = param_4[7] + local_58._4_4_ * 4;
      }
      if (*param_4 == 0x15) {
        local_68 = &local_58;
        cVar3 = FUN_1805c9fe0(param_1,param_2,uVar7,1);
        if (cVar3 == '\0') {
        }
        param_4[6] = param_4[6] + (int)local_58 * 4;
        param_4[7] = param_4[7] + (int)local_58 * 4;
      }
      if (*param_4 == 0x17) {
        local_68 = &local_58;
        cVar3 = FUN_1805c9fe0(param_1,param_2,uVar7,3);
        if (cVar3 == '\0') {
        }
        param_4[6] = param_4[6] + (int)local_58 * 4;
        param_4[7] = param_4[7] + (int)local_58 * 4;
        param_4[8] = param_4[8] + local_58._4_4_ * 0x10000;
        param_4[9] = param_4[9] + (int)uStack_50 * 0x10000;
      }
    }
    *param_4 = 0x10;
  }
  if (3 < bVar1 - 0x18) {
    if (bVar1 - 0x1c < 4) {
      *(byte **)(param_4 + 2) = pbVar8;
      *(undefined1 *)(param_4 + 4) = 0;
      if (pbVar10 < *(byte **)(param_2 + 0x40)) {
      }
      if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
          pbVar10) {
      }
      pbVar8 = param_3 + 8;
      param_4[6] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)param_3[5]) << 2;
      param_4[7] = ((int)(short)((ushort)param_3[6] << 8) | (uint)param_3[7]) << 2;
      if (bVar1 - 0x1e < 2) {
        if (pbVar8 < *(byte **)(param_2 + 0x40)) {
        }
        if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar8) {
        }
        bVar2 = *pbVar8;
        pbVar8 = param_3 + 0xc;
        param_4[8] = ((int)(short)((ushort)bVar2 << 8) | (uint)param_3[9]) << 0x10;
        uVar9 = ((int)(short)((ushort)param_3[10] << 8) | (uint)param_3[0xb]) << 0x10;
      }
      else {
        param_4[8] = 0;
      }
      param_4[9] = uVar9;
      if ((bVar1 == 0x1d) || (bVar1 == 0x1f)) {
        if (pbVar8 < *(byte **)(param_2 + 0x40)) {
        }
        if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
            pbVar8) {
        }
        uVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]),pbVar8[3]);
        if (bVar1 == 0x1d) {
          local_68 = &local_58;
          cVar3 = FUN_1805c9fe0(param_1,param_2,uVar7,2);
          if (cVar3 == '\0') {
          }
          param_4[6] = param_4[6] + (int)local_58 * 4;
          param_4[7] = param_4[7] + local_58._4_4_ * 4;
        }
        if (*param_4 == 0x1f) {
          local_68 = &local_58;
          cVar3 = FUN_1805c9fe0(param_1,param_2,uVar7,4);
          if (cVar3 == '\0') {
          }
          param_4[6] = param_4[6] + (int)local_58 * 4;
          param_4[8] = param_4[8] + (int)uStack_50 * 0x10000;
          param_4[9] = param_4[9] + uStack_50._4_4_ * 0x10000;
          param_4[7] = param_4[7] + local_58._4_4_ * 4;
        }
      }
      *param_4 = 0x1c;
    }
    if (bVar1 != 0x20) {
    }
    *(byte **)(param_4 + 2) = pbVar8;
    *(undefined1 *)(param_4 + 4) = 0;
    if (pbVar10 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 1) + *(longlong *)(param_2 + 0x80)) <
        pbVar10) {
    }
    pbVar8 = param_3 + 5;
    if (0x1b < *pbVar10) {
    }
    param_4[6] = (uint)*pbVar10;
    if (pbVar8 < *(byte **)(param_2 + 0x40)) {
    }
    pbVar11 = (byte *)((ulonglong)*(uint *)(param_2 + 0x88) + *(longlong *)(param_2 + 0x80));
    if (pbVar11 + -4 < pbVar8) {
    }
    uVar9 = (uint)CONCAT21(CONCAT11(*pbVar8,param_3[6]),param_3[7]);
    if (uVar9 == 0) {
    }
    param_3 = param_3 + uVar9;
    if (param_3 < *(byte **)(param_2 + 0x40)) {
    }
    if (param_3 < pbVar11) {
      *(byte **)(param_4 + 8) = param_3;
      *(undefined1 *)(param_4 + 10) = 0;
    }
  }
  *(byte **)(param_4 + 2) = pbVar8;
  *(undefined1 *)(param_4 + 4) = 0;
  if (pbVar10 < *(byte **)(param_2 + 0x40)) {
  }
  if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 2) + *(longlong *)(param_2 + 0x80)) < pbVar10
     ) {
  }
  pbVar8 = param_3 + 6;
  param_4[6] = ((int)(short)((ushort)*pbVar10 << 8) | (uint)param_3[5]) << 2;
  if (bVar1 - 0x1a < 2) {
    if (pbVar8 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar8) {
    }
    bVar1 = *pbVar8;
    pbVar8 = param_3 + 10;
    param_4[7] = ((int)(short)((ushort)bVar1 << 8) | (uint)param_3[7]) << 0x10;
    uVar9 = ((int)(short)((ushort)param_3[8] << 8) | (uint)param_3[9]) << 0x10;
  }
  else {
    param_4[7] = 0;
    uVar9 = 0;
  }
  param_4[8] = uVar9;
  uVar9 = *param_4;
  if ((uVar9 == 0x19) || (uVar9 == 0x1b)) {
    if (pbVar8 < *(byte **)(param_2 + 0x40)) {
    }
    if ((byte *)(((ulonglong)*(uint *)(param_2 + 0x88) - 4) + *(longlong *)(param_2 + 0x80)) <
        pbVar8) {
    }
    iVar5 = 3;
    if (uVar9 != 0x1b) {
      iVar5 = 0;
    }
    if (uVar9 == 0x19) {
      iVar5 = 1;
    }
    else if (uVar9 != 0x1b) goto LAB_1805cb291;
    local_68 = &local_58;
    cVar3 = FUN_1805c9fe0(param_1,param_2,
                          CONCAT31(CONCAT21(CONCAT11(*pbVar8,pbVar8[1]),pbVar8[2]),pbVar8[3]),iVar5)
    ;
    if (cVar3 == '\0') {
    }
    param_4[6] = param_4[6] + (int)local_58 * 4;
    if (iVar5 == 3) {
      param_4[7] = param_4[7] + local_58._4_4_ * 0x10000;
      param_4[8] = param_4[8] + (int)uStack_50 * 0x10000;
    }
  }
LAB_1805cb291:
  *param_4 = 0x18;
}



