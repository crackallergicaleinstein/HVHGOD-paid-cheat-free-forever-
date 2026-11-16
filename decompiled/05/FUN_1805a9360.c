// FUN_1805a9360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a9360 */

undefined8 FUN_1805a9360(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180573a00(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    return 0xb;
  }
  *(undefined8 *)(param_1 + 0x38) = *puVar1;
  return 0;
}



