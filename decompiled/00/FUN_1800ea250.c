// FUN_1800ea250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea250 */

longlong FUN_1800ea250(undefined8 *param_1,undefined8 *param_2)

{
  size_t *psVar1;
  size_t _Size;
  int iVar2;
  uint7 uVar3;
  undefined4 extraout_var;
  
  psVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = (uint7)(*psVar1 >> 8);
  if (_Size != *psVar1) {
    return (ulonglong)uVar3 << 8;
  }
  if (_Size == 0) {
    return CONCAT71(uVar3,1);
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
}



