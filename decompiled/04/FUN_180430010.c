// FUN_180430010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430010 */

undefined4 * FUN_180430010(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 local_68 [8];
  float *local_60;
  
  pbVar3 = (byte *)*param_3;
  pbVar4 = pbVar3 + param_3[1];
  auVar12 = ZEXT864(0);
  auVar10._12_4_ = 0;
  auVar10._0_12_ = ZEXT812(0);
  auVar10 = auVar10 << 0x20;
  auVar11 = ZEXT1264(ZEXT812(0)) << 0x20;
  fVar9 = 0.0;
  auVar7._12_4_ = 0;
  auVar7._0_12_ = ZEXT812(0);
  auVar7 = auVar7 << 0x20;
  auVar8 = ZEXT1264(ZEXT812(0)) << 0x20;
  do {
    if (pbVar4 <= pbVar3) {
      auVar10 = vmaxss_avx(auVar7,auVar10);
      if ((auVar12._0_4_ < auVar7._0_4_) || (fVar9 == auVar12._0_4_)) {
        fVar9 = fVar9 + *(float *)(param_1 + 0x24);
      }
      auVar10 = vroundss_avx(ZEXT816(0),auVar10,2);
      param_2[1] = fVar9;
      *param_2 = auVar10._0_4_;
      return param_2;
    }
    bVar1 = *pbVar3;
    if (bVar1 < 0x80) {
      uVar5 = (uint)bVar1;
      pbVar3 = pbVar3 + 1;
LAB_1804300e0:
      if (uVar5 == 10) {
        fVar9 = fVar9 + *(float *)(param_1 + 0x24);
        auVar10 = vmaxss_avx(auVar8._0_16_,auVar11._0_16_);
        auVar11 = ZEXT1664(auVar10);
        auVar8 = ZEXT1664(auVar12._0_16_);
      }
      else if (0x1f < uVar5) goto LAB_180430108;
    }
    else {
      if (0xbf < bVar1) {
        uVar5 = (uint)bVar1;
        if (bVar1 < 0xe0) {
          uVar5 = uVar5 & 0x1f;
          iVar6 = 1;
        }
        else if (bVar1 < 0xf0) {
          uVar5 = uVar5 & 0xf;
          iVar6 = 2;
        }
        else {
          if (0xf7 < bVar1) goto LAB_1804300ff;
          uVar5 = uVar5 & 7;
          iVar6 = 3;
        }
        pbVar3 = pbVar3 + 1;
        iVar2 = 0;
        do {
          if ((pbVar4 <= pbVar3) || ((*pbVar3 & 0xc0) != 0x80)) goto LAB_180430102;
          uVar5 = *pbVar3 & 0x3f | uVar5 << 6;
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar6);
        goto LAB_1804300e0;
      }
LAB_1804300ff:
      pbVar3 = pbVar3 + 1;
LAB_180430102:
      uVar5 = 0xfffd;
LAB_180430108:
      FUN_18042fec0(param_1,local_68,uVar5);
      auVar8 = ZEXT464((uint)(auVar8._0_4_ + *local_60));
    }
    auVar10 = auVar11._0_16_;
    auVar7 = auVar8._0_16_;
  } while( true );
}



