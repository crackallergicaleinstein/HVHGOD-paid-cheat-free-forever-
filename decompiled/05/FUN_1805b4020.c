// FUN_1805b4020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b4020 */

ulonglong FUN_1805b4020(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char *_Str1;
  int iVar4;
  char *_Str2;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *param_2;
  uVar7 = 0;
  do {
    uVar1 = uVar1 + 1;
    if (0xff < uVar1) {
      *param_2 = 0;
      return uVar7;
    }
    uVar7 = 0;
    _Str2 = (char *)(**(code **)(param_1 + 0x20))
                              (*(undefined2 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 2)
                              );
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar6 = 0;
    if (uVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      do {
        _Str1 = *(char **)(lVar3 + uVar6 * 8);
        if (((_Str1 != (char *)0x0) && (*_Str1 == *_Str2)) &&
           (iVar4 = strcmp(_Str1,_Str2), iVar4 == 0)) {
          uVar7 = uVar6;
          break;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar2);
    }
    if ((int)uVar7 != 0) {
      *param_2 = uVar1;
      return uVar7;
    }
  } while( true );
}



