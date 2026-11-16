// FUN_180621f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621f10 */

bool FUN_180621f10(void)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_180d06018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_180d06018 == 0;
    if (!bVar2) goto LAB_180621f4a;
    lVar1 = FUN_180621488(3,"FlsGetValue2",&DAT_1806b1088,"FlsGetValue2");
  }
  bVar2 = lVar1 == 0;
LAB_180621f4a:
  return !bVar2;
}



