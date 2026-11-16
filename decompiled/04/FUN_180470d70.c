// FUN_180470d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470d70 */

undefined8 FUN_180470d70(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = 0;
  while( true ) {
    pcVar1 = *(char **)(param_1 + 0xc0);
    if (pcVar1 < *(char **)(param_1 + 200)) {
      cVar2 = *pcVar1;
      *(char **)(param_1 + 0xc0) = pcVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_18046f690(param_1);
      cVar2 = **(char **)(param_1 + 0xc0);
      *(char **)(param_1 + 0xc0) = *(char **)(param_1 + 0xc0) + 1;
    }
    if (cVar2 != (&DAT_18082ac60)[lVar3]) break;
    lVar3 = lVar3 + 1;
    if (7 < lVar3) {
      return 1;
    }
  }
  return 0;
}



