// FUN_1803711b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803711b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803711b0(byte *****param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong *****ppppplVar3;
  char cVar4;
  byte bVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  longlong *****ppppplVar11;
  int iVar12;
  undefined *puVar13;
  ulonglong uVar14;
  byte *****pppppbVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  byte *****pppppbVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  int iVar22;
  undefined1 auStack_118 [32];
  byte local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  int local_e0;
  byte *****local_d8;
  longlong local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  longlong lStack_80;
  ulonglong uStack_78;
  byte *****local_70 [2];
  longlong local_60;
  ulonglong local_58;
  longlong *****local_50 [2];
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  if (param_1 != (byte *****)0x0) {
    local_d8 = param_1;
    puVar6 = (undefined *)FUN_180372af0();
    iVar22 = DAT_1808d9be0;
    puVar13 = &DAT_180c5a510;
    if (puVar6 != (undefined *)0x0) {
      puVar13 = puVar6;
    }
    puVar21 = (ulonglong *)(puVar13 + (ulonglong)((uint)((ulonglong)param_1 >> 4) & 0x7ff) * 0x10);
    local_e0 = DAT_1808d9be0;
    if (((byte *****)*puVar21 != param_1) || ((int)puVar21[1] != DAT_1808d9be0)) {
      local_c8 = puVar21;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (param_1 + 2 == (byte *****)0x0) {
        bVar2 = false;
        uVar20 = local_e8;
      }
      else {
        local_f0 = 0;
        cVar4 = FUN_1804514f0(&local_f0,param_1 + 2,8);
        if (cVar4 == '\0') {
          bVar2 = false;
          uVar20 = local_e8;
        }
        else {
          bVar2 = true;
          uVar20 = local_f0;
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      uVar16 = 0;
      if (bVar2) {
        uVar16 = uVar20;
      }
      FUN_180454030(local_70,uVar16,0x100);
      pppppbVar15 = (byte *****)local_70;
      if (0xf < local_58) {
        pppppbVar15 = local_70[0];
      }
      pppppbVar18 = (byte *****)((longlong)pppppbVar15 + local_60);
      for (; pppppbVar15 != pppppbVar18; pppppbVar15 = (byte *****)((longlong)pppppbVar15 + 1)) {
        if (*(byte *)pppppbVar15 == 0x5c) {
          bVar5 = 0x2f;
        }
        else {
          iVar12 = tolower((uint)*(byte *)pppppbVar15);
          bVar5 = (byte)iVar12;
        }
        *(byte *)pppppbVar15 = bVar5;
      }
      lStack_80 = 0;
      uStack_78 = 0xf;
      local_90._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar1[0xf] = 0;
      auVar1._0_15_ = local_90._1_15_;
      local_90 = auVar1 << 8;
      bVar5 = 0;
      local_f8 = 0;
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (param_1 + 3 == (byte *****)0x0) {
        bVar2 = false;
      }
      else {
        local_f0 = local_f0 & 0xffffffff00000000;
        cVar4 = FUN_1804514f0(&local_f0,param_1 + 3,4);
        if (cVar4 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      uVar20 = local_f0;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      uVar16 = 0;
      if (bVar2) {
        uVar16 = uVar20 & 0xffffffff;
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (param_1 + 4 == (byte *****)0x0) {
        bVar2 = false;
        uVar20 = local_e8;
      }
      else {
        local_f0 = 0;
        cVar4 = FUN_1804514f0(&local_f0,param_1 + 4,8);
        if (cVar4 == '\0') {
          bVar2 = false;
          uVar20 = local_e8;
        }
        else {
          bVar2 = true;
          uVar20 = local_f0;
        }
      }
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((((bVar2) && (uVar20 != 0)) && ((int)uVar16 - 1U < 0x200)) && (0 < (int)uVar16)) {
        lVar7 = uVar20 + 0x30;
        iVar22 = local_e0;
        do {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          if (lVar7 + -8 == 0) {
            bVar2 = false;
          }
          else {
            local_f0 = 0;
            cVar4 = FUN_1804514f0(&local_f0,lVar7 + -8,8);
            if (cVar4 == '\0') {
              bVar2 = false;
            }
            else {
              local_e8 = local_f0;
              bVar2 = true;
            }
          }
          uVar20 = local_e8;
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          uVar14 = 0;
          if (bVar2) {
            uVar14 = uVar20;
          }
          FUN_180454030(local_50,uVar14,0x60);
          uVar20 = local_38;
          lVar8 = local_40;
          ppppplVar3 = local_50[0];
          ppppplVar11 = (longlong *****)local_50;
          if (0xf < local_38) {
            ppppplVar11 = local_50[0];
          }
          if (local_40 == 6) {
            iVar12 = *(int *)ppppplVar11 + -0x64616853;
            if (iVar12 == 0) {
              iVar12 = *(ushort *)((longlong)ppppplVar11 + 4) - 0x7265;
            }
            if (iVar12 != 0) goto LAB_1803714bc;
LAB_1803714ef:
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            if (lVar7 == 0) {
              bVar2 = false;
            }
            else {
              local_f0 = 0;
              cVar4 = FUN_1804514f0(&local_f0,lVar7,8);
              if (cVar4 == '\0') {
                bVar2 = false;
              }
              else {
                local_b8 = local_f0;
                bVar2 = true;
              }
            }
            lVar9 = FUN_18017ea70();
            if (*(int *)(lVar9 + 4) != 0) {
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
            }
            uVar14 = 0;
            if (bVar2) {
              uVar14 = local_b8;
            }
            pauVar10 = (undefined1 (*) [16])FUN_180454030(local_b0,uVar14,0x60);
            if (&local_90 != pauVar10) {
              FUN_18015c010(local_90);
              local_90 = *pauVar10;
              lStack_80 = *(longlong *)pauVar10[1];
              uStack_78 = *(ulonglong *)(pauVar10[1] + 8);
              *(undefined8 *)pauVar10[1] = 0;
              *(undefined8 *)(pauVar10[1] + 8) = 0xf;
              (*pauVar10)[0] = 0;
            }
            FUN_18015c010(local_b0);
          }
          else {
LAB_1803714bc:
            ppppplVar11 = (longlong *****)local_50;
            if (0xf < local_38) {
              ppppplVar11 = local_50[0];
            }
            if (local_40 == 6) {
              iVar12 = *(int *)ppppplVar11 + -0x64616873;
              if (iVar12 == 0) {
                iVar12 = *(ushort *)((longlong)ppppplVar11 + 4) - 0x7265;
              }
              if (iVar12 == 0) goto LAB_1803714ef;
            }
          }
          ppppplVar11 = (longlong *****)local_50;
          if (0xf < uVar20) {
            ppppplVar11 = ppppplVar3;
          }
          if (lVar8 == 7) {
            iVar12 = *(int *)ppppplVar11 + -0x45445f46;
            if ((iVar12 == 0) &&
               (iVar12 = *(ushort *)((longlong)ppppplVar11 + 4) - 0x4143, iVar12 == 0)) {
              iVar12 = *(byte *)((longlong)ppppplVar11 + 6) - 0x4c;
            }
            if (iVar12 != 0) goto LAB_1803715c9;
LAB_180371605:
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (lVar7 + -0x30 == 0) {
              bVar2 = false;
            }
            else {
              local_f0 = local_f0 & 0xffffffff00000000;
              cVar4 = FUN_1804514f0(&local_f0,lVar7 + -0x30,4);
              if (cVar4 == '\0') {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                iVar22 = (int)local_f0;
              }
            }
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            if ((bVar2) && ((iVar22 == 1 || (iVar22 == 0x3f800000)))) {
              bVar5 = 1;
            }
            else {
              bVar5 = 0;
            }
            local_f8 = local_f8 | bVar5;
          }
          else {
LAB_1803715c9:
            ppppplVar11 = (longlong *****)local_50;
            if (0xf < uVar20) {
              ppppplVar11 = ppppplVar3;
            }
            if (lVar8 == 9) {
              lVar8 = (longlong)*ppppplVar11 + -0x414c5245564f5f46;
              if (lVar8 == 0) {
                lVar8 = (ulonglong)*(byte *)(ppppplVar11 + 1) - 0x59;
              }
              if (lVar8 == 0) goto LAB_180371605;
            }
          }
          FUN_18015c010(local_50);
          lVar7 = lVar7 + 0x40;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        puVar21 = local_c8;
        param_1 = local_d8;
        iVar22 = local_e0;
        bVar5 = local_f8;
      }
      puVar17 = (ulonglong *)local_90;
      if (0xf < uStack_78) {
        puVar17 = (ulonglong *)local_90._0_8_;
      }
      puVar19 = (ulonglong *)((longlong)puVar17 + lStack_80);
      if (puVar17 != puVar19) {
        do {
          iVar12 = tolower((uint)(byte)*puVar17);
          *(byte *)puVar17 = (byte)iVar12;
          puVar17 = (ulonglong *)((longlong)puVar17 + 1);
        } while (puVar17 != puVar19);
      }
      local_c8 = (ulonglong *)local_90;
      if (0xf < uStack_78) {
        local_c8 = (ulonglong *)local_90._0_8_;
      }
      local_d8 = (byte *****)local_70;
      if (0xf < local_58) {
        local_d8 = local_70[0];
      }
      local_d0 = local_60;
      local_c0 = lStack_80;
      iVar12 = FUN_180370b70(&local_d8,&local_c8,bVar5);
      if ((local_60 != 0) && ((iVar12 != 0 || (lStack_80 != 0)))) {
        *puVar21 = (ulonglong)param_1;
        *(int *)(puVar21 + 1) = iVar22;
        *(int *)((longlong)puVar21 + 0xc) = iVar12;
      }
      FUN_18015c010(local_90);
      FUN_18015c010(local_70);
    }
  }
}



