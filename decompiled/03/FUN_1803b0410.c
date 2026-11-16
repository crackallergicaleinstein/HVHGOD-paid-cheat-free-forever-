// FUN_1803b0410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0410 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b0410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  ULONGLONG UVar4;
  int *piVar5;
  uint *puVar6;
  undefined1 auVar7 [64];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_98 [6];
  longlong local_80;
  PSRWLOCK pRStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_80 = 0;
  pRStack_78 = (PSRWLOCK)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_180244f40(param_1,&local_80);
  if ((char)uStack_68 == '\0') {
    uVar2 = 100;
  }
  else {
    auVar7 = ZEXT464(DAT_180b0cb9c);
    local_98[2] = DAT_180b0cb9c;
    if (DAT_180b0cb30 == '\0') {
      sVar1 = thunk_FUN_180624430(DAT_180b0cb9c);
      if (sVar1 < 1) {
        local_98[4] = 0x42c80000;
        local_98[0] = 0;
        puVar6 = local_98;
        if (0.0 <= auVar7._0_4_) {
          puVar6 = local_98 + 2;
        }
        puVar3 = local_98 + 4;
        if (auVar7._0_4_ <= 100.0) {
          puVar3 = puVar6;
        }
        uVar2 = FUN_18060eb80(*puVar3);
      }
      else {
        uVar2 = 100;
      }
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 - 1 < 99) {
      UVar4 = GetTickCount64();
      goto LAB_1803b04f1;
    }
  }
  UVar4 = 0;
LAB_1803b04f1:
  if (uVar2 - 1 < 99) {
    DAT_180c70e48 = (UVar4 + 0xfa) * 0x100 | (ulonglong)uVar2;
  }
  else {
    DAT_180c70e48 = 0;
  }
  if (uVar2 != 0) {
    if (local_80 != 0) {
      if ((char)uStack_68 != '\0') {
        LOCK();
        *(int *)(local_80 + 0x5c) = *(int *)(local_80 + 0x5c) + -1;
        UNLOCK();
      }
      piVar5 = (int *)FUN_1801acaf0();
      if ((uStack_68._1_1_ != '\0') && (*piVar5 != 0)) {
        *piVar5 = *piVar5 + -1;
      }
      if ((char)uStack_70 != '\0') {
        if (pRStack_78 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_78);
        uStack_70 = uStack_70 & 0xffffffffffffff00;
      }
      uStack_68 = uStack_68 & 0xffffffffffffff00;
      local_80 = 0;
    }
    if (DAT_180c6fcc0 != 0) {
      local_a8 = param_7;
      local_b0 = param_6;
      local_b8 = param_5;
      (*(code *)DAT_180c6fcc0)(param_1,param_2,param_3,param_4);
    }
  }
  if (local_80 != 0) {
    if ((char)uStack_68 != '\0') {
      LOCK();
      *(int *)(local_80 + 0x5c) = *(int *)(local_80 + 0x5c) + -1;
      UNLOCK();
    }
    piVar5 = (int *)FUN_1801acaf0();
    if ((uStack_68._1_1_ != '\0') && (*piVar5 != 0)) {
      *piVar5 = *piVar5 + -1;
    }
    if ((char)uStack_70 != '\0') {
      if (pRStack_78 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_78);
      uStack_70 = uStack_70 & 0xffffffffffffff00;
    }
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    local_80 = 0;
  }
  if ((char)uStack_70 != '\0') {
    ReleaseSRWLockShared(pRStack_78);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



