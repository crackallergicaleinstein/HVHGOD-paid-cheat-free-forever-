// FUN_180163070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163070 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180163070(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_180bb8370,0,local_18,(LPVOID *)0x0);
  if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_18[0] != 0) {
    if ((DAT_180bb8390 & 1) == 0) {
      DAT_180bb8390 = DAT_180bb8390 | 1;
      atexit(FUN_180661640);
    }
    DAT_180bb8378 = &DAT_180bb8380;
    BVar2 = InitOnceComplete((LPINIT_ONCE)&DAT_180bb8370,0,(LPVOID)0x0);
    if (BVar2 == 0) {
      FUN_1805fd4f0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
}



