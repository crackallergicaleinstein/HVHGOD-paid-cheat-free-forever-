// FUN_180195650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195650 */

longlong FUN_180195650(longlong param_1,longlong param_2)

{
  FUN_18015b360();
  FUN_18015b360(param_1 + 0x20,param_2 + 0x20);
  FUN_18015b360(param_1 + 0x40,param_2 + 0x40);
  FUN_18015b360(param_1 + 0x60,param_2 + 0x60);
  FUN_1800f5370(param_1 + 0x80,param_2 + 0x80);
  FUN_1800f5370(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  return param_1;
}



