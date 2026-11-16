// FUN_180422970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422970 */

char * FUN_180422970(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  cVar2 = *param_1;
  uVar4 = 0;
  if ((cVar2 == '-') || (cVar2 == '+')) {
    param_1 = param_1 + 1;
    *param_2 = cVar2;
    uVar4 = 1;
    cVar2 = *param_1;
  }
  uVar5 = uVar4;
  if (cVar2 != '\0') {
    cVar2 = *param_1;
    do {
      if (9 < (byte)(cVar2 - 0x30U)) break;
      if ((longlong)uVar4 < 0x3f) {
        uVar5 = (ulonglong)((int)uVar5 + 1);
        param_2[uVar4] = cVar2;
        uVar4 = uVar4 + 1;
      }
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  if (*param_1 == '.') {
    iVar3 = (int)uVar5;
    if (iVar3 < 0x3f) {
      uVar5 = (ulonglong)(iVar3 + 1);
      param_2[iVar3] = '.';
    }
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar2 != '\0') {
      lVar6 = (longlong)(int)uVar5;
      do {
        if (9 < (byte)(cVar2 - 0x30U)) break;
        if (lVar6 < 0x3f) {
          uVar5 = (ulonglong)((int)uVar5 + 1);
          param_2[lVar6] = cVar2;
          lVar6 = lVar6 + 1;
        }
        cVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while (cVar2 != '\0');
    }
  }
  iVar3 = (int)uVar5;
  cVar2 = *param_1;
  if ((cVar2 == 'e') || (cVar2 == 'E')) {
    if ((param_1[1] != 'm') && (param_1[1] != 'x')) {
      if (iVar3 < 0x3f) {
        uVar5 = (ulonglong)(iVar3 + 1);
        param_2[iVar3] = cVar2;
      }
      cVar2 = param_1[1];
      if ((cVar2 == '-') || (pcVar1 = param_1 + 1, cVar2 == '+')) {
        iVar3 = (int)uVar5;
        if (iVar3 < 0x3f) {
          uVar5 = (ulonglong)(iVar3 + 1);
          param_2[iVar3] = cVar2;
        }
        cVar2 = param_1[2];
        pcVar1 = param_1 + 2;
      }
      param_1 = pcVar1;
      iVar3 = (int)uVar5;
      if (cVar2 != '\0') {
        cVar2 = *param_1;
        lVar6 = (longlong)iVar3;
        do {
          iVar3 = (int)uVar5;
          if (9 < (byte)(cVar2 - 0x30U)) break;
          if (lVar6 < 0x3f) {
            uVar5 = (ulonglong)(iVar3 + 1);
            param_2[lVar6] = cVar2;
            lVar6 = lVar6 + 1;
          }
          iVar3 = (int)uVar5;
          cVar2 = param_1[1];
          param_1 = param_1 + 1;
        } while (cVar2 != '\0');
      }
    }
  }
  param_2[iVar3] = '\0';
  return param_1;
}



