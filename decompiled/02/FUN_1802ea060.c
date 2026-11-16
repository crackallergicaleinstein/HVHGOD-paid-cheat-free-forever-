// FUN_1802ea060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ea060 */

undefined8 FUN_1802ea060(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  short sVar6;
  ULONGLONG UVar7;
  float *pfVar8;
  ulonglong uVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float local_78 [28];
  
  param_1 = (undefined8 *)*param_1;
  UVar7 = GetTickCount64();
  uVar3 = *(ulonglong *)(param_2 + 0x70);
  auVar5._12_4_ = 0;
  auVar5._0_12_ = ZEXT812(0);
  auVar15 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (uVar3 == 0) {
    auVar5 = vmaxss_avx(ZEXT416((uint)(*(float *)*param_1 - *(float *)(param_2 + 0x28))),
                        auVar5 << 0x20);
    auVar12 = ZEXT1664(auVar5);
  }
  else {
    uVar9 = UVar7 - uVar3;
    if (UVar7 < uVar3) {
      uVar9 = 0;
    }
    if ((longlong)uVar9 < 0) {
      auVar12 = ZEXT464((uint)((float)uVar9 * 0.001));
    }
    else {
      auVar12 = ZEXT464((uint)((float)(longlong)uVar9 * 0.001));
    }
  }
  lVar4 = param_1[1];
  if (*(char *)(lVar4 + 0x418) == '\0') {
    return 1;
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  if (uVar2 == 3) {
    cVar1 = *(char *)(lVar4 + 0x490);
  }
  else {
    if (uVar2 != 6) goto LAB_1802ea11f;
    cVar1 = *(char *)(lVar4 + 0x4f8);
  }
  if (cVar1 == '\0') {
    return 1;
  }
LAB_1802ea11f:
  sVar6 = thunk_FUN_180624430(auVar12._0_8_);
  if (sVar6 < 1) {
    fVar11 = *(float *)(param_2 + 0x3c);
    fVar13 = 10.0;
    fVar14 = 0.2;
    local_78[0] = 0.2;
    local_78[4] = 10.0;
    local_78[2] = fVar11;
    sVar6 = thunk_FUN_180624430(fVar11);
    if (sVar6 < 1) {
      pfVar10 = local_78;
      if (fVar14 <= fVar11) {
        pfVar10 = local_78 + 2;
      }
      pfVar8 = local_78 + 4;
      if (fVar11 <= fVar13) {
        pfVar8 = pfVar10;
      }
      fVar11 = *pfVar8;
    }
    else {
      fVar11 = 1.8;
    }
    auVar5 = vpcmpeqd_avx(ZEXT416(uVar2),SUB6416(ZEXT464(3),0));
    auVar5 = vblendvps_avx(auVar15._0_16_,SUB6416(ZEXT464(0x3f800000),0),auVar5);
    if (auVar12._0_4_ <= auVar5._0_4_ + fVar11) {
      return 0;
    }
  }
  return 1;
}



