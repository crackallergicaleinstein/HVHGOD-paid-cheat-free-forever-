// FUN_1802434d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802434d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802434d0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  float *local_b0;
  undefined4 local_a8;
  longlong local_98 [2];
  char *local_88;
  longlong local_80;
  char *local_78;
  longlong local_70;
  undefined *local_68;
  float local_60;
  float local_5c;
  float local_58;
  ulonglong local_48;
  
  lVar9 = DAT_180c64430;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x10) == -1) {
    FUN_180242af0();
  }
  if (DAT_180c64430 == 0) {
LAB_180243988:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar12 = false;
  if (lVar9 != 0) {
    local_98[0] = 0;
    cVar2 = FUN_1804514f0(local_98,lVar9,8);
    if (cVar2 == '\0') {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
  }
  lVar9 = local_98[0];
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if (!bVar12) {
    lVar9 = 0;
  }
  if ((lVar9 == 0) || (lVar9 != *(longlong *)(param_1 + 0x18))) goto LAB_180243988;
  bVar12 = *(char *)(param_1 + 0xc) != '\0';
  bVar7 = DAT_180cad350;
  if (bVar12) {
    bVar7 = DAT_180cad354;
  }
  local_60 = (float)bVar7;
  bVar7 = DAT_180cad355;
  if (!bVar12) {
    bVar7 = DAT_180cad351;
  }
  local_5c = (float)bVar7;
  bVar7 = DAT_180cad356;
  if (!bVar12) {
    bVar7 = DAT_180cad352;
  }
  local_58 = (float)bVar7;
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  local_98[0] = CONCAT44(local_98[0]._4_4_,uVar11);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808ede98;
  lVar4 = DAT_1808da460;
  uVar10 = 1000;
  if (DAT_1808ede98 == DAT_1808da460) {
    lVar8 = DAT_180c64420;
    if (DAT_180c64420 == 0) goto LAB_180243650;
  }
  else {
LAB_180243650:
    UVar5 = GetTickCount64();
    if ((lVar6 == lVar4) && (UVar5 < DAT_180c64428)) {
      lVar8 = 0;
    }
    else {
      local_68 = &DAT_1808edea0;
      iVar3 = FUN_1805f68d0(&DAT_1808edea0);
      if (iVar3 != 0) goto LAB_1802439ca;
      if (DAT_1808edeec == 0x7fffffff) {
        DAT_1808edeec = 0x7ffffffe;
        goto LAB_1802439df;
      }
      if (DAT_1808ede98 == lVar4) {
        if ((DAT_180c64420 == 0) && (DAT_180c64428 <= UVar5)) goto LAB_1802436dd;
      }
      else {
        DAT_1808ede88 = 1000;
LAB_1802436dd:
        lVar6 = -1;
        do {
          local_80 = lVar6 + 1;
          pcVar1 = "lient.dll:4883EC58F3410F105104F3410F1009F3410F105908" + lVar6;
          lVar6 = local_80;
        } while (*pcVar1 != '\0');
        local_88 = "client.dll:4883EC58F3410F105104F3410F1009F3410F105908";
        local_78 = "patterns::particle_set_control_point";
        local_70 = 0x24;
        DAT_180c64420 = FUN_1800e5d20(&local_78,&local_88);
        DAT_1808ede98 = lVar4;
        DAT_180c64428 = 0xffffffffffffffff;
        if (DAT_180c64420 == 0) {
          DAT_180c64428 = DAT_1808ede88 + UVar5;
          if (DAT_1808ede88 < 60000) {
            DAT_1808ede88 = DAT_1808ede88 * 2;
          }
          else {
            DAT_1808ede88 = 60000;
          }
        }
        else {
          DAT_1808ede88 = 1000;
        }
      }
      lVar8 = DAT_180c64420;
      FUN_1805f68fc(&DAT_1808edea0);
    }
    uVar11 = (undefined4)local_98[0];
  }
  cVar2 = FUN_1804513c0(lVar8,1,2);
  uVar13 = 0;
  if (cVar2 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    local_b0 = &local_60;
    local_b8 = 1;
    local_a8 = uVar13;
    FUN_180244990(local_98,lVar8,lVar9,uVar11);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
  }
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  local_98[0] = CONCAT44(local_98[0]._4_4_,uVar11);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808ede90;
  lVar4 = DAT_1808da460;
  if (DAT_1808ede90 == DAT_1808da460) {
    lVar8 = DAT_180c64410;
    if (DAT_180c64410 != 0) goto LAB_18024393a;
  }
  UVar5 = GetTickCount64();
  if ((lVar6 == lVar4) && (UVar5 < DAT_180c64418)) {
    lVar8 = 0;
  }
  else {
    local_68 = &DAT_1808ede30;
    iVar3 = FUN_1805f68d0(&DAT_1808ede30);
    if (iVar3 != 0) {
LAB_1802439ca:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ede7c == 0x7fffffff) {
      DAT_1808ede7c = 0x7ffffffe;
LAB_1802439df:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_1808ede90 == lVar4) {
      if ((DAT_180c64410 == 0) && (DAT_180c64418 <= UVar5)) goto LAB_1802438a3;
    }
    else {
      DAT_1808ede28 = 1000;
LAB_1802438a3:
      lVar6 = -1;
      do {
        local_70 = lVar6 + 1;
        pcVar1 = "lient.dll:4883EC58F3410F105104F3410F1009F3410F105908" + lVar6;
        lVar6 = local_70;
      } while (*pcVar1 != '\0');
      local_78 = "client.dll:4883EC58F3410F105104F3410F1009F3410F105908";
      local_88 = "patterns::particle_set_control_point";
      local_80 = 0x24;
      DAT_180c64410 = FUN_1800e5d20(&local_88,&local_78);
      DAT_1808ede90 = lVar4;
      DAT_180c64418 = 0xffffffffffffffff;
      if (DAT_180c64410 == 0) {
        DAT_180c64418 = DAT_1808ede28 + UVar5;
        uVar10 = DAT_1808ede28 * 2;
        if (59999 < DAT_1808ede28) {
          uVar10 = 60000;
        }
      }
      DAT_1808ede28 = uVar10;
    }
    lVar8 = DAT_180c64410;
    FUN_1805f68fc(&DAT_1808ede30);
  }
  uVar11 = (undefined4)local_98[0];
LAB_18024393a:
  cVar2 = FUN_1804513c0(lVar8,1,2);
  if (cVar2 == '\0') {
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  local_b0 = (float *)param_1;
  local_a8 = uVar13;
  FUN_180244930(local_98,lVar8,lVar9,uVar11);
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) == 0) {
  }
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
}



