// FUN_1804c21e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c21e0 */

void FUN_1804c21e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  longlong local_28;
  float local_20;
  float local_1c;
  
  lVar3 = DAT_180bb8ae8;
  if ((*(byte *)(DAT_180bb8ae8 + 0x2c) & 0x10) == 0) {
    plVar4 = *(longlong **)(DAT_180bb8ae8 + 0x11c8);
    plVar1 = plVar4 + *(int *)(DAT_180bb8ae8 + 0x11c0);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      *(undefined1 *)(*plVar4 + 0x50) = 1;
    }
  }
  auVar8._12_4_ = 0;
  auVar8._0_12_ = ZEXT812(0);
  auVar8 = auVar8 << 0x20;
  auVar9 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (*(float *)(lVar3 + 0x11b0) != 0.0) {
    *(float *)(lVar3 + 0xc78) = *(float *)(lVar3 + 0x11b0);
    *(undefined4 *)(lVar3 + 0x11b0) = 0;
  }
  lVar7 = *(longlong *)(lVar3 + 0x60);
  if ((*(longlong *)(lVar7 + 0xa0) == 0) || (lVar5 = lVar3, *(int *)(lVar7 + 0x68) == 0)) {
    FUN_1804e3f90(lVar7);
    auVar8 = auVar9._0_16_;
    lVar5 = DAT_180bb8ae8;
  }
  lVar6 = *(longlong *)(lVar3 + 0x68);
  if (lVar6 == 0) {
    lVar6 = **(longlong **)(lVar7 + 0x70);
  }
  local_20 = *(float *)(lVar3 + 0xc78);
  if (local_20 <= auVar8._0_4_) {
    auVar8 = vcmpss_avx(auVar8,ZEXT416(*(uint *)(lVar6 + 0x1c)),1);
    auVar8 = vblendvps_avx(SUB6416(ZEXT464(0x41a00000),0),ZEXT416(*(uint *)(lVar6 + 0x1c)),auVar8);
    local_20 = auVar8._0_4_;
    *(float *)(lVar3 + 0xc78) = local_20;
  }
  *(float *)(lVar3 + 0x11e4) = local_20;
  *(longlong *)(lVar3 + 0x11d0) = lVar6;
  *(undefined4 *)(lVar3 + 0x11e0) = 0;
  *(float *)(lVar5 + 0x11e4) = local_20;
  *(longlong *)(lVar5 + 0x11d0) = lVar6;
  local_28 = lVar6;
  local_1c = local_20;
  FUN_1804c2460(0);
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 8);
    *(longlong *)(lVar5 + 0x1210) = lVar7;
    *(longlong *)(lVar5 + 0x1218) = lVar6;
    FUN_1804e6b90(lVar7);
    if (*(longlong *)(lVar5 + 0x14d0) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x14d0) + 0x2c8);
      lVar6 = *(longlong *)(lVar7 + 0x28);
      lVar2 = *(longlong *)(lVar7 + 0x30);
      if ((*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar7 + 0x30)) ||
         (*(longlong *)(lVar5 + 0x70) != lVar6)) {
        *(longlong *)(lVar5 + 0x70) = lVar6;
        *(longlong *)(lVar5 + 0x78) = lVar2;
        plVar1 = (longlong *)
                 (*(longlong *)(lVar5 + 0xb8) + -0x10 + (longlong)*(int *)(lVar5 + 0xb0) * 0x10);
        *plVar1 = lVar6;
        plVar1[1] = lVar2;
        FUN_1804d92c0();
      }
    }
  }
  FUN_1804d05a0(lVar3 + 0x1fb8,&local_28);
  return;
}



