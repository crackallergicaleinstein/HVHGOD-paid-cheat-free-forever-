// FUN_1803aeef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aeef0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803aeef0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char *local_a8;
  longlong lStack_a0;
  undefined *local_90;
  char *local_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong local_68;
  PSRWLOCK pRStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_68 = 0;
  pRStack_60 = (PSRWLOCK)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_b8 = param_2;
  FUN_180244f40(param_1,&local_68);
  if ((char)uStack_50 == '\0') {
    if (local_68 != 0) {
      piVar4 = (int *)FUN_1801acaf0();
      if ((uStack_50._1_1_ != '\0') && (*piVar4 != 0)) {
        *piVar4 = *piVar4 + -1;
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
    if (DAT_180c6ffd0 != 0) {
      (*(code *)DAT_180c6ffd0)(param_1,param_2);
    }
    goto LAB_1803af3a2;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_88 = _DAT_180bb8890;
  lStack_80 = lRam0000000180bb8898;
  uStack_78 = uRam0000000180bb88a0;
  uStack_70 = uRam0000000180bb88a8;
  local_a8 = _DAT_180bb88b0;
  lStack_a0 = lRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((DAT_180b0c928 != '\0') && (param_1 == lStack_80)) goto LAB_1803af3a2;
  if ((lStack_80 != 0) &&
     (((param_1 == lStack_80 && ((char)lStack_a0 != '\0')) && (DAT_180b0cc88 != '\0')))) {
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar6 = DAT_1809037b8;
    lVar2 = DAT_1808da460;
    uVar7 = 1000;
    if ((DAT_1809037b8 != DAT_1808da460) || (DAT_180c71848 == 0)) {
      UVar5 = GetTickCount64();
      if ((lVar6 == lVar2) && (UVar5 < DAT_180c71828)) goto LAB_1803af32a;
      local_90 = &DAT_180903760;
      iVar3 = FUN_1805f68d0(&DAT_180903760);
      if (iVar3 != 0) goto LAB_1803af41e;
      if (DAT_1809037ac == 0x7fffffff) {
        DAT_1809037ac = 0x7ffffffe;
        goto LAB_1803af413;
      }
      if (DAT_1809037b8 == lVar2) {
        if ((DAT_180c71848 == 0) && (DAT_180c71828 <= UVar5)) goto LAB_1803af11b;
      }
      else {
        DAT_1809037b0 = 1000;
LAB_1803af11b:
        lVar6 = -1;
        do {
          lStack_80 = lVar6 + 1;
          lVar1 = lVar6 + 1;
          lVar6 = lStack_80;
        } while ("client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D"[lVar1] != '\0');
        local_88 = "client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D";
        local_a8 = "patterns::overhead_visibility_return";
        lStack_a0 = 0x24;
        DAT_180c71848 = FUN_1800e5d20(&local_a8,&local_88);
        DAT_1809037b8 = lVar2;
        DAT_180c71828 = 0xffffffffffffffff;
        if (DAT_180c71848 == 0) {
          DAT_180c71828 = DAT_1809037b0 + UVar5;
          if (DAT_1809037b0 < 60000) {
            DAT_1809037b0 = DAT_1809037b0 * 2;
          }
          else {
            DAT_1809037b0 = 60000;
          }
        }
        else {
          DAT_1809037b0 = 1000;
        }
      }
      lVar2 = DAT_180c71848;
      FUN_1805f68fc(&DAT_180903760);
      if (lVar2 == 0) goto LAB_1803af32a;
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar6 = DAT_180903810;
    lVar2 = DAT_1808da460;
    if (((DAT_180903810 != DAT_1808da460) || (DAT_180c71838 == 0)) &&
       ((UVar5 = GetTickCount64(), lVar6 != lVar2 || (param_2 = local_b8, DAT_180c71830 <= UVar5))))
    {
      local_90 = &DAT_1809037c0;
      iVar3 = FUN_1805f68d0(&DAT_1809037c0);
      if (iVar3 != 0) {
LAB_1803af41e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_18090380c == 0x7fffffff) {
        DAT_18090380c = 0x7ffffffe;
LAB_1803af413:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_180903810 == lVar2) {
        if ((DAT_180c71838 == 0) && (DAT_180c71830 <= UVar5)) goto LAB_1803af282;
      }
      else {
        DAT_180903750 = 1000;
LAB_1803af282:
        lVar6 = -1;
        do {
          lStack_a0 = lVar6 + 1;
          lVar1 = lVar6 + 1;
          lVar6 = lStack_a0;
        } while ("client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D"[lVar1] != '\0');
        local_a8 = "client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D";
        local_88 = "patterns::overhead_visibility_return";
        lStack_80 = 0x24;
        DAT_180c71838 = FUN_1800e5d20(&local_88,&local_a8);
        DAT_180903810 = lVar2;
        DAT_180c71830 = 0xffffffffffffffff;
        if (DAT_180c71838 == 0) {
          DAT_180c71830 = DAT_180903750 + UVar5;
          uVar7 = DAT_180903750 * 2;
          if (59999 < DAT_180903750) {
            uVar7 = 60000;
          }
        }
        DAT_180903750 = uVar7;
      }
      FUN_1805f68fc(&DAT_1809037c0);
      param_2 = local_b8;
    }
  }
LAB_1803af32a:
  if (local_68 != 0) {
    if ((char)uStack_50 != '\0') {
      LOCK();
      *(int *)(local_68 + 0x5c) = *(int *)(local_68 + 0x5c) + -1;
      UNLOCK();
    }
    piVar4 = (int *)FUN_1801acaf0();
    if ((uStack_50._1_1_ != '\0') && (*piVar4 != 0)) {
      *piVar4 = *piVar4 + -1;
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
  if (DAT_180c6ffd0 != 0) {
    (*(code *)DAT_180c6ffd0)(param_1,param_2);
  }
LAB_1803af3a2:
  FUN_180180bf0(&local_68);
  if ((char)uStack_58 != '\0') {
    ReleaseSRWLockShared(pRStack_60);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



