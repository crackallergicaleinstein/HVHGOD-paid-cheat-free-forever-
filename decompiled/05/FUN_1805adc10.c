// FUN_1805adc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805adc10 */

short FUN_1805adc10(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  sVar6 = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar9 = *param_2 + 1;
  uVar5 = uVar1 >> 1;
  uVar7 = 0;
  uVar8 = uVar1;
  if (uVar1 != 0) {
    do {
      uVar2 = *(uint *)(lVar3 + (ulonglong)uVar5 * 8);
      if (uVar9 == uVar2) {
        sVar6 = *(short *)(lVar3 + (ulonglong)uVar5 * 8 + 4);
        goto LAB_1805adc90;
      }
      uVar4 = uVar5;
      if (uVar2 <= uVar9) {
        uVar7 = uVar5 + 1;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
      uVar5 = uVar5 + (uVar9 - uVar2);
      if ((uVar8 <= uVar5) || (uVar5 < uVar7)) {
        uVar5 = uVar8 + uVar7 >> 1;
      }
    } while (uVar7 < uVar8);
  }
  uVar9 = 0;
  if (uVar7 < uVar1) {
    uVar9 = *(uint *)(lVar3 + (ulonglong)uVar7 * 8);
    sVar6 = *(short *)(lVar3 + 4 + (ulonglong)uVar7 * 8);
LAB_1805adc90:
    sVar6 = sVar6 + 1;
  }
  *param_2 = uVar9;
  return sVar6;
}



