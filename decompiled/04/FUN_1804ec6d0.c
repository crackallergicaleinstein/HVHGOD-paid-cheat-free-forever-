// FUN_1804ec6d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ec6d0 */

void FUN_1804ec6d0(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  if ((param_3 & 0x18) == 0) {
    uVar1 = *(uint *)(param_1 + 4) & 0xe000;
    if ((uVar1 == 0x2000) || (uVar1 == 0x4000)) {
      param_3 = param_3 | 0x10;
    }
    else {
      param_3 = param_3 | 8;
    }
  }
  uVar1 = param_3 | 0x20;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar1 = param_3;
  }
  uVar8 = uVar1 | 0x200;
  if ((uVar1 & 0xc00) != 0xc00) {
    uVar8 = uVar1;
  }
  if ((uVar8 & 0x30000) == 0) {
    lVar4 = (longlong)param_2 - *(longlong *)(param_1 + 0x18);
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
    uVar1 = 0x20000;
    if ((int)(lVar4 >> 6) == (int)(lVar4 >> 0x3f)) {
      uVar1 = 0x10000;
    }
    uVar8 = uVar8 | uVar1;
  }
  *param_2 = *param_2 & 0xf000000;
  bVar6 = (byte)param_2[0x1d] & 3;
  *param_2 = *param_2 | uVar8;
  *(byte *)(param_2 + 0x1d) = bVar6;
  *(undefined1 *)((longlong)param_2 + 0x75) = 0;
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    uVar3 = 0;
    uVar1 = uVar3;
    if (((uVar8 & 0x4000) != 0) && ((uVar8 >> 10 & 1) == 0)) {
      uVar1 = 2;
      uVar3 = 1;
    }
    bVar5 = (byte)uVar1;
    uVar1 = uVar3;
    if (((uVar8 & 0x8000) != 0) && ((uVar8 >> 0xb & 1) == 0)) {
      bVar5 = bVar5 | 4;
      uVar1 = 2 << uVar3 * 2 | uVar3;
      uVar3 = uVar3 + 1;
    }
    bVar7 = (byte)uVar1;
    if (((uVar8 & 0x4000) == 0) && ((uVar8 >> 10 & 1) == 0)) {
      bVar5 = bVar5 | 2;
      bVar7 = bVar7 | (byte)(1 << uVar3 * 2);
      uVar3 = uVar3 + 1;
    }
    if (((uVar8 & 0x8000) == 0) && ((uVar8 >> 0xb & 1) == 0)) {
      bVar5 = bVar5 | 4;
      bVar7 = bVar7 | (byte)(2 << uVar3 * 2);
      uVar3 = uVar3 + 1;
    }
    bVar2 = (byte)uVar3;
    if (((*(uint *)(param_1 + 4) & 0x8000000) != 0) || (uVar3 == 0)) {
      bVar5 = bVar5 | 1;
      bVar2 = bVar2 + 1;
    }
    *(byte *)((longlong)param_2 + 0x75) = bVar7;
    bVar2 = (bVar5 << 2 | bVar2 & 3) << 2 | bVar6;
    *(byte *)(param_2 + 0x1d) = bVar2;
    if ((*(short *)((longlong)param_2 + 0x62) != -1) && ((bVar5 >> bVar6 & 1) == 0)) {
      *(byte *)(param_2 + 0x1d) = (bVar7 ^ bVar2) & 3 ^ bVar2;
      *(undefined1 *)(param_1 + 0x242) = 1;
    }
  }
  return;
}



