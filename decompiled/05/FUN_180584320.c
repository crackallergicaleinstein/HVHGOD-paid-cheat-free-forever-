// FUN_180584320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180584320 */

/* WARNING: Type propagation algorithm not settling */

int FUN_180584320(undefined8 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  short *psVar14;
  ushort uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ushort *puVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  short sVar26;
  int iVar27;
  byte *pbVar28;
  short sVar29;
  int iVar30;
  int iVar31;
  ushort local_res8;
  ushort local_res18;
  ushort local_res20;
  ushort local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  ushort *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_b8 = *param_1;
  local_b0 = (undefined8 *)param_1[6];
  uStack_90 = 0;
  uStack_60 = 0;
  local_a0 = local_b0 + *(int *)((longlong)param_1 + 0x2c);
  local_e8 = 0;
  local_68 = 32000;
  local_d8 = *(uint *)(param_1[0x230] + 0x40);
  *(undefined4 *)(param_1 + (longlong)param_2 * 0x113 + 9) = 0;
  local_98 = 0;
  uVar16 = param_1[4];
  local_d8 = local_d8 / 0xe;
  local_cc = -*(int *)(param_1 + (longlong)param_2 * 0x113 + 0xd);
  if (-*(int *)(param_1 + (longlong)param_2 * 0x113 + 0xd) < 0) {
    local_cc = *(int *)(param_1 + (longlong)param_2 * 0x113 + 0xd);
  }
  uVar13 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x30 + uVar16;
  if (param_2 == 0) {
    for (; uVar16 < uVar13; uVar16 = uVar16 + 0x30) {
      *(int *)(uVar16 + 0x18) = (int)*(short *)(uVar16 + 0xc);
      *(int *)(uVar16 + 0x1c) = (int)*(short *)(uVar16 + 0xe);
    }
  }
  else {
    for (; uVar16 < uVar13; uVar16 = uVar16 + 0x30) {
      *(int *)(uVar16 + 0x18) = (int)*(short *)(uVar16 + 0xe);
      *(int *)(uVar16 + 0x1c) = (int)*(short *)(uVar16 + 0xc);
    }
  }
  iVar27 = 0;
  if (local_b0 < local_a0) {
    pbVar18 = (byte *)0x0;
    local_c8 = local_cc;
LAB_180584452:
    puVar4 = (ushort *)*local_b0;
    iVar23 = -32000;
    local_dc = -32000;
    local_res8 = 0;
    bVar9 = false;
    local_res18 = 0;
    iVar27 = 32000;
    local_f4 = 32000;
    local_f0 = -32000;
    iVar19 = -32000;
    local_e4 = 32000;
    iVar24 = 32000;
    local_e0 = -32000;
    pbVar28 = (byte *)0x0;
    local_res20 = 0;
    local_f8 = 0;
    local_d4 = 32000;
    local_d0 = -32000;
    puVar22 = puVar4;
    if ((*puVar4 & 0x40) == 0) {
      cVar1 = *(char *)(*(longlong *)(puVar4 + 0x14) + 3);
      iVar20 = -(int)cVar1;
      if (-1 < cVar1) {
        iVar20 = (int)cVar1;
      }
      if (iVar20 == local_cc) {
        bVar2 = *(byte *)((longlong)puVar4 + 3);
        iVar20 = -(int)(char)bVar2;
        if (-1 < (char)bVar2) {
          iVar20 = (int)(char)bVar2;
        }
        if (iVar20 == local_cc) {
          do {
            puVar22 = *(ushort **)(puVar22 + 0x14);
            bVar2 = *(byte *)((longlong)puVar22 + 3);
            iVar20 = -(int)(char)bVar2;
            if (-1 < (char)bVar2) {
              iVar20 = (int)(char)bVar2;
            }
            if (iVar20 != local_cc) {
              puVar22 = *(ushort **)(puVar22 + 0x10);
              break;
            }
          } while (puVar22 != puVar4);
        }
      }
    }
    bVar10 = false;
    iVar20 = 32000;
    iVar30 = -32000;
    local_c0 = puVar22;
    uVar15 = 0;
LAB_180584530:
    if (bVar9) {
      iVar31 = *(int *)(puVar22 + 0xc);
      iVar11 = iVar31;
      if (iVar20 <= iVar31) {
        iVar11 = iVar20;
      }
      iVar20 = iVar11;
      iVar11 = *(int *)(puVar22 + 0xe);
      if (iVar31 <= iVar23) {
        iVar31 = iVar23;
      }
      iVar23 = iVar31;
      if (iVar11 < iVar27) {
        local_res8 = *puVar22;
        iVar27 = iVar11;
        uVar15 = local_res8;
      }
      if (iVar30 < iVar11) {
        local_res18 = *puVar22;
        iVar30 = iVar11;
        local_dc = iVar11;
      }
      if ((*puVar22 & 3) == 0) {
        if (iVar11 < iVar24) {
          iVar24 = iVar11;
        }
        if (iVar19 < iVar11) {
          iVar19 = iVar11;
        }
      }
      sVar29 = (short)iVar30;
      sVar26 = (short)iVar27;
      if ((*puVar22 >> 6 & 1) != 0) {
LAB_1805847fd:
        *(short *)(pbVar18 + 2) = (short)(iVar23 + iVar20 >> 1);
        *(ushort **)(pbVar18 + 0x40) = puVar22;
        *(short *)(pbVar18 + 4) = (short)(iVar23 - iVar20 >> 1);
        if (((((byte)local_res18 | (byte)uVar15) & 3) != 0) && (iVar19 - iVar24 < (int)local_d8)) {
          *pbVar18 = *pbVar18 | 1;
        }
        local_f8 = local_res18;
        *(short *)(pbVar18 + 6) = sVar26;
        *(short *)(pbVar18 + 10) = sVar29 - sVar26;
        *(short *)(pbVar18 + 8) = sVar29;
        bVar9 = false;
        pbVar17 = (byte *)0x0;
        pbVar28 = pbVar18;
        local_res20 = uVar15;
        local_f4 = iVar20;
        local_f0 = iVar23;
        local_e4 = iVar27;
        local_e0 = iVar30;
        local_d4 = iVar24;
        local_d0 = iVar19;
        goto LAB_18058488c;
      }
      if (((char)*(byte *)((longlong)puVar22 + 3) != local_c8) || (puVar22 == local_c0)) {
        if ((pbVar28 != (byte *)0x0) &&
           (*(longlong *)(pbVar18 + 0x38) == *(longlong *)(pbVar28 + 0x40))) {
          if (*(byte *)(*(longlong *)(pbVar28 + 0x40) + 2) == (byte)puVar22[1]) {
            if (local_f4 < iVar20) {
              iVar20 = local_f4;
            }
            if (iVar23 < local_f0) {
              iVar23 = local_f0;
            }
            if (local_e4 < iVar27) {
              local_res8 = local_res20;
              iVar27 = local_e4;
              uVar15 = local_res20;
            }
            if (iVar30 < local_e0) {
              local_res18 = local_f8;
              local_dc = local_e0;
              iVar30 = local_e0;
            }
            *(ushort **)(pbVar28 + 0x40) = puVar22;
            if (local_d4 < iVar24) {
              iVar24 = local_d4;
            }
            if (iVar19 < local_d0) {
              iVar19 = local_d0;
            }
            *(short *)(pbVar28 + 2) = (short)(iVar23 + iVar20 >> 1);
            *(short *)(pbVar28 + 4) = (short)(iVar23 - iVar20 >> 1);
            if (((((byte)local_res18 | (byte)uVar15) & 3) == 0) ||
               ((int)local_d8 <= iVar19 - iVar24)) {
              *pbVar28 = *pbVar28 & 0xfe;
            }
            else {
              *pbVar28 = *pbVar28 | 1;
            }
            *(short *)(pbVar28 + 6) = (short)iVar27;
            *(short *)(pbVar28 + 8) = (short)iVar30;
            *(short *)(pbVar28 + 10) = (short)iVar30 - (short)iVar27;
            *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) =
                 *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) + -1;
            bVar9 = false;
            pbVar17 = (byte *)0x0;
          }
          else {
            iVar31 = -(local_e0 - local_e4);
            if (iVar31 < 0) {
              iVar31 = local_e0 - local_e4;
            }
            iVar11 = -(iVar30 - iVar27);
            if (iVar11 < 0) {
              iVar11 = iVar30 - iVar27;
            }
            uVar15 = local_res8;
            if (iVar11 < iVar31) {
              *(ushort **)(pbVar28 + 0x40) = puVar22;
              if (iVar20 < local_f4) {
                local_f4 = iVar20;
              }
              if (local_f0 < iVar23) {
                local_f0 = iVar23;
              }
              *(short *)(pbVar28 + 2) = (short)(local_f0 + local_f4 >> 1);
              *(short *)(pbVar28 + 4) = (short)(local_f0 - local_f4 >> 1);
              *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) =
                   *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) + -1;
              bVar9 = false;
              pbVar17 = (byte *)0x0;
            }
            else {
              if (local_f4 < iVar20) {
                iVar20 = local_f4;
              }
              *(ushort **)(pbVar18 + 0x40) = puVar22;
              if (iVar23 < local_f0) {
                iVar23 = local_f0;
              }
              *(short *)(pbVar18 + 2) = (short)(iVar23 + iVar20 >> 1);
              *(short *)(pbVar18 + 4) = (short)(iVar23 - iVar20 >> 1);
              if (((((byte)local_res18 | (byte)local_res8) & 3) != 0) &&
                 (iVar19 - iVar24 < (int)local_d8)) {
                *pbVar18 = *pbVar18 | 1;
              }
              *(short *)(pbVar18 + 6) = sVar26;
              *(short *)(pbVar18 + 8) = sVar29;
              *(short *)(pbVar18 + 10) = sVar29 - sVar26;
              uVar12 = *(undefined8 *)(pbVar18 + 8);
              local_f8 = local_res18;
              *(undefined8 *)pbVar28 = *(undefined8 *)pbVar18;
              *(undefined8 *)(pbVar28 + 8) = uVar12;
              uVar12 = *(undefined8 *)(pbVar18 + 0x18);
              *(undefined8 *)(pbVar28 + 0x10) = *(undefined8 *)(pbVar18 + 0x10);
              *(undefined8 *)(pbVar28 + 0x18) = uVar12;
              uVar12 = *(undefined8 *)(pbVar18 + 0x28);
              local_res20 = local_res8;
              *(undefined8 *)(pbVar28 + 0x20) = *(undefined8 *)(pbVar18 + 0x20);
              *(undefined8 *)(pbVar28 + 0x28) = uVar12;
              uVar6 = *(undefined4 *)(pbVar18 + 0x34);
              uVar7 = *(undefined4 *)(pbVar18 + 0x38);
              uVar8 = *(undefined4 *)(pbVar18 + 0x3c);
              *(undefined4 *)(pbVar28 + 0x30) = *(undefined4 *)(pbVar18 + 0x30);
              *(undefined4 *)(pbVar28 + 0x34) = uVar6;
              *(undefined4 *)(pbVar28 + 0x38) = uVar7;
              *(undefined4 *)(pbVar28 + 0x3c) = uVar8;
              *(undefined8 *)(pbVar28 + 0x40) = *(undefined8 *)(pbVar18 + 0x40);
              *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) =
                   *(int *)(param_1 + (longlong)param_2 * 0x113 + 9) + -1;
              bVar9 = false;
              pbVar17 = (byte *)0x0;
              local_f4 = iVar20;
              local_f0 = iVar23;
              local_e4 = iVar27;
              local_e0 = iVar30;
              local_d4 = iVar24;
              local_d0 = iVar19;
            }
          }
          goto LAB_18058488c;
        }
        goto LAB_1805847fd;
      }
    }
    else {
      pbVar17 = pbVar18;
LAB_18058488c:
      pbVar18 = pbVar17;
      if (puVar22 == local_c0) {
        if (bVar10) goto LAB_180584aed;
        bVar10 = true;
      }
    }
    if ((*puVar22 & 0x40) == 0) {
      if (bVar9) goto LAB_180584adc;
      bVar2 = *(byte *)((longlong)puVar22 + 3);
      iVar31 = (int)(char)bVar2;
      iVar30 = -iVar31;
      if (-1 < (char)bVar2) {
        iVar30 = iVar31;
      }
      if ((iVar30 != local_cc) && (puVar22 != *(ushort **)(puVar22 + 0x14))) {
        iVar30 = local_dc;
        goto LAB_180584adc;
      }
      uVar21 = *(uint *)(param_1 + (longlong)param_2 * 0x113 + 9);
      if (1000 < uVar21) {
        *(undefined4 *)(param_1 + (longlong)param_2 * 0x113 + 9) = 0;
        return 0;
      }
      local_e8 = 0;
      local_ec = 0;
      pbVar18 = (byte *)0x0;
      local_c8 = iVar31;
      if (uVar21 < 0x12) {
        if (param_1[(longlong)param_2 * 0x113 + 10] == 0) {
          *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 0x898 + 0x4c) = 0x12;
          param_1[(longlong)param_2 * 0x113 + 10] = param_1 + (longlong)param_2 * 0x113 + 0xe;
        }
LAB_1805849ff:
        pbVar18 = (byte *)(param_1[(longlong)param_2 * 0x113 + 10] +
                          (ulonglong)*(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) * 0x48);
        *(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) =
             *(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) + 1;
      }
      else {
        uVar3 = *(uint *)((longlong)param_1 + (longlong)param_2 * 0x898 + 0x4c);
        if (uVar21 < uVar3) goto LAB_1805849ff;
        if (uVar3 < 0x1c71c71) {
          uVar21 = (uVar3 >> 2) + 4 + uVar3;
          if ((uVar21 < uVar3) || (0x1c71c71 < uVar21)) {
            uVar21 = 0x1c71c71;
          }
          if ((undefined8 *)param_1[(longlong)param_2 * 0x113 + 10] ==
              param_1 + (longlong)param_2 * 0x113 + 0xe) {
            uVar12 = FUN_18057ad10(local_b8,0x48,0,uVar21,0,&local_ec);
            param_1[(longlong)param_2 * 0x113 + 10] = uVar12;
            local_e8 = local_ec;
            if (local_ec != 0) {
              return local_ec;
            }
            FUN_18063aed0(uVar12,param_1 + (longlong)param_2 * 0x113 + 0xe,0x510);
            local_e8 = local_ec;
          }
          else {
            uVar12 = FUN_18057ad10(local_b8,0x48,uVar3,uVar21,
                                   (undefined8 *)param_1[(longlong)param_2 * 0x113 + 10],&local_ec);
            param_1[(longlong)param_2 * 0x113 + 10] = uVar12;
            local_e8 = 0;
            if (local_ec != 0) {
              return local_ec;
            }
          }
          *(uint *)((longlong)param_1 + (longlong)param_2 * 0x898 + 0x4c) = uVar21;
          goto LAB_1805849ff;
        }
        local_e8 = 0x40;
      }
      if (local_e8 != 0) {
        return local_e8;
      }
      *(undefined8 *)pbVar18 = local_98;
      *(undefined8 *)(pbVar18 + 8) = uStack_90;
      pbVar18[0x10] = 0;
      pbVar18[0x11] = 0;
      pbVar18[0x12] = 0;
      pbVar18[0x13] = 0;
      pbVar18[0x14] = 0;
      pbVar18[0x15] = 0;
      pbVar18[0x16] = 0;
      pbVar18[0x17] = 0;
      pbVar18[0x18] = 0;
      pbVar18[0x19] = 0;
      pbVar18[0x1a] = 0;
      pbVar18[0x1b] = 0;
      pbVar18[0x1c] = 0;
      pbVar18[0x1d] = 0;
      pbVar18[0x1e] = 0;
      pbVar18[0x1f] = 0;
      pbVar18[0x20] = 0;
      pbVar18[0x21] = 0;
      pbVar18[0x22] = 0;
      pbVar18[0x23] = 0;
      pbVar18[0x24] = 0;
      pbVar18[0x25] = 0;
      pbVar18[0x26] = 0;
      pbVar18[0x27] = 0;
      pbVar18[0x28] = 0;
      pbVar18[0x29] = 0;
      pbVar18[0x2a] = 0;
      pbVar18[0x2b] = 0;
      pbVar18[0x2c] = 0;
      pbVar18[0x2d] = 0;
      pbVar18[0x2e] = 0;
      pbVar18[0x2f] = 0;
      *(undefined4 *)(pbVar18 + 0x30) = (undefined4)local_68;
      *(undefined4 *)(pbVar18 + 0x34) = local_68._4_4_;
      *(undefined4 *)(pbVar18 + 0x38) = (undefined4)uStack_60;
      *(undefined4 *)(pbVar18 + 0x3c) = uStack_60._4_4_;
      pbVar18[1] = bVar2;
      *(ushort **)(pbVar18 + 0x38) = puVar22;
      *(ushort **)(pbVar18 + 0x40) = puVar22;
      if (pbVar28 != (byte *)0x0) {
        pbVar28 = pbVar18 + -0x48;
      }
      local_res8 = *puVar22;
      iVar27 = *(int *)(puVar22 + 0xe);
      iVar23 = *(int *)(puVar22 + 0xc);
      if ((local_res8 & 3) == 0) {
        iVar19 = iVar27;
        iVar24 = iVar27;
      }
      else {
        iVar19 = -32000;
        iVar24 = 32000;
      }
      bVar9 = true;
      iVar20 = iVar23;
      iVar30 = iVar27;
      local_res18 = local_res8;
      local_dc = iVar27;
      uVar15 = local_res8;
      if (puVar22 != *(ushort **)(puVar22 + 0x14)) goto LAB_180584adc;
      *(short *)(pbVar18 + 2) = (short)iVar23;
      if ((*puVar22 & 3) != 0) {
        *pbVar18 = *pbVar18 | 1;
      }
      *(ushort *)(pbVar18 + 6) = puVar22[0xe];
      *(ushort *)(pbVar18 + 8) = puVar22[0xe];
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      bVar9 = false;
      puVar22 = *(ushort **)(puVar22 + 0x10);
      pbVar18 = (byte *)0x0;
    }
    else {
LAB_180584adc:
      puVar22 = *(ushort **)(puVar22 + 0x10);
    }
    goto LAB_180584530;
  }
LAB_180584b13:
  uVar16 = param_1[(longlong)param_2 * 0x113 + 10];
  if ((uVar16 != 0) &&
     (uVar13 = uVar16 + (ulonglong)*(uint *)(param_1 + (longlong)param_2 * 0x113 + 9) * 0x48,
     uVar16 < uVar13)) {
    psVar14 = (short *)(uVar16 + 10);
    lVar25 = ((uVar13 - uVar16) - 1) / 0x48 + 1;
    do {
      lVar5 = *(longlong *)(psVar14 + 0x1b);
      iVar23 = *(int *)(*(longlong *)(psVar14 + 0x17) + 0x1c);
      iVar19 = *(int *)(lVar5 + 0x1c);
      iVar24 = *(int *)(*(longlong *)(*(longlong *)(psVar14 + 0x17) + 0x28) + 0x1c);
      if (iVar23 < iVar19) {
        if (iVar24 < iVar23) {
          *psVar14 = *psVar14 + (short)(iVar23 - iVar24 >> 1);
        }
        iVar23 = *(int *)(*(longlong *)(lVar5 + 0x20) + 0x1c);
        if (iVar19 < iVar23) {
          *psVar14 = *psVar14 + (short)(iVar23 - iVar19 >> 1);
        }
      }
      else {
        if (iVar23 < iVar24) {
          *psVar14 = *psVar14 + (short)(iVar24 - iVar23 >> 1);
        }
        iVar23 = *(int *)(*(longlong *)(lVar5 + 0x20) + 0x1c);
        if (iVar23 < iVar19) {
          *psVar14 = *psVar14 + (short)(iVar19 - iVar23 >> 1);
        }
      }
      psVar14 = psVar14 + 0x24;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  return iVar27;
LAB_180584aed:
  local_b0 = local_b0 + 1;
  if (local_a0 <= local_b0) goto code_r0x000180584b0e;
  goto LAB_180584452;
code_r0x000180584b0e:
  iVar27 = local_e8;
  goto LAB_180584b13;
}



