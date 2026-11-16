// FUN_18041fb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041fb10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041fb10(void)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28 [3];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)(DAT_1808d5f00 ^ (ulonglong)auStack_48);
  local_28[0] = &DAT_180c62b68;
  ppuVar2 = local_28;
  local_28[1] = &DAT_180c62b70;
  local_28[2] = &DAT_180c62b78;
  do {
    puVar1 = *ppuVar2;
    if ((HANDLE)*puVar1 != (HANDLE)0x0) {
      ResetEvent((HANDLE)*puVar1);
      CloseHandle((HANDLE)*puVar1);
      *puVar1 = 0;
    }
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 != local_28 + 3);
}



