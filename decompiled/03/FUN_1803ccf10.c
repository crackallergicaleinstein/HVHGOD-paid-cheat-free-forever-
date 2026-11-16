// FUN_1803ccf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ccf10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ccf10(void)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char **ppcVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uint7 uVar22;
  char *pcVar20;
  longlong lVar21;
  char **ppcVar23;
  ulonglong uVar24;
  longlong lVar25;
  char **ppcVar26;
  char *pcVar27;
  bool bVar28;
  float fVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined1 auStack_708 [32];
  char local_6e8;
  undefined8 *local_6e0;
  char *local_6d8;
  undefined1 local_6d0 [16];
  undefined8 *local_6c0;
  undefined8 *local_6b8;
  undefined1 local_6a8 [16];
  undefined1 auStack_698 [16];
  undefined1 local_688 [16];
  undefined1 auStack_678 [16];
  undefined4 local_668 [2];
  undefined1 local_660 [16];
  undefined8 *local_650;
  longlong local_648;
  char local_640 [36];
  undefined4 local_61c [373];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  if (DAT_180b0d5f0 == '\0') {
  }
  if (((DAT_180c653f0 != '\0') && (DAT_1808f2c58 == 8)) &&
     (iVar8 = memcmp(DAT_1808f2c50,"keybinds",8), iVar8 == 0)) {
  }
  local_660 = (undefined1  [16])0x0;
  local_650 = (undefined8 *)0x0;
  local_668[0] = 1;
  if (DAT_180bbab78 != 0) {
    (**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_668,local_660);
  }
  FUN_18063ab10(&local_648,0,0x600);
  FUN_1803ce060(&local_648);
  iVar8 = 0;
  if ((DAT_180cc9372 == '\0') || (5 < DAT_180cc9348 - 1U)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  local_6e8 = cVar7;
  puVar11 = (undefined8 *)FUN_18043aae0();
  local_6b8 = (undefined8 *)*puVar11;
  puVar11 = local_6b8 + (puVar11[1] - (longlong)local_6b8 >> 3);
  local_6e0 = puVar11;
  if (local_6b8 != puVar11) {
    lVar25 = 0;
    do {
      pcVar16 = (char *)*local_6b8;
      if (((pcVar16 != (char *)0x0) && (*(int *)(pcVar16 + 8) != 0)) &&
         ((pcVar16[0x10] != '\0' && (lVar25 < 0x20)))) {
        lVar12 = FUN_1803cbbc0();
        uVar24 = ((((((((ulonglong)pcVar16 >> 8 & 0xff ^
                       ((ulonglong)pcVar16 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                       0x100000001b3 ^ (ulonglong)pcVar16 >> 0x10 & 0xff) * 0x100000001b3 ^
                     (ulonglong)pcVar16 >> 0x18 & 0xff) * 0x100000001b3 ^
                    (ulonglong)pcVar16 >> 0x20 & 0xff) * 0x100000001b3 ^
                   (ulonglong)pcVar16 >> 0x28 & 0xff) * 0x100000001b3 ^
                  (ulonglong)pcVar16 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)pcVar16 >> 0x38) *
                 0x100000001b3 & *(ulonglong *)(lVar12 + 0x48);
        lVar21 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 8 + uVar24 * 0x10);
        lVar3 = *(longlong *)(lVar12 + 0x20);
        if (lVar21 == lVar3) {
LAB_1803cd149:
          lVar21 = 0;
        }
        else {
          pcVar14 = *(char **)(lVar21 + 0x10);
          while (pcVar16 != pcVar14) {
            if (lVar21 == *(longlong *)(*(longlong *)(lVar12 + 0x30) + uVar24 * 0x10))
            goto LAB_1803cd149;
            lVar21 = *(longlong *)(lVar21 + 8);
            pcVar14 = *(char **)(lVar21 + 0x10);
          }
        }
        if (lVar21 == 0) {
          lVar21 = lVar3;
        }
        if (lVar21 != lVar3) {
          uVar2 = *(uint *)(lVar21 + 0x18);
          plVar13 = (longlong *)DAT_180b0d660[1];
          cVar6 = *(char *)((longlong)plVar13 + 0x19);
          plVar19 = DAT_180b0d660;
          while (cVar6 == '\0') {
            if (*(uint *)((longlong)plVar13 + 0x1c) < uVar2) {
              plVar13 = plVar13 + 2;
            }
            else {
              plVar19 = plVar13;
            }
            plVar13 = (longlong *)*plVar13;
            cVar6 = *(char *)((longlong)plVar13 + 0x19);
          }
          if ((*(char *)((longlong)plVar19 + 0x19) != '\0') ||
             (uVar2 < *(uint *)((longlong)plVar19 + 0x1c))) {
            pcVar14 = &DAT_180c7e290;
            do {
              uVar22 = (uint7)(uint3)(uVar2 >> 8);
              if (pcVar16 == pcVar14) goto LAB_1803cd245;
              pcVar14 = pcVar14 + 0x70;
            } while (pcVar14 != &DAT_180c7e3e0);
            pcVar14 = &DAT_180c7e3e0;
            do {
              if (pcVar16 == pcVar14) goto LAB_1803cd245;
              pcVar14 = pcVar14 + 0x70;
            } while (pcVar14 != &DAT_180c7e530);
            if ((((((pcVar16 == &DAT_180c7e7c0) || (pcVar16 == &DAT_180c7e830)) ||
                  (pcVar16 == &DAT_180c7e748)) ||
                 ((pcVar16 == &DAT_180c7e6e0 || (pcVar16 == &DAT_180c7e678)))) ||
                ((pcVar16 == &DAT_180c7e540 ||
                 ((pcVar16 == &DAT_180c7e5a8 || (pcVar16 == &DAT_180c7e610)))))) ||
               ((pcVar16 == &DAT_180c7e8a0 || (pcVar16 == &DAT_180c7e908)))) {
LAB_1803cd245:
              pcVar14 = (char *)CONCAT71(uVar22,1);
            }
            else {
              pcVar14 = (char *)((ulonglong)uVar22 << 8);
            }
            pcVar27 = &DAT_180c7eac8;
            do {
              if ((char)pcVar14 == '\0') {
                for (pcVar15 = pcVar27 + -0x150; pcVar15 != pcVar27; pcVar15 = pcVar15 + 0x70) {
                  if (pcVar16 == pcVar15) goto LAB_1803cd31f;
                }
                pcVar14 = pcVar27 + 0x150;
                for (pcVar15 = pcVar27; pcVar15 != pcVar14; pcVar15 = pcVar15 + 0x70) {
                  if (pcVar16 == pcVar15) goto LAB_1803cd31f;
                }
                if ((((((pcVar16 == pcVar27 + 0x3e0) || (pcVar16 == pcVar27 + 0x450)) ||
                      (pcVar16 == pcVar27 + 0x368)) ||
                     (((pcVar16 == pcVar27 + 0x300 || (pcVar16 == pcVar27 + 0x298)) ||
                      ((pcVar16 == pcVar27 + 0x160 ||
                       ((pcVar16 == pcVar27 + 0x1c8 || (pcVar16 == pcVar27 + 0x230)))))))) ||
                    (pcVar16 == pcVar27 + 0x4c0)) || (pcVar16 == pcVar27 + 0x528))
                goto LAB_1803cd31f;
                pcVar14 = (char *)((ulonglong)pcVar14 & 0xffffffffffffff00);
              }
              else {
LAB_1803cd31f:
                pcVar14 = (char *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),1);
              }
              bVar28 = pcVar27 != (char *)0x180c80d50;
              pcVar27 = pcVar27 + 0x6e8;
            } while (bVar28);
            pcVar27 = &DAT_180c812e8;
            local_6d8 = pcVar16;
            do {
              pcVar15 = pcVar27;
              if (((char)pcVar14 == '\0') &&
                 (cVar6 = FUN_1803cdc10(&local_6d8), pcVar14 = pcVar27, cVar6 == '\0')) {
                pcVar14 = (char *)((ulonglong)pcVar27 & 0xffffffffffffff00);
              }
              else {
                pcVar14 = (char *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),1);
              }
              pcVar27 = pcVar15 + 0x6e8;
            } while (pcVar27 != (char *)&DAT_180c8fdb8);
            if ((char)pcVar14 == '\0') {
              uVar22 = (uint7)((ulonglong)pcVar14 >> 8);
              if ((((pcVar16 == &DAT_180c8fdf0) || (pcVar16 == &DAT_180c8fe98)) ||
                  (pcVar16 == &DAT_180c8ff08)) ||
                 (((pcVar16 == &DAT_180c8ff98 || (pcVar16 == &DAT_180c90170)) ||
                  ((pcVar16 == &DAT_180c908f0 ||
                   ((pcVar16 == &DAT_180c900a0 || (pcVar16 == &DAT_180c90108)))))))) {
                lVar21 = CONCAT71(uVar22,1);
              }
              else {
                lVar21 = (ulonglong)uVar22 << 8;
              }
              pcVar14 = &DAT_180c90a78;
              do {
                if (((((((char)lVar21 != '\0') || (pcVar16 == pcVar14 + -0x118)) ||
                      (pcVar16 == pcVar14 + -0x70)) ||
                     ((pcVar16 == pcVar14 || (pcVar16 == pcVar14 + 0x90)))) ||
                    ((pcVar16 == pcVar14 + 0x268 ||
                     ((pcVar16 == pcVar14 + 0x9e8 || (pcVar16 == pcVar14 + 0x198)))))) ||
                   (pcVar16 == pcVar14 + 0x200)) {
                  lVar21 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
                }
                bVar28 = pcVar14 != (char *)0x180c943a8;
                pcVar14 = pcVar14 + 0xb70;
              } while (bVar28);
              pcVar14 = &DAT_180c94f18;
              do {
                if ((((((char)lVar21 != '\0') || (pcVar16 == pcVar14 + -0x118)) ||
                     (pcVar16 == pcVar14 + -0x70)) ||
                    ((pcVar16 == pcVar14 || (pcVar16 == pcVar14 + 0x90)))) ||
                   (((pcVar16 == pcVar14 + 0x268 ||
                     ((pcVar16 == pcVar14 + 0x9e8 || (pcVar16 == pcVar14 + 0x198)))) ||
                    (pcVar16 == pcVar14 + 0x200)))) {
                  lVar21 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
                }
                bVar28 = pcVar14 != (char *)0x180cac888;
                pcVar14 = pcVar14 + 0xb70;
              } while (bVar28);
              if ((char)lVar21 == '\0') {
                if ((((pcVar16 == &DAT_180cad6b8) || (pcVar16 == &DAT_180cad880)) ||
                    (pcVar16 == &DAT_180cad8e8)) ||
                   (((pcVar16 == &DAT_180cad958 || (pcVar16 == &DAT_180cada28)) ||
                    (pcVar16 == &DAT_180cada90)))) {
                  cVar7 = DAT_180cad6b8;
LAB_1803cd834:
                  if (cVar7 == '\0') goto LAB_1803cd550;
                }
              }
              else {
                if (((DAT_180cad2e0 != 0) || (cVar7 == '\0')) ||
                   (((pcVar14 = (char *)FUN_1802345c0(&DAT_180c8fdb8,lVar21,DAT_180cc934c),
                     pcVar16 != pcVar14 &&
                     (((((pcVar16 != pcVar14 + 0xa8 && (pcVar16 != pcVar14 + 0x118)) &&
                        (pcVar16 != pcVar14 + 0x1a8)) &&
                       ((pcVar16 != pcVar14 + 0x380 && (pcVar16 != pcVar14 + 0xb00)))) &&
                      (pcVar16 != pcVar14 + 0x2b0)))) && (pcVar16 != pcVar14 + 0x318))))
                goto LAB_1803cd550;
                if (pcVar16 == pcVar14 + 0x318) {
                  cVar7 = pcVar14[0x1a8];
                  goto LAB_1803cd834;
                }
              }
              iVar8 = iVar8 + 1;
              pcVar14 = pcVar16 + 0x20;
              if (0xf < *(ulonglong *)(pcVar16 + 0x38)) {
                pcVar14 = *(char **)pcVar14;
              }
              *(char **)(local_640 + lVar25 * 0x30 + -8) = pcVar14;
              local_61c[lVar25 * 0xc] = *(undefined4 *)(pcVar16 + 0xc);
              local_640[lVar25 * 0x30] = '\0';
              local_640[lVar25 * 0x30 + 0x20] = '\0';
              lVar25 = lVar25 + 1;
            }
            else if ((DAT_180cad2e0 == 1) && (cVar7 != '\0')) {
              pcVar14 = (char *)FUN_180252d60(&DAT_180c7e1f0,pcVar14,DAT_180cc934c);
              iVar9 = FUN_180252c10(pcVar14);
              iVar10 = FUN_180252cb0();
              if (iVar9 < 0) {
                pcVar27 = (char *)0x0;
              }
              else if (iVar9 == 0) {
                pcVar27 = pcVar14 + 0x530;
              }
              else {
                pcVar27 = pcVar14 + (longlong)(iVar9 + -1) * 0x70;
              }
              if (iVar10 < 0) {
                pcVar15 = (char *)0x0;
              }
              else if (iVar10 == 0) {
                pcVar15 = pcVar14 + 0x5a0;
              }
              else {
                pcVar15 = pcVar14 + ((longlong)(iVar10 + -1) + 3) * 0x70;
              }
              if ((pcVar16 == pcVar14 + 0x530) || (pcVar16 == pcVar14 + 0x5a0)) {
                bVar28 = true;
              }
              else {
                bVar28 = false;
              }
              pcVar1 = pcVar14 + 0x150;
              for (pcVar20 = pcVar14; pcVar20 != pcVar1; pcVar20 = pcVar20 + 0x70) {
                bVar28 = (bool)(bVar28 | pcVar16 == pcVar20);
              }
              for (pcVar20 = pcVar1; pcVar20 != pcVar14 + 0x2a0; pcVar20 = pcVar20 + 0x70) {
                bVar28 = (bool)(bVar28 | pcVar16 == pcVar20);
              }
              if (bVar28) {
                if ((pcVar16 == pcVar27) || (pcVar16 == pcVar15)) {
LAB_1803cd48a:
                  iVar8 = iVar8 + 1;
                  pcVar20 = pcVar16 + 0x20;
                  if (0xf < *(ulonglong *)(pcVar16 + 0x38)) {
                    pcVar20 = *(char **)pcVar20;
                  }
                  *(char **)(local_640 + lVar25 * 0x30 + -8) = pcVar20;
                  local_61c[lVar25 * 0xc] = *(undefined4 *)(pcVar16 + 0xc);
                  if (pcVar16 == pcVar27) {
                    iVar9 = FUN_180252c10(pcVar14);
                    local_6d8 = (char *)CONCAT44(local_6d8._4_4_,0x83);
                    local_668[0] = 0;
                    if (iVar9 < 1) {
                      lVar21 = 0x52c;
                      if (iVar9 != 0) {
                        lVar21 = 0x528;
                      }
                    }
                    else {
                      lVar21 = (longlong)(iVar9 + -1) * 0x70 + 0x68;
                    }
                    iVar9 = *(int *)(pcVar14 + lVar21);
                    ppcVar23 = (char **)local_668;
                    if (-1 < iVar9) {
                      ppcVar23 = (char **)(pcVar14 + lVar21);
                    }
                    ppcVar17 = &local_6d8;
                    if (iVar9 < 0x84) {
                      ppcVar17 = ppcVar23;
                    }
                    FUN_18015abc0(local_640 + lVar25 * 0x30,0x20,&DAT_1807c6e5c,*(int *)ppcVar17);
                    pcVar16 = "Min Damage Override";
                  }
                  else {
                    if (pcVar16 != pcVar15) {
                      local_640[lVar25 * 0x30] = '\0';
                      local_640[lVar25 * 0x30 + 0x20] = '\0';
                      lVar25 = lVar25 + 1;
                      goto LAB_1803cd550;
                    }
                    iVar9 = FUN_180252cb0(pcVar14);
                    local_668[0] = 100;
                    local_6d8 = (char *)((ulonglong)local_6d8 & 0xffffffff00000000);
                    if (iVar9 < 1) {
                      if (iVar9 == 0) {
                        ppcVar23 = (char **)(pcVar14 + 0x598);
                      }
                      else {
                        ppcVar23 = (char **)(pcVar14 + 0x524);
                      }
                    }
                    else {
                      ppcVar23 = (char **)(pcVar1 + (longlong)(iVar9 + -1) * 0x70 + 0x68);
                    }
                    ppcVar17 = &local_6d8;
                    if (-1 < *(int *)ppcVar23) {
                      ppcVar17 = ppcVar23;
                    }
                    ppcVar26 = (char **)local_668;
                    if (*(int *)ppcVar23 < 0x65) {
                      ppcVar26 = ppcVar17;
                    }
                    FUN_18015abc0(local_640 + lVar25 * 0x30,0x20,&DAT_18080ce2c,*(int *)ppcVar26);
                    pcVar16 = "Hit Chance Override";
                  }
                  *(char **)(local_640 + lVar25 * 0x30 + -8) = pcVar16;
                  local_640[lVar25 * 0x30 + 0x20] = '\x01';
                  lVar25 = lVar25 + 1;
                }
              }
              else {
                cVar7 = FUN_1803cdc10(&local_6d8,pcVar14);
                if (cVar7 != '\0') goto LAB_1803cd48a;
              }
            }
          }
        }
LAB_1803cd550:
        puVar11 = local_6e0;
      }
      local_6b8 = local_6b8 + 1;
      cVar7 = local_6e8;
    } while (local_6b8 != puVar11);
    if (0 < iVar8) {
      _DAT_1809ba024 = 0x3f800000;
      DAT_1809ba038 = 1.0;
      goto LAB_1803cd8d8;
    }
  }
  _DAT_1809ba024 = 0;
  DAT_1809ba038 = 0.0;
LAB_1803cd8d8:
  fVar29 = 0.0;
  _DAT_1809ba020 = DAT_1809ba028;
  _DAT_1809ba034 = 2;
  _DAT_1809ba030 = 0;
  _DAT_1809ba02c = 0x3e4ccccd;
  FUN_1802ec7e0(&DAT_1809ba020);
  if ((fVar29 < DAT_1809ba038) || (DAT_1809ba035 == '\0')) {
    local_6d0 = (undefined1  [16])0x0;
    local_6c0 = (undefined8 *)0x0;
    uVar24 = (ulonglong)iVar8;
    if (iVar8 != 0) {
      if (0x3ffffffffffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar18 = FUN_18015bca0(uVar24 << 6);
      FUN_18036fb90(local_6d0._0_8_,local_6d0._8_8_,uVar18);
      FUN_18036fe10(local_6d0,uVar18,0,uVar24);
      if (0 < iVar8) {
        pcVar16 = local_640 + 0x20;
        uVar18 = 0;
        uVar31 = 0xf;
        do {
          local_6a8 = (undefined1  [16])0x0;
          auStack_698 = (undefined1  [16])0x0;
          lVar25 = -1;
          do {
            lVar25 = lVar25 + 1;
          } while (*(char *)(*(longlong *)(pcVar16 + -0x28) + lVar25) != '\0');
          FUN_18015ba30(local_6a8);
          if (*pcVar16 == '\0') {
            if (DAT_180b0d693 == '\0') {
              pcVar14 = (char *)&PTR_180700558;
            }
            else {
              iVar8 = *(int *)(pcVar16 + 4);
              if (iVar8 == 0) {
                pcVar14 = "toggle";
              }
              else if (iVar8 == 1) {
                pcVar14 = "hold on";
              }
              else if (iVar8 == 2) {
                pcVar14 = "hold off";
              }
              else {
                pcVar14 = "unknown";
              }
            }
          }
          else {
            pcVar14 = pcVar16 + -0x20;
          }
          local_688 = (undefined1  [16])0x0;
          auStack_678 = (undefined1  [16])0x0;
          lVar25 = -1;
          do {
            lVar25 = lVar25 + 1;
          } while (*(char *)((longlong)pcVar14 + lVar25) != '\0');
          FUN_18015ba30(local_688);
          if ((undefined8 *)local_6d0._8_8_ == local_6c0) {
            FUN_18036fc30(local_6d0,local_6d0._8_8_,local_6a8);
          }
          else {
            *(undefined8 *)local_6d0._8_8_ = local_6a8._0_8_;
            *(undefined8 *)(local_6d0._8_8_ + 8) = local_6a8._8_8_;
            *(undefined8 *)(local_6d0._8_8_ + 0x10) = auStack_698._0_8_;
            *(undefined8 *)(local_6d0._8_8_ + 0x18) = auStack_698._8_8_;
            auStack_698._8_8_ = uVar31;
            auStack_698._0_8_ = uVar18;
            auVar4[0xf] = 0;
            auVar4._0_15_ = local_6a8._1_15_;
            local_6a8 = auVar4 << 8;
            *(undefined8 *)(local_6d0._8_8_ + 0x20) = local_688._0_8_;
            *(undefined8 *)(local_6d0._8_8_ + 0x28) = local_688._8_8_;
            *(undefined8 *)(local_6d0._8_8_ + 0x30) = auStack_678._0_8_;
            *(undefined8 *)(local_6d0._8_8_ + 0x38) = auStack_678._8_8_;
            auStack_678._8_8_ = uVar31;
            auStack_678._0_8_ = uVar18;
            auVar5[0xf] = 0;
            auVar5._0_15_ = local_688._1_15_;
            local_688 = auVar5 << 8;
            local_6d0._8_8_ = (undefined8 *)(local_6d0._8_8_ + 0x40);
          }
          FUN_18015c010(local_688);
          FUN_18015c010(local_6a8);
          pcVar16 = pcVar16 + 0x30;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    local_650 = local_6c0;
    local_660 = local_6d0;
    local_6c0 = (undefined8 *)0x0;
    local_6d0 = ZEXT816(0);
    local_6b8 = (undefined8 *)local_660;
    uVar30 = DAT_1809ba028;
    iVar8 = FUN_1805f68d0(&DAT_1808e6940);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e698c == 0x7fffffff) {
      DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    DAT_1808e68b0 = 1;
    FUN_1801b3410(&DAT_1808e68b8);
    DAT_1808e68b8 = local_660._0_8_;
    DAT_1808e68c0 = local_660._8_8_;
    _DAT_1808e68c8 = local_650;
    local_660 = (undefined1  [16])0x0;
    local_650 = (undefined8 *)0x0;
    DAT_1808e68b4 = uVar30;
    FUN_1805f68fc(&DAT_1808e6940);
    FUN_1801b3410(local_660);
    FUN_1801b3410(local_6d0);
  }
}



