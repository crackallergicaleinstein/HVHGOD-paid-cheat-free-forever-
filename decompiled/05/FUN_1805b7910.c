// FUN_1805b7910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b7910 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001805b7b74) */
/* WARNING: Removing unreachable block (ram,0x0001805b7fbd) */
/* WARNING: Removing unreachable block (ram,0x0001805b7b9d) */
/* WARNING: Removing unreachable block (ram,0x0001805b7fe5) */

void FUN_1805b7910(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  int param_5,char param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [32];
  int local_108;
  undefined1 local_100;
  byte local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  byte *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  lVar11 = *param_1;
  local_f0 = lVar11;
  local_d8 = param_1;
  local_c8 = param_4;
  if ((param_6 == '\0') && (*(char *)(param_1[1] + 0x18) == '\0')) {
    local_80 = *param_4;
    local_100 = 1;
    uStack_78 = 0;
    uStack_70 = 0;
    local_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_108 = param_5;
    FUN_1805b7910(param_1[1],0,param_3,&local_80);
  }
  if (*(char *)(param_4 + 1) == '\0') {
    uVar17 = *(longlong *)(param_3 + 0x20) + *(longlong *)(param_2 + 0x20);
    if (uVar17 < 0x61) {
      param_4[2] = uVar17;
      uVar14 = uVar17 + 7 >> 3;
      param_4[3] = uVar14;
      *(undefined2 *)(param_4 + 1) = 0x101;
      if (uVar17 != 0) {
        uVar6 = 0;
        uVar19 = 0;
        if (uVar14 != 0) {
          do {
            *(undefined1 *)(uVar6 + 0x20 + (longlong)param_4) = 0xff;
            uVar6 = uVar6 + 1;
            uVar19 = param_4[3];
          } while (uVar6 < uVar19);
        }
        pbVar13 = (byte *)(uVar19 + 0x1f + (longlong)param_4);
        *pbVar13 = *pbVar13 & ~((char)(1 << (-(char)uVar17 & 7U)) - 1U);
      }
    }
    else {
      piVar2 = (int *)*param_4;
      if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
        *piVar2 = 0x12;
      }
    }
    if (*(char *)(param_4 + 1) == '\0') {
      if (*(char *)(lVar11 + 0xc) == '\0') {
      }
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x19) = 0;
    }
  }
  param_1[4] = 0;
  local_d0 = (byte *)&uStack_60;
  local_80 = *param_4;
  uStack_78 = param_4[1];
  local_e0 = *(ulonglong *)(param_2 + 0x20);
  uStack_70 = param_4[2];
  uStack_68 = param_4[3];
  uStack_60 = param_4[4];
  local_58 = param_4[5];
  if (local_e0 <= (ulonglong)param_4[2]) {
    if (*(char *)(lVar11 + 0x141) != '\0') {
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      FUN_1805b81f0(param_1,lVar11 + 0x178,&local_c0);
      FUN_1805b81f0(param_1,&local_c0,lVar11 + 0x158);
    }
    pbVar13 = (byte *)&uStack_60;
    local_f8 = 0x80;
    local_e8 = 0;
    uVar17 = local_e0;
    if (local_e0 != 0) {
      do {
        uVar14 = local_e8;
        uVar19 = 0;
        if ((*pbVar13 & local_f8) != 0) {
          uVar9 = *(uint *)((longlong)param_1 + 0x1c);
          uVar17 = local_e8;
          if (*(ulonglong *)(param_2 + 0x20) <= local_e8) {
            piVar2 = *(int **)(param_2 + 8);
            if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
              *piVar2 = 0x82;
            }
            uVar17 = uVar19;
          }
          pcVar18 = (char *)(*(longlong *)(param_2 + 0x30) + uVar17 * *(longlong *)(param_2 + 0x10))
          ;
          local_b0._0_4_ = *(int *)(pcVar18 + 8);
          iVar3 = (int)local_b0 - *(int *)(pcVar18 + 4);
          if (iVar3 == -0x150000) {
            uVar19 = 1;
          }
          else if (iVar3 == -0x140000) {
            local_b0._0_4_ = 0;
          }
          else {
            uVar19 = 4;
            if (-1 < iVar3) {
              local_b0._0_4_ = *(int *)(pcVar18 + 4);
            }
          }
          uStack_a8 = (ulonglong)uVar9;
          local_b0._0_4_ = (int)local_b0 + param_5;
          if (((uint)uVar19 == 0) || (*pcVar18 == '\0')) {
            lVar11 = (longlong)(int)local_b0 * (longlong)(int)uVar9;
            iVar3 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
            local_c0 = uVar19;
          }
          else {
            iVar3 = *(int *)(pcVar18 + 0xc);
            local_c0 = uVar19 | 0x10;
            uVar19 = (ulonglong)((uint)uVar19 | 0x10);
          }
          uVar9 = *(uint *)((longlong)param_1 + 0x1c);
          uVar16 = 0;
          local_b0 = CONCAT44(iVar3,(int)local_b0);
          uVar17 = local_e8;
          if (*(ulonglong *)(param_2 + 0x20) <= local_e8) {
            piVar2 = *(int **)(param_2 + 8);
            if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
              *piVar2 = 0x82;
            }
            uVar17 = 0;
          }
          pcVar18 = (char *)(*(longlong *)(param_2 + 0x30) + uVar17 * *(longlong *)(param_2 + 0x10))
          ;
          local_90._0_4_ = *(int *)(pcVar18 + 4);
          iVar4 = *(int *)(pcVar18 + 8) - (int)local_90;
          if (iVar4 == -0x150000) {
            local_90._0_4_ = 0;
          }
          else if (iVar4 == -0x140000) {
            uVar16 = 2;
          }
          else {
            uVar16 = 8;
            if (-1 < iVar4) {
              local_90._0_4_ = *(int *)(pcVar18 + 8);
            }
          }
          local_a0 = (ulonglong)uVar16;
          if (uVar16 != 0) {
            local_90._0_4_ = (int)local_90 + *(int *)(local_f0 + 0x130) * 2;
          }
          uStack_88 = (ulonglong)uVar9;
          local_90._0_4_ = (int)local_90 + param_5;
          if ((uVar16 == 0) || (*pcVar18 == '\0')) {
            lVar11 = (longlong)(int)local_90 * (longlong)(int)uVar9;
            iVar4 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
          }
          else if (uVar16 == 0) {
            iVar4 = *(int *)(pcVar18 + 0xc);
            uVar16 = 0x10;
            local_a0 = 0x10;
          }
          else {
            iVar4 = *(int *)(pcVar18 + 0x10);
            local_a0 = (ulonglong)uVar16 | 0x10;
            uVar16 = uVar16 | 0x10;
          }
          local_90 = CONCAT44(iVar4,(int)local_90);
          uStack_b8 = local_e8;
          uStack_98 = local_e8;
          if (((uVar16 | (uint)uVar19) & 0x10) == 0) {
            uVar17 = 0;
            iVar8 = *(int *)(local_f0 + 0x14c);
            param_1 = local_d8;
            if (*(uint *)(local_f0 + 0x13c) != 0) {
              do {
                lVar12 = uVar17 * 5 + 0x4e;
                lVar11 = local_f0 + lVar12 * 4;
                if (*(char *)(local_f0 + 0x70 + lVar12 * 4) == '\0') {
                  if ((((uVar16 & 10) != 0) && (*(int *)(lVar11 + 0x60) - iVar8 <= (int)local_90))
                     && ((int)local_90 <= *(int *)(local_f0 + 0x19c + uVar17 * 0x14) + iVar8)) {
                    if (*(char *)(local_f0 + 0x140) == '\0') {
                      if ((int)local_90 - *(int *)(lVar11 + 0x60) < *(int *)(local_f0 + 0x148)) {
                        uVar9 = iVar4 + 0x8000U & 0xffff0000;
                      }
                      else {
                        uVar9 = iVar4 + 0x8000U & 0xffff0000;
                        uVar5 = *(int *)(lVar11 + 0x6c) + 0x10000;
                        if ((int)uVar9 <= (int)uVar5) {
                          uVar9 = uVar5;
                        }
                      }
                    }
                    else {
                      uVar9 = *(uint *)(lVar11 + 0x6c);
                    }
                    iVar8 = uVar9 - iVar4;
                    goto LAB_1805b7dfe;
                  }
                }
                else if ((((uVar19 & 5) != 0) && (*(int *)(lVar11 + 0x60) - iVar8 <= (int)local_b0))
                        && (iVar1 = *(int *)(local_f0 + 0x19c + uVar17 * 0x14),
                           (int)local_b0 <= iVar8 + iVar1)) {
                  if (*(char *)(local_f0 + 0x140) == '\0') {
                    if (iVar1 - (int)local_b0 < *(int *)(local_f0 + 0x148)) {
                      iVar8 = (iVar3 + 0x8000U & 0xffff0000) - iVar3;
                    }
                    else {
                      uVar9 = iVar3 + 0x8000U & 0xffff0000;
                      uVar5 = *(int *)(lVar11 + 0x6c) - 0x10000;
                      if ((int)uVar5 <= (int)uVar9) {
                        uVar9 = uVar5;
                      }
                      iVar8 = uVar9 - iVar3;
                    }
                  }
                  else {
                    iVar8 = *(int *)(lVar11 + 0x6c) - iVar3;
                  }
LAB_1805b7dfe:
                  if ((uint)uVar19 != 0) {
                    local_b0 = CONCAT44(iVar3 + iVar8,(int)local_b0);
                    local_c0 = uVar19 | 0x10;
                  }
                  if (uVar16 != 0) {
                    local_90 = CONCAT44(iVar4 + iVar8,(int)local_90);
                    local_a0 = (ulonglong)uVar16 | 0x10;
                  }
                  goto LAB_1805b7e2e;
                }
                uVar9 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar9;
              } while (uVar9 < *(uint *)(local_f0 + 0x13c));
            }
          }
          else {
LAB_1805b7e2e:
            FUN_1805b81f0(param_1,&local_c0,&local_a0);
            *local_d0 = *local_d0 & ~local_f8;
          }
          pbVar13 = local_d0;
          uVar17 = local_e0;
          lVar11 = local_f0;
        }
        if (((uint)uVar14 & 7) == 7) {
          local_f8 = 0x80;
          pbVar13 = pbVar13 + 1;
        }
        else {
          local_f8 = local_f8 >> 1;
        }
        local_e8 = uVar14 + 1;
        local_d0 = pbVar13;
      } while (local_e8 < uVar17);
      param_4 = local_c8;
    }
    if (param_6 == '\0') {
      pbVar13 = (byte *)&uStack_60;
      bVar15 = 0x80;
      uVar14 = 0;
      if (uVar17 != 0) {
        do {
          uVar19 = 0;
          if ((*pbVar13 & bVar15) != 0) {
            iVar3 = 0;
            uVar9 = *(uint *)((longlong)param_1 + 0x1c);
            uVar17 = uVar14;
            if (*(ulonglong *)(param_2 + 0x20) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar17 = uVar19;
            }
            pcVar18 = (char *)(*(longlong *)(param_2 + 0x30) +
                              uVar17 * *(longlong *)(param_2 + 0x10));
            iVar4 = *(int *)(pcVar18 + 8);
            iVar8 = iVar4 - *(int *)(pcVar18 + 4);
            if (iVar8 == -0x150000) {
              local_a0 = 1;
              iVar3 = iVar4;
            }
            else if (iVar8 == -0x140000) {
              local_a0 = uVar19;
            }
            else {
              iVar3 = iVar4;
              if (-1 < iVar8) {
                iVar3 = *(int *)(pcVar18 + 4);
              }
              local_a0 = 4;
            }
            uStack_88 = (ulonglong)uVar9;
            if (((int)local_a0 == 0) || (*pcVar18 == '\0')) {
              lVar12 = (longlong)(iVar3 + param_5) * (longlong)(int)uVar9;
              uVar10 = (undefined4)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
            }
            else {
              uVar10 = *(undefined4 *)(pcVar18 + 0xc);
              local_a0 = local_a0 | 0x10;
            }
            local_90 = CONCAT44(uVar10,iVar3 + param_5);
            uVar9 = *(uint *)((longlong)param_1 + 0x1c);
            uVar17 = uVar14;
            if (*(ulonglong *)(param_2 + 0x20) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar17 = uVar19;
            }
            pcVar18 = (char *)(*(longlong *)(param_2 + 0x30) +
                              uVar17 * *(longlong *)(param_2 + 0x10));
            iVar3 = *(int *)(pcVar18 + 4);
            iVar4 = *(int *)(pcVar18 + 8) - iVar3;
            if (iVar4 == -0x150000) {
              iVar3 = 0;
            }
            else if (iVar4 == -0x140000) {
              uVar19 = 2;
            }
            else {
              if (-1 < iVar4) {
                iVar3 = *(int *)(pcVar18 + 8);
              }
              uVar19 = 8;
            }
            if (uVar19 != 0) {
              iVar3 = iVar3 + *(int *)(lVar11 + 0x130) * 2;
            }
            uStack_a8 = (ulonglong)uVar9;
            iVar3 = iVar3 + param_5;
            if (((int)uVar19 == 0) || (*pcVar18 == '\0')) {
              lVar12 = (longlong)iVar3 * (longlong)(int)uVar9;
              local_b0 = CONCAT44((int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10),
                                  iVar3);
              local_c0 = uVar19;
            }
            else if (uVar19 == 0) {
              local_c0 = 0x10;
              local_b0 = CONCAT44(*(undefined4 *)(pcVar18 + 0xc),iVar3);
            }
            else {
              local_c0 = uVar19 | 0x10;
              local_b0 = CONCAT44(*(undefined4 *)(pcVar18 + 0x10),iVar3);
            }
            uStack_b8 = uVar14;
            uStack_98 = uVar14;
            FUN_1805b81f0(param_1,&local_a0,&local_c0);
            uVar17 = local_e0;
          }
          if (((uint)uVar14 & 7) == 7) {
            bVar15 = 0x80;
            pbVar13 = pbVar13 + 1;
          }
          else {
            bVar15 = bVar15 >> 1;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
        param_4 = local_c8;
      }
      FUN_1805b7620(param_1);
      uVar17 = 0;
      if ((int)param_1[4] != 0) {
        pbVar13 = (byte *)(param_1 + 5);
        do {
          if ((*pbVar13 & 0x20) == 0) {
            uVar14 = *(ulonglong *)(pbVar13 + 8);
            if (*(ulonglong *)(param_2 + 0x20) <= uVar14) {
              piVar2 = *(int **)(param_2 + 8);
              if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
                *piVar2 = 0x82;
              }
              uVar14 = 0;
            }
            puVar7 = (undefined1 *)
                     (uVar14 * *(longlong *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x30));
            if ((*pbVar13 & 10) == 0) {
              *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(pbVar13 + 0x14);
            }
            else {
              *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(pbVar13 + 0x14);
            }
            *puVar7 = 1;
          }
          uVar17 = uVar17 + 1;
          pbVar13 = pbVar13 + 0x20;
        } while (uVar17 < *(uint *)(param_1 + 4));
      }
    }
    else {
      if ((((int)param_1[4] == 0) || (0 < (int)param_1[7])) ||
         ((int)param_1[(ulonglong)((int)param_1[4] - 1) * 4 + 7] < 0)) {
        uStack_b8 = 0;
        local_c0 = 0x31;
        local_b0 = 0;
        uStack_a8 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        FUN_1805b81f0(param_1,&local_c0,&local_a0);
      }
      FUN_1805b7620(param_1);
    }
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((longlong)param_4 + 9) = 0;
  }
}



