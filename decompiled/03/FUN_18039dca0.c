// FUN_18039dca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039dca0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18039dca0(longlong param_1,undefined1 param_2)

{
  float fVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  PSRWLOCK pRStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_78 = 0;
  pRStack_70 = (PSRWLOCK)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_180244f40(param_1,&local_78);
  if ((char)uStack_60 == '\0') {
    if (local_78 != 0) {
      piVar5 = (int *)FUN_1801acaf0();
      if ((uStack_60._1_1_ != '\0') && (*piVar5 != 0)) {
        *piVar5 = *piVar5 + -1;
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
  }
  else {
    if (((DAT_180b0c770 != '\0') || (DAT_180b0c0f8 != '\0')) || (DAT_180b0c218 != '\0')) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      fVar1 = *(float *)(param_1 + 0x20);
      local_98 = uVar6;
      sVar3 = thunk_FUN_180624430(uVar6);
      if (sVar3 < 1) {
        fVar7 = local_98._4_4_;
        sVar3 = thunk_FUN_180624430(local_98._4_4_);
        if (((sVar3 < 1) && (fVar9 = fVar1, sVar3 = thunk_FUN_180624430(fVar1), sVar3 < 1)) &&
           (1.0 <= fVar7 * fVar7 + (float)uVar6 * (float)uVar6 + fVar9 * fVar9)) {
          uVar8 = *(undefined4 *)(*DAT_180bb8958 + 0x30);
          local_88 = ZEXT816(0x180cc9b08);
          iVar4 = FUN_1805f68d0(&DAT_180cc9b08);
          puVar2 = DAT_180cc99f8;
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180cc9b54 == 0x7fffffff) {
            DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          local_88[8] = 1;
          local_98 = uVar6;
          fStack_90 = fVar1;
          uStack_8c = uVar8;
          if (DAT_180cc99f8 == DAT_180cc9a00) {
            FUN_180178c40(&DAT_180cc99f0,DAT_180cc99f8,&local_98);
          }
          else {
            *DAT_180cc99f8 = uVar6;
            puVar2[1] = CONCAT44(uVar8,fVar1);
            DAT_180cc99f8 = DAT_180cc99f8 + 2;
          }
          if (10 < (ulonglong)((longlong)DAT_180cc99f8 - DAT_180cc99f0 >> 4)) {
            FUN_18063aed0(DAT_180cc99f0,DAT_180cc99f0 + 0x10,
                          (longlong)DAT_180cc99f8 - (DAT_180cc99f0 + 0x10));
            DAT_180cc99f8 = DAT_180cc99f8 + -2;
          }
          FUN_1805f68fc(&DAT_180cc9b08);
        }
      }
    }
    if (local_78 != 0) {
      if ((char)uStack_60 != '\0') {
        LOCK();
        *(int *)(local_78 + 0x5c) = *(int *)(local_78 + 0x5c) + -1;
        UNLOCK();
      }
      piVar5 = (int *)FUN_1801acaf0();
      if ((uStack_60._1_1_ != '\0') && (*piVar5 != 0)) {
        *piVar5 = *piVar5 + -1;
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
  }
  if (DAT_180c70510 != 0) {
    (*(code *)DAT_180c70510)(param_1,param_2);
  }
  if (local_78 != 0) {
    if ((char)uStack_60 != '\0') {
      LOCK();
      *(int *)(local_78 + 0x5c) = *(int *)(local_78 + 0x5c) + -1;
      UNLOCK();
    }
    piVar5 = (int *)FUN_1801acaf0();
    if ((uStack_60._1_1_ != '\0') && (*piVar5 != 0)) {
      *piVar5 = *piVar5 + -1;
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
  if ((char)uStack_68 != '\0') {
    ReleaseSRWLockShared(pRStack_70);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



