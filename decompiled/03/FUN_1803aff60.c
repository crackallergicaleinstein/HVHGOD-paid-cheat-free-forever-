// FUN_1803aff60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aff60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803aff60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong local_70;
  PSRWLOCK pRStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_70 = 0;
  pRStack_68 = (PSRWLOCK)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_180244f40(param_1,&local_70);
  if ((((char)uStack_58 != '\0') && (DAT_180b0cde0 != '\0')) && (DAT_180b0ce48 != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_90 = _DAT_180bb8890;
    lStack_88 = lRam0000000180bb8898;
    uStack_80 = uRam0000000180bb88a0;
    uStack_78 = uRam0000000180bb88a8;
    local_a0 = _DAT_180bb88b0;
    uStack_98 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar5 = lStack_88;
    if (((lStack_88 != 0) && ((char)uStack_98 != '\0')) &&
       ((DAT_180bb88c9 == '\0' && (DAT_180bb88ca == '\0')))) {
      iVar2 = DAT_180c719a0;
      if (DAT_180c719a0 == 0) {
        UVar3 = GetTickCount64();
        if (DAT_180c71998 <= UVar3) {
          local_a0 = &DAT_180903d00;
          iVar2 = FUN_1805f68d0(&DAT_180903d00);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180903d4c == 0x7fffffff) {
            DAT_180903d4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c719a0 == 0) && (DAT_180c71998 <= UVar3)) {
            DAT_180c719a0 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
            if (DAT_180c719a0 == 0) {
              DAT_180c71998 = UVar3 + 1000;
            }
            else {
              DAT_180c71998 = 0xffffffffffffffff;
            }
          }
          iVar2 = DAT_180c719a0;
          FUN_1805f68fc(&DAT_180903d00);
          if (iVar2 != 0) goto LAB_1803b00fb;
        }
LAB_1803b014b:
        local_a8 = local_a8 & 0xff;
      }
      else {
LAB_1803b00fb:
        if (iVar2 + lVar5 == 0) goto LAB_1803b014b;
        local_a8 = local_a8 & 0xff00;
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        cVar1 = FUN_1804514c0(&local_a8,iVar2 + lVar5,1);
        if (cVar1 == '\0') {
          local_a8 = local_a8 & 0xff;
        }
        else {
          local_a8 = CONCAT11(1,(undefined1)local_a8);
        }
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
      }
      if (((char)(local_a8 >> 8) != '\0') && ((char)local_a8 == '\0')) goto LAB_1803b01d6;
    }
  }
  if (local_70 != 0) {
    if ((char)uStack_58 != '\0') {
      LOCK();
      *(int *)(local_70 + 0x5c) = *(int *)(local_70 + 0x5c) + -1;
      UNLOCK();
    }
    piVar6 = (int *)FUN_1801acaf0();
    if ((uStack_58._1_1_ != '\0') && (*piVar6 != 0)) {
      *piVar6 = *piVar6 + -1;
    }
    if ((char)uStack_60 != '\0') {
      if (pRStack_68 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_68);
      uStack_60 = uStack_60 & 0xffffffffffffff00;
    }
    uStack_58 = uStack_58 & 0xffffffffffffff00;
    local_70 = 0;
  }
  if (DAT_180c702d0 != 0) {
    (*(code *)DAT_180c702d0)(param_1,param_2,param_3);
  }
LAB_1803b01d6:
  FUN_180180bf0(&local_70);
  if ((char)uStack_60 != '\0') {
    ReleaseSRWLockShared(pRStack_68);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



