// FUN_1804b0a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0a90 */

uint FUN_1804b0a90(char *param_1,ulonglong param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  param_3 = ~param_3;
  uVar2 = param_3;
  if (param_2 == 0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      pcVar4 = param_1 + 1;
      if (((cVar1 == '#') && (*pcVar4 == '#')) && (param_1[2] == '#')) {
        pcVar4 = param_1 + 3;
        uVar2 = param_3;
      }
      else {
        uVar2 = crc32(uVar2,cVar1);
      }
      param_1 = pcVar4;
      cVar1 = *pcVar4;
    }
    return ~uVar2;
  }
  do {
    uVar3 = param_2 - 1;
    pcVar4 = param_1 + 1;
    if ((((*param_1 == '#') && (1 < uVar3)) && (*pcVar4 == '#')) && (param_1[2] == '#')) {
      pcVar4 = param_1 + 3;
      uVar3 = param_2 - 3;
      uVar2 = param_3;
    }
    else {
      uVar2 = crc32(uVar2,*param_1);
    }
    param_2 = uVar3;
    param_1 = pcVar4;
  } while (uVar3 != 0);
  return ~uVar2;
}



