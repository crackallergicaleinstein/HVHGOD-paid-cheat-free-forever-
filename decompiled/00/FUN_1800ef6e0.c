// FUN_1800ef6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ef6e0 */

undefined1 (*) [16] FUN_1800ef6e0(undefined1 (*param_1) [16])

{
  undefined8 uVar1;
  
  *param_1 = (undefined1  [16])0x0;
  (*param_1)[0] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 3;
  uVar1 = FUN_18013f1a0();
  *(undefined8 *)(*param_1 + 8) = uVar1;
  return param_1;
}



