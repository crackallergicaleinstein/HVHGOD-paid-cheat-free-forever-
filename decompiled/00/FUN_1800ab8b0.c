// FUN_1800ab8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ab8b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ab8b0(ulonglong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined1 auVar9 [8];
  undefined1 auVar10 [8];
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined1 auStack_b8 [32];
  byte local_98;
  longlong local_90;
  byte *local_88;
  ulonglong *local_80;
  byte *local_78;
  byte *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  byte *pbStack_50;
  byte *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  pbVar15 = (byte *)param_2[1];
  if (((ulonglong)pbVar15 & 3) == 0) {
    local_58 = (undefined1  [8])0x0;
    pbStack_50 = (byte *)0x0;
    local_48 = (byte *)0x0;
    uVar5 = ((ulonglong)pbVar15 >> 2) * 3;
    local_80 = param_1;
    local_78 = pbVar15;
    if (uVar5 != 0) {
      if (0x7fffffffffffffff < uVar5) {
LAB_1800abd12:
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar2 = FUN_18015bca0(uVar5);
      FUN_18063aed0(uVar2,local_58,(longlong)pbStack_50 - (longlong)local_58);
      FUN_1801413a0(local_58,uVar2,0,uVar5);
    }
    pbVar4 = local_48;
    pbVar8 = pbStack_50;
    if (pbVar15 != (byte *)0x0) {
      pbVar15 = (byte *)(*param_2 + 2);
      local_60 = -2 - *param_2;
      do {
        auVar9 = (undefined1  [8])pbStack_50;
        bVar12 = (&DAT_1806ffe70)[pbVar15[-1]];
        bVar1 = (&DAT_1806ffe70)[*pbVar15];
        local_98 = (&DAT_1806ffe70)[pbVar15[1]];
        if (((((&DAT_1806ffe70)[pbVar15[-2]] == -1) || (bVar12 == 0xff)) || (bVar1 == 0xff)) ||
           (local_98 == 0xff)) {
          *(undefined1 *)(local_80 + 3) = 0;
          FUN_180113710(local_58);
        }
        bVar11 = bVar12 >> 4 | (&DAT_1806ffe70)[pbVar15[-2]] << 2;
        if (pbStack_50 == local_48) {
          local_68 = (byte *)local_58;
          local_90 = (longlong)pbStack_50 - (longlong)local_58;
          if (local_90 == 0x7fffffffffffffff) goto LAB_1800abd12;
          local_88 = (byte *)(local_90 + 1);
          uVar5 = (longlong)local_48 - (longlong)local_58;
          if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
            pbVar4 = (byte *)0x7fffffffffffffff;
          }
          else {
            pbVar4 = (byte *)((uVar5 >> 1) + uVar5);
            if (pbVar4 < local_88) {
              pbVar4 = local_88;
            }
          }
          lVar14 = FUN_18015bca0(pbVar4);
          local_90 = local_90 + lVar14;
          *(byte *)((longlong)auVar9 + (lVar14 - (longlong)local_68)) = bVar11;
          if (auVar9 == (undefined1  [8])pbStack_50) {
            lVar6 = (longlong)pbStack_50 - (longlong)local_58;
            lVar3 = lVar14;
            auVar9 = local_58;
          }
          else {
            FUN_18063aed0(lVar14,local_58,(longlong)auVar9 - (longlong)local_58);
            lVar6 = (longlong)pbStack_50 - (longlong)auVar9;
            lVar3 = local_90 + 1;
          }
          FUN_18063aed0(lVar3,auVar9,lVar6);
          FUN_1801413a0(local_58,lVar14,local_88,pbVar4);
        }
        else {
          *pbStack_50 = bVar11;
          pbStack_50 = pbStack_50 + 1;
        }
        auVar9 = (undefined1  [8])pbStack_50;
        if (*pbVar15 != 0x3d) {
          bVar12 = bVar1 >> 2 | bVar12 << 4;
          if (pbStack_50 == local_48) {
            local_88 = (byte *)local_58;
            lVar14 = (longlong)pbStack_50 - (longlong)local_58;
            if (lVar14 == 0x7fffffffffffffff) goto LAB_1800abd12;
            uVar7 = (longlong)local_48 - (longlong)local_58;
            uVar5 = 0x7fffffffffffffff;
            if ((uVar7 <= 0x7fffffffffffffff - (uVar7 >> 1)) &&
               (uVar5 = uVar7 + (uVar7 >> 1), uVar5 < lVar14 + 1U)) {
              uVar5 = lVar14 + 1U;
            }
            lVar3 = FUN_18015bca0(uVar5);
            *(byte *)((longlong)auVar9 + (lVar3 - (longlong)local_88)) = bVar12;
            if (auVar9 == (undefined1  [8])pbStack_50) {
              lVar13 = (longlong)pbStack_50 - (longlong)local_58;
              lVar6 = lVar3;
              auVar9 = local_58;
            }
            else {
              FUN_18063aed0(lVar3,local_58,(longlong)auVar9 - (longlong)local_58);
              lVar13 = (longlong)pbStack_50 - (longlong)auVar9;
              lVar6 = lVar14 + 1 + lVar3;
            }
            FUN_18063aed0(lVar6,auVar9,lVar13);
            FUN_1801413a0(local_58,lVar3,lVar14 + 1,uVar5);
          }
          else {
            *pbStack_50 = bVar12;
            pbStack_50 = pbStack_50 + 1;
          }
        }
        auVar10 = (undefined1  [8])pbStack_50;
        auVar9 = local_58;
        if (pbVar15[1] != 0x3d) {
          bVar12 = bVar1 << 6 | local_98;
          if (pbStack_50 == local_48) {
            if ((longlong)pbStack_50 - (longlong)local_58 == 0x7fffffffffffffff) goto LAB_1800abd12;
            uVar5 = ((longlong)pbStack_50 - (longlong)local_58) + 1;
            uVar7 = (longlong)local_48 - (longlong)local_58;
            if (0x7fffffffffffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0x7fffffffffffffff;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
              if (uVar7 < uVar5) {
                uVar7 = uVar5;
              }
            }
            pbVar4 = (byte *)FUN_18015bca0(uVar7);
            *(byte *)((longlong)auVar10 + ((longlong)pbVar4 - (longlong)auVar9)) = bVar12;
            if (auVar10 == (undefined1  [8])pbStack_50) {
              lVar14 = (longlong)pbStack_50 - (longlong)local_58;
              pbVar8 = pbVar4;
              auVar10 = local_58;
            }
            else {
              FUN_18063aed0(pbVar4,local_58,(longlong)auVar10 - (longlong)local_58);
              lVar14 = (longlong)pbStack_50 - (longlong)auVar10;
              pbVar8 = (byte *)((longlong)auVar10 + ((longlong)pbVar4 - (longlong)auVar9)) + 1;
            }
            FUN_18063aed0(pbVar8,auVar10,lVar14);
            FUN_1801413a0(local_58,pbVar4,uVar5,uVar7);
          }
          else {
            *pbStack_50 = bVar12;
            pbStack_50 = pbStack_50 + 1;
          }
        }
        pbVar15 = pbVar15 + 4;
      } while (pbVar15 + local_60 < local_78);
      pbVar4 = local_48;
      pbVar8 = pbStack_50;
      param_1 = local_80;
    }
    auVar9 = local_58;
    local_48 = (byte *)0x0;
    _local_58 = ZEXT816(0);
    *param_1 = (ulonglong)auVar9;
    param_1[1] = (ulonglong)pbVar8;
    param_1[2] = (ulonglong)pbVar4;
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_180113710(local_58);
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
}



