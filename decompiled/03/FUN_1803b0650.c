// FUN_1803b0650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0650 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b0650(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  float fVar6;
  char cVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  PSRWLOCK pRStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_d8 = param_5;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_a8 = 0;
  pRStack_a0 = (PSRWLOCK)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  FUN_180244f40(param_1,&local_a8);
  if ((char)uStack_90 == '\0') {
    if (local_a8 != 0) {
      piVar3 = (int *)FUN_1801acaf0();
      if ((uStack_90._1_1_ != '\0') && (*piVar3 != 0)) {
        *piVar3 = *piVar3 + -1;
      }
      if ((char)uStack_98 != '\0') {
        if (pRStack_a0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_a0);
        uStack_98 = uStack_98 & 0xffffffffffffff00;
      }
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      local_a8 = 0;
    }
    if (DAT_180c6fc60 != 0) {
      local_e8 = param_5;
      (*(code *)DAT_180c6fc60)(param_1,param_2,param_3,param_4);
    }
    if (local_a8 != 0) {
      if ((char)uStack_90 != '\0') {
        LOCK();
        *(int *)(local_a8 + 0x5c) = *(int *)(local_a8 + 0x5c) + -1;
        UNLOCK();
      }
      piVar3 = (int *)FUN_1801acaf0();
      if ((uStack_90._1_1_ != '\0') && (*piVar3 != 0)) {
        *piVar3 = *piVar3 + -1;
      }
      if ((char)uStack_98 != '\0') {
        if (pRStack_a0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_a0);
        uStack_98 = uStack_98 & 0xffffffffffffff00;
      }
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      local_a8 = 0;
    }
    goto joined_r0x0001803b09c1;
  }
  fVar6 = 100.0;
  fVar8 = 0.0;
  if (100.0 <= DAT_180b0cb98) {
LAB_1803b08eb:
    if (DAT_180b0cb98 != fVar8) {
      if (local_a8 != 0) {
        if ((char)uStack_90 != '\0') {
          LOCK();
          *(int *)(local_a8 + 0x5c) = *(int *)(local_a8 + 0x5c) + -1;
          UNLOCK();
        }
        piVar3 = (int *)FUN_1801acaf0();
        if ((uStack_90._1_1_ != '\0') && (*piVar3 != 0)) {
          *piVar3 = *piVar3 + -1;
        }
        if ((char)uStack_98 != '\0') {
          if (pRStack_a0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_a0);
          uStack_98 = uStack_98 & 0xffffffffffffff00;
        }
        uStack_90 = uStack_90 & 0xffffffffffffff00;
        local_a8 = 0;
      }
      if (DAT_180c6fc60 != 0) {
        local_e8 = param_5;
        (*(code *)DAT_180c6fc60)(param_1,param_2,param_3,param_4);
      }
    }
  }
  else if (DAT_180b0cb98 != 0.0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_c8 = _DAT_180bb8890;
    lStack_c0 = lRam0000000180bb8898;
    lStack_b8 = lRam0000000180bb88a0;
    uStack_b0 = uRam0000000180bb88a8;
    cVar7 = cRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    iVar2 = DAT_180c71978;
    plVar1 = &lStack_b8;
    if (cVar7 != '\0') {
      plVar1 = &lStack_c0;
    }
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      fVar6 = (DAT_180b0cb98 / fVar6) * 255.0;
      if ((DAT_180c71978 == 0) && (UVar4 = GetTickCount64(), DAT_180c71980 <= UVar4)) {
        local_d0 = &DAT_180903c50;
        iVar2 = FUN_1805f68d0(&DAT_180903c50);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180903c9c == 0x7fffffff) {
          DAT_180903c9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c71978 == 0) && (DAT_180c71980 <= UVar4)) {
          DAT_180c71978 = FUN_1804174b0("C_CSPlayerPawnBase",0x3dcf0d29);
          if (DAT_180c71978 == 0) {
            DAT_180c71980 = UVar4 + 1000;
          }
          else {
            DAT_180c71980 = 0xffffffffffffffff;
          }
        }
        iVar2 = DAT_180c71978;
        FUN_1805f68fc(&DAT_180903c50);
      }
      *(float *)(iVar2 + lVar5) = fVar6;
      param_5 = local_d8;
    }
    goto LAB_1803b08eb;
  }
  if (local_a8 != 0) {
    if ((char)uStack_90 != '\0') {
      LOCK();
      *(int *)(local_a8 + 0x5c) = *(int *)(local_a8 + 0x5c) + -1;
      UNLOCK();
    }
    piVar3 = (int *)FUN_1801acaf0();
    if ((uStack_90._1_1_ != '\0') && (*piVar3 != 0)) {
      *piVar3 = *piVar3 + -1;
    }
    if ((char)uStack_98 != '\0') {
      if (pRStack_a0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_a0);
      uStack_98 = uStack_98 & 0xffffffffffffff00;
    }
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    local_a8 = 0;
  }
joined_r0x0001803b09c1:
  if ((char)uStack_98 != '\0') {
    ReleaseSRWLockShared(pRStack_a0);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



