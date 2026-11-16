// FUN_180470340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470340 */

void FUN_180470340(undefined8 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  
  do {
    uVar1 = *(uint *)(param_1 + 2);
    if ((uint)(1 << (uVar1 & 0x1f)) <= *(uint *)(param_1 + 3)) {
      *param_1 = param_1[1];
      return;
    }
    pbVar2 = (byte *)*param_1;
    if (pbVar2 < (byte *)param_1[1]) {
      bVar3 = *pbVar2;
      *param_1 = pbVar2 + 1;
    }
    else {
      bVar3 = 0;
    }
    *(uint *)(param_1 + 3) = (uint)bVar3 << (uVar1 & 0x1f) | *(uint *)(param_1 + 3);
    *(uint *)(param_1 + 2) = uVar1 + 8;
  } while ((int)(uVar1 + 8) < 0x19);
  return;
}



