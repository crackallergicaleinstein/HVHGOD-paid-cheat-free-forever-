// FUN_180001480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180001480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001480(void)

{
  DWORD DVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  DWORD DStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (DAT_180bacc58 != (HANDLE)0x0) {
    CloseHandle(DAT_180bacc58);
    DAT_180bacc58 = (HANDLE)0x0;
  }
  if (DAT_180bacb88 != 0) {
    if (DAT_180bacb90 != 0) {
      FUN_18015a200();
    }
    lVar2 = DAT_180bacb98;
    iVar3 = FUN_1805f68d0(DAT_180bacb98);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(lVar2 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_1805f6a54(&DAT_180bacba8);
    FUN_1805f68fc(lVar2);
    DVar1 = DAT_180bacb88;
    if (DAT_180bacb88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(1);
    }
    DVar4 = GetCurrentThreadId();
    if (DVar1 == DVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    local_48 = _DAT_180bacb80;
    uStack_44 = DAT_180bacb80_4;
    DStack_40 = DAT_180bacb88;
    uStack_3c = uRam0000000180bacb8c;
    iVar3 = FUN_1805f6ad4(&local_48,0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(2);
    }
    _DAT_180bacb80 = 0;
    DAT_180bacb88 = 0;
  }
  DAT_180baccb0 = 0;
  DAT_1808d4070 = 0;
  if (DAT_1808d4078 < 0x10) {
    puVar5 = &DAT_1808d4060;
  }
  else {
    puVar5 = DAT_1808d4060;
  }
  *(undefined1 *)puVar5 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
  DAT_180bacc68 = 0;
  DAT_180bacc70 = 0;
  DAT_180bacc78 = 0;
  DAT_180bacc80 = 0;
  DAT_1808d4010 = 0;
  if (DAT_1808d4018 < 0x10) {
    DAT_1808d4000._0_1_ = 0;
  }
  else {
    *(undefined1 *)CONCAT71(DAT_1808d4000._1_7_,(undefined1)DAT_1808d4000) = 0;
  }
  if (DAT_1808d4038 < 0x10) {
    puVar5 = &DAT_1808d4020;
  }
  else {
    puVar5 = DAT_1808d4020;
  }
  DAT_1808d4030 = 0;
  *(undefined1 *)puVar5 = 0;
  _DAT_180bacc88 = 0;
  uRam0000000180bacc90 = 0;
  _DAT_180bacc98 = 0;
  DAT_1808d4050 = 0;
  if (DAT_1808d4058 < 0x10) {
    puVar5 = &DAT_1808d4040;
  }
  else {
    puVar5 = DAT_1808d4040;
  }
  *(undefined1 *)puVar5 = 0;
  DAT_180bacca0 = DAT_180bacca0 + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
  _DAT_180bacc40 = 0;
  uRam0000000180bacc48 = 0;
  _DAT_180bacc30 = 0;
  uRam0000000180bacc38 = 0;
  _DAT_180bacc20 = 0;
  uRam0000000180bacc28 = 0;
  _DAT_180bacc10 = 0;
  uRam0000000180bacc18 = 0;
  _DAT_180bacc00 = 0;
  uRam0000000180bacc08 = 0;
  _DAT_180bacbf0 = 0;
  uRam0000000180bacbf8 = 0;
  DAT_180bacc50 = 0;
  DAT_180bacc54 = 0;
  DAT_180bacca8 = 0;
  return;
}



