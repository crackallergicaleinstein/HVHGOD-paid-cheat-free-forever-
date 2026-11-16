// FUN_1804b0e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0e50 */

int FUN_1804b0e50(uint *param_1,byte *param_2,byte *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = (uint)*param_2;
  cVar2 = (&DAT_18085b3a8)[*param_2 >> 3];
  iVar11 = (uint)(cVar2 == '\0') + (int)cVar2;
  if (param_3 == (byte *)0x0) {
    param_3 = param_2 + iVar11;
  }
  if (param_3 <= param_2) {
    uVar10 = 0;
  }
  if (param_2 + 1 < param_3) {
    bVar7 = param_2[1];
  }
  else {
    bVar7 = 0;
  }
  if (param_2 + 2 < param_3) {
    bVar8 = param_2[2];
  }
  else {
    bVar8 = 0;
  }
  if (param_2 + 3 < param_3) {
    bVar9 = param_2[3];
  }
  else {
    bVar9 = 0;
  }
  lVar1 = (longlong)cVar2 * 4;
  uVar6 = ((((*(uint *)(&DAT_18085b3e0 + lVar1) & uVar10) << 6 | bVar7 & 0x3f) << 6 | bVar8 & 0x3f)
           << 6 | bVar9 & 0x3f) >> (*(uint *)(&DAT_18085b390 + lVar1) & 0x1f);
  *param_1 = uVar6;
  uVar5 = 0;
  if ((uVar6 & 0xfffff800) == 0xd800) {
    uVar5 = 0x80;
  }
  uVar3 = 0;
  if (0xffff < uVar6) {
    uVar3 = 0x100;
  }
  iVar4 = iVar11;
  if ((int)((((bVar8 & 0xc0 | (uint)(bVar9 >> 2)) >> 2 | bVar7 & 0xc0) >> 2 |
             -(uint)(uVar6 < *(uint *)(&DAT_18085b378 + lVar1)) & 0x40 | uVar5 | uVar3) ^ 0x2a) >>
      (*(uint *)(&DAT_18085b3c8 + lVar1) & 0x1f) != 0) {
    *param_1 = 0xfffd;
    iVar4 = (uint)(bVar9 != 0) + (uint)(bVar8 != 0) + (uint)(bVar7 != 0) + (uint)(uVar10 != 0);
    if (iVar11 < iVar4) {
      iVar4 = iVar11;
    }
  }
  return iVar4;
}



