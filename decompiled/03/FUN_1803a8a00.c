// FUN_1803a8a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a8a00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a8a00(longlong param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  byte local_b0 [8];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_80 [20];
  undefined1 local_6c [20];
  undefined8 local_58;
  PSRWLOCK pRStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  uVar20 = (ulonglong)param_2;
  bVar14 = false;
  local_b8 = local_b8 & 0xffffffff00000000;
  if (DAT_180c64054 != '\0') goto LAB_1803a8b4f;
  if (DAT_180b0b4d8 == '\0') {
  }
  plVar6 = (longlong *)FUN_180113860(&DAT_180bbe9d8);
  lVar8 = DAT_180bbe9d0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar3 = (byte)DAT_180bbe9d8;
  DAT_180bbe9d8 = (longlong)plVar6;
  if ((bVar3 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbe9d8);
  }
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x10) == 0)) {
LAB_1803a8abc:
    bVar13 = false;
  }
  else {
    plVar7 = (longlong *)FUN_18019a380(local_a8);
    bVar14 = true;
    if (*plVar7 == 0) goto LAB_1803a8abc;
    bVar13 = true;
  }
  if (bVar14) {
    uVar4 = local_a8._8_8_;
    if ((longlong *)local_a8._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar7 = (longlong *)(local_a8._8_8_ + 8);
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (*(code *)**(undefined8 **)local_a8._8_8_)(local_a8._8_8_);
        LOCK();
        piVar1 = (int *)(uVar4 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*(longlong *)uVar4 + 8))(uVar4);
        }
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (!bVar13) {
  }
LAB_1803a8b4f:
  if ((param_1 != 0) && (param_2 - 1 < 0x1000)) {
    local_58 = 0;
    pRStack_50 = (PSRWLOCK)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_180244f40();
    if (((char)uStack_40 != '\0') && (0 < (int)param_2)) {
      param_1 = param_1 + 0x20;
      uVar18 = local_b8;
      uVar19 = local_b8;
      uVar17 = (uint)local_b8;
      do {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        if (param_1 + -8 == 0) {
          bVar14 = false;
        }
        else {
          local_b8 = 0;
          cVar5 = FUN_1804514f0(&local_b8,param_1 + -8,8);
          if (cVar5 == '\0') {
            bVar14 = false;
          }
          else {
            bVar14 = true;
            uVar19 = local_b8;
          }
        }
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        if ((bVar14) && (uVar19 != 0)) {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          bVar14 = false;
          if (uVar19 + 0xc0 != 0) {
            local_b8 = local_b8 & 0xffffffff00000000;
            cVar5 = FUN_1804514f0(&local_b8,uVar19 + 0xc0,4);
            if (cVar5 == '\0') {
              bVar14 = false;
            }
            else {
              bVar14 = true;
              uVar17 = (uint)local_b8;
            }
          }
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          bVar13 = false;
          uVar11 = uVar17;
          if (!bVar14) {
            uVar11 = 0;
          }
          if (uVar11 - 1 < 0xfffffffe) {
            uVar15 = (ulonglong)(uVar11 & 0x7fff);
            if ((uVar11 & 0x7fff) < 0x4000) {
              uVar2 = (&DAT_180b0e108)[uVar15 * 4];
              if (((uVar2 & 1) == 0) && ((&DAT_180b0e110)[uVar15 * 8] == uVar11)) {
                if (((&DAT_180b0e108)[uVar15 * 4] == uVar2) &&
                   ((((&DAT_180b0e110)[uVar15 * 8] == uVar11 && ((&DAT_180b0e118)[uVar15 * 4] != 0))
                    && ((&DAT_180b0e120)[uVar15 * 8] != 0)))) {
                  pauVar9 = (undefined1 (*) [16])FUN_18028bea0(local_6c);
                  goto LAB_1803a8cea;
                }
              }
            }
            else {
              pauVar9 = (undefined1 (*) [16])FUN_1803a8550(local_80,uVar11);
LAB_1803a8cea:
              local_88 = *(undefined4 *)pauVar9[1];
              local_a8 = *pauVar9;
              local_98 = local_a8;
              if ((char)local_88 != '\0') {
                lVar8 = FUN_18017ea70();
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                if (param_1 != 0) {
                  local_b8 = 0;
                  cVar5 = FUN_1804514f0(&local_b8,param_1,8);
                  if (cVar5 != '\0') {
                    bVar13 = true;
                    uVar18 = local_b8;
                  }
                }
                lVar8 = FUN_18017ea70();
                if (*(int *)(lVar8 + 4) != 0) {
                  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                }
                uVar15 = uVar18;
                if (!bVar13) {
                  uVar15 = 0;
                }
                cVar5 = FUN_18028b510(uVar15);
                if (cVar5 == '\0') {
                  cVar5 = FUN_18028b7f0(uVar15);
                  if (cVar5 == '\0') {
                    iVar12 = local_a8._8_4_;
                    if (iVar12 < 0) {
                      uVar16 = 0xffffffff;
                      if (local_a8[0] != '\0') {
                        uVar16 = local_a8._4_4_;
                      }
                    }
                    else {
                      uVar16 = local_a8._12_4_;
                    }
                    local_b8 = CONCAT44(local_b8._4_4_,uVar16);
                    if (iVar12 < 0) {
                      if (param_1 + 0x30 != 0) {
                        lVar8 = FUN_18017ea70();
                        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                        FUN_1801ad800(param_1 + 0x30,&local_b8);
                        lVar8 = FUN_18017ea70();
                        if (*(int *)(lVar8 + 4) != 0) {
                          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                        }
                      }
                    }
                    else {
                      local_b0[4] = 10;
                      local_b0[5] = 0;
                      local_b0[6] = 0;
                      local_b0[7] = 0;
                      local_b0[0] = 0;
                      local_b0[1] = 0;
                      local_b0[2] = 0;
                      local_b0[3] = 0;
                      pbVar10 = local_b0 + 4;
                      if (iVar12 < 0xb) {
                        pbVar10 = local_98 + 8;
                      }
                      if (((ulonglong)*pbVar10 < 0x13) &&
                         (*(longlong *)(&DAT_180c7c270 + (ulonglong)*pbVar10 * 8) != 0)) {
                        FUN_18027c510(param_1 + -0x20,
                                      *(longlong *)(&DAT_180c7c270 + (ulonglong)*pbVar10 * 8),
                                      &local_b8);
                      }
                    }
                  }
                }
                else {
                  FUN_18028b770(param_1 + -0x20);
                }
              }
            }
          }
        }
        param_1 = param_1 + 0x70;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    FUN_180180bf0(&local_58);
    if ((char)uStack_48 != '\0') {
      ReleaseSRWLockShared(pRStack_50);
    }
  }
}



