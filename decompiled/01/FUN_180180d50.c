// FUN_180180d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180180d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180180d50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar3 = uRam0000000180bb88a8;
  uVar2 = uRam0000000180bb88a0;
  uVar1 = uRam0000000180bb8898;
  *param_2 = _DAT_180bb8890;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = uRam0000000180bb88b8;
  param_2[4] = _DAT_180bb88b0;
  param_2[5] = uVar1;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  return param_2;
}



