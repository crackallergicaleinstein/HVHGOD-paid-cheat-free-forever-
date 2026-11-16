// FUN_18027c9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c9c0 */

undefined8
FUN_18027c9c0(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  short *psVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  short *psVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulonglong uVar20;
  short sVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 extraout_XMM0_Qa;
  double dVar25;
  double dVar26;
  double dVar27;
  byte local_68 [8];
  undefined *local_60;
  undefined1 local_58 [16];
  
  local_58 = ZEXT816(0x1807d0b20);
  FUN_18017bf40(local_58 + 8);
  cVar5 = FUN_18027d6e0(&DAT_180cbf2c0);
  if ((cVar5 != '\0') && (iVar7 = FUN_18027d2c0(param_3), iVar7 != -1)) {
    iVar7 = -1;
    iVar8 = DAT_180c651ac;
    if (DAT_180c651ac == 0) {
      UVar9 = GetTickCount64();
      if (UVar9 < DAT_180c65188) {
        iVar8 = 0;
      }
      else {
        local_60 = &DAT_1808f1f10;
        iVar8 = FUN_1805f68d0(&DAT_1808f1f10);
        if (iVar8 != 0) goto LAB_18027d06f;
        if (DAT_1808f1f5c == 0x7fffffff) {
          DAT_1808f1f5c = 0x7ffffffe;
          goto LAB_18027d084;
        }
        if ((DAT_180c651ac == 0) && (DAT_180c65188 <= UVar9)) {
          DAT_180c651ac = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          if (DAT_180c651ac == 0) {
            DAT_180c65188 = UVar9 + 1000;
          }
          else {
            DAT_180c65188 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c651ac;
        FUN_1805f68fc(&DAT_1808f1f10);
      }
    }
    if ((*(int *)(iVar8 + param_2) == 0) || (*(int *)(iVar8 + param_2) == -1)) {
      iVar8 = DAT_180c65198;
      if (DAT_180c65198 == 0) {
        UVar9 = GetTickCount64();
        if (UVar9 < DAT_180c65190) {
          iVar8 = 0;
        }
        else {
          local_60 = &DAT_1808f1e70;
          iVar8 = FUN_1805f68d0(&DAT_1808f1e70);
          if (iVar8 != 0) goto LAB_18027d06f;
          if (DAT_1808f1ebc == 0x7fffffff) {
            DAT_1808f1ebc = 0x7ffffffe;
            goto LAB_18027d084;
          }
          if ((DAT_180c65198 == 0) && (DAT_180c65190 <= UVar9)) {
            DAT_180c65198 = FUN_1804174b0("C_BaseEntity",0x9d930423);
            if (DAT_180c65198 == 0) {
              DAT_180c65190 = UVar9 + 1000;
            }
            else {
              DAT_180c65190 = 0xffffffffffffffff;
            }
          }
          iVar8 = DAT_180c65198;
          FUN_1805f68fc(&DAT_1808f1e70);
        }
      }
      lVar13 = *(longlong *)(iVar8 + param_2);
      if (lVar13 != 0) {
        iVar8 = DAT_180c65178;
        if (DAT_180c65178 == 0) {
          UVar9 = GetTickCount64();
          if (UVar9 < DAT_180c65180) {
            iVar8 = 0;
          }
          else {
            local_60 = &DAT_1808f1ec0;
            iVar8 = FUN_1805f68d0(&DAT_1808f1ec0);
            if (iVar8 != 0) {
LAB_18027d06f:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808f1f0c == 0x7fffffff) {
              DAT_1808f1f0c = 0x7ffffffe;
LAB_18027d084:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c65178 == 0) && (DAT_180c65180 <= UVar9)) {
              DAT_180c65178 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
              if (DAT_180c65178 == 0) {
                DAT_180c65180 = UVar9 + 1000;
              }
              else {
                DAT_180c65180 = 0xffffffffffffffff;
              }
            }
            iVar8 = DAT_180c65178;
            FUN_1805f68fc(&DAT_1808f1ec0);
          }
        }
        if (*(longlong *)(iVar8 + lVar13) != 0) goto LAB_18027ce87;
      }
      sVar6 = FUN_18027c670(param_2,param_3);
      if (DAT_180cbf2c0 == 0) {
        pcVar19 = &DAT_180cbf2d0;
LAB_18027cd77:
        if ((*pcVar19 != '\0') &&
           (cVar5 = FUN_1802844f0(param_2,*(undefined4 *)(pcVar19 + 0x280)), cVar5 != '\0')) {
          lVar13 = param_4 + 0x78;
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          if (lVar13 == 0) {
            bVar2 = false;
          }
          else {
            local_68[0] = 0;
            cVar5 = FUN_1804514f0(local_68,lVar13,1);
            if (cVar5 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          bVar3 = local_68[0];
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
          if ((bVar2) && (local_68[0] = bVar3 & 0xf7, lVar13 != 0)) {
            lVar12 = FUN_18017ea70();
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
            FUN_1801ad7b0(lVar13,local_68);
            lVar13 = FUN_18017ea70();
            if (*(int *)(lVar13 + 4) != 0) {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
            }
          }
          iVar7 = *(int *)(pcVar19 + 0x278);
          cVar5 = pcVar19[0xe0];
          GetTickCount64();
          local_60 = (undefined *)CONCAT44(local_60._4_4_,*(undefined4 *)(pcVar19 + 0xd0));
          FUN_18027d090(extraout_XMM0_Qa,param_5,param_6,param_7,param_4,param_8,&local_60,cVar5,
                        iVar7 == 1);
          uVar18 = 1;
          goto LAB_18027ce8a;
        }
      }
      else {
        if ((sVar6 == 0x3b) || (sVar21 = sVar6, (ushort)(sVar6 - 500U) < 0x1b)) {
          sVar21 = 0x2a;
        }
        uVar15 = 0;
        psVar16 = &DAT_1806ff3e8;
        psVar10 = &DAT_1806ff3e8;
        do {
          if (*psVar10 == sVar21) goto LAB_18027ccd8;
          uVar15 = uVar15 + 1;
          psVar10 = psVar10 + 0x10;
        } while (uVar15 < 0x2c);
        uVar15 = 0xffffffff;
LAB_18027ccd8:
        if ((sVar6 == 0x3b) || ((ushort)(sVar6 - 500U) < 0x1b)) {
          sVar6 = 0x2a;
        }
        uVar11 = 0;
        do {
          if (*psVar16 == sVar6) {
            if (-1 < (int)uVar11) {
              iVar7 = *(int *)(&DAT_1806ff3ec + (longlong)(int)uVar11 * 0x20);
            }
            break;
          }
          uVar11 = uVar11 + 1;
          psVar16 = psVar16 + 0x10;
        } while (uVar11 < 0x2c);
        if (DAT_180cbf2c0 == 2) {
          if (-1 < (int)uVar15) {
            pcVar19 = &DAT_180cc0710 + (longlong)(int)uVar15 * 0x288;
            goto LAB_18027cd6e;
          }
        }
        else if (-1 < iVar7) {
          pcVar19 = &DAT_180cbf558 + (longlong)iVar7 * 0x288;
LAB_18027cd6e:
          if (pcVar19 != (char *)0x0) goto LAB_18027cd77;
        }
      }
    }
  }
LAB_18027ce87:
  uVar18 = 0;
LAB_18027ce8a:
  FUN_18017bf40(&local_60);
  puVar4 = local_60;
  uVar17 = (longlong)local_60 - local_58._8_8_;
  puVar14 = (ulonglong *)FUN_18027d750();
  uVar20 = *puVar14 + 1;
  *puVar14 = uVar20;
  uVar15 = puVar14[1];
  puVar14[1] = uVar15 + uVar17;
  uVar22 = puVar14[3] + (ulonglong)(999999 < uVar17);
  puVar14[3] = uVar22;
  uVar23 = puVar14[4] + (ulonglong)(4999999 < uVar17);
  puVar14[4] = uVar23;
  uVar24 = puVar14[5] + (ulonglong)(15999999 < uVar17);
  puVar14[5] = uVar24;
  uVar11 = puVar14[2];
  if (puVar14[2] < uVar17) {
    puVar14[2] = uVar17;
    uVar11 = uVar17;
  }
  if ((puVar4 == (undefined *)puVar14[7]) || ((longlong)puVar14[7] <= (longlong)puVar4)) {
    dVar27 = (double)(longlong)((longlong)puVar4 - puVar14[6]) / 1000000.0;
    dVar1 = (double)(uVar15 + uVar17);
    dVar26 = 0.0;
    if (0.0 < dVar27) {
      dVar26 = (dVar1 / 1000.0) / dVar27;
    }
    dVar25 = (dVar1 / (double)uVar20) / 1000.0;
    FUN_1801af8a0(dVar1 / (double)uVar20,dVar25,local_58._0_8_,uVar22,uVar20,dVar25,
                  (double)uVar11 / 1000.0,dVar1 / 1000000.0,dVar27,dVar26,uVar22,uVar23,uVar24);
    puVar14[2] = 0;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[3] = 0;
    puVar14[6] = (ulonglong)puVar4;
    puVar14[7] = (ulonglong)(puVar4 + 5000000000);
  }
  return uVar18;
}



