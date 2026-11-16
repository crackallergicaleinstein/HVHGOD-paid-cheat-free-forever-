// FUN_1802808a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802808a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802808a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  byte *pbVar14;
  ulonglong uVar15;
  short *psVar16;
  longlong *plVar17;
  byte *pbVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar24;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [40];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  short local_84;
  undefined1 local_80 [16];
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined1 local_60 [12];
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  local_90 = (longlong *)0x0;
  local_84 = 0;
  uStack_70 = 0;
  uStack_68 = 0xf;
  local_80._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_80._1_15_;
  local_80 = auVar4 << 8;
  auVar4 = local_80;
  _local_60 = (undefined1  [16])0x0;
  local_98 = *param_3;
  local_88 = (undefined4)param_3[1];
  local_f8 = param_2;
  if (local_98 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = local_88;
    *(undefined2 *)((longlong)param_2 + 0x14) = 0;
    local_80._8_8_ = SUB168((undefined1  [16])0x0,8);
    param_2[3] = 0;
    param_2[4] = local_80._8_8_;
    param_2[5] = 0;
    param_2[6] = 0xf;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)((longlong)param_2 + 0x44) = 0;
    local_80 = auVar4;
    goto LAB_180280945;
  }
  lVar20 = -1;
  iVar9 = DAT_180c65280;
  if (DAT_180c65280 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180c65278) {
      iVar9 = 0;
    }
    else {
      local_f8 = (longlong *)&DAT_1808f23c0;
      iVar9 = FUN_1805f68d0(&DAT_1808f23c0);
      if (iVar9 != 0) goto LAB_1802812e3;
      if (DAT_1808f240c == 0x7fffffff) {
        DAT_1808f240c = 0x7ffffffe;
        goto LAB_1802812d8;
      }
      if ((DAT_180c65280 == 0) && (DAT_180c65278 <= UVar11)) {
        DAT_180c65280 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c65280 == 0) {
          DAT_180c65278 = UVar11 + 1000;
        }
        else {
          DAT_180c65278 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c65280;
      FUN_1805f68fc(&DAT_1808f23c0);
    }
  }
  lVar12 = *(longlong *)(iVar9 + local_98);
  if (lVar12 == 0) {
    *param_2 = local_98;
LAB_180280a51:
    param_2[1] = (longlong)local_90;
    *(undefined4 *)(param_2 + 2) = local_88;
    *(short *)((longlong)param_2 + 0x14) = local_84;
  }
  else {
    iVar9 = DAT_180c65260;
    if (DAT_180c65260 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c65268) {
        iVar9 = 0;
      }
      else {
        local_f8 = (longlong *)&DAT_1808f2410;
        iVar9 = FUN_1805f68d0(&DAT_1808f2410);
        if (iVar9 != 0) goto LAB_1802812e3;
        if (DAT_1808f245c == 0x7fffffff) {
          DAT_1808f245c = 0x7ffffffe;
          goto LAB_1802812d8;
        }
        if ((DAT_180c65260 == 0) && (DAT_180c65268 <= UVar11)) {
          DAT_180c65260 = FUN_1804174b0("CGameSceneNode",0xf9373b5e);
          if (DAT_180c65260 == 0) {
            DAT_180c65268 = UVar11 + 1000;
          }
          else {
            DAT_180c65268 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c65260;
        FUN_1805f68fc(&DAT_1808f2410);
      }
    }
    if (*(char *)(iVar9 + lVar12) != '\0') goto LAB_180280b4e;
    iVar9 = DAT_180c65258;
    if (DAT_180c65258 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c65250) {
        iVar9 = 0;
      }
      else {
        local_f8 = (longlong *)&DAT_1808f2370;
        iVar9 = FUN_1805f68d0(&DAT_1808f2370);
        if (iVar9 != 0) goto LAB_1802812e3;
        if (DAT_1808f23bc == 0x7fffffff) {
          DAT_1808f23bc = 0x7ffffffe;
          goto LAB_1802812d8;
        }
        if ((DAT_180c65258 == 0) && (DAT_180c65250 <= UVar11)) {
          DAT_180c65258 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c65258 == 0) {
            DAT_180c65250 = UVar11 + 1000;
          }
          else {
            DAT_180c65250 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c65258;
        FUN_1805f68fc(&DAT_1808f2370);
      }
    }
    if ((*(int *)(iVar9 + local_98) != 0) && (*(int *)(iVar9 + local_98) != -1)) {
      *param_2 = local_98;
      goto LAB_180280a51;
    }
    iVar9 = DAT_180c6525c;
    if (DAT_180c6525c == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c65238) {
        iVar9 = 0;
      }
      else {
        local_f8 = (longlong *)&DAT_1808f2320;
        iVar9 = FUN_1805f68d0(&DAT_1808f2320);
        if (iVar9 != 0) goto LAB_1802812e3;
        if (DAT_1808f236c == 0x7fffffff) {
          DAT_1808f236c = 0x7ffffffe;
          goto LAB_1802812d8;
        }
        if ((DAT_180c6525c == 0) && (DAT_180c65238 <= UVar11)) {
          DAT_180c6525c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c6525c == 0) {
            DAT_180c65238 = UVar11 + 1000;
          }
          else {
            DAT_180c65238 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c6525c;
        FUN_1805f68fc(&DAT_1808f2320);
      }
    }
    plVar1 = *(longlong **)(iVar9 + lVar12);
    fVar2 = *(float *)((longlong)iVar9 + 8 + lVar12);
    local_f8._4_4_ = (float)((ulonglong)plVar1 >> 0x20);
    local_60._8_4_ = fVar2;
    local_60._0_8_ = plVar1;
    fVar3 = local_f8._4_4_ + SUB84(plVar1,0);
    local_f8 = plVar1;
    sVar8 = thunk_FUN_180624430(fVar3 + fVar2);
    if (0 < sVar8) {
LAB_180280b4e:
      *param_2 = local_98;
      goto LAB_180280a51;
    }
    iVar9 = DAT_180c65248;
    if (DAT_180c65248 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c65240) {
        iVar9 = 0;
      }
      else {
        local_f8 = (longlong *)&DAT_1808f2280;
        iVar9 = FUN_1805f68d0(&DAT_1808f2280);
        if (iVar9 != 0) goto LAB_1802812e3;
        if (DAT_1808f22cc == 0x7fffffff) {
          DAT_1808f22cc = 0x7ffffffe;
          goto LAB_1802812d8;
        }
        if ((DAT_180c65248 == 0) && (DAT_180c65240 <= UVar11)) {
          DAT_180c65248 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
          if (DAT_180c65248 == 0) {
            DAT_180c65240 = UVar11 + 1000;
          }
          else {
            DAT_180c65240 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c65248;
        FUN_1805f68fc(&DAT_1808f2280);
      }
    }
    if (*(longlong *)(iVar9 + lVar12) != 0) goto LAB_180280b4e;
    local_84 = FUN_18027c670(local_98,local_88);
    iVar9 = DAT_180c6522c;
    if (DAT_180c6522c == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c65230) {
        iVar9 = 0;
      }
      else {
        local_f8 = (longlong *)&DAT_1808f22d0;
        iVar9 = FUN_1805f68d0(&DAT_1808f22d0);
        if (iVar9 != 0) goto LAB_1802812e3;
        if (DAT_1808f231c == 0x7fffffff) {
          DAT_1808f231c = 0x7ffffffe;
          goto LAB_1802812d8;
        }
        if ((DAT_180c6522c == 0) && (DAT_180c65230 <= UVar11)) {
          DAT_180c6522c = FUN_1804174b0("C_BaseEntity",0xc02ce796);
          if (DAT_180c6522c == 0) {
            DAT_180c65230 = UVar11 + 1000;
          }
          else {
            DAT_180c65230 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c6522c;
        FUN_1805f68fc(&DAT_1808f22d0);
      }
    }
    lVar19 = local_98 + 8 + (longlong)iVar9;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (lVar19 == 0) {
      bVar23 = false;
    }
    else {
      local_f8 = (longlong *)0x0;
      cVar7 = FUN_1804514f0(&local_f8,lVar19,8);
      if (cVar7 == '\0') {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
    }
    plVar1 = local_f8;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    uVar24 = extraout_XMM0_Qa;
    if (bVar23) {
      local_90 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        iVar9 = DAT_180c65228;
        if (DAT_180c65228 == 0) {
          UVar11 = GetTickCount64();
          if (UVar11 < DAT_180c65220) {
            iVar9 = 0;
          }
          else {
            local_f8 = (longlong *)&DAT_1808f2230;
            iVar9 = FUN_1805f68d0(&DAT_1808f2230);
            if (iVar9 != 0) {
LAB_1802812e3:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808f227c == 0x7fffffff) {
              DAT_1808f227c = 0x7ffffffe;
LAB_1802812d8:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c65228 == 0) && (DAT_180c65220 <= UVar11)) {
              DAT_180c65228 = FUN_1804174b0("CCSWeaponBaseVData",0x6750bacb);
              if (DAT_180c65228 == 0) {
                DAT_180c65220 = UVar11 + 1000;
              }
              else {
                DAT_180c65220 = 0xffffffffffffffff;
              }
            }
            iVar9 = DAT_180c65228;
            FUN_1805f68fc(&DAT_1808f2230);
          }
        }
        lVar19 = (longlong)iVar9 + (longlong)local_90;
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        bVar23 = false;
        if (lVar19 != 0) {
          local_f8 = (longlong *)0x0;
          cVar7 = FUN_1804514f0(&local_f8,lVar19,8);
          if (cVar7 == '\0') {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
        }
        plVar1 = local_f8;
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        plVar17 = (longlong *)0x0;
        if (bVar23) {
          plVar17 = plVar1;
        }
        uVar24 = extraout_XMM0_Qa_00;
        if (plVar17 != (longlong *)0x0) {
          pauVar13 = (undefined1 (*) [16])FUN_180454030(local_e0,plVar17,0x40);
          if (&local_80 != pauVar13) {
            FUN_18015c010(local_80);
            local_80 = *pauVar13;
            uStack_70 = *(ulonglong *)pauVar13[1];
            uStack_68 = *(ulonglong *)(pauVar13[1] + 8);
            *(undefined8 *)pauVar13[1] = 0;
            *(undefined8 *)(pauVar13[1] + 8) = 0xf;
            (*pauVar13)[0] = 0;
          }
          uVar24 = FUN_18015c010(local_e0);
        }
      }
    }
    else {
      local_90 = (longlong *)0x0;
    }
    if (uStack_70 == 0) {
      lVar12 = FUN_1803d3fa0(uVar24,local_98);
      if (lVar12 == 0) {
        local_e0 = (undefined1  [16])0x0;
        local_d0 = (undefined1  [16])0x0;
        bVar6 = false;
        bVar23 = true;
        FUN_18015ba30(local_e0,&DAT_1807d0c58,4);
        pauVar13 = &local_e0;
LAB_1802810ca:
        FUN_18015c010(local_80);
        local_80 = *pauVar13;
        uStack_70 = *(ulonglong *)pauVar13[1];
        uStack_68 = *(ulonglong *)(pauVar13[1] + 8);
        *(undefined8 *)pauVar13[1] = 0;
        *(undefined8 *)(pauVar13[1] + 8) = 0xf;
        (*pauVar13)[0] = 0;
      }
      else {
        pauVar13 = (undefined1 (*) [16])FUN_180454030(local_c0,lVar12,0x40);
        bVar6 = true;
        bVar23 = false;
        if (&local_80 != pauVar13) goto LAB_1802810ca;
      }
      if (bVar23) {
        FUN_18015c010(local_e0);
      }
      if (bVar6) {
        FUN_18015c010(local_c0);
      }
      uVar22 = uStack_68;
      uVar15 = uStack_70;
      pbVar18 = (byte *)local_80._0_8_;
      pbVar14 = local_80;
      if (0xf < uStack_68) {
        pbVar14 = (byte *)local_80._0_8_;
      }
      if ((7 < uStack_70) && (iVar9 = memcmp(pbVar14,"C_Weapon",8), iVar9 == 0)) {
        uVar21 = 8;
        if (uVar15 < 8) {
          uVar21 = uVar15;
        }
        pbVar14 = local_80;
        if (0xf < uVar22) {
          pbVar14 = pbVar18;
        }
        pbVar18 = pbVar14 + uVar21;
LAB_1802811bb:
        FUN_18063aed0(pbVar14,pbVar18,(uVar15 - uVar21) + 1);
        uStack_70 = uVar15 - uVar21;
        goto LAB_1802811c4;
      }
      pbVar14 = local_80;
      if (0xf < uVar22) {
        pbVar14 = pbVar18;
      }
      if (1 < uVar15) {
        bVar23 = *pbVar14 < 0x43;
        if ((*pbVar14 == 0x43) && (bVar23 = pbVar14[1] < 0x5f, pbVar14[1] == 0x5f)) {
          uVar10 = 0;
        }
        else {
          uVar10 = -(uint)bVar23 | 1;
        }
        if (uVar10 == 0) {
          uVar21 = 2;
          if (uVar15 < 2) {
            uVar21 = uVar15;
          }
          pbVar14 = local_80;
          if (0xf < uVar22) {
            pbVar14 = pbVar18;
          }
          pbVar18 = pbVar14 + uVar21;
          goto LAB_1802811bb;
        }
      }
    }
    else {
LAB_1802811c4:
      uVar15 = uStack_70;
      pbVar18 = (byte *)local_80._0_8_;
      uVar22 = uStack_68;
    }
    pbVar14 = local_80;
    if (0xf < uVar22) {
      pbVar14 = pbVar18;
    }
    if (6 < uVar15) {
      iVar9 = memcmp(pbVar14,"weapon_",7);
      if (iVar9 == 0) {
        uVar21 = 7;
        if (uVar15 < 7) {
          uVar21 = uVar15;
        }
        pbVar14 = local_80;
        if (0xf < uVar22) {
          pbVar14 = pbVar18;
        }
        FUN_18063aed0(pbVar14,pbVar14 + uVar21,(uVar15 - uVar21) + 1);
        uStack_70 = uVar15 - uVar21;
      }
    }
    if ((local_84 == 0x3b) || (sVar8 = local_84, (ushort)(local_84 - 500U) < 0x1b)) {
      sVar8 = 0x2a;
    }
    uVar15 = 0;
    psVar16 = &DAT_1806ff3e8;
    do {
      if (*psVar16 == sVar8) {
        if (-1 < (int)uVar15) {
          do {
            lVar20 = lVar20 + 1;
          } while ((&PTR_s_Glock_18_1806ff3d0)[(longlong)(int)uVar15 * 4][lVar20] != '\0');
          if (lVar20 != 0) {
            FUN_180113930(local_80,(&PTR_s_Glock_18_1806ff3d0)[(longlong)(int)uVar15 * 4],lVar20);
          }
        }
        break;
      }
      uVar15 = uVar15 + 1;
      psVar16 = psVar16 + 0x10;
    } while (uVar15 < 0x2c);
    *param_2 = local_98;
    param_2[1] = (longlong)local_90;
    *(undefined4 *)(param_2 + 2) = local_88;
    *(short *)((longlong)param_2 + 0x14) = local_84;
  }
  param_2[3] = local_80._0_8_;
  param_2[4] = local_80._8_8_;
  param_2[5] = uStack_70;
  param_2[6] = uStack_68;
  param_2[7] = local_60._0_8_;
  *(undefined4 *)(param_2 + 8) = local_60._8_4_;
  *(undefined4 *)((longlong)param_2 + 0x44) = uStack_54;
LAB_180280945:
  uStack_70 = 0;
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_80._1_15_;
  local_80 = auVar5 << 8;
  uStack_68 = 0xf;
  FUN_18015c010(local_80);
}



