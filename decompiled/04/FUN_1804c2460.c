// FUN_1804c2460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2460 */

void FUN_1804c2460(void)

{
  float *pfVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined1 in_ZMM0 [64];
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auVar9 [64];
  
  lVar4 = DAT_180bb8ae8;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = ZEXT812(0);
  auVar9 = ZEXT1264(ZEXT812(0)) << 0x20;
  fVar8 = 0.0;
  auVar3 = vmaxss_avx(in_ZMM0._0_16_,auVar3 << 0x20);
  fVar6 = auVar3._0_4_;
  pfVar1 = (float *)(DAT_180bb8ae8 + 0x11e4);
  lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  *(float *)(DAT_180bb8ae8 + 0xc78) = *pfVar1;
  if (fVar6 == 0.0) {
    fVar6 = *pfVar1 * *(float *)(lVar4 + 0xc7c) * *(float *)(lVar4 + 0xc80);
    if (lVar5 != 0) {
      fVar6 = fVar6 * *(float *)(lVar5 + 0x2b8);
    }
    fVar6 = fVar6 * *(float *)(lVar4 + 0xbf0);
    if (*(longlong *)(lVar4 + 0x11d0) != 0) {
      fVar6 = fVar6 * *(float *)(*(longlong *)(lVar4 + 0x11d0) + 0x48);
    }
  }
  uVar7 = 0x3f800000;
  if (1.0 <= (float)(int)(fVar6 + 0.5)) {
    auVar3 = vminss_avx(SUB6416(ZEXT464(0x44000000),0),ZEXT416((uint)(float)(int)(fVar6 + 0.5)));
    uVar7 = auVar3._0_4_;
  }
  if ((*(longlong *)(lVar4 + 0x11d0) != 0) && ((*(byte *)(lVar4 + 0x2c) & 0x10) != 0)) {
    *(undefined4 *)(*(longlong *)(lVar4 + 0x11d0) + 0x14) = *(undefined4 *)(lVar4 + 0x11ec);
  }
  *(undefined4 *)(lVar4 + 0x11e0) = uVar7;
  *(undefined4 *)(lVar4 + 0x1220) = uVar7;
  if (((lVar5 == 0) || (*(char *)(lVar5 + 0xd1) == '\0')) ||
     ((lVar2 = *(longlong *)(lVar4 + 0x2338), lVar2 != 0 &&
      ((*(int *)(lVar2 + 0x74) == -1 ||
       (*(char *)((longlong)*(int *)(lVar2 + 0x74) * 0x78 + 0x70 + *(longlong *)(lVar2 + 0x18)) !=
        '\0')))))) {
    if ((*(longlong *)(lVar4 + 0x11d0) == 0) || (lVar5 == 0)) {
      *(undefined8 *)(lVar4 + 0x11d8) = 0;
    }
    else {
      lVar5 = FUN_1804e97d0(*(longlong *)(lVar4 + 0x11d0),lVar5,0xbf800000);
      fVar8 = auVar9._0_4_;
      *(longlong *)(lVar4 + 0x11d8) = lVar5;
      if (lVar5 != 0) {
        fVar8 = *(float *)(lVar4 + 0x11e0) / *(float *)(lVar5 + 0x14);
      }
    }
    *(float *)(lVar4 + 0x11e8) = fVar8;
    *(float *)(lVar4 + 0x1224) = fVar8;
  }
  return;
}



