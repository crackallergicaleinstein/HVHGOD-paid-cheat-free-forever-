// FUN_1800f54b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f54b0 */

ulonglong FUN_1800f54b0(undefined8 *param_1,void *param_2)

{
  int iVar1;
  undefined8 *_Buf1;
  undefined4 extraout_var;
  ulonglong _Size;
  
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_2 + _Size) != '\0');
  if ((ulonglong)param_1[2] < _Size) {
    return (ulonglong)_Buf1 & 0xffffffffffffff00;
  }
  iVar1 = memcmp(_Buf1,param_2,_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



