// FUN_1805da720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805da720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805da720(int param_1,ushort *param_2,uint param_3,longlong *param_4,uint *param_5,
                  undefined *param_6)

{
  longlong lVar1;
  ushort uVar2;
  char cVar4;
  byte bVar3;
  undefined2 uVar5;
  byte bVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  uint local_c8;
  int local_c4;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_a8;
  longlong *local_a0;
  ushort *local_98;
  uint *local_90;
  ushort auStack_88 [5];
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  ushort auStack_68 [4];
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  uVar19 = 0;
  local_90 = param_5;
  local_a8 = param_6;
  uVar9 = (ulonglong)param_3;
  uVar15 = 0;
  do {
    if (0x1f < uVar15 * 2) {
      local_c4 = param_1;
      local_a0 = param_4;
      local_98 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1805f5e50();
    }
    uVar13 = (int)uVar15 + 1;
    auStack_88[uVar15] = 0;
    uVar15 = (ulonglong)uVar13;
  } while (uVar13 < 0x10);
  if (param_3 != 0) {
    puVar7 = param_2;
    do {
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      auStack_88[uVar2] = auStack_88[uVar2] + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar13 = 0xd;
  uVar15 = 0xf;
  do {
    uVar14 = (uint)uVar15;
    if (auStack_88[uVar15] != 0) goto LAB_1805da81a;
    if (auStack_88[uVar13 + 1] != 0) {
      uVar14 = uVar14 - 1;
      goto LAB_1805da81a;
    }
    if (auStack_88[uVar13] != 0) {
      uVar14 = uVar14 - 2;
      goto LAB_1805da81a;
    }
    if (auStack_88[uVar13 - 1] != 0) {
      uVar14 = uVar14 - 3;
      goto LAB_1805da81a;
    }
    if (auStack_88[uVar13 - 2] != 0) {
      uVar14 = uVar14 - 4;
      goto LAB_1805da81a;
    }
    uVar15 = (ulonglong)(uVar14 - 5);
    uVar13 = uVar13 - 5;
  } while (uVar14 - 5 != 0);
  uVar14 = 0;
LAB_1805da81a:
  uVar13 = uVar14;
  if (*param_5 <= uVar14) {
    uVar13 = *param_5;
  }
  if (uVar14 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
  }
  else {
    uVar16 = 1;
    if (1 < uVar14) {
      puVar7 = auStack_88;
      do {
        puVar7 = puVar7 + 1;
        if (*puVar7 != 0) break;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
    }
    uVar15 = 1;
    uVar10 = uVar16;
    if (uVar16 <= uVar13) {
      uVar10 = uVar13;
    }
    iVar12 = 1;
    do {
      iVar12 = iVar12 * 2 - (uint)auStack_88[uVar15];
      if (iVar12 < 0) {
      }
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 < 0x10);
    if ((iVar12 < 1) || ((param_1 != 0 && (uVar14 == 1)))) {
      uVar13 = 0;
      auStack_68[1] = 0;
      auStack_68[3] = auStack_88[2] + auStack_88[1];
      local_60 = auStack_88[2] + auStack_88[1] + auStack_88[3];
      local_5e = local_60 + auStack_88[4];
      local_5c = local_5e + local_7e;
      local_5a = local_5c + local_7c;
      local_58 = local_5a + local_7a;
      local_56 = local_58 + local_78;
      local_54 = local_56 + local_76;
      local_52 = local_54 + local_74;
      local_50 = local_52 + local_72;
      local_4e = local_50 + local_70;
      local_4c = local_4e + local_6e;
      auStack_68[2] = auStack_88[1];
      local_4a = local_4c + local_6c;
      if (param_3 != 0) {
        puVar7 = param_2;
        do {
          if (*puVar7 != 0) {
            *(short *)(param_6 + (ulonglong)auStack_68[*puVar7] * 2) = (short)uVar13;
            auStack_68[*puVar7] = auStack_68[*puVar7] + 1;
          }
          uVar13 = uVar13 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar13 < param_3);
      }
      lVar21 = *param_4;
      uVar13 = 0xffffffff;
      bVar6 = (byte)uVar10;
      uVar17 = uVar10;
      if (param_1 == 0) {
        local_c0 = param_6;
        local_b8 = param_6;
        uVar15 = 0;
        local_cc = 0x14;
        uVar20 = 1 << (bVar6 & 0x1f);
        uVar11 = 0;
        local_d4 = 0;
        local_c8 = uVar20 - 1;
      }
      else {
        local_d4 = 0;
        uVar11 = 0;
        if (param_1 == 1) {
          local_b8 = &DAT_180686058;
          uVar20 = 1 << (bVar6 & 0x1f);
          local_c0 = &DAT_180686098;
          local_cc = 0x101;
          local_c8 = uVar20 - 1;
        }
        else {
          local_cc = 0;
          uVar20 = 1 << (bVar6 & 0x1f);
          local_b8 = &DAT_1806860e0;
          local_c8 = uVar20 - 1;
          local_c0 = &DAT_180686120;
          if (param_1 != 1) {
            local_cc = 0;
            local_d4 = 0;
            local_b8 = &DAT_1806860e0;
            local_c0 = &DAT_180686120;
            if (param_1 == 2) {
              local_b8 = &DAT_1806860e0;
              local_c0 = &DAT_180686120;
              local_cc = 0;
              local_d4 = 0;
              if (0x250 < uVar20) {
              }
              uVar15 = 0;
            }
            else {
              uVar15 = 0;
            }
            goto LAB_1805daab0;
          }
        }
        if (0x354 < uVar20) {
        }
        uVar15 = 0;
      }
LAB_1805daab0:
      do {
        do {
          do {
            cVar4 = (char)uVar16;
            bVar18 = (byte)uVar19;
            bVar3 = cVar4 - bVar18;
            uVar2 = *(ushort *)(param_6 + uVar15 * 2);
            if (uVar2 + 1 < local_cc) {
              local_d8 = (uint)CONCAT21(uVar2,bVar3) << 8;
            }
            else {
              local_d8._1_3_ = (uint3)bVar3;
              if (uVar2 < local_cc) {
                local_d8 = CONCAT31(local_d8._1_3_,0x60);
                uVar5 = 0;
              }
              else {
                lVar1 = (ulonglong)(uVar2 - local_cc) * 2;
                local_d8._0_2_ = CONCAT11(bVar3,local_c0[lVar1]);
                uVar5 = *(undefined2 *)(local_b8 + lVar1);
              }
              local_d8 = CONCAT22(uVar5,(undefined2)local_d8);
            }
            iVar12 = 1 << (cVar4 - bVar18 & 0x1f);
            uVar8 = 1 << ((byte)uVar17 & 0x1f);
            uVar15 = (ulonglong)((uVar11 >> (bVar18 & 0x1f)) + uVar8);
            uVar9 = (ulonglong)uVar8;
            do {
              uVar15 = (ulonglong)(uint)((int)uVar15 - iVar12);
              *(int *)(lVar21 + uVar15 * 4) = local_d8;
              uVar8 = uVar8 - iVar12;
            } while (uVar8 != 0);
            for (uVar8 = 1 << (cVar4 - 1U & 0x1f); (uVar11 & uVar8) != 0; uVar8 = uVar8 >> 1) {
            }
            if (uVar8 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (uVar11 & uVar8 - 1) + uVar8;
            }
            local_d4 = local_d4 + 1;
            uVar15 = (ulonglong)local_d4;
            puVar7 = auStack_88 + uVar16;
            *puVar7 = *puVar7 - 1;
            if (*puVar7 == 0) {
              if (uVar16 == uVar14) {
                if (uVar11 != 0) {
                  local_d8._1_3_ = (uint3)((uint)local_d8 >> 8) & 0xff;
                  local_d8 = CONCAT31(local_d8._1_3_,0x40);
                  *(int *)(lVar21 + (ulonglong)uVar11 * 4) = local_d8;
                }
                *param_4 = *param_4 + (ulonglong)uVar20 * 4;
                *param_5 = uVar10;
              }
              uVar16 = (uint)param_2[*(ushort *)(param_6 + uVar15 * 2)];
            }
          } while (uVar16 <= uVar10);
          uVar8 = local_c8 & uVar11;
        } while (uVar8 == uVar13);
        lVar21 = lVar21 + uVar9 * 4;
        if (uVar19 == 0) {
          uVar19 = uVar10;
        }
        uVar17 = uVar16 - uVar19;
        iVar12 = 1 << ((byte)uVar17 & 0x1f);
        if (uVar16 < uVar14) {
          uVar13 = uVar16;
          do {
            uVar15 = (ulonglong)uVar13;
            if ((int)(iVar12 - (uint)auStack_88[uVar15]) < 1) break;
            uVar17 = uVar17 + 1;
            uVar13 = uVar13 + 1;
            iVar12 = (iVar12 - (uint)auStack_88[uVar15]) * 2;
          } while (uVar13 < uVar14);
        }
        uVar20 = uVar20 + (1 << ((byte)uVar17 & 0x1f));
        if (param_1 == 1) {
          bVar22 = uVar20 < 0x354;
          bVar23 = uVar20 == 0x354;
LAB_1805dac2a:
          if (!bVar22 && !bVar23) {
          }
        }
        else if (param_1 == 2) {
          bVar22 = uVar20 < 0x250;
          bVar23 = uVar20 == 0x250;
          goto LAB_1805dac2a;
        }
        lVar1 = (ulonglong)uVar8 * 4;
        *(byte *)(lVar1 + *param_4) = (byte)uVar17;
        *(byte *)(lVar1 + 1 + *param_4) = bVar6;
        *(short *)(lVar1 + 2 + *param_4) = (short)(lVar21 - *param_4 >> 2);
        uVar15 = (ulonglong)local_d4;
        uVar13 = uVar8;
      } while( true );
    }
  }
}



