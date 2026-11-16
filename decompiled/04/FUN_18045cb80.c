// FUN_18045cb80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045cb80 */

void FUN_18045cb80(void)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [64];
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  undefined4 local_resc;
  
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  fVar7 = *(float *)(lVar1 + 0x118);
  fVar8 = *(float *)(lVar1 + 0x11c);
  if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
     (lVar4 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
    lVar4 = 0x250;
  }
  fVar6 = *(float *)(lVar4 + lVar1) - *(float *)(lVar1 + 0x118);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 5.0 + 0.5)),1);
  auVar5 = ZEXT1664(auVar3);
  local_resc = auVar3._0_4_;
  local_res8 = fVar6;
  FUN_1804c6420(&local_res8,0xbf800000);
  lVar1 = DAT_180bb8ae8;
  fVar2 = DAT_180b0a41c * 4.0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar5._0_4_ * 0.5 + fVar8 + 0.5)),1);
  FUN_180463160(*(undefined8 *)(*(longlong *)(lVar1 + 0x14d0) + 0x2c8),fVar2 + fVar7,
                (fVar6 + fVar7) - fVar2,auVar3._0_8_,DAT_180b0a420);
  return;
}



