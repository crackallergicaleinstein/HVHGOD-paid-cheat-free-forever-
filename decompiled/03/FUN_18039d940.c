// FUN_18039d940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039d940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18039d940(undefined8 param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  int *piVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_98 [32];
  longlong local_78;
  PSRWLOCK pRStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  uint local_50;
  undefined8 local_48;
  PSRWLOCK pRStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_78 = 0;
  pRStack_70 = (PSRWLOCK)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar6 = FUN_180244f40(param_1,&local_78);
  if ((char)uStack_60 == '\0') {
    lVar4 = local_78;
    if (local_78 != 0) {
      piVar3 = (int *)FUN_1801acaf0();
      if ((uStack_60._1_1_ != '\0') && (*piVar3 != 0)) {
        *piVar3 = *piVar3 + -1;
      }
      if ((char)uStack_68 != '\0') {
        if (pRStack_70 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_70);
        uStack_68 = uStack_68 & 0xffffffffffffff00;
      }
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      local_78 = 0;
      lVar4 = local_78;
    }
joined_r0x00018039dc0d:
    local_78 = lVar4;
    if ((code *)DAT_180c70810 != (code *)0x0) {
      (*(code *)DAT_180c70810)(param_1,param_2);
    }
    FUN_180180bf0(&local_78);
    cVar2 = (char)uStack_68;
  }
  else {
    if (((DAT_180ccaa20 == '\0') || (DAT_180c63119 == '\0')) || (DAT_1808e6c00 == '\0')) {
      bVar5 = 0;
      if (DAT_180b8e4ed == '\0') {
        if ((DAT_180b8e622 != '\0') && (DAT_180cc9372 != '\0')) {
          lVar4 = FUN_180252d60(&DAT_180c7e1f0);
          uVar6 = extraout_XMM0_Qa;
          if ((*(char *)(lVar4 + 0x2b0) != '\0') || (*(char *)(lVar4 + 0x318) != '\0'))
          goto LAB_18039da16;
        }
        lVar4 = 0;
        if (local_78 != 0) {
          if ((char)uStack_60 != '\0') {
            LOCK();
            *(int *)(local_78 + 0x5c) = *(int *)(local_78 + 0x5c) + -1;
            UNLOCK();
          }
          piVar3 = (int *)FUN_1801acaf0();
          if ((uStack_60._1_1_ != '\0') && (*piVar3 != 0)) {
            *piVar3 = *piVar3 + -1;
          }
          if ((char)uStack_68 != '\0') {
            if (pRStack_70 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_18017d0c0(1);
            }
            ReleaseSRWLockShared(pRStack_70);
            uStack_68 = uStack_68 & 0xffffffffffffff00;
          }
          uStack_60 = uStack_60 & 0xffffffffffffff00;
          local_78 = 0;
          lVar4 = local_78;
        }
        goto joined_r0x00018039dc0d;
      }
    }
    else {
      bVar5 = 1;
    }
LAB_18039da16:
    FUN_1803dff30(uVar6,local_58);
    auVar1 = vpcmpeqd_avx(ZEXT116(bVar5),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(ZEXT416(local_50),ZEXT816(0),auVar1);
    local_50 = auVar1._0_4_;
    if (local_78 != 0) {
      if ((char)uStack_60 != '\0') {
        LOCK();
        *(int *)(local_78 + 0x5c) = *(int *)(local_78 + 0x5c) + -1;
        UNLOCK();
      }
      piVar3 = (int *)FUN_1801acaf0();
      if ((uStack_60._1_1_ != '\0') && (*piVar3 != 0)) {
        *piVar3 = *piVar3 + -1;
      }
      if ((char)uStack_68 != '\0') {
        if (pRStack_70 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_70);
        uStack_68 = uStack_68 & 0xffffffffffffff00;
      }
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      local_78 = 0;
    }
    if (DAT_180c70810 != 0) {
      (*(code *)DAT_180c70810)(param_1,param_2);
    }
    local_48 = 0;
    pRStack_40 = (PSRWLOCK)0x0;
    uStack_38 = 0;
    uStack_30 = 0;
    uVar6 = FUN_180244f40();
    if (((char)uStack_30 != '\0') &&
       ((bVar5 == 0 ||
        (((DAT_180ccaa20 != '\0' && (DAT_180c63119 != '\0')) && (DAT_1808e6c00 != '\0')))))) {
      FUN_1803e07c0(uVar6,local_58);
    }
    FUN_180180bf0(&local_48);
    if ((char)uStack_38 != '\0') {
      ReleaseSRWLockShared(pRStack_40);
    }
    if (local_78 == 0) {
      cVar2 = (char)uStack_68;
    }
    else {
      if ((char)uStack_60 != '\0') {
        LOCK();
        *(int *)(local_78 + 0x5c) = *(int *)(local_78 + 0x5c) + -1;
        UNLOCK();
      }
      piVar3 = (int *)FUN_1801acaf0();
      if ((uStack_60._1_1_ != '\0') && (*piVar3 != 0)) {
        *piVar3 = *piVar3 + -1;
      }
      if ((char)uStack_68 != '\0') {
        if (pRStack_70 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_70);
        uStack_68 = uStack_68 & 0xffffffffffffff00;
      }
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      local_78 = 0;
      cVar2 = '\0';
    }
  }
  if (cVar2 != '\0') {
    ReleaseSRWLockShared(pRStack_70);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



