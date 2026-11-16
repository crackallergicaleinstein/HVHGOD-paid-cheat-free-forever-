// FUN_180354340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354340 */

float * FUN_180354340(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short sVar3;
  float *pfVar4;
  float fVar5;
  float local_28 [8];
  
  fVar5 = *param_2;
  sVar3 = thunk_FUN_180624430(fVar5);
  if (((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(param_2[1]), sVar3 < 1)) && (0.0 < param_2[1])) {
    auVar1 = vmaxss_avx(ZEXT416((uint)(fVar5 - 2.0 / param_2[1])),SUB6416(ZEXT464(0x3c800000),0));
    auVar2 = vminss_avx(ZEXT416((uint)(fVar5 - 0.015625)),SUB6416(ZEXT464(0x3f7c0000),0));
    if (auVar1._0_4_ <= auVar2._0_4_) {
      auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar1._0_4_ + auVar2._0_4_) * 0.5 * 64.0)),1
                           );
      local_28[0] = auVar1._0_4_ * 0.015625;
      pfVar4 = local_28;
      if (local_28[0] < 0.015625) {
        pfVar4 = (float *)&DAT_180701e48;
      }
      if (0.984375 < local_28[0]) {
        pfVar4 = (float *)&DAT_180701e44;
      }
      *param_1 = *pfVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



