// FUN_180382820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180382820 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180382820(ulonglong *param_1,HWND param_2,char param_3)

{
  char *pcVar1;
  undefined1 **ppuVar2;
  HWND pHVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [10];
  undefined1 *local_18 [2];
  
  local_18[0] = (undefined1 *)(DAT_1808d5f00 ^ (ulonglong)auStack_88);
  uVar4 = 3;
  uVar5 = (ulonglong)(-(uint)(DAT_180cc9148 != '\0') & 4 | -(uint)(DAT_180cc8ef0 != '\0') & 2) |
          (ulonglong)(DAT_180b0d768 != '\0');
  local_68[0] = &DAT_180cb00f8;
  local_68[1] = &DAT_180cb07f8;
  local_68[2] = &DAT_180cb0ef8;
  local_68[3] = &DAT_180cb0478;
  local_68[4] = &DAT_180cb0b78;
  local_68[5] = &DAT_180cb1278;
  local_68[6] = &DAT_180cb15f8;
  local_68[7] = &DAT_180cb1998;
  local_68[8] = &DAT_180cb2428;
  local_68[9] = &DAT_180cb27a8;
  ppuVar2 = local_68;
  do {
    pcVar1 = *ppuVar2;
    if (*pcVar1 != '\0') {
      uVar5 = uVar5 | (((ulonglong)(byte)pcVar1[0x278] * 2 | (ulonglong)(byte)pcVar1[0x170]) * 2 |
                      (ulonglong)(byte)pcVar1[0x68]) << (uVar4 & 0x3f);
    }
    uVar4 = (ulonglong)((int)uVar4 + 3);
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 != local_68 + 10);
  param_1[1] = (ulonglong)DAT_1808d9be0;
  *(undefined4 *)(param_1 + 2) = DAT_180b0d7d4;
  *param_1 = uVar5;
  if ((((param_2 == (HWND)0x0) || (pHVar3 = GetForegroundWindow(), pHVar3 != param_2)) ||
      (param_3 != '\0')) || ((DAT_1808d9bda != '\0' || (DAT_1808d9bd8 != '\x03')))) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
}



