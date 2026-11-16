// FUN_1804b81b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b81b0 */

longlong FUN_1804b81b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = DAT_180bb8ae8;
  lVar7 = *(longlong *)(param_1 + 0x40 + param_2 * 8);
  if (lVar7 == 0) {
    lVar7 = FUN_1804b8110(0xf8);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1804d8bc0(lVar7,lVar5 + 0x11f8);
    }
    *(undefined8 *)(lVar7 + 0xf0) = param_3;
    *(longlong *)(param_1 + 0x40 + param_2 * 8) = lVar7;
  }
  if (*(int *)(param_1 + 0x50 + param_2 * 4) != *(int *)(lVar5 + 4)) {
    FUN_1804d8e10(lVar7);
    fVar3 = *(float *)(param_1 + 0x18);
    *(float *)(lVar7 + 0xe0) = 1.0 / fVar3;
    *(float *)(lVar7 + 0xe4) = fVar3;
    *(bool *)(lVar7 + 0xe8) = (float)(int)fVar3 == fVar3;
    uVar11 = *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 0x28);
    uVar12 = *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 0x30);
    piVar1 = (int *)(lVar7 + 0xb0);
    iVar6 = *(int *)(lVar7 + 0xb4);
    iVar9 = 8;
    if (*piVar1 == iVar6) {
      iVar8 = *piVar1 + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar8 < iVar6) {
        iVar8 = iVar6;
      }
      FUN_1804aec70(piVar1,iVar8);
    }
    puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0xb8) + (longlong)*piVar1 * 0x10);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar7 + 0x70) = uVar11;
    *(undefined8 *)(lVar7 + 0x78) = uVar12;
    FUN_1804d92c0(lVar7);
    fVar3 = *(float *)(param_1 + 8);
    uVar11 = *(undefined8 *)(param_1 + 8);
    auVar10 = vmaxss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)(fVar3 + *(float *)(param_1 + 0x10))));
    auVar4 = vmaxss_avx(ZEXT416((uint)*(float *)(param_1 + 0xc)),
                        ZEXT416((uint)(*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14))));
    piVar1 = (int *)(lVar7 + 0xa0);
    iVar6 = *(int *)(lVar7 + 0xa4);
    if (*piVar1 == iVar6) {
      iVar8 = *piVar1 + 1;
      if (iVar6 != 0) {
        iVar9 = iVar6 + iVar6 / 2;
      }
      if (iVar8 < iVar9) {
        iVar8 = iVar9;
      }
      FUN_1804aec70(piVar1,iVar8);
    }
    uVar12 = CONCAT44(auVar4._0_4_,auVar10._0_4_);
    puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0xa8) + (longlong)*piVar1 * 0x10);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar7 + 0x60) = uVar11;
    *(undefined8 *)(lVar7 + 0x68) = uVar12;
    FUN_1804d9200(lVar7);
    *(undefined4 *)(param_1 + 0x50 + param_2 * 4) = *(undefined4 *)(lVar5 + 4);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(lVar5 + 0x10);
    auVar10 = vcvtpd2ps_avx(auVar10);
    *(int *)(param_1 + 0x58 + param_2 * 4) = auVar10._0_4_;
  }
  return lVar7;
}



