// FUN_1801b6410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6410 */

longlong FUN_1801b6410(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
    do {
      FUN_18015b360(param_3,puVar1 + -0x10);
      FUN_1800f5370(param_3 + 0x20,puVar1 + -8);
      *(undefined4 *)(param_3 + 0x40) = *puVar1;
      *(undefined4 *)(param_3 + 0x44) = puVar1[1];
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(puVar1 + 2);
      param_3 = param_3 + 0x50;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_3;
}



