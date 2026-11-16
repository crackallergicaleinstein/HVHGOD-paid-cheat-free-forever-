// FUN_1802af7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802af7c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802af7c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auStack_7c8 [32];
  undefined *local_7a8;
  undefined4 local_7a0 [2];
  undefined *local_798;
  longlong local_790;
  longlong local_788;
  float local_778 [448];
  int local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_7c8;
  if (param_2 != 0) {
    local_790 = param_2;
    local_788 = param_1;
    FUN_18063ab10(local_778,0,0x700);
    FUN_1802b4fe0(local_778);
    lVar12 = 0;
    local_78 = 0;
    fVar16 = 0.0;
    local_70 = 0;
    local_7a8 = (undefined *)CONCAT44(local_7a8._4_4_,0x40);
    local_7a0[0] = 0;
    iVar5 = DAT_180c6e658;
    if (DAT_180c6e658 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e660) {
        iVar5 = 0;
      }
      else {
        local_798 = &DAT_1808f4d70;
        iVar5 = FUN_1805f68d0(&DAT_1808f4d70);
        if (iVar5 != 0) goto LAB_1802afec7;
        if (DAT_1808f4dbc == 0x7fffffff) {
          DAT_1808f4dbc = 0x7ffffffe;
          goto LAB_1802afefd;
        }
        if ((DAT_180c6e658 == 0) && (DAT_180c6e660 <= UVar6)) {
          DAT_180c6e658 = FUN_1804174b0("C_Inferno",0x820942a0);
          if (DAT_180c6e658 == 0) {
            DAT_180c6e660 = UVar6 + 1000;
          }
          else {
            DAT_180c6e660 = 0xffffffffffffffff;
          }
        }
        iVar5 = DAT_180c6e658;
        FUN_1805f68fc(&DAT_1808f4d70);
      }
    }
    iVar5 = *(int *)(iVar5 + param_2);
    local_798 = (undefined *)CONCAT44(local_798._4_4_,iVar5);
    ppuVar8 = (undefined **)local_7a0;
    if (-1 < iVar5) {
      ppuVar8 = &local_798;
    }
    ppuVar7 = &local_7a8;
    if (iVar5 < 0x41) {
      ppuVar7 = ppuVar8;
    }
    iVar5 = *(int *)ppuVar7;
    iVar11 = DAT_180c6e668;
    local_78 = iVar5;
    if (DAT_180c6e668 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e640) {
        iVar11 = 0;
      }
      else {
        local_7a8 = &DAT_1808f4d20;
        iVar11 = FUN_1805f68d0(&DAT_1808f4d20);
        if (iVar11 != 0) goto LAB_1802afec7;
        if (DAT_1808f4d6c == 0x7fffffff) {
          DAT_1808f4d6c = 0x7ffffffe;
          goto LAB_1802afefd;
        }
        if ((DAT_180c6e668 == 0) && (DAT_180c6e640 <= UVar6)) {
          DAT_180c6e668 = FUN_1804174b0("C_Inferno",0x89eb57f2);
          if (DAT_180c6e668 == 0) {
            DAT_180c6e640 = UVar6 + 1000;
          }
          else {
            DAT_180c6e640 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c6e668;
        FUN_1805f68fc(&DAT_1808f4d20);
      }
    }
    local_74 = *(undefined4 *)(iVar11 + param_2);
    iVar11 = DAT_180c6e648;
    if (DAT_180c6e648 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e650) {
        iVar11 = 0;
      }
      else {
        local_7a8 = &DAT_1808f4c80;
        iVar11 = FUN_1805f68d0(&DAT_1808f4c80);
        if (iVar11 != 0) goto LAB_1802afec7;
        if (DAT_1808f4ccc == 0x7fffffff) {
          DAT_1808f4ccc = 0x7ffffffe;
          goto LAB_1802afefd;
        }
        if ((DAT_180c6e648 == 0) && (DAT_180c6e650 <= UVar6)) {
          DAT_180c6e648 = FUN_1804174b0("C_Inferno",0x1f43d58);
          if (DAT_180c6e648 == 0) {
            DAT_180c6e650 = UVar6 + 1000;
          }
          else {
            DAT_180c6e650 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c6e648;
        FUN_1805f68fc(&DAT_1808f4c80);
      }
    }
    local_70 = *(uint *)(iVar11 + param_2);
    auVar15 = ZEXT464(local_70);
    iVar11 = DAT_180c6e634;
    if (DAT_180c6e634 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e638) {
        iVar11 = 0;
      }
      else {
        local_7a8 = &DAT_1808f4cd0;
        iVar11 = FUN_1805f68d0(&DAT_1808f4cd0);
        if (iVar11 != 0) {
LAB_1802afec7:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808f4d1c == 0x7fffffff) {
          DAT_1808f4d1c = 0x7ffffffe;
LAB_1802afefd:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6e634 == 0) && (DAT_180c6e638 <= UVar6)) {
          DAT_180c6e634 = FUN_1804174b0("C_Inferno",0xb2e34e7e);
          if (DAT_180c6e634 == 0) {
            DAT_180c6e638 = UVar6 + 1000;
          }
          else {
            DAT_180c6e638 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c6e634;
        FUN_1805f68fc(&DAT_1808f4cd0);
      }
    }
    local_6c = *(undefined4 *)(iVar11 + param_2);
    sVar3 = thunk_FUN_180624430(auVar15._0_8_);
    if (((sVar3 < 1) && (fVar16 < auVar15._0_4_)) && (auVar15._0_4_ <= 256.0)) {
      iVar11 = 0;
      if (0 < iVar5) {
        lVar13 = 0;
        pfVar10 = local_778;
        fVar16 = 0.2;
        do {
          iVar4 = DAT_180c6e620;
          if ((DAT_180c6e620 == 0) && (UVar6 = GetTickCount64(), DAT_180c6e628 <= UVar6)) {
            local_7a8 = &DAT_1808f4c30;
            iVar4 = FUN_1805f68d0(&DAT_1808f4c30);
            if (iVar4 != 0) goto LAB_1802afec7;
            if (DAT_1808f4c7c == 0x7fffffff) {
              DAT_1808f4c7c = 0x7ffffffe;
              goto LAB_1802afefd;
            }
            if ((DAT_180c6e620 == 0) && (DAT_180c6e628 <= UVar6)) {
              DAT_180c6e620 = FUN_1804174b0("C_Inferno",0xe5cd906c);
              if (DAT_180c6e620 == 0) {
                DAT_180c6e628 = UVar6 + 1000;
              }
              else {
                DAT_180c6e628 = 0xffffffffffffffff;
              }
            }
            iVar4 = DAT_180c6e620;
            FUN_1805f68fc(&DAT_1808f4c30);
          }
          iVar9 = DAT_180c6e630;
          if (*(char *)(iVar4 + local_790 + lVar12) != '\0') {
            if ((DAT_180c6e630 == 0) && (UVar6 = GetTickCount64(), DAT_180c6e608 <= UVar6)) {
              local_7a8 = &DAT_1808f4be0;
              iVar5 = FUN_1805f68d0(&DAT_1808f4be0);
              if (iVar5 != 0) goto LAB_1802afec7;
              if (DAT_1808f4c2c == 0x7fffffff) {
                DAT_1808f4c2c = 0x7ffffffe;
                goto LAB_1802afefd;
              }
              if ((DAT_180c6e630 == 0) && (DAT_180c6e608 <= UVar6)) {
                DAT_180c6e630 = FUN_1804174b0("C_Inferno",0x1e992007);
                if (DAT_180c6e630 == 0) {
                  DAT_180c6e608 = UVar6 + 1000;
                }
                else {
                  DAT_180c6e608 = 0xffffffffffffffff;
                }
              }
              iVar9 = DAT_180c6e630;
              FUN_1805f68fc(&DAT_1808f4be0);
            }
            lVar1 = local_790;
            iVar5 = DAT_180c6e610;
            *(undefined8 *)pfVar10 = *(undefined8 *)(iVar9 + local_790 + lVar13);
            pfVar10[2] = *(float *)(iVar9 + local_790 + 8 + lVar13);
            if ((DAT_180c6e610 == 0) && (UVar6 = GetTickCount64(), DAT_180c6e618 <= UVar6)) {
              local_7a8 = &DAT_1808f4b90;
              iVar5 = FUN_1805f68d0(&DAT_1808f4b90);
              if (iVar5 != 0) goto LAB_1802afec7;
              if (DAT_1808f4bdc == 0x7fffffff) {
                DAT_1808f4bdc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c6e610 == 0) && (DAT_180c6e618 <= UVar6)) {
                DAT_180c6e610 = FUN_1804174b0("C_Inferno",0x382663db);
                if (DAT_180c6e610 == 0) {
                  DAT_180c6e618 = UVar6 + 1000;
                }
                else {
                  DAT_180c6e618 = 0xffffffffffffffff;
                }
              }
              iVar5 = DAT_180c6e610;
              FUN_1805f68fc(&DAT_1808f4b90);
            }
            *(undefined8 *)(pfVar10 + 3) = *(undefined8 *)(iVar5 + lVar1 + lVar13);
            pfVar10[5] = *(float *)(iVar5 + lVar1 + 8 + lVar13);
            fVar14 = pfVar10[5];
            sVar3 = thunk_FUN_180624430(pfVar10[1] + *pfVar10 + pfVar10[2] + pfVar10[3] + pfVar10[4]
                                        + fVar14);
            if ((0 < sVar3) || (fVar14 < fVar16)) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
            *(undefined1 *)(pfVar10 + 6) = uVar2;
            iVar5 = local_78;
          }
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 1;
          pfVar10 = pfVar10 + 7;
          lVar13 = lVar13 + 0xc;
        } while (iVar11 < iVar5);
        param_1 = local_788;
      }
      FUN_18063aed0(param_1,local_778,0x710);
      *(undefined1 *)(param_1 + 0x710) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x710) = 0;
}



