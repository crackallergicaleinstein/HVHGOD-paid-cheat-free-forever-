// FUN_1804c3700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3700 */

void FUN_1804c3700(void)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  float *pfVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  uint uVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  
  lVar4 = DAT_180bb8ae8;
  if ((*(byte *)(DAT_180bb8ae8 + 0x28) & 0x40) != 0) {
    FUN_1804aff50(DAT_180bb8ae8 + 0x28);
  }
  uVar14 = (uint)*(byte *)(lVar4 + 0x118);
  lVar12 = DAT_180bb8ae8;
  puVar7 = (undefined1 *)FUN_1804af1b0(0x290);
  auVar18 = ZEXT464(0x3f800000);
  auVar3._12_4_ = 0;
  auVar3._0_12_ = ZEXT812(0);
  auVar20 = ZEXT1264(ZEXT812(0)) << 0x20;
  *puVar7 = (char)uVar14;
  fVar16 = 0.0;
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar14),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(auVar18._0_16_,auVar3 << 0x20,auVar2);
  *(int *)(puVar7 + 0xc) = auVar2._0_4_;
  uVar14 = (uint)*(byte *)(lVar4 + 0x119);
  puVar7 = (undefined1 *)FUN_1804af1b0(0x291);
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar14),ZEXT416((uint)fVar16));
  *puVar7 = (char)uVar14;
  auVar2 = vblendvps_avx(auVar18._0_16_,auVar20._0_16_,auVar2);
  *(int *)(puVar7 + 0xc) = auVar2._0_4_;
  uVar14 = (uint)*(byte *)(lVar4 + 0x11a);
  puVar7 = (undefined1 *)FUN_1804af1b0(0x292);
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar14),ZEXT416((uint)fVar16));
  *puVar7 = (char)uVar14;
  auVar2 = vblendvps_avx(auVar18._0_16_,auVar20._0_16_,auVar2);
  *(int *)(puVar7 + 0xc) = auVar2._0_4_;
  uVar14 = (uint)*(byte *)(lVar4 + 0x11b);
  puVar7 = (undefined1 *)FUN_1804af1b0(0x293);
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar14),ZEXT416((uint)fVar16));
  *puVar7 = (char)uVar14;
  auVar2 = vblendvps_avx(auVar18._0_16_,auVar20._0_16_,auVar2);
  *(int *)(puVar7 + 0xc) = auVar2._0_4_;
  uVar14 = (uint)*(byte *)(lVar4 + 0x11c);
  puVar7 = (undefined1 *)FUN_1804af1b0();
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar14),ZEXT416((uint)fVar16));
  *puVar7 = (char)uVar14;
  auVar2 = vblendvps_avx(auVar18._0_16_,auVar20._0_16_,auVar2);
  *(int *)(puVar7 + 0xc) = auVar2._0_4_;
  fVar1 = *(float *)(lVar4 + 0x124);
  fVar19 = auVar20._0_4_;
  *(float *)(lVar12 + 0xa90) = fVar1;
  *(bool *)(lVar12 + 0xa84) = fVar1 != fVar19;
  fVar1 = *(float *)(lVar4 + 0x120);
  *(bool *)(lVar12 + 0xa94) = fVar1 != fVar19;
  *(float *)(lVar12 + 0xaa0) = fVar1;
  uVar14 = *(uint *)(lVar4 + 0x130);
  uVar8 = -(uint)(*(char *)(lVar12 + 0xaa4) != '\0') & 0x1000;
  cVar15 = SUB41(fVar16,0);
  uVar6 = uVar8 | 0x2000;
  if (*(char *)(lVar12 + 0xab4) == cVar15) {
    uVar6 = uVar8;
  }
  uVar8 = uVar6 | 0x4000;
  if (*(char *)(lVar12 + 0xac4) == cVar15) {
    uVar8 = uVar6;
  }
  uVar6 = uVar8 | 0x8000;
  if (*(char *)(lVar12 + 0xad4) == cVar15) {
    uVar6 = uVar8;
  }
  *(uint *)(lVar4 + 0x130) = uVar6;
  *(byte *)(lVar4 + 300) = (byte)(uVar6 >> 0xc) & 1;
  *(byte *)(lVar4 + 0x12d) = (byte)(uVar6 >> 0xd) & 1;
  *(byte *)(lVar4 + 0x12e) = (byte)(uVar6 >> 0xe) & 1;
  *(char *)(lVar4 + 0x12f) = (char)(uVar6 >> 0xf);
  if (uVar14 != uVar6) {
    *(undefined8 *)(lVar4 + 0x15a8) = *(undefined8 *)(lVar4 + 0x10);
  }
  if ((uVar14 != *(uint *)(lVar4 + 0x130)) && (uVar14 == 0)) {
    *(undefined8 *)(lVar4 + 0x15b0) = *(undefined8 *)(lVar4 + 0x10);
  }
  if ((*(byte *)(lVar4 + 0x2c) & 1) == 0) {
    *(char *)(lVar4 + 0x8b4) = cVar15;
    *(float *)(lVar4 + 0x8c0) = fVar16;
    *(char *)(lVar4 + 0x8c4) = cVar15;
    *(float *)(lVar4 + 0x8d0) = fVar16;
    *(char *)(lVar4 + 0x8d4) = cVar15;
    *(float *)(lVar4 + 0x8e0) = fVar16;
    *(char *)(lVar4 + 0x8e4) = cVar15;
    *(float *)(lVar4 + 0x8f0) = fVar16;
    *(char *)(lVar4 + 0x8f4) = cVar15;
    *(float *)(lVar4 + 0x900) = fVar16;
    *(char *)(lVar4 + 0x904) = cVar15;
    *(float *)(lVar4 + 0x910) = fVar16;
    *(char *)(lVar4 + 0x914) = cVar15;
    *(float *)(lVar4 + 0x920) = fVar16;
    *(char *)(lVar4 + 0x924) = cVar15;
    *(float *)(lVar4 + 0x930) = fVar16;
    *(char *)(lVar4 + 0x934) = cVar15;
    *(float *)(lVar4 + 0x940) = fVar16;
    *(char *)(lVar4 + 0x944) = cVar15;
    *(float *)(lVar4 + 0x950) = fVar16;
    *(char *)(lVar4 + 0x954) = cVar15;
    *(float *)(lVar4 + 0x960) = fVar16;
    *(char *)(lVar4 + 0x964) = cVar15;
    *(float *)(lVar4 + 0x970) = fVar16;
    *(char *)(lVar4 + 0x974) = cVar15;
    *(float *)(lVar4 + 0x980) = fVar16;
    *(char *)(lVar4 + 0x984) = cVar15;
    *(float *)(lVar4 + 0x990) = fVar16;
    *(char *)(lVar4 + 0x994) = cVar15;
    *(float *)(lVar4 + 0x9a0) = fVar16;
    *(char *)(lVar4 + 0x9a4) = cVar15;
    *(float *)(lVar4 + 0x9b0) = fVar16;
    *(char *)(lVar4 + 0x9b4) = cVar15;
    *(float *)(lVar4 + 0x9c0) = fVar16;
    *(char *)(lVar4 + 0x9c4) = cVar15;
    *(float *)(lVar4 + 0x9d0) = fVar16;
    *(char *)(lVar4 + 0x9d4) = cVar15;
    *(float *)(lVar4 + 0x9e0) = fVar16;
    *(char *)(lVar4 + 0x9e4) = cVar15;
    *(float *)(lVar4 + 0x9f0) = fVar16;
    *(char *)(lVar4 + 0x9f4) = cVar15;
    *(float *)(lVar4 + 0xa00) = fVar16;
    *(char *)(lVar4 + 0xa04) = cVar15;
    *(float *)(lVar4 + 0xa10) = fVar16;
    *(char *)(lVar4 + 0xa14) = cVar15;
    *(float *)(lVar4 + 0xa20) = fVar16;
    *(char *)(lVar4 + 0xa24) = cVar15;
    *(float *)(lVar4 + 0xa30) = fVar16;
  }
  uVar11 = 0x200;
  pfVar9 = (float *)(lVar4 + 0x138);
  do {
    fVar1 = *pfVar9;
    pfVar9[1] = fVar1;
    fVar17 = -1.0;
    if (*(char *)(pfVar9 + -1) == cVar15) {
LAB_1804c3ac5:
      *pfVar9 = fVar17;
      if (fVar17 == fVar19) goto LAB_1804c3ad1;
    }
    else {
      if (fVar19 <= fVar1) {
        fVar17 = fVar1 + *(float *)(lVar4 + 0x40);
        goto LAB_1804c3ac5;
      }
      *pfVar9 = fVar16;
LAB_1804c3ad1:
      if ((uVar11 < 0x278) || (uVar11 - 0x297 < 4)) {
        *(undefined8 *)(lVar4 + 0x15b8) = *(undefined8 *)(lVar4 + 0x10);
      }
    }
    uVar11 = uVar11 + 1;
    pfVar9 = pfVar9 + 4;
    if (0x29a < (longlong)uVar11) {
      pcVar13 = (char *)(lVar4 + 0x134);
      pcVar10 = (char *)(lVar4 + 0x15dd);
      lVar12 = 0x9b;
      do {
        *(undefined4 *)(pcVar10 + -9) = *(undefined4 *)(pcVar10 + -5);
        cVar5 = *pcVar13;
        if (cVar5 == '\0') {
          pcVar10[-5] = -1;
          pcVar10[-4] = -1;
          pcVar10[-3] = -1;
          pcVar10[-2] = -1;
          cVar5 = *pcVar13;
        }
        if ((*pcVar10 == cVar15) || (cVar5 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        *pcVar10 = cVar5;
        pcVar13 = pcVar13 + 0x10;
        pcVar10[-1] = cVar5;
        pcVar10 = pcVar10 + 0xc;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      FUN_1804c2d10(lVar4 + 0x1d18);
      return;
    }
  } while( true );
}



