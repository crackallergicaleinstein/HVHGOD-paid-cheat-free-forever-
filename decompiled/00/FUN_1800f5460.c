// FUN_1800f5460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5460 */

ulonglong FUN_1800f5460(undefined8 *param_1,void *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  size_t _Size;
  
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_2 + _Size) != '\0');
  if ((ulonglong)param_1[2] < _Size) {
    return (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  iVar1 = memcmp((void *)((param_1[2] - _Size) + (longlong)puVar2),param_2,_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



