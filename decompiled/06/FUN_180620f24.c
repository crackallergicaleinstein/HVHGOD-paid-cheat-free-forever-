// FUN_180620f24 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180620f24 */

undefined8 FUN_180620f24(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  
  if ((int)param_2[2] != 0) {
    return 0;
  }
  if ((param_2[1] != 2) || (cVar3 = FUN_1806210a8(*param_2), cVar3 == '\0')) {
    if (param_2[1] != 3) {
      return 0;
    }
    lVar2 = *param_2;
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar6 * 2);
      puVar5 = __pctype_func();
      if (0xff < uVar1) {
        return 0;
      }
      if ((puVar5[uVar1] >> 2 & 1) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 3);
  }
  iVar4 = FUN_18062f9c0();
  if (((iVar4 != 0) || (iVar4 = FUN_18062f880(), iVar4 != 0)) ||
     (iVar4 = FUN_18062f880(), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 1;
}



