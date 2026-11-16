// FUN_180308b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308b70 */

undefined ** FUN_180308b70(byte param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  if (0x26 < uVar1) {
    uVar1 = 0x26;
  }
  return &PTR_DAT_180803050 + uVar1 * 2;
}



