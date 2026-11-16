// FUN_180648c7c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648c7c */

undefined8 FUN_180648c7c(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_2 + 0x80);
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)*pauVar1 = 0;
  *(undefined8 *)(*pauVar1 + 8) = 0;
  return 0;
}



