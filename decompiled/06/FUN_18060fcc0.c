// FUN_18060fcc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060fcc0 */

uint FUN_18060fcc0(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_1806ae2f4 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_1806ae2f0 + uVar9 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_18060fd61:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar8 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar8;
        }
        lVar1 = uVar6 + uVar9;
        puVar4 = (uint *)(&DAT_1806ae2f0 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_18060fd61;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar9 = lVar1 + 1;
          uVar3 = uVar7;
          uVar5 = uVar8;
        }
        uVar7 = uVar3;
      } while (uVar9 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}



