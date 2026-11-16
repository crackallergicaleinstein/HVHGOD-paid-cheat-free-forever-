// FUN_1802e9bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e9bf0 */

ulonglong FUN_1802e9bf0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ULONGLONG UVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  float local_18;
  float local_14 [3];
  
  plVar2 = (longlong *)*param_1;
  pfVar6 = (float *)*plVar2;
  if (*(char *)(pfVar6 + 0x1d2) != '\0') {
    UVar5 = GetTickCount64();
    uVar3 = *(ulonglong *)(param_2 + 0x10);
    local_14[0] = 5.0;
    local_18 = 0.1;
    if (uVar3 == 0) {
      auVar4 = vmaxss_avx(ZEXT416((uint)(*(float *)plVar2[1] - *(float *)(param_2 + 0xc))),
                          ZEXT816(0));
      fVar9 = auVar4._0_4_;
    }
    else {
      uVar7 = UVar5 - uVar3;
      if (UVar5 < uVar3) {
        uVar7 = 0;
      }
      if ((longlong)uVar7 < 0) {
        fVar9 = (float)uVar7 * 0.001;
      }
      else {
        fVar9 = (float)(longlong)uVar7 * 0.001;
      }
    }
    fVar1 = *(float *)(*plVar2 + 0x7d4);
    pfVar8 = &local_18;
    if (0.1 <= fVar1) {
      pfVar8 = (float *)(*plVar2 + 0x7d4);
    }
    pfVar6 = local_14;
    if (fVar1 <= 5.0) {
      pfVar6 = pfVar8;
    }
    if (fVar9 <= *pfVar6) {
      return (ulonglong)pfVar6 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)pfVar6 >> 8),1);
}



