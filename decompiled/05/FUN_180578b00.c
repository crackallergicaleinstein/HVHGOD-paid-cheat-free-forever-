// FUN_180578b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180578b00 */

uint FUN_180578b00(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = *param_1;
  uVar7 = param_1[1];
  uVar12 = uVar9;
  if ((int)uVar9 < 0) {
    uVar12 = -uVar9;
  }
  uVar13 = (int)uVar9 >> 0x1f & 0xfffffffe;
  uVar9 = uVar7;
  if ((int)uVar7 < 0) {
    uVar9 = -uVar7;
  }
  uVar7 = (int)uVar7 >> 0x1f & 0xfffffffe;
  if (uVar12 == 0) {
    if (uVar9 != 0) {
      param_1[1] = (uVar7 + 1) * 0x10000;
    }
    return uVar9;
  }
  if (uVar9 == 0) {
    *param_1 = (uVar13 + 1) * 0x10000;
    return uVar12;
  }
  uVar10 = (uVar12 >> 1) + uVar9;
  if (uVar9 < uVar12) {
    uVar10 = (uVar9 >> 1) + uVar12;
  }
  iVar1 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar6 = (0x1f - iVar1) - (uint)(0xaaaaaaaaU >> ((byte)(0x1f - iVar1) & 0x1f) <= uVar10);
  iVar1 = iVar6 + -0xf;
  bVar4 = (byte)iVar1;
  if (iVar1 < 1) {
    bVar5 = -bVar4;
    uVar12 = uVar12 >> (bVar5 & 0x1f);
    uVar9 = uVar9 >> (bVar5 & 0x1f);
    uVar10 = uVar10 >> (bVar5 & 0x1f);
  }
  else {
    uVar12 = uVar12 << (bVar4 & 0x1f);
    uVar9 = uVar9 << (bVar4 & 0x1f);
    if (uVar9 < uVar12) {
      uVar10 = (uVar9 >> 1) + uVar12;
    }
    else {
      uVar10 = (uVar12 >> 1) + uVar9;
    }
  }
  iVar8 = 0x10000 - uVar10;
  do {
    uVar10 = ((int)(iVar8 * uVar12) >> 0x10) + uVar12;
    uVar11 = ((int)(iVar8 * uVar9) >> 0x10) + uVar9;
    iVar2 = uVar11 * uVar11 + uVar10 * uVar10;
    iVar2 = -((int)(iVar2 + (iVar2 >> 0x1f & 0x1ffU)) >> 9) * (iVar8 + 0x10000 >> 8);
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffffU)) >> 0x10;
    iVar8 = iVar8 + iVar2;
  } while (0 < iVar2);
  uVar3 = uVar10;
  if ((int)uVar13 < -1) {
    uVar3 = -uVar10;
  }
  *param_1 = uVar3;
  uVar13 = uVar11;
  if ((int)uVar7 < -1) {
    uVar13 = -uVar11;
  }
  param_1[1] = uVar13;
  iVar8 = uVar11 * uVar9 + uVar10 * uVar12;
  iVar8 = ((int)((iVar8 >> 0x1f & 0xffffU) + iVar8) >> 0x10) + 0x10000;
  if (iVar1 < 1) {
    return iVar8 << (-bVar4 & 0x1f);
  }
  return (uint)(iVar8 + (1 << ((char)iVar6 - 0x10U & 0x1f))) >> (bVar4 & 0x1f);
}



