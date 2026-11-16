// FUN_180624278 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180624278 */

bool FUN_180624278(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;
  
  pFVar2 = (FILE *)FUN_1806114c0(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)FUN_1806114c0(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_180632c90(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



