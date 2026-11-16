// FUN_18060af9c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060af9c */

undefined8 * FUN_18060af9c(LPCWSTR param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_calloc_base(1);
  FUN_180621380(0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    GetModuleHandleExW(4,param_1,(HMODULE *)(puVar1 + 3));
  }
  return puVar1;
}



