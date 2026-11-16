// FUN_1801130e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801130e0 */

undefined8 FUN_1801130e0(char *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = *param_1;
  if ((cVar1 == '\a') && (sVar2 = thunk_FUN_1806243d0(*(undefined8 *)(param_1 + 8)), sVar2 == 2)) {
    if (*param_2 == '\x05') {
      return 1;
    }
    if ((byte)(*param_2 - 6U) < 2) {
      return 1;
    }
  }
  if (((*param_2 == '\a') && (sVar2 = thunk_FUN_1806243d0(*(undefined8 *)(param_2 + 8)), sVar2 == 2)
      ) && ((byte)(cVar1 - 5U) < 3)) {
    return 1;
  }
  if ((cVar1 == '\t') || (*param_2 == '\t')) {
    return 1;
  }
  return 0;
}



