// FUN_1803f5170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f5170 */

ulonglong FUN_1803f5170(undefined8 param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  ULONGLONG UVar3;
  
  uVar1 = DAT_180cce420;
  if ((((DAT_180cce4bb == '\0') && (DAT_180cce474 != '\0')) &&
      (in_RAX = DAT_180cce4e8, DAT_180cce4e8 == DAT_180cce4d0)) &&
     (((DAT_180cce4e8 != 0 && (DAT_180cce3c0 == param_2)) && (DAT_180cce3c4 == param_3)))) {
    in_RAX = GetTickCount64();
    lVar2 = DAT_180cce558;
    if (in_RAX < uVar1) {
      UVar3 = GetTickCount64();
      in_RAX = UVar3 - lVar2;
      if (in_RAX < 100) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



