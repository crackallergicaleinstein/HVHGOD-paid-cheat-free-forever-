// FUN_1804d9380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9380 */

uint FUN_1804d9380(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  
  param_2 = param_2 * *(float *)(param_1 + 0xe4);
  if ((uint)(int)(param_2 + 0.999) < 0x40) {
    return (uint)*(byte *)((longlong)(int)(param_2 + 0.999) + 0x1fc + *(longlong *)(param_1 + 0x38))
    ;
  }
  auVar1 = vminss_avx(ZEXT416(*(uint *)(*(longlong *)(param_1 + 0x38) + 0x34)),
                      ZEXT416((uint)param_2));
  fVar3 = (float)FUN_180636820(1.0 - auVar1._0_4_ / param_2);
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(3.1415927 / fVar3)),2);
  uVar2 = (((int)auVar1._0_4_ + 1) / 2) * 2;
  if ((int)uVar2 < 4) {
    return 4;
  }
  if (0x200 < (int)uVar2) {
    uVar2 = 0x200;
  }
  return uVar2;
}



