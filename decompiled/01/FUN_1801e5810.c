// FUN_1801e5810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e5810 */

void FUN_1801e5810(uint param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    builtin_strncpy(param_2,"000000000",9);
    return;
  }
  lVar4 = 2;
  pcVar3 = param_2 + 5;
  do {
    uVar1 = (ulonglong)param_1;
    uVar2 = (uint)(uVar1 / 10000);
    param_1 = param_1 + uVar2 * -10000;
    *(undefined2 *)(pcVar3 + 2) = *(undefined2 *)(&DAT_1807cb900 + (param_1 % 100) * 2);
    *(undefined2 *)pcVar3 = *(undefined2 *)(&DAT_1807cb900 + (param_1 / 100) * 2);
    lVar4 = lVar4 + -1;
    pcVar3 = pcVar3 + -4;
    param_1 = uVar2;
  } while (lVar4 != 0);
  *param_2 = (char)(uVar1 / 10000) + '0';
  return;
}



