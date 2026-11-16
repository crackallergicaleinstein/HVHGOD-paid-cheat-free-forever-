// FUN_1804930e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804930e0 */

longlong FUN_1804930e0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_18015b360(param_3,puVar2 + -10);
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(puVar2 + -2);
      *(undefined4 *)(param_3 + 0x28) = *puVar2;
      *(undefined4 *)(param_3 + 0x2c) = puVar2[1];
      *(undefined4 *)(param_3 + 0x30) = puVar2[2];
      *(undefined4 *)(param_3 + 0x34) = puVar2[3];
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(puVar2 + 4);
      uVar1 = *(undefined8 *)(puVar2 + 8);
      *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(param_3 + 0x48) = uVar1;
      *(undefined4 *)(param_3 + 0x50) = puVar2[10];
      *(undefined4 *)(param_3 + 0x54) = puVar2[0xb];
      *(undefined4 *)(param_3 + 0x58) = puVar2[0xc];
      *(undefined1 *)(param_3 + 0x5c) = *(undefined1 *)(puVar2 + 0xd);
      *(undefined1 *)(param_3 + 0x5d) = *(undefined1 *)((longlong)puVar2 + 0x35);
      *(undefined1 *)(param_3 + 0x5e) = *(undefined1 *)((longlong)puVar2 + 0x36);
      *(undefined4 *)(param_3 + 0x60) = puVar2[0xe];
      *(undefined4 *)(param_3 + 100) = puVar2[0xf];
      param_3 = param_3 + 0x68;
      puVar2 = puVar2 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_3;
}



