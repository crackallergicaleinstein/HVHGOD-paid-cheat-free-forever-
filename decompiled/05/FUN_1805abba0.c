// FUN_1805abba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805abba0 */

undefined2 FUN_1805abba0(longlong param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(ushort **)(param_1 + 0x18);
  uVar4 = (param_2 >> 8) - (uint)puVar1[2];
  uVar3 = (param_2 & 0xff) - (uint)*puVar1;
  if ((uVar4 < ((uint)puVar1[3] - (uint)puVar1[2]) + 1) &&
     (uVar2 = ((uint)puVar1[1] - (uint)*puVar1) + 1, uVar3 < uVar2)) {
    return *(undefined2 *)(*(longlong *)(puVar1 + 8) + (ulonglong)(uVar3 + uVar2 * uVar4) * 2);
  }
  return 0;
}



