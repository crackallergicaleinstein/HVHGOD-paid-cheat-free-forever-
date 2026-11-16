// FUN_180647fa5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647fa5 */

undefined8 FUN_180647fa5(undefined8 param_1,longlong param_2)

{
  *(undefined1 (*) [16])(param_2 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  FUN_18015ba30(param_2 + 0x30,"Private fork response could not be read.",0x28);
  FUN_18016df60(*(undefined8 *)(param_2 + 0x140),param_2 + 0x30,0);
  FUN_18015c010(param_2 + 0x30);
  return 0;
}



