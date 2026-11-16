// FUN_1804c95a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c95a0 */

void FUN_1804c95a0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = DAT_180bb8ae8;
  lVar7 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  *param_1 = lVar7;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar8 + 0x1ec0);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar8 + 0x1e7c);
  uVar6 = *(uint *)(lVar8 + 0x1ec4);
  *(uint *)(param_1 + 4) = uVar6;
  fVar1 = *(float *)(lVar7 + 300);
  fVar2 = *(float *)(lVar8 + 0x1ee0);
  fVar3 = *(float *)(lVar8 + 0x1ee4);
  fVar4 = *(float *)(lVar7 + 0x128);
  fVar5 = *(float *)(lVar8 + 0x1ee8);
  *(float *)(param_1 + 2) = *(float *)(lVar8 + 0x1edc) - *(float *)(lVar7 + 0x128);
  *(float *)((longlong)param_1 + 0x14) = fVar2 - fVar1;
  *(float *)(param_1 + 3) = fVar3 - fVar4;
  *(float *)((longlong)param_1 + 0x1c) = fVar5 - fVar1;
  if ((uVar6 >> 0x15 & 1) != 0) {
    param_1[6] = *(longlong *)(lVar8 + 0x1e98);
  }
  return;
}



