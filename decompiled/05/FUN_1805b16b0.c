// FUN_1805b16b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b16b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b16b0(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte bVar18;
  undefined4 *puVar19;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  int *local_f0;
  uint local_e8;
  byte *local_e0;
  int local_d8;
  uint local_d4;
  uint local_d0;
  longlong local_c8;
  longlong *local_c0;
  int local_b8;
  byte *local_b0;
  longlong *local_a8;
  byte *local_a0;
  undefined4 *local_98;
  longlong local_90;
  byte *local_88;
  byte *local_80;
  int local_78;
  undefined4 local_70 [4];
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  uVar16 = (ulonglong)param_4;
  local_d4 = param_4;
  local_c8 = param_2;
  local_c0 = param_1;
  local_a8 = param_3;
  FUN_1805b1210(param_1,&local_88);
  if (local_78 == 0) {
  }
  iVar10 = *(int *)(param_2 + 0x14);
  local_e8 = 1;
  local_b0 = local_80;
  local_d0 = 0;
  if (iVar10 == 7) {
    lVar8 = *param_1;
    lVar2 = local_c0[2];
    local_c0[2] = (longlong)(local_80 + -1);
    *local_c0 = (longlong)(local_88 + 1);
    FUN_1805b1210(local_c0,local_70);
    *local_c0 = lVar8;
    local_c0[2] = lVar2;
    pbVar13 = local_88;
    param_1 = local_c0;
    pbVar17 = local_80;
    if (local_60 != 3) goto LAB_1805b17bb;
    iVar10 = 8;
LAB_1805b1796:
    local_b0 = local_80 + -1;
    if (param_4 == 0) {
    }
    local_d0 = 1;
    local_88 = local_88 + 1;
  }
  else if (local_78 == 3) {
    local_e8 = param_4;
    goto LAB_1805b1796;
  }
  pbVar13 = local_88;
  pbVar17 = local_b0;
  if (local_e8 == 0) {
switchD_1805b1855_default:
  }
LAB_1805b17bb:
  local_b8 = iVar10 + -1;
  lVar8 = local_c8;
  do {
    plVar15 = (longlong *)(local_a8[local_d0] + (ulonglong)*(uint *)(lVar8 + 0x20));
    if (pbVar13 < pbVar17) {
      do {
        bVar18 = *pbVar13;
        if ((bVar18 != 0x20) && ((0xd < bVar18 || ((0x3601U >> (bVar18 & 0x1f) & 1) == 0)))) {
          if (bVar18 != 0x25) break;
          for (; ((pbVar13 < pbVar17 && (*pbVar13 != 0xd)) && (*pbVar13 != 10));
              pbVar13 = pbVar13 + 1) {
          }
        }
        pbVar13 = pbVar13 + 1;
      } while (pbVar13 < pbVar17);
      uVar16 = (ulonglong)local_d4;
    }
    local_e0 = pbVar13;
    switch(local_b8) {
    case 0:
      pbVar7 = pbVar13 + 3;
      if ((((pbVar7 < pbVar17) && (*pbVar13 == 0x74)) && (pbVar13[1] == 0x72)) &&
         ((pbVar13[2] == 0x75 && (*pbVar7 == 0x65)))) {
        pbVar13 = pbVar13 + 5;
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        if ((((pbVar13 + 4 < pbVar17) && ((*pbVar13 == 0x66 && (pbVar13[1] == 0x61)))) &&
            (pbVar13[2] == 0x6c)) && ((*pbVar7 == 0x73 && (pbVar13[4] == 0x65)))) {
          pbVar13 = pbVar13 + 6;
        }
      }
      break;
    case 1:
      uVar6 = FUN_1805b42c0(&local_e0,pbVar17,10);
      if (local_e0 == pbVar13) {
        uVar6 = 0;
      }
      else {
        if ((local_e0 < pbVar17) && (*local_e0 == 0x23)) {
          pbVar7 = local_e0 + 1;
          local_e0 = pbVar7;
          uVar6 = FUN_1805b42c0(&local_e0,pbVar17);
          if (local_e0 == pbVar7) {
            uVar6 = 0;
            break;
          }
        }
        pbVar13 = local_e0;
      }
      break;
    case 2:
      uVar14 = 0;
      goto LAB_1805b18d3;
    case 3:
      uVar14 = 3;
LAB_1805b18d3:
      uVar6 = FUN_1805b43e0(&local_e0,pbVar17,uVar14);
      pbVar13 = local_e0;
      break;
    case 4:
    case 5:
      lVar8 = param_1[4];
      iVar10 = (int)pbVar17 - (int)pbVar13;
      if (pbVar13 < pbVar17) {
        if (local_78 == 4) {
          uVar11 = iVar10 - 1;
        }
        else {
          if (local_78 != 2) {
          }
          uVar11 = iVar10 - 2;
        }
        pbVar7 = pbVar13 + 1;
        if (*plVar15 != 0) {
          FUN_18057abd0(lVar8);
          *plVar15 = 0;
        }
        lVar8 = FUN_18057abe0(lVar8,uVar11 + 1,&local_d8);
        if (local_d8 != 0) {
        }
        FUN_18063aed0(lVar8,pbVar7,(ulonglong)uVar11);
        *(undefined1 *)((ulonglong)uVar11 + lVar8) = 0;
        *plVar15 = lVar8;
        goto LAB_1805b1c89;
      }
      goto LAB_1805b1c8e;
    case 6:
      iVar10 = 0;
      pbVar7 = pbVar13;
      if (pbVar13 < pbVar17) {
        if (*pbVar13 == 0x5b) {
          bVar18 = 0x5d;
          local_e0 = pbVar13 + 1;
        }
        else if (*pbVar13 == 0x7b) {
          bVar18 = 0x7d;
          local_e0 = pbVar13 + 1;
        }
        else {
          bVar18 = 0;
        }
        pbVar7 = local_e0;
        if (local_e0 < pbVar17) {
          do {
            pbVar13 = local_e0;
            if (local_e0 < pbVar17) {
              do {
                bVar1 = *local_e0;
                if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
                  if (bVar1 != 0x25) break;
                  for (; ((local_e0 < pbVar17 && (*local_e0 != 0xd)) && (*local_e0 != 10));
                      local_e0 = local_e0 + 1) {
                  }
                }
                local_e0 = local_e0 + 1;
              } while (local_e0 < pbVar17);
              uVar16 = (ulonglong)local_d4;
              pbVar13 = local_e0;
            }
            pbVar7 = pbVar13;
            if (pbVar17 <= pbVar13) break;
            if (*pbVar13 == bVar18) {
              pbVar7 = pbVar13 + 1;
              break;
            }
            local_e0 = pbVar13;
            if (3 < iVar10) goto LAB_1805b1aee;
            uVar6 = FUN_1805b43e0(&local_e0,pbVar17,0);
            local_70[iVar10] = uVar6;
            if (pbVar13 == local_e0) {
            }
            iVar10 = iVar10 + 1;
            pbVar7 = local_e0;
            pbVar13 = local_e0;
            if ((bVar18 == 0) || (pbVar17 <= local_e0)) break;
          } while( true );
        }
      }
      local_e0 = pbVar13;
      if (iVar10 < 4) {
      }
LAB_1805b1aee:
      uVar6 = FUN_1805778f0(local_70[0]);
      *(undefined4 *)plVar15 = uVar6;
      uVar6 = FUN_1805778f0(local_70[1]);
      *(undefined4 *)((longlong)plVar15 + 4) = uVar6;
      uVar6 = FUN_1805778f0(local_70[2]);
      *(undefined4 *)(plVar15 + 1) = uVar6;
      uVar6 = FUN_1805778f0(local_70[3]);
      *(undefined4 *)((longlong)plVar15 + 0xc) = uVar6;
      goto LAB_1805b1c89;
    case 7:
      lVar8 = param_1[4];
      local_f0 = &local_d8;
      uVar11 = (uint)uVar16;
      local_f8 = 0;
      local_90 = lVar8;
      puVar9 = (undefined4 *)FUN_18057ac40(lVar8,4,0,uVar11 * 4);
      if (local_d8 == 0) {
        uVar12 = 0;
        local_98 = puVar9;
        do {
          local_f8 = local_f8 & 0xffffffff00000000;
          uVar5 = FUN_1805bd250(&local_e0,pbVar17,uVar16,puVar9 + uVar11 * uVar12);
          uVar4 = local_d4;
          if (((int)uVar5 < 0) || (uVar5 < uVar11)) {
            local_d8 = 3;
            FUN_18057abd0(lVar8,puVar9);
          }
          local_a0 = local_e0;
          if (local_e0 < pbVar17) {
            do {
              bVar18 = *local_e0;
              if ((bVar18 != 0x20) && ((0xd < bVar18 || ((0x3601U >> (bVar18 & 0x1f) & 1) == 0)))) {
                if (bVar18 != 0x25) break;
                for (; ((local_e0 < pbVar17 && (*local_e0 != 0xd)) && (*local_e0 != 10));
                    local_e0 = local_e0 + 1) {
                }
              }
              local_e0 = local_e0 + 1;
            } while (local_e0 < pbVar17);
            lVar8 = local_90;
            local_a0 = local_e0;
          }
          uVar12 = uVar12 + 1;
          local_e0 = local_a0;
        } while (uVar12 < 4);
        if (uVar11 != 0) {
          uVar11 = uVar11 * 2;
          plVar15 = local_a8;
          puVar19 = puVar9;
          do {
            puVar3 = (undefined4 *)*plVar15;
            uVar6 = FUN_1805778f0(*puVar19);
            *puVar3 = uVar6;
            uVar6 = FUN_1805778f0(puVar9[uVar11 - uVar4]);
            puVar3[1] = uVar6;
            uVar6 = FUN_1805778f0(puVar9[uVar11]);
            puVar3[2] = uVar6;
            uVar6 = FUN_1805778f0(puVar9[uVar11 + uVar4]);
            uVar11 = uVar11 + 1;
            puVar3[3] = uVar6;
            plVar15 = plVar15 + 1;
            puVar19 = puVar19 + 1;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          uVar16 = (ulonglong)local_d4;
          lVar8 = local_90;
          pbVar17 = local_b0;
          puVar9 = local_98;
        }
        pbVar7 = local_a0;
        FUN_18057abd0(lVar8,puVar9);
LAB_1805b1c89:
        pbVar13 = pbVar7;
LAB_1805b1c8e:
        lVar8 = local_c8;
        goto LAB_1805b1c92;
      }
    default:
      goto switchD_1805b1855_default;
    }
    if (*(char *)(lVar8 + 0x24) == '\x01') {
      *(char *)plVar15 = (char)uVar6;
    }
    else if (*(char *)(lVar8 + 0x24) == '\x02') {
      *(short *)plVar15 = (short)uVar6;
    }
    else {
      *(undefined4 *)plVar15 = uVar6;
    }
LAB_1805b1c92:
    local_e8 = local_e8 - 1;
    local_d0 = local_d0 + 1;
    if (local_e8 == 0) {
    }
    param_1 = local_c0;
  } while( true );
}



