// FUN_1805f6920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6920 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f6920(uint *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  BOOLEAN BVar3;
  DWORD DVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  DVar4 = GetCurrentThreadId();
  if ((*param_1 & 0xfffffeff) == 1) {
    if (param_1[0x12] != DVar4) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      param_1[0x12] = DVar4;
    }
    param_1[0x13] = param_1[0x13] + 1;
  }
  else {
    if (param_2 == (longlong *)0x0) {
      if (param_1[0x12] != DVar4) {
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4));
      }
    }
    else if ((*param_2 < 0) || ((*param_2 == 0 && ((int)param_2[1] < 1)))) {
      if ((param_1[0x12] != DVar4) &&
         (BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4)), BVar3 == '\0')) {
      }
    }
    else {
      do {
        FUN_1805fa1f0(&local_28);
        if (*param_2 <= local_28) {
          if (local_28 != *param_2) {
          }
          if ((int)param_2[1] <= local_20) {
          }
        }
      } while ((param_1[0x12] != DVar4) &&
              (BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 4)), BVar3 == '\0'));
    }
    uVar2 = param_1[0x13];
    uVar1 = uVar2 + 1;
    param_1[0x13] = uVar1;
    if ((int)uVar1 < 2) {
      param_1[0x12] = DVar4;
    }
    else if ((*param_1 & 0x100) == 0) {
      param_1[0x13] = uVar2;
    }
  }
}



