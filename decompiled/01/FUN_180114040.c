// FUN_180114040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180114040 */

/* WARNING: Removing unreachable block (ram,0x000180114091) */

ulonglong FUN_180114040(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong _Size;
  
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
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



