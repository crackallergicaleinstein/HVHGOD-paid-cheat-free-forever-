// FUN_1805abbf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805abbf0 */

short FUN_1805abbf0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  sVar6 = 0;
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  uVar7 = ((uint)puVar3[1] - (uint)uVar1) + 1;
  uVar5 = (*param_2 + 1 >> 8) - (uint)uVar2;
  uVar8 = 0;
  if (-1 < (int)uVar5) {
    uVar8 = uVar5;
  }
  uVar4 = (*param_2 + 1 & 0xff) - (uint)uVar1;
  uVar5 = 0;
  if (-1 < (int)uVar4) {
    uVar5 = uVar4;
  }
  for (; uVar8 < ((uint)puVar3[3] - (uint)uVar2) + 1; uVar8 = uVar8 + 1) {
    if (uVar5 < uVar7) {
      do {
        sVar6 = *(short *)(*(longlong *)(puVar3 + 8) + (ulonglong)(uVar7 * uVar8 + uVar5) * 2);
        if (sVar6 != -1) goto LAB_1805abc98;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
    }
    uVar5 = 0;
  }
LAB_1805abc98:
  *param_2 = (uVar2 + uVar8) * 0x100 | uVar1 + uVar5;
  return sVar6;
}



