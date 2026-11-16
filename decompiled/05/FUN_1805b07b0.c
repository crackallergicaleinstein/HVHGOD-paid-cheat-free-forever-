// FUN_1805b07b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b07b0 */

char * FUN_1805b07b0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while ((cVar2 != '\0' && (cVar2 != param_2))) {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  if (*param_1 != '\0') {
    *param_1 = '\0';
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    while ((cVar2 != '\0' && (cVar2 == param_2))) {
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return param_1;
}



