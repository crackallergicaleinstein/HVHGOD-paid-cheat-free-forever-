// FUN_180582fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180582fa0 */

void FUN_180582fa0(longlong param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  byte *pbVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  byte *pbVar30;
  longlong lVar31;
  longlong lVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  byte *pbVar36;
  longlong lVar37;
  int iVar38;
  uint uVar39;
  ulonglong uVar40;
  longlong lVar41;
  byte *pbVar42;
  longlong lVar43;
  longlong lVar44;
  byte *pbVar45;
  bool bVar46;
  char local_res20;
  
  uVar40 = (ulonglong)(int)param_2;
  pbVar5 = *(byte **)(uVar40 * 0x898 + 0x60 + param_1);
  if (pbVar5 == (byte *)0x0) {
    pbVar34 = (byte *)0x0;
  }
  else {
    pbVar34 = pbVar5 + (ulonglong)*(uint *)(uVar40 * 0x898 + 0x58 + param_1) * 0x48;
  }
  bVar8 = false;
  pbVar45 = (byte *)0x0;
  local_res20 = '\0';
  if (param_2 == 1) {
    local_res20 = (&PTR_DAT_18066cf80)[*(int *)(**(longlong **)(param_1 + 0x1180) + 8)][0x18];
    if (pbVar5 < pbVar34) {
      pbVar33 = pbVar5 + 0x18;
      pbVar36 = pbVar34;
      do {
        bVar2 = pbVar33[-0xc];
        if ((bVar2 & 4) == 0) {
          pbVar24 = *(byte **)(pbVar33 + 8);
          if (((*(longlong *)pbVar33 != 0) && (pbVar24 != (byte *)0x0)) &&
             (*(longlong *)(pbVar24 + 0x18) != 0)) {
            if ((pbVar24[0xc] & 8) == 0) {
              if ((bVar2 & 8) != 0) {
                pbVar33[0] = 0;
                pbVar33[1] = 0;
                pbVar33[2] = 0;
                pbVar33[3] = 0;
                pbVar33[4] = 0;
                pbVar33[5] = 0;
                pbVar33[6] = 0;
                pbVar33[7] = 0;
                pbVar33[-0xc] = bVar2 & 0xf7;
              }
            }
            else {
              pbVar24[0x18] = 0;
              pbVar24[0x19] = 0;
              pbVar24[0x1a] = 0;
              pbVar24[0x1b] = 0;
              pbVar24[0x1c] = 0;
              pbVar24[0x1d] = 0;
              pbVar24[0x1e] = 0;
              pbVar24[0x1f] = 0;
              pbVar24[0xc] = pbVar24[0xc] & 0xf7;
            }
          }
          lVar15 = *(longlong *)pbVar33;
          pbVar34 = pbVar36;
          if (lVar15 == 0) {
            if ((pbVar24 != (byte *)0x0) && (lVar15 = *(longlong *)(pbVar24 + 0x18), lVar15 != 0)) {
              pbVar30 = pbVar24;
              pbVar24 = pbVar33 + -0x18;
              goto LAB_1805830d1;
            }
          }
          else {
            pbVar30 = pbVar33 + -0x18;
            if (pbVar30 != (byte *)0x0) {
LAB_1805830d1:
              iVar26 = *(int *)(lVar15 + 8);
              bVar2 = pbVar30[0xc];
              *(int *)(pbVar30 + 8) = iVar26;
              pbVar30[0xc] = bVar2 | 4;
              if ((pbVar24 != (byte *)0x0) && (*(longlong *)(pbVar24 + 0x18) == 0)) {
                bVar3 = pbVar24[0xc];
                iVar9 = FUN_180582c40(param_1,1,*(int *)(pbVar24 + 4) - *(int *)(pbVar30 + 4),
                                      iVar26 - *(int *)(pbVar30 + 4),bVar2 | 4,bVar3);
                *(int *)(pbVar24 + 8) = iVar9 + iVar26;
                pbVar24[0xc] = bVar3 | 4;
              }
              pbVar34 = pbVar36;
              if (pbVar45 == (byte *)0x0) {
                pbVar45 = pbVar33 + -0x18;
              }
            }
          }
          pbVar36 = pbVar34;
        }
        pbVar24 = pbVar33 + 0x30;
        pbVar33 = pbVar33 + 0x48;
      } while (pbVar24 < pbVar34);
      uVar40 = 1;
      pbVar34 = pbVar36;
LAB_18058315c:
      pbVar33 = pbVar34;
      pbVar36 = pbVar5 + 0xc;
      pbVar24 = pbVar34;
      bVar8 = false;
      do {
        bVar2 = *pbVar36;
        pbVar34 = pbVar24;
        if ((bVar2 & 4) == 0) {
          lVar15 = *(longlong *)(pbVar36 + 0x14);
          if (lVar15 != 0) {
            uVar28 = (uint)bVar2;
            if (*(longlong *)(lVar15 + 0x18) == 0) {
              iVar26 = *(int *)(pbVar36 + -8);
              iVar29 = *(int *)(lVar15 + 4) - iVar26;
              iVar9 = iVar29 >> 1;
              if (pbVar45 == (byte *)0x0) {
                iVar29 = FUN_180582c40(param_1,uVar40 & 0xffffffff,iVar29,0,bVar2,
                                       *(undefined1 *)(lVar15 + 0xc));
                iVar11 = 0x20;
                if (0x40 < iVar29) {
                  iVar11 = 0x1a;
                }
                iVar10 = 0x20;
                if (0x40 < iVar29) {
                  iVar10 = 0x26;
                }
                if (iVar29 < 0x60) {
                  uVar28 = iVar9 + iVar26 + 0x20U & 0xffffffc0;
                  iVar9 = (iVar9 + iVar26) - uVar28;
                  iVar26 = iVar11 - iVar9;
                  if (-1 < iVar9 - iVar11) {
                    iVar26 = iVar9 - iVar11;
                  }
                  iVar25 = -(iVar10 + iVar9);
                  if (iVar25 < 0) {
                    iVar25 = iVar10 + iVar9;
                  }
                  iVar9 = -iVar10;
                  if (iVar26 <= iVar25) {
                    iVar9 = iVar11;
                  }
                  iVar26 = (uVar28 + iVar9) - iVar29 / 2;
                  *(int *)(pbVar36 + -4) = iVar26;
                  *(int *)(lVar15 + 8) = iVar26 + iVar29;
                }
                else {
                  *(uint *)(pbVar36 + -4) = iVar26 + 0x20U & 0xffffffc0;
                }
                *pbVar36 = *pbVar36 | 4;
                pbVar45 = pbVar36 + -0xc;
                iVar26 = FUN_180582c40(param_1,param_2,*(int *)(lVar15 + 4) - *(int *)(pbVar36 + -8)
                                       ,*(int *)(pbVar36 + -4) - *(int *)(pbVar36 + -8),*pbVar36,
                                       *(undefined1 *)(lVar15 + 0xc));
                *(int *)(lVar15 + 8) = iVar26 + *(int *)(pbVar36 + -4);
              }
              else {
                iVar11 = *(int *)(pbVar45 + 8);
                iVar25 = (iVar26 - *(int *)(pbVar45 + 4)) + iVar9 + iVar11;
                iVar10 = FUN_180582c40(param_1,uVar40 & 0xffffffff,iVar29,0,bVar2,
                                       *(undefined1 *)(lVar15 + 0xc),pbVar24,uVar28);
                if ((*(byte *)(lVar15 + 0xc) & 4) == 0) {
                  if (iVar10 < 0x60) {
                    uVar28 = iVar25 + 0x20U & 0xffffffc0;
                    iVar26 = 0x20;
                    if (0x40 < iVar10) {
                      iVar26 = 0x1a;
                    }
                    iVar9 = 0x20;
                    if (0x40 < iVar10) {
                      iVar9 = 0x26;
                    }
                    iVar38 = (iVar9 - uVar28) + iVar25;
                    iVar11 = (iVar25 - iVar26) - uVar28;
                    iVar29 = uVar28 - (iVar25 - iVar26);
                    if (-1 < iVar11) {
                      iVar29 = iVar11;
                    }
                    iVar11 = -iVar38;
                    if (iVar11 < 0) {
                      iVar11 = iVar38;
                    }
                    iVar9 = -iVar9;
                    if (iVar29 <= iVar11) {
                      iVar9 = iVar26;
                    }
                    *(uint *)(pbVar36 + -4) = (uVar28 + iVar9) - iVar10 / 2;
                    iVar11 = iVar10 / 2 + uVar28 + iVar9;
                  }
                  else {
                    iVar26 = (iVar11 - *(int *)(pbVar45 + 4)) + iVar26;
                    iVar11 = FUN_180582c40(param_1,param_2,iVar29,0,uVar28,*(byte *)(lVar15 + 0xc));
                    iVar9 = ((iVar11 >> 1) - iVar26) - iVar9;
                    uVar28 = (iVar26 + 0x20 + iVar29 & 0xffffffc0U) - iVar11;
                    uVar39 = iVar26 + 0x20U & 0xffffffc0;
                    iVar29 = iVar9 + uVar28;
                    iVar9 = iVar9 + uVar39;
                    iVar26 = -iVar29;
                    if (iVar26 < 0) {
                      iVar26 = iVar29;
                    }
                    iVar29 = -iVar9;
                    if (iVar29 < 0) {
                      iVar29 = iVar9;
                    }
                    if (iVar29 < iVar26) {
                      uVar28 = uVar39;
                    }
                    *(uint *)(pbVar36 + -4) = uVar28;
                    iVar11 = uVar28 + iVar11;
                  }
                  *(int *)(lVar15 + 8) = iVar11;
                }
                else {
                  *(int *)(pbVar36 + -4) = *(int *)(lVar15 + 8) - iVar10;
                }
                *pbVar36 = *pbVar36 | 4;
                *(byte *)(lVar15 + 0xc) = *(byte *)(lVar15 + 0xc) | 4;
                if (pbVar5 < pbVar36 + -0xc) {
                  iVar26 = *(int *)(pbVar36 + -0x4c);
                  if (local_res20 == '\0') {
                    bVar46 = *(int *)(pbVar36 + -4) < iVar26;
                  }
                  else {
                    bVar46 = iVar26 < *(int *)(pbVar36 + -4);
                  }
                  if ((bVar46) && (*(longlong *)(pbVar36 + 0x14) != 0)) {
                    iVar9 = *(int *)(*(longlong *)(pbVar36 + 0x14) + 8);
                    iVar29 = iVar9 - iVar26;
                    iVar9 = iVar26 - iVar9;
                    if (-1 < iVar29) {
                      iVar9 = iVar29;
                    }
                    pbVar34 = pbVar24;
                    if (0x10 < iVar9) {
                      *(int *)(pbVar36 + -4) = iVar26;
                    }
                    goto LAB_1805831e0;
                  }
                }
              }
            }
            else {
              iVar26 = FUN_180582c40(param_1,uVar40 & 0xffffffff,
                                     *(int *)(pbVar36 + -8) - *(int *)(lVar15 + 4),
                                     *(int *)(lVar15 + 8) - *(int *)(lVar15 + 4),
                                     *(undefined1 *)(lVar15 + 0xc),bVar2);
              *(int *)(pbVar36 + -4) = iVar26 + *(int *)(lVar15 + 8);
              *pbVar36 = bVar2 | 4;
            }
            pbVar33 = pbVar24;
            pbVar34 = pbVar24;
            goto LAB_1805831d8;
          }
          bVar8 = true;
        }
        else {
LAB_1805831d8:
          pbVar24 = pbVar33;
        }
LAB_1805831e0:
        uVar40 = (ulonglong)param_2;
        bVar46 = pbVar36 + 0x3c < pbVar24;
        pbVar33 = pbVar24;
        pbVar36 = pbVar36 + 0x48;
        pbVar24 = pbVar34;
      } while (bVar46);
    }
  }
  else if (pbVar5 < pbVar34) goto LAB_18058315c;
  if (param_2 == 0) {
    if (pbVar34 + (-0x1b0 - (longlong)pbVar5) < (byte *)0x48) {
      lVar31 = 0x94;
      lVar32 = 0x140;
      lVar44 = 0x98;
      lVar37 = 0x128;
      lVar41 = 300;
      lVar15 = 0x124;
      pbVar33 = pbVar5;
    }
    else {
      if ((byte *)0x47 < pbVar34 + (-0x360 - (longlong)pbVar5)) goto LAB_180583597;
      lVar31 = 0x16c;
      lVar32 = 0x2a8;
      lVar44 = 0x170;
      lVar37 = 0x290;
      lVar41 = 0x294;
      lVar15 = 0x28c;
      pbVar33 = pbVar5 + 0x48;
    }
    iVar26 = *(int *)(pbVar5 + lVar31) * 2 - *(int *)(pbVar5 + lVar15);
    iVar9 = iVar26 - *(int *)(pbVar33 + 4);
    iVar26 = *(int *)(pbVar33 + 4) - iVar26;
    if (-1 < iVar9) {
      iVar26 = iVar9;
    }
    if (iVar26 < 8) {
      iVar26 = *(int *)(pbVar33 + 8) + *(int *)(pbVar5 + lVar44) * -2 + *(int *)(pbVar5 + lVar37);
      lVar15 = *(longlong *)(pbVar5 + lVar32);
      *(int *)(pbVar5 + lVar37) = *(int *)(pbVar5 + lVar37) - iVar26;
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 8);
        *piVar1 = *piVar1 - iVar26;
      }
      if (pbVar34 + (-0x360 - (longlong)pbVar5) < (byte *)0x48) {
        *(int *)(pbVar5 + 0x248) = *(int *)(pbVar5 + 0x248) - iVar26;
        *(int *)(pbVar5 + 800) = *(int *)(pbVar5 + 800) - iVar26;
      }
      pbVar5[lVar41] = pbVar5[lVar41] | 4;
      if (*(longlong *)(pbVar5 + lVar32) != 0) {
        pbVar33 = (byte *)(*(longlong *)(pbVar5 + lVar32) + 0xc);
        *pbVar33 = *pbVar33 | 4;
      }
    }
  }
LAB_180583597:
  if (((bVar8) || (pbVar45 == (byte *)0x0)) &&
     (pbVar33 = pbVar5, pbVar36 = pbVar34, pbVar5 < pbVar34)) {
LAB_1805835b1:
    do {
      if ((pbVar33[0xc] & 4) == 0) {
        pbVar24 = *(byte **)(pbVar33 + 0x28);
        if (pbVar24 == (byte *)0x0) {
LAB_180583a8f:
          pbVar24 = pbVar33;
          if (pbVar45 == (byte *)0x0) {
            uVar28 = *(int *)(pbVar33 + 4) + 0x20U & 0xffffffc0;
            pbVar45 = pbVar33;
          }
          else {
            do {
              pbVar35 = pbVar24;
              pbVar24 = pbVar35 + -0x48;
              pbVar30 = pbVar33;
              if (pbVar24 < pbVar5) break;
            } while ((pbVar35[-0x3c] & 4) == 0);
            do {
              pbVar42 = pbVar30;
              pbVar30 = pbVar42 + 0x48;
              if (pbVar34 <= pbVar30) break;
            } while ((pbVar42[0x54] & 4) == 0);
            if ((((pbVar24 < pbVar5) || (pbVar33 <= pbVar24)) || (pbVar34 <= pbVar30)) ||
               (pbVar30 <= pbVar33)) {
              uVar28 = ((*(int *)(pbVar33 + 4) - *(int *)(pbVar45 + 4)) + 0x10U & 0xffffffe0) +
                       *(int *)(pbVar45 + 8);
            }
            else {
              iVar26 = *(int *)(pbVar35 + -0x44);
              uVar28 = *(uint *)(pbVar35 + -0x40);
              if (*(int *)(pbVar42 + 0x4c) != iVar26) {
                iVar26 = FUN_1805753e0(*(int *)(pbVar33 + 4) - iVar26,
                                       *(int *)(pbVar42 + 0x50) - uVar28,
                                       *(int *)(pbVar42 + 0x4c) - iVar26);
                uVar28 = uVar28 + iVar26;
              }
            }
          }
        }
        else {
          pbVar30 = pbVar24 + 4;
          iVar26 = *(int *)(pbVar33 + 4);
          iVar9 = *(int *)pbVar30 - iVar26;
          if (iVar9 < 0) {
            iVar9 = -iVar9;
            pbVar35 = pbVar24;
            pbVar42 = pbVar33;
          }
          else {
            pbVar35 = pbVar33;
            pbVar42 = pbVar24;
          }
          if (iVar9 < 0x60) {
            lVar15 = *(longlong *)(pbVar42 + 0x38);
            lVar31 = *(longlong *)(lVar15 + 0x40);
            plVar16 = (longlong *)(lVar15 + 0x38);
            iVar29 = *(int *)(lVar31 + 0x1c);
            iVar11 = *(int *)(*plVar16 + 0x1c);
            lVar32 = *(longlong *)(*(longlong *)(pbVar42 + 0x40) + 0x40);
            iVar10 = *(int *)(lVar32 + 0x1c);
            lVar37 = *(longlong *)(*(longlong *)(pbVar42 + 0x40) + 0x38);
            iVar25 = iVar11;
            if (iVar29 <= iVar11) {
              iVar25 = iVar29;
            }
            iVar38 = *(int *)(lVar37 + 0x1c);
            iVar12 = iVar38;
            if (iVar10 <= iVar38) {
              iVar12 = iVar10;
            }
            if ((iVar12 <= iVar25) && (iVar25 = iVar10, iVar38 < iVar10)) {
              iVar25 = iVar38;
            }
            lVar41 = *(longlong *)(pbVar35 + 0x38);
            lVar44 = *(longlong *)(lVar41 + 0x38);
            lVar22 = *(longlong *)(lVar41 + 0x40);
            iVar12 = *(int *)(lVar22 + 0x1c);
            lVar6 = *(longlong *)(pbVar35 + 0x40);
            lVar43 = *(longlong *)(lVar6 + 0x40);
            lVar7 = *(longlong *)(lVar6 + 0x38);
            iVar27 = *(int *)(lVar43 + 0x1c);
            iVar4 = *(int *)(lVar7 + 0x1c);
            iVar13 = *(int *)(lVar44 + 0x1c);
            if (iVar12 <= *(int *)(lVar44 + 0x1c)) {
              iVar13 = iVar12;
            }
            iVar14 = iVar4;
            if (iVar27 <= iVar4) {
              iVar14 = iVar27;
            }
            if (iVar13 < iVar14) {
            }
            else {
              iVar13 = iVar27;
              if (iVar4 < iVar27) {
                iVar13 = iVar4;
              }
            }
            if (iVar25 < iVar13) {
              lVar18 = lVar31;
              if (iVar11 < iVar29) {
                lVar18 = *plVar16;
              }
              lVar20 = lVar32;
              if (iVar38 < iVar10) {
                lVar20 = lVar37;
              }
              lVar17 = 0x38;
              if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar20 + 0x1c)) {
                lVar18 = 0x38;
                if (iVar29 <= iVar11) {
                  lVar18 = 0x40;
                }
                plVar19 = (longlong *)(lVar18 + *(longlong *)(pbVar42 + 0x38));
              }
              else {
                if (iVar10 <= iVar38) {
                  lVar17 = 0x40;
                }
                plVar19 = (longlong *)(lVar17 + *(longlong *)(pbVar42 + 0x40));
              }
            }
            else {
              lVar18 = lVar22;
              if (*(int *)(lVar44 + 0x1c) < iVar12) {
                lVar18 = lVar44;
              }
              lVar20 = lVar43;
              if (iVar4 < iVar27) {
                lVar20 = lVar7;
              }
              if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar20 + 0x1c)) {
                plVar19 = (longlong *)(lVar41 + 0x40);
                if (*(int *)(lVar44 + 0x1c) < iVar12) {
                  plVar19 = (longlong *)(lVar41 + 0x38);
                }
              }
              else {
                lVar18 = 0x38;
                if (iVar27 <= iVar4) {
                  lVar18 = 0x40;
                }
                plVar19 = (longlong *)(lVar18 + lVar6);
              }
            }
            lVar18 = lVar31;
            if (iVar29 < iVar11) {
              lVar18 = *plVar16;
            }
            lVar20 = lVar32;
            if (iVar10 < iVar38) {
              lVar20 = lVar37;
            }
            if (*(int *)(lVar20 + 0x1c) < *(int *)(lVar18 + 0x1c)) {
              plVar21 = (longlong *)(lVar15 + 0x40);
              if (iVar29 < iVar11) {
                plVar21 = plVar16;
              }
            }
            else {
              lVar18 = 0x38;
              if (iVar38 <= iVar10) {
                lVar18 = 0x40;
              }
              plVar21 = (longlong *)(lVar18 + *(longlong *)(pbVar42 + 0x40));
            }
            if (iVar12 < *(int *)(lVar44 + 0x1c)) {
              lVar22 = lVar44;
            }
            if (iVar27 < *(int *)(lVar7 + 0x1c)) {
              lVar43 = lVar7;
            }
            if (*(int *)(lVar43 + 0x1c) < *(int *)(lVar22 + 0x1c)) {
              plVar23 = (longlong *)(lVar41 + 0x40);
              if (iVar12 < *(int *)(lVar44 + 0x1c)) {
                plVar23 = (longlong *)(lVar41 + 0x38);
              }
            }
            else {
              lVar22 = 0x38;
              if (*(int *)(lVar7 + 0x1c) <= iVar27) {
                lVar22 = 0x40;
              }
              plVar23 = (longlong *)(lVar22 + lVar6);
            }
            if (*(int *)(*plVar23 + 0x1c) < *(int *)(*plVar21 + 0x1c)) {
              if (iVar29 < iVar11) {
                lVar31 = *plVar16;
              }
              if (iVar10 < iVar38) {
                lVar32 = lVar37;
              }
              if (*(int *)(lVar32 + 0x1c) < *(int *)(lVar31 + 0x1c)) {
                plVar21 = (longlong *)(lVar15 + 0x40);
                if (iVar29 < iVar11) {
                  plVar21 = plVar16;
                }
              }
              else {
                lVar15 = 0x38;
                if (iVar38 <= iVar10) {
                  lVar15 = 0x40;
                }
                plVar21 = (longlong *)(lVar15 + *(longlong *)(pbVar42 + 0x40));
              }
            }
            else {
              lVar15 = 0x38;
              if (*(int *)(lVar44 + 0x1c) <= iVar12) {
                lVar15 = 0x40;
              }
              plVar16 = (longlong *)(lVar6 + 0x40);
              if (iVar27 < *(int *)(lVar7 + 0x1c)) {
                plVar16 = (longlong *)(lVar6 + 0x38);
              }
              if (*(int *)(*plVar16 + 0x1c) < *(int *)(*(longlong *)(lVar15 + lVar41) + 0x1c)) {
                plVar21 = (longlong *)(lVar41 + 0x40);
                if (iVar12 < *(int *)(lVar44 + 0x1c)) {
                  plVar21 = (longlong *)(lVar41 + 0x38);
                }
              }
              else {
                lVar15 = 0x38;
                if (*(int *)(lVar7 + 0x1c) <= iVar27) {
                  lVar15 = 0x40;
                }
                plVar21 = (longlong *)(lVar15 + lVar6);
              }
            }
            do {
              pbVar35 = pbVar35 + 0x48;
              pbVar34 = pbVar36;
              if (pbVar42 <= pbVar35) {
                pbVar24 = *(byte **)(pbVar33 + 0x28);
                goto LAB_180583a7c;
              }
              iVar29 = *(int *)(*(longlong *)(*(longlong *)(pbVar35 + 0x38) + 0x40) + 0x1c);
              iVar11 = *(int *)(*(longlong *)(*(longlong *)(pbVar35 + 0x38) + 0x38) + 0x1c);
              iVar10 = *(int *)(*(longlong *)(*(longlong *)(pbVar35 + 0x40) + 0x40) + 0x1c);
              iVar25 = iVar11;
              if (iVar29 <= iVar11) {
                iVar25 = iVar29;
              }
              iVar38 = *(int *)(*(longlong *)(*(longlong *)(pbVar35 + 0x40) + 0x38) + 0x1c);
              iVar12 = iVar38;
              if (iVar10 <= iVar38) {
                iVar12 = iVar10;
              }
              if (iVar25 < iVar12) {
                iVar25 = iVar11;
                if (iVar29 <= iVar11) {
                  iVar25 = iVar29;
                }
              }
              else {
                iVar25 = iVar10;
                if (iVar38 < iVar10) {
                  iVar25 = iVar38;
                }
              }
              iVar12 = iVar29;
              if (iVar29 < iVar11) {
                iVar12 = iVar11;
              }
              iVar27 = iVar10;
              if (iVar10 < iVar38) {
                iVar27 = iVar38;
              }
              if (iVar27 < iVar12) {
                iVar10 = iVar29;
                if (iVar29 < iVar11) {
                  iVar10 = iVar11;
                }
              }
              else if (iVar10 < iVar38) {
                iVar10 = iVar38;
              }
            } while (((iVar25 < *(int *)(*plVar19 + 0x1c)) && (iVar10 < *(int *)(*plVar19 + 0x1c)))
                    || ((*(int *)(*plVar21 + 0x1c) < iVar25 && (*(int *)(*plVar21 + 0x1c) < iVar10))
                       ));
            goto LAB_180583be0;
          }
LAB_180583a7c:
          if (0x4f < iVar9) goto LAB_180583a8f;
          uVar28 = (*(int *)(pbVar24 + 8) - *(int *)pbVar30) + iVar26;
        }
        *(uint *)(pbVar33 + 8) = uVar28;
        pbVar33[0xc] = pbVar33[0xc] | 4;
        if (pbVar5 < pbVar33) {
          uVar39 = *(uint *)(pbVar33 + -0x40);
          if (local_res20 == '\0') {
            bVar8 = (int)uVar28 < (int)uVar39;
          }
          else {
            bVar8 = (int)uVar39 < (int)uVar28;
          }
          if ((bVar8) && (*(longlong *)(pbVar33 + 0x20) != 0)) {
            iVar26 = *(int *)(*(longlong *)(pbVar33 + 0x20) + 8);
            iVar9 = iVar26 - uVar39;
            if (iVar9 < 0) {
              iVar9 = uVar39 - iVar26;
            }
            if (0x10 < iVar9) {
              *(uint *)(pbVar33 + 8) = uVar39;
              uVar28 = uVar39;
            }
          }
        }
        if ((pbVar33 + 0x48 < pbVar34) && ((pbVar33[0x54] & 4) != 0)) {
          iVar26 = *(int *)(pbVar33 + 0x50);
          if (local_res20 == '\0') {
            bVar8 = iVar26 < (int)uVar28;
          }
          else {
            bVar8 = (int)uVar28 < iVar26;
          }
          if ((bVar8) && (lVar15 = *(longlong *)(pbVar33 + 0x20), lVar15 != 0)) {
            iVar29 = *(int *)(lVar15 + 8) - *(int *)(pbVar33 + -0x40);
            iVar9 = *(int *)(pbVar33 + -0x40) - *(int *)(lVar15 + 8);
            if (-1 < iVar29) {
              iVar9 = iVar29;
            }
            if (0x10 < iVar9) {
              *(int *)(pbVar33 + 8) = iVar26;
              pbVar33 = pbVar33 + 0x48;
              goto LAB_1805835b1;
            }
          }
        }
      }
LAB_180583be0:
      pbVar33 = pbVar33 + 0x48;
    } while (pbVar33 < pbVar34);
  }
  return;
}



