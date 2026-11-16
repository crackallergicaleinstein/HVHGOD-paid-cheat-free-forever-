// FUN_1804c1ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1ac0 */

void FUN_1804c1ac0(longlong param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 == 0) || ((param_3 & (int)*(char *)(param_1 + 0xf1)) != 0)) {
    fVar1 = *(float *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xf4) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0xf8) = 0x7f7fffff;
    *(uint *)(param_1 + 0xf0) =
         (*(uint *)(param_1 + 0xf0) >> 8 & 0xf1) << 8 | *(uint *)(param_1 + 0xf0) & 0xffff00ff;
    fVar2 = param_2[1];
    fVar3 = (float)(int)*param_2 - *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x28) = (float)(int)*param_2;
    *(float *)(param_1 + 0x2c) = (float)(int)fVar2;
    fVar1 = (float)(int)fVar2 - fVar1;
    if ((fVar3 != 0.0) || (fVar1 != 0.0)) {
      if (((*(uint *)(param_1 + 0x14) & 0x100) == 0) && (*(float *)(DAT_180bb8ae8 + 0x277c) <= 0.0))
      {
        *(undefined4 *)(DAT_180bb8ae8 + 0x277c) = *(undefined4 *)(DAT_180bb8ae8 + 0x44);
      }
      *(float *)(param_1 + 0x118) = fVar3 + *(float *)(param_1 + 0x118);
      *(float *)(param_1 + 0x130) = fVar3 + *(float *)(param_1 + 0x130);
      *(float *)(param_1 + 0x134) = fVar1 + *(float *)(param_1 + 0x134);
      *(float *)(param_1 + 0x138) = fVar3 + *(float *)(param_1 + 0x138);
      *(float *)(param_1 + 0x128) = fVar3 + *(float *)(param_1 + 0x128);
      *(float *)(param_1 + 0x11c) = fVar1 + *(float *)(param_1 + 0x11c);
      *(float *)(param_1 + 300) = fVar1 + *(float *)(param_1 + 300);
      *(float *)(param_1 + 0x13c) = fVar1 + *(float *)(param_1 + 0x13c);
    }
  }
  return;
}



