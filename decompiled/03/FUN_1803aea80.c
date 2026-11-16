// FUN_1803aea80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aea80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803aea80(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_retaddr;
  undefined1 auStack_b8 [32];
  char *local_98;
  longlong lStack_90;
  longlong local_88;
  undefined *local_80;
  char *local_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  PSRWLOCK pRStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c6ff70 == 0) goto LAB_1803aead5;
  local_88 = unaff_retaddr;
  lVar3 = (*(code *)DAT_180c6ff70)();
  if (lVar3 == 0) goto LAB_1803aead5;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_1809038d0;
  lVar3 = DAT_1808da460;
  uVar7 = 1000;
  if ((DAT_1809038d0 != DAT_1808da460) || (DAT_180c71878 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar5 == lVar3) && (UVar4 < DAT_180c71868)) goto LAB_1803aead5;
    local_80 = &DAT_180903820;
    iVar2 = FUN_1805f68d0(&DAT_180903820);
    if (iVar2 != 0) goto LAB_1803aeed7;
    if (DAT_18090386c == 0x7fffffff) {
      DAT_18090386c = 0x7ffffffe;
      goto LAB_1803aeecc;
    }
    if (DAT_1809038d0 == lVar3) {
      if ((DAT_180c71878 == 0) && (DAT_180c71868 <= UVar4)) goto LAB_1803aebff;
    }
    else {
      DAT_180903870 = 1000;
LAB_1803aebff:
      lVar5 = -1;
      do {
        lStack_70 = lVar5 + 1;
        pcVar1 = "lient.dll:E8????????4C8BF048894588E8????????488BF048894580+5" + lVar5;
        lVar5 = lStack_70;
      } while (*pcVar1 != '\0');
      local_78 = "client.dll:E8????????4C8BF048894588E8????????488BF048894580+5";
      local_98 = "patterns::overhead_view_pawn_return";
      lStack_90 = 0x23;
      DAT_180c71878 = FUN_1800e5d20(&local_98,&local_78);
      DAT_1809038d0 = lVar3;
      DAT_180c71868 = 0xffffffffffffffff;
      if (DAT_180c71878 == 0) {
        DAT_180c71868 = DAT_180903870 + UVar4;
        if (DAT_180903870 < 60000) {
          DAT_180903870 = DAT_180903870 * 2;
        }
        else {
          DAT_180903870 = 60000;
        }
      }
      else {
        DAT_180903870 = 1000;
      }
    }
    lVar3 = DAT_180c71878;
    FUN_1805f68fc(&DAT_180903820);
    if (lVar3 == 0) goto LAB_1803aead5;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar5 = DAT_180903818;
  lVar3 = DAT_1808da460;
  if ((DAT_180903818 != DAT_1808da460) || (lVar6 = DAT_180c71840, DAT_180c71840 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar5 == lVar3) && (UVar4 < DAT_180c71850)) {
      lVar6 = 0;
    }
    else {
      local_80 = &DAT_180903880;
      iVar2 = FUN_1805f68d0(&DAT_180903880);
      if (iVar2 != 0) {
LAB_1803aeed7:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809038cc == 0x7fffffff) {
        DAT_1809038cc = 0x7ffffffe;
LAB_1803aeecc:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_180903818 == lVar3) {
        if ((DAT_180c71840 == 0) && (DAT_180c71850 <= UVar4)) goto LAB_1803aed60;
      }
      else {
        DAT_180903878 = 1000;
LAB_1803aed60:
        lVar5 = -1;
        do {
          lStack_90 = lVar5 + 1;
          pcVar1 = "lient.dll:E8????????4C8BF048894588E8????????488BF048894580+5" + lVar5;
          lVar5 = lStack_90;
        } while (*pcVar1 != '\0');
        local_98 = "client.dll:E8????????4C8BF048894588E8????????488BF048894580+5";
        local_78 = "patterns::overhead_view_pawn_return";
        lStack_70 = 0x23;
        DAT_180c71840 = FUN_1800e5d20(&local_78,&local_98);
        DAT_180903818 = lVar3;
        DAT_180c71850 = 0xffffffffffffffff;
        if (DAT_180c71840 == 0) {
          DAT_180c71850 = DAT_180903878 + UVar4;
          uVar7 = DAT_180903878 * 2;
          if (59999 < DAT_180903878) {
            uVar7 = 60000;
          }
        }
        DAT_180903878 = uVar7;
      }
      lVar6 = DAT_180c71840;
      FUN_1805f68fc(&DAT_180903880);
    }
  }
  if (local_88 == lVar6) {
    local_58 = 0;
    pRStack_50 = (PSRWLOCK)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_180244f40();
    if ((((char)uStack_40 != '\0') && (DAT_180b0cc88 != '\0')) && (DAT_180b0c928 == '\0')) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_78 = _DAT_180bb8890;
      lStack_70 = lRam0000000180bb8898;
      uStack_68 = uRam0000000180bb88a0;
      uStack_60 = uRam0000000180bb88a8;
      local_98 = _DAT_180bb88b0;
      lStack_90 = lRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    }
    FUN_180180bf0(&local_58);
    if ((char)uStack_48 != '\0') {
      ReleaseSRWLockShared(pRStack_50);
    }
  }
LAB_1803aead5:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



