// FUN_18059c2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c2e0 */

int FUN_18059c2e0(char *param_1,ulonglong param_2,longlong param_3)

{
  char *_Str;
  int iVar1;
  size_t sVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_2 < 0x10000) && (iVar3 = 0, 0 < *(int *)(param_3 + 0x168))) {
    lVar4 = 0;
    do {
      _Str = *(char **)(lVar4 + *(longlong *)(param_3 + 0x170));
      if ((((_Str != (char *)0x0) && (*_Str == *param_1)) &&
          (sVar2 = strlen(_Str), sVar2 == param_2)) &&
         (iVar1 = strncmp(_Str,param_1,param_2), iVar1 == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_3 + 0x168));
  }
  return 0;
}



