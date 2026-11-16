// FUN_180619c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180619c70 */

undefined8 common_getenv<>(longlong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (uVar2 = FUN_18061ed10(param_1,0x7fff), 0x7ffe < uVar2)) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
    return 0;
  }
  __acrt_lock(0xb);
  uVar3 = FUN_180619a40(param_1);
  __acrt_unlock(0xb);
  return uVar3;
}



