// FUN_18041a290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041a290 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18041a290(void)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  undefined8 *puVar4;
  DWORD *pDVar5;
  
  iVar3 = FUN_1805f68d0(&DAT_1808d9bf0);
  puVar1 = DAT_180b0b2f0;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d9c3c == 0x7fffffff) {
    DAT_1808d9c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar4 = DAT_180b0b2e8;
  if (DAT_180b0b2e8 != DAT_180b0b2f0) {
    do {
      (*(code *)puVar4[1])(*puVar4);
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar1);
    if (DAT_180b0b2e8 != DAT_180b0b2f0) {
      DAT_180b0b2f0 = DAT_180b0b2e8;
    }
  }
  pDVar2 = DAT_180b0b308;
  pDVar5 = DAT_180b0b300;
  if (DAT_180b0b300 != DAT_180b0b308) {
    do {
      TlsFree(*pDVar5);
      pDVar5 = pDVar5 + 1;
    } while (pDVar5 != pDVar2);
    if (DAT_180b0b300 != DAT_180b0b308) {
      DAT_180b0b308 = DAT_180b0b300;
    }
  }
  FUN_1805f68fc(&DAT_1808d9bf0);
  return;
}



