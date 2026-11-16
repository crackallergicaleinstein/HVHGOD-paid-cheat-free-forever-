// FUN_180427790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180427790 */

void FUN_180427790(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*param_2 == 'g') && (param_2[1] == '\0')) {
    if (0 < *(int *)(param_1 + 0x9c00)) {
      *(int *)(param_1 + 0x9c00) = *(int *)(param_1 + 0x9c00) + -1;
      return;
    }
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    while (lVar3 = lVar2 + 1, param_2[lVar2] == (&DAT_180811b3c)[lVar2]) {
      lVar2 = lVar3;
      if (lVar3 == 5) {
        *(undefined1 *)(param_1 + 0x9c58) = 0;
        return;
      }
    }
    do {
      lVar2 = lVar1 + 1;
      if (param_2[lVar1] != (&DAT_18081e960)[lVar1]) {
        return;
      }
      lVar1 = lVar2;
    } while (lVar2 != 5);
    *(undefined1 *)(param_1 + 0x9c59) = 0;
  }
  return;
}



