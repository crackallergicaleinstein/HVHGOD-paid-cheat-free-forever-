// FUN_18050c9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050c9f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18050c9f0(char param_1)

{
  int iVar1;
  
  iVar1 = DAT_180bda4dc;
  if (param_1 == '\0') {
    if (DAT_180bda4dc == 1) {
      DAT_180b0d674 = DAT_1808e4f8c;
      DAT_180b0d67c = DAT_1808e4f94;
      DAT_180b0d678 = DAT_1808e4f90;
      DAT_180b0d670 = DAT_1808e4f88;
    }
    else if (DAT_180bda4dc == 2) {
      DAT_180b0d6d0 = DAT_1808e4f8c;
      DAT_180b0d6d8 = DAT_1808e4f94;
      DAT_180b0d6d4 = DAT_1808e4f90;
      DAT_180b0d6cc = DAT_1808e4f88;
    }
    else if (DAT_180bda4dc == 3) {
      DAT_180b0d69c = DAT_1808e4f8c;
      DAT_180b0d6a4 = DAT_1808e4f94;
      DAT_180b0d6a0 = DAT_1808e4f90;
      DAT_180b0d698 = DAT_1808e4f88;
    }
    else {
      DAT_180bda4dc = 0;
      if (iVar1 == 4) {
        DAT_180b0d5e0 = DAT_1808e4f8c;
        DAT_180b0d5e8 = DAT_1808e4f94;
        DAT_180b0d5e4 = DAT_1808e4f90;
        DAT_180b0d5de = DAT_1808e4f88;
      }
    }
  }
  DAT_180bda4dc = 0;
}



