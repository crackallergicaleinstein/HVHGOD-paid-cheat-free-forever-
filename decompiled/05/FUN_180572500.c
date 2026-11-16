// FUN_180572500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180572500 */

ulonglong FUN_180572500(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  size_t sVar3;
  char *_Dest;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  lVar2 = *param_1;
  sVar3 = strlen(param_3);
  _Dest = (char *)0x0;
  iVar8 = (int)sVar3 + 3;
  if (iVar8 < 1) {
    if (iVar8 < 0) {
      return 0x40;
    }
  }
  else {
    _Dest = (char *)(**(code **)(lVar2 + 8))(lVar2);
    if (_Dest == (char *)0x0) {
      return 0x40;
    }
  }
  lVar4 = FUN_1806069d0(param_3);
  if (lVar4 == 0) {
    *_Dest = '\0';
  }
  else {
    strncpy(_Dest,param_3,(lVar4 - (longlong)param_3) + 1);
    _Dest[lVar4 + (1 - (longlong)param_3)] = '\0';
    param_3 = (char *)(lVar4 + 1);
  }
  pcVar7 = _Dest + -1;
  do {
    pcVar6 = pcVar7;
    pcVar7 = pcVar6 + 1;
  } while (pcVar6[1] != '\0');
  pcVar7[0] = '.';
  pcVar7[1] = '_';
  pcVar6[3] = '\0';
  pcVar7 = _Dest + -1;
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  lVar4 = 0;
  do {
    cVar1 = param_3[lVar4];
    pcVar7[lVar4] = cVar1;
    lVar4 = lVar4 + 1;
  } while (cVar1 != '\0');
  if (_Dest == (char *)0x0) {
    return 0x40;
  }
  uVar5 = FUN_18057cf40(param_1,_Dest,param_5);
  if ((int)uVar5 == 0) {
    *param_4 = _Dest;
    return uVar5;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,_Dest);
  return uVar5 & 0xffffffff;
}



