// FUN_18039e9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039e9d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18039e9d0(undefined8 param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  longlong unaff_retaddr;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_98;
  longlong local_90;
  undefined *local_88;
  char *local_78;
  PSRWLOCK pRStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_a8 = param_1;
  if (DAT_180c6fd90 == 0) {
    auVar10 = ZEXT816(0);
  }
  else {
    auVar11._0_8_ = (*(code *)DAT_180c6fd90)();
    auVar11._8_56_ = extraout_var;
    auVar10 = auVar11._0_16_;
  }
  auVar11 = ZEXT1664(auVar10);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_180903340;
  lVar2 = DAT_1808da460;
  uVar8 = 1000;
  if ((DAT_180903340 != DAT_1808da460) || (lVar7 = DAT_180c71270, DAT_180c71270 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar5 == lVar2) && (UVar4 < DAT_180c71268)) {
      lVar7 = 0;
    }
    else {
      local_88 = &DAT_1809032f0;
      iVar3 = FUN_1805f68d0(&DAT_1809032f0);
      if (iVar3 != 0) goto LAB_18039eda3;
      if (DAT_18090333c == 0x7fffffff) {
        DAT_18090333c = 0x7ffffffe;
        goto LAB_18039ed98;
      }
      if (DAT_180903340 == lVar2) {
        if ((DAT_180c71270 == 0) && (DAT_180c71268 <= UVar4)) goto LAB_18039eb0c;
      }
      else {
        DAT_1809031e8 = 1000;
LAB_18039eb0c:
        lVar5 = -1;
        do {
          local_90 = lVar5 + 1;
          pcVar1 = "lient.dll:FF90F80C0000448B45??488D55??498BCE0F28F0E8????????+6" + lVar5;
          lVar5 = local_90;
        } while (*pcVar1 != '\0');
        local_98 = "client.dll:FF90F80C0000448B45??488D55??498BCE0F28F0E8????????+6";
        local_78 = "patterns::base_fire_guns_get_inaccuracy";
        pRStack_70 = (PSRWLOCK)0x27;
        DAT_180c71270 = FUN_1800e5d20(&local_78,&local_98);
        DAT_180903340 = lVar2;
        DAT_180c71268 = 0xffffffffffffffff;
        if (DAT_180c71270 == 0) {
          DAT_180c71268 = DAT_1809031e8 + UVar4;
          if (DAT_1809031e8 < 60000) {
            DAT_1809031e8 = DAT_1809031e8 * 2;
          }
          else {
            DAT_1809031e8 = 60000;
          }
        }
        else {
          DAT_1809031e8 = 1000;
        }
      }
      lVar7 = DAT_180c71270;
      FUN_1805f68fc(&DAT_1809032f0);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1809031e0;
  lVar2 = DAT_1808da460;
  auVar10 = auVar11._0_16_;
  if ((DAT_1809031e0 == DAT_1808da460) && (lVar6 = DAT_180c71250, DAT_180c71250 != 0))
  goto LAB_18039ecfb;
  UVar4 = GetTickCount64();
  auVar10 = auVar11._0_16_;
  if ((lVar5 == lVar2) && (UVar4 < DAT_180c71248)) {
    lVar6 = 0;
  }
  else {
    local_88 = &DAT_1809031f0;
    iVar3 = FUN_1805f68d0(&DAT_1809031f0);
    if (iVar3 != 0) {
LAB_18039eda3:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_18090323c == 0x7fffffff) {
      DAT_18090323c = 0x7ffffffe;
LAB_18039ed98:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (DAT_1809031e0 == lVar2) {
      if ((DAT_180c71250 == 0) && (DAT_180c71248 <= UVar4)) goto LAB_18039ec67;
    }
    else {
      DAT_180903240 = 1000;
LAB_18039ec67:
      lVar5 = -1;
      do {
        pRStack_70 = (PSRWLOCK)(lVar5 + 1);
        pcVar1 = "lient.dll:41FFD1448B45??488D55??498BCD0F28F0E8????????+3" + lVar5;
        lVar5 = (longlong)pRStack_70;
      } while (*pcVar1 != '\0');
      local_78 = "client.dll:41FFD1448B45??488D55??498BCD0F28F0E8????????+3";
      local_98 = "patterns::base_fire_guns_get_inaccuracy_alt";
      local_90 = 0x2b;
      DAT_180c71250 = FUN_1800e5d20(&local_98,&local_78);
      DAT_1809031e0 = lVar2;
      DAT_180c71248 = 0xffffffffffffffff;
      if (DAT_180c71250 == 0) {
        DAT_180c71248 = DAT_180903240 + UVar4;
        uVar8 = DAT_180903240 * 2;
        if (59999 < DAT_180903240) {
          uVar8 = 60000;
        }
      }
      DAT_180903240 = uVar8;
    }
    lVar6 = DAT_180c71250;
    FUN_1805f68fc(&DAT_1809031f0);
    auVar10 = auVar11._0_16_;
  }
  param_1 = local_a8;
LAB_18039ecfb:
  if ((unaff_retaddr != 0) && ((unaff_retaddr == lVar7 || (unaff_retaddr == lVar6)))) {
    local_78 = (char *)0x0;
    pRStack_70 = (PSRWLOCK)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    auVar11 = ZEXT1664(auVar10);
    uVar9 = FUN_180244f40();
    if ((char)uStack_60 != '\0') {
      FUN_1802d0510(uVar9,param_1,auVar11._0_8_);
    }
    FUN_180180bf0(&local_78);
    if ((char)uStack_68 != '\0') {
      ReleaseSRWLockShared(pRStack_70);
    }
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



