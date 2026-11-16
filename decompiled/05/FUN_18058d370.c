// FUN_18058d370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058d370 */

undefined8 FUN_18058d370(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x108);
  if (*(undefined1 **)(param_1 + 0x110) < puVar3 + 10) {
    return 0x14;
  }
  *(ushort *)(param_1 + 0x34) = CONCAT11(*puVar3,puVar3[1]);
  *(uint *)(param_1 + 0x38) = (int)(short)((ushort)(byte)puVar3[2] << 8) | (uint)(byte)puVar3[3];
  *(uint *)(param_1 + 0x3c) = (int)(short)((ushort)(byte)puVar3[4] << 8) | (uint)(byte)puVar3[5];
  *(uint *)(param_1 + 0x40) = (int)(short)((ushort)(byte)puVar3[6] << 8) | (uint)(byte)puVar3[7];
  bVar1 = puVar3[8];
  bVar2 = puVar3[9];
  *(undefined1 **)(param_1 + 0x108) = puVar3 + 10;
  *(uint *)(param_1 + 0x44) = (int)(short)((ushort)bVar1 << 8) | (uint)bVar2;
  return 0;
}



