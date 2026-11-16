// FUN_1801d9fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d9fe0 */

void FUN_1801d9fe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar2 = param_1 + 0x98;
    do {
      FUN_18015c010(lVar2 + 0x58);
      FUN_18015c010(lVar2);
      FUN_18015c010(lVar2 + -0x68);
      FUN_18015c010(lVar2 + -0x98);
      lVar1 = lVar2 + 0x98;
      lVar2 = lVar2 + 0x130;
    } while (lVar1 != param_2);
  }
  return;
}



