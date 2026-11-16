// FUN_1804f99f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f99f0 */

void FUN_1804f99f0(longlong param_1,int *param_2,uint param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res18 [2];
  int local_res20;
  int *local_c0;
  int iStack_b4;
  undefined1 local_ac [4];
  float local_a8 [3];
  int local_9c;
  int local_98;
  int local_94;
  
  local_res18[0] = 1;
LAB_1804f9a47:
  if ((int)param_3 < 0x600001) {
    if (param_3 == 0x600000) {
      iVar6 = param_2[2];
      iVar12 = param_2[1];
      iVar15 = *(int *)(param_1 + 0x18);
      if (iVar12 != iVar6) {
        if (iVar15 < iVar12) {
          param_2[1] = iVar15;
          iVar12 = iVar15;
        }
        if (iVar15 < iVar6) {
          param_2[2] = iVar15;
          iVar6 = iVar15;
        }
        if (iVar12 == iVar6) {
          *param_2 = iVar12;
        }
      }
      iVar13 = *param_2;
      if (iVar15 < *param_2) {
        *param_2 = iVar15;
        iVar13 = iVar15;
      }
      if (iVar12 == iVar6) {
        param_2[2] = iVar13;
        param_2[1] = iVar13;
        iVar6 = iVar13;
      }
      else {
        *param_2 = iVar6;
      }
      if (iVar6 < 1) goto LAB_1804f9feb;
      uVar9 = *(ulonglong *)(param_1 + 0x20);
      uVar10 = (longlong)iVar6 + uVar9;
      goto joined_r0x0001804f9fcb;
    }
    switch(param_3) {
    case 0x200000:
      iVar6 = param_2[2];
      iVar12 = param_2[1];
      bVar17 = SBORROW4(iVar12,iVar6);
      iVar15 = iVar12 - iVar6;
      bVar16 = iVar12 == iVar6;
      if (!bVar16) goto LAB_1804f9d61;
      if (*param_2 < 1) goto LAB_1804fa84c;
      uVar10 = *(ulonglong *)(param_1 + 0x20);
      uVar9 = uVar10 + (longlong)*param_2;
      goto joined_r0x0001804f9c71;
    case 0x200001:
      iVar6 = param_2[2];
      iVar12 = param_2[1];
      if (iVar12 == iVar6) {
        iVar15 = *param_2;
        iVar13 = *(int *)(param_1 + 0x18);
        if (iVar15 < iVar13) {
          iVar13 = FUN_1804b0e50(local_res18,(longlong)iVar15 + *(longlong *)(param_1 + 0x20),
                                 (longlong)iVar13 + *(longlong *)(param_1 + 0x20));
          iVar6 = param_2[2];
          iVar13 = iVar13 + iVar15;
          iVar12 = param_2[1];
        }
        else {
          iVar13 = iVar13 + 1;
        }
        *param_2 = iVar13;
        iVar15 = *(int *)(param_1 + 0x18);
        if (iVar12 != iVar6) {
          if (iVar15 < iVar12) {
            param_2[1] = iVar15;
            iVar12 = iVar15;
          }
          if (iVar15 < iVar6) {
            param_2[2] = iVar15;
            iVar6 = iVar15;
          }
          if (iVar12 == iVar6) {
            *param_2 = iVar12;
            iVar13 = iVar12;
          }
        }
      }
      else {
        if (iVar6 < iVar12) {
          param_2[2] = iVar12;
          param_2[1] = iVar6;
          iVar15 = iVar6;
          iVar6 = iVar12;
        }
        else {
          iVar15 = iVar12;
        }
        iVar12 = *(int *)(param_1 + 0x18);
        if (iVar12 < iVar15) {
          iVar15 = iVar12;
        }
        if (iVar12 < iVar6) {
          param_2[2] = iVar12;
          iVar6 = iVar12;
        }
        if (iVar15 == iVar6) {
          *param_2 = iVar15;
        }
        param_2[1] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        *param_2 = iVar6;
        iVar15 = *(int *)(param_1 + 0x18);
        iVar13 = iVar6;
      }
      if (iVar15 < iVar13) {
        *param_2 = iVar15;
      }
      goto LAB_1804fa84c;
    case 0x200002:
    case 0x20000e:
      goto switchD_1804f9a7b_caseD_200002;
    case 0x200003:
    case 0x20000f:
      goto switchD_1804f9a7b_caseD_200003;
    case 0x200004:
      iVar6 = param_2[2];
      iVar12 = param_2[1];
      iVar15 = *(int *)(param_1 + 0x18);
      if (iVar12 != iVar6) {
        if (iVar15 < iVar12) {
          param_2[1] = iVar15;
          iVar12 = iVar15;
        }
        if (iVar15 < iVar6) {
          param_2[2] = iVar15;
          iVar6 = iVar15;
        }
        if (iVar12 == iVar6) {
          *param_2 = iVar12;
        }
      }
      iVar13 = *param_2;
      if (iVar15 < *param_2) {
        *param_2 = iVar15;
        iVar13 = iVar15;
      }
      if (iVar12 != iVar6) {
        iVar13 = iVar12;
        if (iVar6 < iVar12) {
          param_2[1] = iVar6;
          iVar13 = iVar6;
        }
        *param_2 = iVar13;
        param_2[2] = iVar13;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      }
      iVar12 = FUN_1804f8ed0(param_1,param_2,iVar13);
      break;
    case 0x200005:
      iVar6 = param_2[2];
      iVar12 = param_2[1];
      iVar15 = *(int *)(param_1 + 0x18);
      if (iVar12 != iVar6) {
        if (iVar15 < iVar12) {
          param_2[1] = iVar15;
          iVar12 = iVar15;
        }
        if (iVar15 < iVar6) {
          param_2[2] = iVar15;
          iVar6 = iVar15;
        }
        if (iVar12 == iVar6) {
          *param_2 = iVar12;
        }
      }
      iVar13 = *param_2;
      if (iVar15 < *param_2) {
        *param_2 = iVar15;
        iVar13 = iVar15;
      }
      if (iVar12 != iVar6) {
        if (iVar6 < iVar12) {
          param_2[2] = iVar12;
          param_2[1] = iVar6;
          iVar6 = iVar12;
        }
        iVar12 = *(int *)(param_1 + 0x18);
        iVar13 = iVar6;
        if (iVar12 < iVar6) {
          param_2[2] = iVar12;
          iVar13 = iVar12;
        }
        *param_2 = iVar13;
        param_2[1] = iVar13;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      }
      iVar12 = FUN_1804f9050(param_1,param_2,iVar13);
      break;
    case 0x200006:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200007:
      *param_2 = *(int *)(param_1 + 0x18);
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200008:
      goto switchD_1804f9a7b_caseD_200008;
    case 0x200009:
      goto switchD_1804f9a7b_caseD_200009;
    case 0x20000a:
      FUN_1804fab80(param_1,param_2);
      goto LAB_1804fa84c;
    case 0x20000b:
      if (*(short *)((longlong)param_2 + 0xa3a) != 99) {
        lVar14 = (longlong)(short)param_2[0x28e];
        auVar3 = *(undefined1 (*) [16])
                  (param_2 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 + 8);
        auVar21 = ZEXT1664(auVar3);
        iVar12 = auVar3._8_4_;
        param_2[lVar14 * 4 + 9] = iVar12;
        param_2[lVar14 * 4 + 10] = auVar3._4_4_;
        iVar6 = auVar3._0_4_;
        param_2[lVar14 * 4 + 8] = iVar6;
        param_2[lVar14 * 4 + 0xb] = -1;
        auVar20 = auVar3;
        if (iVar12 != 0) {
          if (param_2[0x290] < param_2[0x28f] + iVar12) {
            (param_2 + lVar14 * 4 + 9)[0] = 0;
            (param_2 + lVar14 * 4 + 9)[1] = 0;
          }
          else {
            param_2[lVar14 * 4 + 0xb] = param_2[0x28f];
            iVar15 = 0;
            param_2[0x28f] = param_2[0x28f] + iVar12;
            if (0 < param_2[lVar14 * 4 + 9]) {
              do {
                iVar13 = param_2[lVar14 * 4 + 8] + iVar15;
                iVar7 = param_2[lVar14 * 4 + 0xb] + iVar15;
                iVar15 = iVar15 + 1;
                *(undefined1 *)((longlong)iVar7 + 0x650 + (longlong)param_2) =
                     *(undefined1 *)((longlong)iVar13 + *(longlong *)(param_1 + 0x20));
              } while (iVar15 < param_2[lVar14 * 4 + 9]);
            }
          }
          lVar14 = (longlong)iVar6 + *(longlong *)(param_1 + 0x30);
          FUN_18063aed0(lVar14,iVar12 + lVar14,
                        (longlong)(((*(int *)(param_1 + 0x18) - iVar6) - iVar12) + 1));
          auVar20 = auVar21._0_16_;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar12;
          *(undefined2 *)(param_1 + 0x73) = 0x101;
        }
        iVar12 = 0;
        if (auVar20._4_4_ != 0) {
          iStack_b4 = auVar3._12_4_;
          iVar12 = FUN_1804f9170(param_1,iVar6,(longlong)iStack_b4 + 0x650 + (longlong)param_2,
                                 auVar20._4_4_);
          param_2[0x290] = param_2[0x290] + iVar12;
        }
        *param_2 = iVar12 + iVar6;
        *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + 1;
        *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
      }
      goto LAB_1804fa84c;
    case 0x20000c:
      iVar6 = param_2[2];
      iVar12 = param_2[1];
      bVar17 = SBORROW4(iVar12,iVar6);
      iVar15 = iVar12 - iVar6;
      bVar16 = false;
      if (iVar12 == iVar6) {
        iVar13 = FUN_1804f8bb0(param_1,*param_2);
        iVar6 = param_2[2];
        iVar12 = param_2[1];
        *param_2 = iVar13;
        iVar15 = *(int *)(param_1 + 0x18);
        if (iVar12 != iVar6) {
          if (iVar15 < iVar12) {
            param_2[1] = iVar15;
            iVar12 = iVar15;
          }
          if (iVar15 < iVar6) {
            param_2[2] = iVar15;
            iVar6 = iVar15;
          }
          if (iVar12 == iVar6) {
            *param_2 = iVar12;
            iVar13 = iVar12;
          }
        }
        if (iVar15 < iVar13) {
          *param_2 = iVar15;
          return;
        }
        return;
      }
LAB_1804f9d61:
      if (!bVar16 && bVar17 == iVar15 < 0) {
        param_2[1] = iVar6;
        iVar12 = iVar6;
      }
      param_2[2] = iVar12;
      break;
    case 0x20000d:
      iVar12 = param_2[2];
      piVar1 = param_2 + 2;
      iVar6 = param_2[1];
      if (iVar6 == iVar12) {
        iVar13 = FUN_1804f8e20(param_1,*param_2);
        iVar6 = *piVar1;
        iVar12 = param_2[1];
        *param_2 = iVar13;
        iVar15 = *(int *)(param_1 + 0x18);
        if (iVar12 != iVar6) {
          if (iVar15 < iVar12) {
            param_2[1] = iVar15;
            iVar12 = iVar15;
          }
          if (iVar15 < iVar6) {
            *piVar1 = iVar15;
            iVar6 = iVar15;
          }
          if (iVar12 == iVar6) {
            *param_2 = iVar12;
            iVar13 = iVar12;
          }
        }
        if (iVar15 < iVar13) {
          *param_2 = iVar15;
          return;
        }
        return;
      }
      if (iVar12 < iVar6) {
        *piVar1 = iVar6;
        param_2[1] = iVar12;
        iVar15 = iVar12;
        iVar12 = iVar6;
      }
      else {
        iVar15 = iVar6;
      }
      iVar6 = *(int *)(param_1 + 0x18);
      if (iVar6 < iVar15) {
        iVar15 = iVar6;
      }
      if (iVar6 < iVar12) {
        param_2[2] = iVar6;
        iVar12 = iVar6;
      }
      if (iVar15 == iVar12) {
        *param_2 = iVar15;
      }
      param_2[1] = iVar12;
      break;
    default:
      goto switchD_1804f9a7b_default;
    }
    goto LAB_1804fa84a;
  }
  switch(param_3) {
  case 0x600001:
    iVar6 = param_2[2];
    if (param_2[1] == iVar6) {
      iVar6 = *param_2;
      param_2[2] = iVar6;
      param_2[1] = iVar6;
    }
    else {
      *param_2 = iVar6;
    }
    iVar12 = *(int *)(param_1 + 0x18);
    if (iVar6 < iVar12) {
      iVar12 = FUN_1804b0e50(local_res18,(longlong)iVar6 + *(longlong *)(param_1 + 0x20),
                             (longlong)iVar12 + *(longlong *)(param_1 + 0x20));
      iVar12 = iVar12 + iVar6;
    }
    else {
      iVar12 = iVar12 + 1;
    }
    param_2[2] = iVar12;
    iVar6 = *(int *)(param_1 + 0x18);
    if (param_2[1] != iVar12) {
      if (iVar6 < param_2[1]) {
        param_2[1] = iVar6;
      }
      if (iVar6 < iVar12) {
        param_2[2] = iVar6;
        iVar12 = iVar6;
      }
    }
    break;
  case 0x600002:
  case 0x60000e:
switchD_1804f9a7b_caseD_200002:
    if ((param_3 & 0xffbfffff) == 0x20000e) {
      local_res18[0] = param_2[4];
    }
    else if (*(char *)((longlong)param_2 + 0x17) != '\0') {
      param_3 = param_3 & 0x400000 | 0x200000;
      goto LAB_1804f9a47;
    }
    iVar15 = local_res18[0];
    iVar6 = param_2[1];
    piVar1 = param_2 + 1;
    iVar12 = param_2[2];
    if ((param_3 & 0x400000) == 0) {
      if (iVar6 != iVar12) {
        if (iVar12 < iVar6) {
          *piVar1 = iVar12;
          iVar6 = iVar12;
        }
        *param_2 = iVar6;
        param_2[2] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar13 = *(int *)(param_1 + 0x18);
        goto LAB_1804fa2ac;
      }
    }
    else if (iVar6 == iVar12) {
      iVar6 = *param_2;
      param_2[2] = iVar6;
      *piVar1 = iVar6;
      iVar12 = iVar6;
    }
    else {
      *param_2 = iVar12;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    if (iVar6 != iVar12) {
      if (iVar13 < iVar6) {
        *piVar1 = iVar13;
        iVar6 = iVar13;
      }
      if (iVar13 < iVar12) {
        param_2[2] = iVar13;
        iVar12 = iVar13;
      }
      if (iVar6 == iVar12) {
        *param_2 = iVar6;
      }
    }
LAB_1804fa2ac:
    local_c0 = param_2 + 1;
    iVar6 = *param_2;
    if (iVar13 < *param_2) {
      *param_2 = iVar13;
      iVar6 = iVar13;
    }
    FUN_1804f9620(local_a8,param_1,iVar6,*(char *)((longlong)param_2 + 0x17));
    local_res20 = 0;
    if (iVar15 < 1) {
      return;
    }
    fVar23 = -1.0;
    iVar6 = local_94;
    iVar12 = local_9c;
    fVar24 = local_a8[0];
    do {
      iVar15 = iVar6;
      if (*(char *)((longlong)param_2 + 0x16) == '\0') {
        fVar22 = fVar24;
      }
      else {
        fVar22 = (float)param_2[7];
      }
      if (iVar15 == iVar12) {
        return;
      }
      *param_2 = iVar15;
      FUN_1804f89b0(local_a8,param_1,iVar15);
      iVar6 = local_94;
      iVar13 = 0;
      fVar19 = local_a8[0];
      if (0 < local_94) {
        do {
          fVar18 = (float)FUN_1804f8920(param_1,iVar15,iVar13);
          iVar7 = *(int *)(param_1 + 0x18);
          iVar4 = *param_2;
          if (iVar4 < iVar7) {
            iVar7 = FUN_1804b0e50(local_ac,(longlong)iVar4 + *(longlong *)(param_1 + 0x20),
                                  (longlong)iVar7 + *(longlong *)(param_1 + 0x20));
            iVar7 = iVar7 + iVar4;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          if ((fVar18 == fVar23) || (fVar19 = fVar19 + fVar18, fVar22 < fVar19)) break;
          iVar13 = iVar13 + (iVar7 - *param_2);
          *param_2 = iVar7;
        } while (iVar13 < iVar6);
      }
      iVar6 = param_2[2];
      iVar13 = *(int *)(param_1 + 0x18);
      iVar7 = *local_c0;
      if (iVar7 != iVar6) {
        if (iVar13 < iVar7) {
          *local_c0 = iVar13;
          iVar7 = iVar13;
        }
        if (iVar13 < iVar6) {
          param_2[2] = iVar13;
          iVar6 = iVar13;
        }
        if (iVar7 == iVar6) {
          *param_2 = iVar7;
        }
      }
      iVar6 = *param_2;
      if (iVar13 < *param_2) {
        *param_2 = iVar13;
        iVar6 = iVar13;
      }
      if (iVar6 == iVar12) {
        *(undefined1 *)(param_1 + 0x77) = 1;
      }
      else if (iVar6 == iVar15) {
        *(undefined1 *)(param_1 + 0x77) = 0;
      }
      param_2[7] = (int)fVar22;
      *(undefined1 *)((longlong)param_2 + 0x16) = 1;
      if ((param_3 & 0x400000) != 0) {
        param_2[2] = *param_2;
      }
      if (iVar15 < 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = (ulonglong)(iVar15 - 1U);
        if (0 < (int)(iVar15 - 1U)) {
          uVar10 = *(ulonglong *)(param_1 + 0x20);
          do {
            uVar11 = uVar9 + uVar10;
            uVar5 = uVar10;
            if (uVar10 < uVar11) {
              do {
                pbVar2 = (byte *)(uVar11 - 1);
                uVar11 = uVar11 - 1;
                if ((*pbVar2 & 0xc0) != 0x80) {
                  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
                  goto LAB_1804fa459;
                }
              } while (uVar10 < uVar11);
              uVar5 = *(ulonglong *)(param_1 + 0x20);
            }
            iVar6 = (int)uVar5;
            uVar11 = uVar10;
LAB_1804fa459:
            uVar8 = (int)uVar11 - iVar6;
          } while ((*(char *)((longlong)(int)uVar8 + uVar10) != '\n') &&
                  (uVar9 = (ulonglong)uVar8, 0 < (int)uVar8));
        }
      }
      iVar6 = FUN_1804f8ed0(param_1,param_2,uVar9);
      local_res20 = local_res20 + 1;
      iVar12 = iVar15;
      if (local_res18[0] <= local_res20) {
        return;
      }
    } while( true );
  case 0x600003:
  case 0x60000f:
switchD_1804f9a7b_caseD_200003:
    if ((param_3 & 0xffbfffff) == 0x20000f) {
      local_res18[0] = param_2[4];
    }
    else if (*(char *)((longlong)param_2 + 0x17) != '\0') goto code_r0x0001804f9ac5;
    iVar15 = local_res18[0];
    iVar12 = param_2[1];
    piVar1 = param_2 + 1;
    iVar6 = param_2[2];
    if ((param_3 & 0x400000) == 0) {
      if (iVar12 != iVar6) {
        if (iVar6 < iVar12) {
          *piVar1 = iVar6;
          param_2[2] = iVar12;
          iVar13 = iVar6;
          iVar6 = iVar12;
        }
        else {
          iVar13 = iVar12;
        }
        iVar12 = *(int *)(param_1 + 0x18);
        if (iVar12 < iVar13) {
          param_2[1] = iVar12;
          iVar13 = iVar12;
        }
        if (iVar12 < iVar6) {
          param_2[2] = iVar12;
          iVar6 = iVar12;
        }
        if (iVar13 == iVar6) {
          *param_2 = iVar13;
        }
        *param_2 = iVar6;
        param_2[1] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar13 = *(int *)(param_1 + 0x18);
        goto LAB_1804fa04d;
      }
    }
    else if (iVar12 == iVar6) {
      iVar12 = *param_2;
      param_2[2] = iVar12;
      *piVar1 = iVar12;
      iVar6 = iVar12;
    }
    else {
      *param_2 = iVar6;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    if (iVar12 != iVar6) {
      if (iVar13 < iVar12) {
        *piVar1 = iVar13;
        iVar12 = iVar13;
      }
      if (iVar13 < iVar6) {
        param_2[2] = iVar13;
        iVar6 = iVar13;
      }
      if (iVar12 == iVar6) {
        *param_2 = iVar12;
      }
    }
LAB_1804fa04d:
    iVar6 = *param_2;
    if (iVar13 < *param_2) {
      *param_2 = iVar13;
      iVar6 = iVar13;
    }
    FUN_1804f9620(local_a8,param_1,iVar6,*(undefined1 *)((longlong)param_2 + 0x17));
    local_c0._0_4_ = 0;
    if (iVar15 < 1) {
      return;
    }
    fVar23 = -1.0;
    iVar6 = local_98;
    fVar24 = local_a8[0];
    do {
      iVar12 = 0;
      if (*(char *)((longlong)param_2 + 0x16) == '\0') {
        fVar22 = fVar24;
      }
      else {
        fVar22 = (float)param_2[7];
      }
      iVar15 = local_9c + iVar6;
      if (iVar6 == 0) {
        return;
      }
      *param_2 = iVar15;
      local_res20 = local_9c;
      FUN_1804f89b0(local_a8,param_1,iVar15);
      iVar13 = local_94;
      fVar19 = local_a8[0];
      if (0 < local_94) {
        do {
          fVar18 = (float)FUN_1804f8920(param_1,iVar15,iVar12);
          iVar7 = *(int *)(param_1 + 0x18);
          iVar4 = *param_2;
          if (iVar4 < iVar7) {
            iVar7 = FUN_1804b0e50(local_ac,(longlong)iVar4 + *(longlong *)(param_1 + 0x20),
                                  (longlong)iVar7 + *(longlong *)(param_1 + 0x20));
            iVar7 = iVar7 + iVar4;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          if ((fVar18 == fVar23) || (fVar22 < fVar19 + fVar18)) break;
          iVar12 = iVar12 + (iVar7 - *param_2);
          *param_2 = iVar7;
          fVar19 = fVar19 + fVar18;
        } while (iVar12 < iVar13);
      }
      iVar12 = param_2[2];
      iVar15 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar15 != iVar12) {
        if (iVar7 < iVar15) {
          param_2[1] = iVar7;
          iVar15 = iVar7;
        }
        if (iVar7 < iVar12) {
          param_2[2] = iVar7;
          iVar12 = iVar7;
        }
        if (iVar15 == iVar12) {
          *param_2 = iVar15;
        }
      }
      iVar12 = *param_2;
      if (iVar7 < *param_2) {
        *param_2 = iVar7;
        iVar12 = iVar7;
      }
      if (iVar12 == local_res20 + iVar6) {
        *(undefined1 *)(param_1 + 0x77) = 0;
      }
      param_2[7] = (int)fVar22;
      *(undefined1 *)((longlong)param_2 + 0x16) = 1;
      if ((param_3 & 0x400000) != 0) {
        param_2[2] = *param_2;
      }
      local_9c = local_res20 + iVar6;
      local_c0._0_4_ = (int)local_c0 + 1;
      iVar6 = iVar13;
      if (local_res18[0] <= (int)local_c0) {
        return;
      }
    } while( true );
  case 0x600004:
    iVar6 = param_2[2];
    iVar12 = param_2[1];
    iVar15 = *(int *)(param_1 + 0x18);
    if (iVar12 != iVar6) {
      if (iVar15 < iVar12) {
        param_2[1] = iVar15;
        iVar12 = iVar15;
      }
      if (iVar15 < iVar6) {
        param_2[2] = iVar15;
        iVar6 = iVar15;
      }
      if (iVar12 == iVar6) {
        *param_2 = iVar12;
      }
    }
    iVar13 = *param_2;
    if (iVar15 < *param_2) {
      *param_2 = iVar15;
      iVar13 = iVar15;
    }
    if (iVar12 == iVar6) {
      param_2[1] = iVar13;
      param_2[2] = iVar13;
      iVar12 = FUN_1804f8ed0(param_1,param_2);
    }
    else {
      *param_2 = iVar6;
      iVar12 = FUN_1804f8ed0(param_1,param_2,iVar6);
    }
    goto LAB_1804fa848;
  case 0x600005:
    iVar6 = param_2[2];
    iVar12 = param_2[1];
    iVar15 = *(int *)(param_1 + 0x18);
    if (iVar12 != iVar6) {
      if (iVar15 < iVar12) {
        param_2[1] = iVar15;
        iVar12 = iVar15;
      }
      if (iVar15 < iVar6) {
        param_2[2] = iVar15;
        iVar6 = iVar15;
      }
      if (iVar12 == iVar6) {
        *param_2 = iVar12;
      }
    }
    iVar13 = *param_2;
    if (iVar15 < *param_2) {
      *param_2 = iVar15;
      iVar13 = iVar15;
    }
    if (iVar12 == iVar6) {
      param_2[2] = iVar13;
      param_2[1] = iVar13;
      iVar6 = iVar13;
    }
    else {
      *param_2 = iVar6;
    }
    iVar12 = FUN_1804f9050(param_1,param_2,iVar6);
LAB_1804fa848:
    param_2[2] = iVar12;
    break;
  case 0x600006:
    if (param_2[1] == param_2[2]) {
      param_2[1] = *param_2;
    }
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
    return;
  case 0x600007:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
      iVar12 = *(int *)(param_1 + 0x18);
      param_2[2] = iVar12;
    }
    else {
      *param_2 = param_2[2];
      iVar12 = *(int *)(param_1 + 0x18);
      param_2[2] = iVar12;
    }
    break;
  case 0x600008:
switchD_1804f9a7b_caseD_200008:
    iVar15 = param_2[2];
    iVar6 = param_2[1];
    iVar12 = *(int *)(param_1 + 0x18);
    if (iVar6 != iVar15) goto LAB_1804fa644;
    iVar6 = *param_2;
    if (iVar6 < iVar12) {
      iVar12 = FUN_1804b0e50(local_res18,(longlong)iVar6 + *(longlong *)(param_1 + 0x20),
                             (longlong)iVar12 + *(longlong *)(param_1 + 0x20));
      FUN_1804f9850(param_1,param_2,*param_2,(iVar12 + iVar6) - *param_2);
    }
    goto LAB_1804fa84c;
  case 0x600009:
switchD_1804f9a7b_caseD_200009:
    iVar15 = param_2[2];
    iVar6 = param_2[1];
    iVar12 = *(int *)(param_1 + 0x18);
    if (iVar6 == iVar15) {
      iVar6 = *param_2;
      if (iVar12 < *param_2) {
        *param_2 = iVar12;
        iVar6 = iVar12;
      }
      if (iVar6 < 1) goto LAB_1804fa84c;
      uVar9 = *(ulonglong *)(param_1 + 0x20);
      uVar10 = (longlong)iVar6 + uVar9;
      if (uVar10 <= uVar9) goto LAB_1804fa6e5;
      goto LAB_1804fa6d0;
    }
LAB_1804fa644:
    if (iVar12 < iVar6) {
      param_2[1] = iVar12;
      iVar6 = iVar12;
    }
    if (iVar12 < iVar15) {
      param_2[2] = iVar12;
      iVar15 = iVar12;
    }
    if (iVar6 == iVar15) {
      *param_2 = iVar6;
    }
    if (iVar12 < *param_2) {
      *param_2 = iVar12;
    }
    if (iVar6 == iVar15) goto LAB_1804fa84c;
    if (iVar6 < iVar15) {
      FUN_1804f9850(param_1,param_2,iVar6,iVar15 - iVar6);
      iVar12 = param_2[1];
      param_2[2] = iVar12;
    }
    else {
      FUN_1804f9850(param_1,param_2,iVar15,iVar6 - iVar15);
      iVar12 = param_2[2];
      param_2[1] = iVar12;
    }
    break;
  default:
    goto switchD_1804f9a7b_default;
  case 0x60000c:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    iVar15 = FUN_1804f8bb0(param_1,*param_2);
    iVar6 = param_2[1];
    *param_2 = iVar15;
    param_2[2] = iVar15;
    iVar12 = *(int *)(param_1 + 0x18);
    if (iVar6 != iVar15) {
      if (iVar12 < iVar6) {
        param_2[1] = iVar12;
        iVar6 = iVar12;
      }
      iVar13 = iVar15;
      if (iVar12 < iVar15) {
        param_2[2] = iVar12;
        iVar13 = iVar12;
      }
      if (iVar6 == iVar13) {
        *param_2 = iVar6;
        iVar15 = iVar6;
      }
    }
    if (iVar12 < iVar15) {
      *param_2 = iVar12;
      return;
    }
    return;
  case 0x60000d:
    if (param_2[1] == param_2[2]) {
      param_2[2] = *param_2;
      param_2[1] = *param_2;
    }
    iVar15 = FUN_1804f8e20(param_1,*param_2);
    iVar6 = param_2[1];
    *param_2 = iVar15;
    param_2[2] = iVar15;
    iVar12 = *(int *)(param_1 + 0x18);
    if (iVar6 != iVar15) {
      if (iVar12 < iVar6) {
        param_2[1] = iVar12;
        iVar6 = iVar12;
      }
      iVar13 = iVar15;
      if (iVar12 < iVar15) {
        param_2[2] = iVar12;
        iVar13 = iVar12;
      }
      if (iVar6 == iVar13) {
        *param_2 = iVar6;
        iVar15 = iVar6;
      }
    }
    if (iVar12 < iVar15) {
      *param_2 = iVar12;
    }
    goto switchD_1804f9a7b_default;
  }
LAB_1804fa84a:
  *param_2 = iVar12;
  goto LAB_1804fa84c;
  while( true ) {
    pbVar2 = (byte *)(uVar10 - 1);
    uVar10 = uVar10 - 1;
    if ((*pbVar2 & 0xc0) != 0x80) break;
joined_r0x0001804f9fcb:
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
      break;
    }
  }
  iVar6 = (int)uVar10 - *(int *)(param_1 + 0x20);
  param_2[2] = iVar6;
LAB_1804f9feb:
  *param_2 = iVar6;
  goto LAB_1804fa84c;
  while( true ) {
    pbVar2 = (byte *)(uVar9 - 1);
    uVar9 = uVar9 - 1;
    if ((*pbVar2 & 0xc0) != 0x80) break;
joined_r0x0001804f9c71:
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
      break;
    }
  }
  *param_2 = (int)uVar9 - *(int *)(param_1 + 0x20);
  goto LAB_1804fa84c;
code_r0x0001804f9ac5:
  param_3 = param_3 & 0x400000 | 0x200001;
  goto LAB_1804f9a47;
  while (uVar9 < uVar10) {
LAB_1804fa6d0:
    pbVar2 = (byte *)(uVar10 - 1);
    uVar10 = uVar10 - 1;
    if ((*pbVar2 & 0xc0) != 0x80) {
      iVar6 = *param_2;
      goto LAB_1804fa6e8;
    }
  }
  iVar6 = *param_2;
LAB_1804fa6e5:
  uVar10 = uVar9;
LAB_1804fa6e8:
  iVar12 = (int)uVar10 - *(int *)(param_1 + 0x20);
  FUN_1804f9850(param_1,param_2,iVar12,iVar6 - iVar12);
  *param_2 = iVar12;
LAB_1804fa84c:
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
switchD_1804f9a7b_default:
  return;
}



