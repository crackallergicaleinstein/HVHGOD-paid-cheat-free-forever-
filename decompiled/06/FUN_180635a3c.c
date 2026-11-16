// FUN_180635a3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180635a3c */

undefined8 FUN_180635a3c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_180bb26c8;
    uVar2 = 0;
  }
  return uVar2;
}



