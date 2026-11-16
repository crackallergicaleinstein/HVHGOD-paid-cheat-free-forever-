// FUN_1805a31e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a31e0 */

void FUN_1805a31e0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  
  sVar3 = strlen(param_1);
  pcVar5 = param_1 + sVar3;
  sVar4 = strlen(param_2);
  if (param_2 < param_2 + sVar4) {
    pcVar6 = pcVar5 + ((sVar4 - sVar3) - (longlong)param_1) + (longlong)param_2;
    do {
      if (pcVar5 == param_1) {
        return;
      }
      pcVar1 = pcVar5 + -1;
      pcVar5 = pcVar5 + -1;
      pcVar6 = pcVar6 + -1;
      if (*pcVar6 != *pcVar1) {
        return;
      }
    } while (param_2 < pcVar6);
  }
  do {
    *pcVar5 = '\0';
    pcVar6 = pcVar5 + -1;
    if (pcVar5 <= param_1) {
      return;
    }
    cVar2 = *pcVar6;
    pcVar5 = pcVar6;
  } while ((((cVar2 == '-') || (cVar2 == ' ')) || (cVar2 == '_')) || (cVar2 == '+'));
  return;
}



