// FUN_1803880b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803880b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803880b0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_f8 [32];
  float local_d8 [3];
  undefined1 local_cc [12];
  longlong local_c0;
  PSRWLOCK pRStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined8 local_90;
  PSRWLOCK pRStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_c0 = 0;
  pRStack_b8 = (PSRWLOCK)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uVar6 = FUN_180244f40(param_1,&local_c0);
  if ((char)uStack_a8 != '\0') {
    if ((((param_2 == 0) && (DAT_180ccaa20 != '\0')) && (DAT_180c63119 != '\0')) &&
       (DAT_1808e6c00 != '\0')) {
      FUN_1803dff30(uVar6,&local_a0);
      FUN_1802346a0();
      if (local_c0 != 0) {
        if ((char)uStack_a8 != '\0') {
          LOCK();
          *(int *)(local_c0 + 0x5c) = *(int *)(local_c0 + 0x5c) + -1;
          UNLOCK();
        }
        piVar2 = (int *)FUN_1801acaf0();
        if ((uStack_a8._1_1_ != '\0') && (*piVar2 != 0)) {
          *piVar2 = *piVar2 + -1;
        }
        if ((char)uStack_b0 != '\0') {
          if (pRStack_b8 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_b8);
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
        }
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        local_c0 = 0;
      }
      if (DAT_180c6fe50 != 0) {
        (*(code *)DAT_180c6fe50)(param_1,0,param_3);
      }
      local_90 = 0;
      pRStack_88 = (PSRWLOCK)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uVar6 = FUN_180244f40();
      if ((((char)uStack_78 != '\0') && (DAT_180ccaa20 != '\0')) &&
         ((DAT_180c63119 != '\0' && (DAT_1808e6c00 != '\0')))) {
        pfVar3 = (float *)FUN_1803dff30(uVar6,local_cc);
        fVar9 = *pfVar3;
        if (((fVar9 != local_a0) || (fVar9 = pfVar3[1], fVar9 != local_9c)) ||
           (fVar9 = pfVar3[2], fVar9 != local_98)) {
          FUN_1803e07c0(fVar9,&local_a0);
        }
      }
      FUN_180180bf0(&local_90);
      if ((char)uStack_80 != '\0') {
        ReleaseSRWLockShared(pRStack_88);
      }
      goto LAB_1803883a7;
    }
    if (((char)uStack_a8 != '\0') && (param_2 == 0)) {
      iVar1 = FUN_1805f68d0(&DAT_1808edc30);
      fVar8 = DAT_1808edc84;
      fVar9 = DAT_1808edc80;
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808edc7c == 0x7fffffff) {
        DAT_1808edc7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      fVar7 = 0.0;
      DAT_1808edc84 = 0.0;
      DAT_1808edc80 = 0.0;
      FUN_1805f68fc(&DAT_1808edc30);
      if ((fVar9 != fVar7) || (fVar8 != fVar7)) {
        local_d8[2] = 89.0;
        local_d8[0] = -89.0;
        local_d8[1] = fVar9 + *(float *)(param_1 + 0x688);
        pfVar3 = local_d8;
        if (-89.0 <= local_d8[1]) {
          pfVar3 = local_d8 + 1;
        }
        pfVar4 = local_d8 + 2;
        if (local_d8[1] <= 89.0) {
          pfVar4 = pfVar3;
        }
        *(float *)(param_1 + 0x688) = *pfVar4;
        uVar5 = FUN_180615070(fVar8 + *(float *)(param_1 + 0x68c),0x43b40000);
        *(undefined4 *)(param_1 + 0x68c) = uVar5;
      }
    }
  }
  if (local_c0 != 0) {
    if ((char)uStack_a8 != '\0') {
      LOCK();
      *(int *)(local_c0 + 0x5c) = *(int *)(local_c0 + 0x5c) + -1;
      UNLOCK();
    }
    piVar2 = (int *)FUN_1801acaf0();
    if ((uStack_a8._1_1_ != '\0') && (*piVar2 != 0)) {
      *piVar2 = *piVar2 + -1;
    }
    if ((char)uStack_b0 != '\0') {
      if (pRStack_b8 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_b8);
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    }
    uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    local_c0 = 0;
  }
  if (DAT_180c6fe50 != 0) {
    (*(code *)DAT_180c6fe50)(param_1,param_2,param_3);
  }
LAB_1803883a7:
  FUN_180180bf0(&local_c0);
  if ((char)uStack_b0 != '\0') {
    ReleaseSRWLockShared(pRStack_b8);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



