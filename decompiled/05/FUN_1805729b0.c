// FUN_1805729b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805729b0 */

ulonglong FUN_1805729b0(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  size_t sVar4;
  char *_Dest;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  
  lVar3 = *param_1;
  sVar4 = strlen(param_3);
  _Dest = (char *)0x0;
  iVar8 = (int)sVar4 + 2;
  if (iVar8 < 1) {
    if (iVar8 < 0) {
      return 0x40;
    }
  }
  else {
    _Dest = (char *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dest == (char *)0x0) {
      return 0x40;
    }
  }
  lVar5 = FUN_1806069d0(param_3);
  if (lVar5 == 0) {
    *_Dest = '\0';
  }
  else {
    strncpy(_Dest,param_3,(lVar5 - (longlong)param_3) + 1);
    _Dest[lVar5 + (1 - (longlong)param_3)] = '\0';
    param_3 = (char *)(lVar5 + 1);
  }
  pcVar7 = _Dest + -1;
  do {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  pcVar7[0] = '%';
  pcVar7[1] = '\0';
  pcVar7 = _Dest + -1;
  do {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  lVar5 = 0;
  do {
    cVar2 = param_3[lVar5];
    pcVar7[lVar5] = cVar2;
    lVar5 = lVar5 + 1;
  } while (cVar2 != '\0');
  if (_Dest == (char *)0x0) {
    return 0x40;
  }
  uVar6 = FUN_18057cf40(param_1,_Dest,param_5);
  if ((int)uVar6 == 0) {
    *param_4 = _Dest;
    return uVar6;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,_Dest);
  return uVar6 & 0xffffffff;
}



