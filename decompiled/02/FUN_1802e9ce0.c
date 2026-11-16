// FUN_1802e9ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e9ce0 */

undefined8 FUN_1802e9ce0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  ULONGLONG UVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  float *pfVar7;
  float fVar8;
  float local_18;
  float local_14 [3];
  
  param_1 = (longlong *)*param_1;
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x418) != '\0') {
    UVar3 = GetTickCount64();
    uVar1 = *(ulonglong *)(param_2 + 0x70);
    fVar8 = *(float *)(param_2 + 0x3c);
    local_14[0] = 10.0;
    pfVar5 = &local_18;
    if (0.2 <= fVar8) {
      pfVar5 = (float *)(param_2 + 0x3c);
    }
    local_18 = 0.2;
    pfVar7 = local_14;
    if (fVar8 <= 10.0) {
      pfVar7 = pfVar5;
    }
    if (uVar1 == 0) {
      auVar2 = vmaxss_avx(ZEXT416((uint)(*(float *)param_1[1] - *(float *)(param_2 + 0x28))),
                          ZEXT816(0));
      fVar8 = auVar2._0_4_;
    }
    else {
      uVar6 = UVar3 - uVar1;
      if (UVar3 < uVar1) {
        uVar6 = 0;
      }
      if ((longlong)uVar6 < 0) {
        fVar8 = (float)uVar6 * 0.001;
      }
      else {
        fVar8 = (float)(longlong)uVar6 * 0.001;
      }
    }
    lVar4 = 0;
    auVar2 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_2 + 0x30)),SUB6416(ZEXT464(3),0));
    auVar2 = vblendvps_avx(ZEXT816(0),SUB6416(ZEXT464(0x3e800000),0),auVar2);
    if (fVar8 <= auVar2._0_4_ + *pfVar7) {
      return 0;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



