// FUN_180493e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180493e50 */

void FUN_180493e50(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_180c62d50;
  DAT_180bbecdb = 1;
  if (DAT_180c62d30 != DAT_180c62d38) {
    DAT_180c62d38 = DAT_180c62d30;
  }
  lVar2 = DAT_180c62d48;
  if (DAT_180c62d48 != DAT_180c62d50) {
    do {
      FUN_18015c010(lVar2);
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar1);
    DAT_180c62d50 = DAT_180c62d48;
  }
  lVar1 = DAT_180c62d20;
  lVar2 = DAT_180c62d18;
  if (DAT_180c62d18 != DAT_180c62d20) {
    do {
      FUN_18015c010(lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar1);
    DAT_180c62d20 = DAT_180c62d18;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



