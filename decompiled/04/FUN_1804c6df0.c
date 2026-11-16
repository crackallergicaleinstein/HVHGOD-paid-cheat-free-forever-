// FUN_1804c6df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6df0 */

float * FUN_1804c6df0(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x98);
  fVar7 = *(float *)(param_2 + 0xa8);
  fVar3 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x78);
  fVar4 = *(float *)(param_2 + 0x84) + *(float *)(param_2 + 0x74) + *(float *)(param_2 + 0x7c);
  if (fVar7 < 3.4028235e+38) {
    fVar1 = *(float *)(param_2 + 0xb8);
    fVar2 = *(float *)(param_2 + 0xb0);
    if (0.0 < fVar1) {
      fVar6 = (*(float *)(param_2 + 0xa0) + *(float *)(param_2 + 0x38)) - fVar3;
      if (fVar1 + 0.0 < fVar7) {
        if (fVar6 - fVar1 <= fVar7) {
          fVar7 = (fVar6 - fVar7) * fVar2 + fVar7;
        }
      }
      else {
        fVar7 = (fVar7 - 0.0) * fVar2 + 0.0;
      }
    }
    *param_1 = fVar7 - (*(float *)(param_2 + 0x38) - fVar3) * fVar2;
  }
  auVar5 = vmaxss_avx(ZEXT416((uint)*param_1),ZEXT816(0));
  fVar7 = (float)(longlong)(auVar5._0_4_ + 0.5);
  *param_1 = fVar7;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    auVar5 = vminss_avx(ZEXT416((uint)fVar7),ZEXT416(*(uint *)(param_2 + 0xa0)));
    *param_1 = auVar5._0_4_;
  }
  fVar7 = *(float *)(param_2 + 0xac);
  if (fVar7 < 3.4028235e+38) {
    fVar3 = *(float *)(param_2 + 0xbc);
    fVar1 = *(float *)(param_2 + 0xb4);
    if (0.0 < fVar3) {
      fVar2 = (*(float *)(param_2 + 0xa4) + *(float *)(param_2 + 0x3c)) - fVar4;
      if (fVar3 + 0.0 < fVar7) {
        if (fVar2 - fVar3 <= fVar7) {
          fVar7 = (fVar2 - fVar7) * fVar1 + fVar7;
        }
      }
      else {
        fVar7 = (fVar7 - 0.0) * fVar1 + 0.0;
      }
    }
    param_1[1] = fVar7 - (*(float *)(param_2 + 0x3c) - fVar4) * fVar1;
  }
  auVar5 = vmaxss_avx(ZEXT416((uint)param_1[1]),ZEXT816(0));
  fVar7 = (float)(longlong)(auVar5._0_4_ + 0.5);
  param_1[1] = fVar7;
  if ((*(char *)(param_2 + 0xcf) == '\0') && (*(char *)(param_2 + 0xd1) == '\0')) {
    auVar5 = vminss_avx(ZEXT416((uint)fVar7),ZEXT416(*(uint *)(param_2 + 0xa4)));
    param_1[1] = auVar5._0_4_;
  }
  return param_1;
}



