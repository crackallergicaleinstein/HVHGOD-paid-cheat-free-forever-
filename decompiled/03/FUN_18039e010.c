// FUN_18039e010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039e010 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18039e010(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  code *pcVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  int local_d8 [2];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  char *local_98;
  longlong local_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_68;
  PSRWLOCK pRStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_68 = 0;
  pRStack_60 = (PSRWLOCK)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_b8 = param_1;
  local_b0 = param_3;
  local_a8 = param_2;
  FUN_180244f40(param_1,&local_68);
  if ((char)uStack_50 == '\0') {
    if (local_68 != 0) {
      piVar7 = (int *)FUN_1801acaf0();
      if ((uStack_50._1_1_ != '\0') && (*piVar7 != 0)) {
        *piVar7 = *piVar7 + -1;
      }
      if ((char)uStack_58 != '\0') {
        if (pRStack_60 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_60);
        uStack_58 = uStack_58 & 0xffffffffffffff00;
      }
      uStack_50 = uStack_50 & 0xffffffffffffff00;
      local_68 = 0;
    }
  }
  else {
    pcVar8 = (char *)FUN_18026e020();
    if (*pcVar8 == '\0') {
      if (local_68 != 0) {
        if ((char)uStack_50 != '\0') {
          LOCK();
          *(int *)(local_68 + 0x5c) = *(int *)(local_68 + 0x5c) + -1;
          UNLOCK();
        }
        piVar7 = (int *)FUN_1801acaf0();
        if ((uStack_50._1_1_ != '\0') && (*piVar7 != 0)) {
          *piVar7 = *piVar7 + -1;
        }
        if ((char)uStack_58 != '\0') {
          if (pRStack_60 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_60);
          uStack_58 = uStack_58 & 0xffffffffffffff00;
        }
        uStack_50 = uStack_50 & 0xffffffffffffff00;
        local_68 = 0;
      }
    }
    else {
      lVar9 = FUN_18026e020();
      plVar1 = *(longlong **)(lVar9 + 8);
      if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x477] != '\0')) {
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (param_3 == 0) {
          bVar18 = false;
        }
        else {
          local_d8[0] = 0;
          cVar4 = FUN_1804514f0(local_d8,param_3,4);
          if (cVar4 == '\0') {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
        }
        iVar5 = local_d8[0];
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        local_d8[0] = 0;
        if (bVar18) {
          local_d8[0] = iVar5;
        }
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (param_3 + 8 == 0) {
          bVar18 = false;
          plVar12 = local_c8;
        }
        else {
          local_d0 = (longlong *)0x0;
          cVar4 = FUN_1804514f0(&local_d0,param_3 + 8,8);
          if (cVar4 == '\0') {
            bVar18 = false;
            plVar12 = local_c8;
          }
          else {
            bVar18 = true;
            plVar12 = local_d0;
          }
        }
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        plVar17 = (longlong *)0x0;
        if (bVar18) {
          plVar17 = plVar12;
        }
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (param_1 + 0x38 == (longlong *)0x0) {
          bVar18 = false;
          plVar12 = local_c8;
        }
        else {
          local_d0 = (longlong *)0x0;
          cVar4 = FUN_1804514f0(&local_d0,param_1 + 0x38,8);
          if (cVar4 == '\0') {
            bVar18 = false;
            plVar12 = local_c8;
          }
          else {
            bVar18 = true;
            plVar12 = local_d0;
          }
        }
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        plVar15 = (longlong *)0x0;
        if (bVar18) {
          plVar15 = plVar12;
        }
        local_c8 = plVar15;
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (param_1 + 0x3c == (longlong *)0x0) {
          bVar18 = false;
          plVar12 = local_c8;
        }
        else {
          local_d0 = (longlong *)0x0;
          cVar4 = FUN_1804514f0(&local_d0,param_1 + 0x3c,8);
          if (cVar4 == '\0') {
            bVar18 = false;
            plVar12 = local_c8;
          }
          else {
            bVar18 = true;
            plVar12 = local_d0;
          }
        }
        lVar9 = FUN_18017ea70();
        if (*(int *)(lVar9 + 4) != 0) {
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
        }
        if ((!bVar18) || (plVar12 == (longlong *)0x0)) {
          plVar12 = (longlong *)0x0;
        }
        else {
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          local_d0 = (longlong *)0x0;
          cVar4 = FUN_1804514f0(&local_d0,plVar12,8);
          plVar13 = local_b8;
          if (cVar4 != '\0') {
            plVar13 = local_d0;
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          plVar12 = (longlong *)0x0;
          if (cVar4 != '\0') {
            plVar12 = plVar13;
          }
        }
        local_d0 = plVar12;
        if ((((0xff < local_d8[0] - 1U) || (plVar17 == (longlong *)0x0)) ||
            (plVar15 == (longlong *)0x0)) || (plVar12 == (longlong *)0x0)) goto LAB_18039e928;
        if ((DAT_180cce330 & 1) == 0) {
          DAT_180cce330 = DAT_180cce330 | 1;
          atexit(FUN_180662340);
        }
        lVar11 = DAT_180903348;
        lVar9 = DAT_1808da460;
        if (DAT_180903348 == DAT_1808da460) {
          pcVar16 = (code *)DAT_180c712d8;
          if (DAT_180c712d8 == 0) goto LAB_18039e3b9;
        }
        else {
LAB_18039e3b9:
          UVar10 = GetTickCount64();
          if ((lVar11 == lVar9) && (UVar10 < DAT_180c71278)) goto LAB_18039e928;
          local_c0 = (longlong *)&DAT_180903350;
          iVar5 = FUN_1805f68d0(&DAT_180903350);
          if (iVar5 != 0) goto LAB_18039e9b3;
          if (DAT_18090339c == 0x7fffffff) {
            DAT_18090339c = 0x7ffffffe;
            goto LAB_18039e9a8;
          }
          uVar14 = 1000;
          if (DAT_180903348 == lVar9) {
            if ((DAT_180c712d8 == 0) && (DAT_180c71278 <= UVar10)) goto LAB_18039e448;
          }
          else {
            DAT_1809033a0 = 1000;
LAB_18039e448:
            lVar11 = -1;
            do {
              local_90 = lVar11 + 1;
              lVar2 = lVar11 + 1;
              lVar11 = local_90;
            } while ("client.dll:448B42??488B12E9"[lVar2] != '\0');
            local_98 = "client.dll:448B42??488B12E9";
            local_88 = "patterns::get_bone_index";
            uStack_80 = 0x18;
            DAT_180c712d8 = FUN_1800e5d20(&local_88,&local_98);
            DAT_180903348 = lVar9;
            DAT_180c71278 = 0xffffffffffffffff;
            if (DAT_180c712d8 == 0) {
              DAT_180c71278 = DAT_1809033a0 + UVar10;
              uVar14 = 60000;
              if (DAT_1809033a0 < 60000) {
                uVar14 = DAT_1809033a0 * 2;
              }
            }
            DAT_1809033a0 = uVar14;
          }
          pcVar16 = (code *)DAT_180c712d8;
          FUN_1805f68fc(&DAT_180903350);
          if (pcVar16 == (code *)0x0) goto LAB_18039e928;
          plVar12 = local_d0;
        }
        iVar5 = 0;
        if (0 < local_d8[0]) {
          do {
            iVar6 = (*pcVar16)(plVar12,plVar17 + (longlong)iVar5 * 2);
            if (-1 < iVar6) {
              if (0xff < iVar6) goto LAB_18039e928;
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              bVar18 = false;
              if (local_c8 + (longlong)iVar6 * 4 != (longlong *)0x0) {
                local_88 = (char *)0x0;
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_70 = 0x3f80000000000000;
                cVar4 = FUN_1804514f0(&local_88,local_c8 + (longlong)iVar6 * 4,0x20);
                bVar18 = cVar4 != '\0';
              }
              lVar9 = FUN_18017ea70();
              if (*(int *)(lVar9 + 4) != 0) {
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
              }
              if (!bVar18) goto LAB_18039e928;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_d8[0]);
        }
        lVar9 = plVar1[1];
        if (lVar9 == 0) {
          iVar5 = DAT_180c712e0;
          if (DAT_180c712e0 == 0) {
            UVar10 = GetTickCount64();
            if (UVar10 < DAT_180c712e8) {
              iVar5 = 0;
            }
            else {
              local_c0 = (longlong *)&DAT_1809032a0;
              iVar5 = FUN_1805f68d0(&DAT_1809032a0);
              if (iVar5 != 0) goto LAB_18039e9b3;
              if (DAT_1809032ec == 0x7fffffff) {
                DAT_1809032ec = 0x7ffffffe;
                goto LAB_18039e9a8;
              }
              if ((DAT_180c712e0 == 0) && (DAT_180c712e8 <= UVar10)) {
                DAT_180c712e0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                if (DAT_180c712e0 == 0) {
                  DAT_180c712e8 = UVar10 + 1000;
                }
                else {
                  DAT_180c712e8 = 0xffffffffffffffff;
                }
              }
              iVar5 = DAT_180c712e0;
              FUN_1805f68fc(&DAT_1809032a0);
            }
          }
          lVar9 = *(longlong *)((longlong)iVar5 + *plVar1);
          if (lVar9 != 0) goto LAB_18039e65b;
          plVar15 = (longlong *)0x0;
        }
        else {
LAB_18039e65b:
          iVar5 = DAT_180c71260;
          if (DAT_180c71260 == 0) {
            UVar10 = GetTickCount64();
            if (UVar10 < DAT_180c71258) {
              iVar5 = 0;
            }
            else {
              local_c0 = (longlong *)&DAT_180903250;
              iVar5 = FUN_1805f68d0(&DAT_180903250);
              if (iVar5 != 0) {
LAB_18039e9b3:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_18090329c == 0x7fffffff) {
                DAT_18090329c = 0x7ffffffe;
LAB_18039e9a8:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c71260 == 0) && (DAT_180c71258 <= UVar10)) {
                DAT_180c71260 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
                DAT_180c71258 = 0xffffffffffffffff;
                if (DAT_180c71260 == 0) {
                  DAT_180c71258 = UVar10 + 1000;
                }
              }
              iVar5 = DAT_180c71260;
              FUN_1805f68fc(&DAT_180903250);
            }
          }
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          lVar9 = (longlong)iVar5 + 0x80 + lVar9;
          if (lVar9 == 0) {
            bVar18 = false;
            plVar12 = local_c8;
          }
          else {
            local_c0 = (longlong *)0x0;
            cVar4 = FUN_1804514f0(&local_c0,lVar9,8);
            if (cVar4 == '\0') {
              bVar18 = false;
              plVar12 = local_c8;
            }
            else {
              bVar18 = true;
              plVar12 = local_c0;
            }
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          plVar15 = (longlong *)0x0;
          if (bVar18) {
            plVar15 = plVar12;
          }
        }
        lVar9 = local_a8;
        if ((((DAT_180c700f0 != 0) &&
             (cVar4 = (*(code *)DAT_180c700f0)(local_b8,local_a8,local_b0), cVar4 != '\0')) &&
            (local_c8 + -0x2000 < (longlong *)0x7ffffffeffff)) &&
           ((plVar15 + -0x2000 < (longlong *)0x7ffffffeffff && (local_c8 == plVar15)))) {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          if (lVar9 + 0x10 == 0) {
            bVar18 = false;
            plVar12 = local_b8;
          }
          else {
            local_c8 = (longlong *)0x0;
            cVar4 = FUN_1804514f0(&local_c8,lVar9 + 0x10,8);
            if (cVar4 == '\0') {
              bVar18 = false;
              plVar12 = local_b8;
            }
            else {
              bVar18 = true;
              plVar12 = local_c8;
            }
          }
          lVar9 = FUN_18017ea70();
          plVar15 = local_d0;
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if ((bVar18) && (plVar12 != (longlong *)0x0)) {
            lVar9 = (longlong)local_d8[0];
            if (0 < lVar9) {
              do {
                iVar5 = (*pcVar16)(plVar15,plVar17);
                if ((-1 < iVar5) && (iVar5 < *(int *)((longlong)plVar1 + 0x36c))) {
                  plVar13 = plVar1 + (longlong)iVar5 * 4 + 0x6e;
                  lVar11 = plVar13[1];
                  lVar2 = plVar13[2];
                  lVar3 = plVar13[3];
                  *plVar12 = *plVar13;
                  plVar12[1] = lVar11;
                  plVar12[2] = lVar2;
                  plVar12[3] = lVar3;
                }
                plVar17 = plVar17 + 2;
                plVar12 = plVar12 + 4;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
          }
        }
        goto LAB_18039e928;
      }
      if (local_68 != 0) {
        if ((char)uStack_50 != '\0') {
          LOCK();
          *(int *)(local_68 + 0x5c) = *(int *)(local_68 + 0x5c) + -1;
          UNLOCK();
        }
        piVar7 = (int *)FUN_1801acaf0();
        if ((uStack_50._1_1_ != '\0') && (*piVar7 != 0)) {
          *piVar7 = *piVar7 + -1;
        }
        if ((char)uStack_58 != '\0') {
          if (pRStack_60 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_60);
          uStack_58 = uStack_58 & 0xffffffffffffff00;
        }
        uStack_50 = uStack_50 & 0xffffffffffffff00;
        local_68 = 0;
      }
    }
  }
  if (DAT_180c700f0 != 0) {
    (*(code *)DAT_180c700f0)(param_1,param_2,param_3);
  }
LAB_18039e928:
  FUN_180180bf0(&local_68);
  if ((char)uStack_58 != '\0') {
    ReleaseSRWLockShared(pRStack_60);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



