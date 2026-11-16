// FUN_1800e7dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e7dd0 */

longlong FUN_1800e7dd0(undefined8 *param_1,void *param_2)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  uint7 uVar3;
  undefined4 extraout_var;
  
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (*(char *)((longlong)param_2 + sVar2) != '\0');
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = (uint7)(sVar2 >> 8);
  if (_Size != sVar2) {
    return (ulonglong)uVar3 << 8;
  }
  if (_Size == 0) {
    return CONCAT71(uVar3,1);
  }
  iVar1 = memcmp(param_1,param_2,_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



