// FUN_180156e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180156e70 */

/* WARNING: Removing unreachable block (ram,0x000180156ec3) */

ulonglong FUN_180156e70(undefined8 *param_1,void *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong _Size;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)((longlong)param_2 + uVar3) != '\0');
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
    iVar2 = 1;
  }
  uVar3 = 0xff;
  if (-1 < iVar2) {
    uVar3 = 1;
  }
  return uVar3;
}



