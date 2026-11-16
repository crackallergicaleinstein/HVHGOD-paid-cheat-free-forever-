// FUN_1804c3b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3b80 */

void FUN_1804c3b80(void)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  char *pcVar9;
  longlong lVar10;
  short *psVar11;
  float *pfVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float local_res8;
  
  lVar3 = DAT_180bb8ae8;
  if ((*(char *)(DAT_180bb8ae8 + 0x12d) == '\0') || (*(char *)(DAT_180bb8ae8 + 0x78) != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  pfVar1 = (float *)(DAT_180bb8ae8 + 0x110);
  *(undefined1 *)(DAT_180bb8ae8 + 0xb9a) = uVar4;
  auVar2 = ZEXT816(0);
  if ((-256000.0 <= *(float *)(lVar3 + 0x110)) && (-256000.0 <= *(float *)(lVar3 + 0x114))) {
    fVar15 = *(float *)(lVar3 + 0x114);
    iVar7 = (int)fVar15;
    if ((fVar15 < 0.0) && ((float)iVar7 != fVar15)) {
      iVar7 = iVar7 + -1;
    }
    fVar15 = *pfVar1;
    iVar6 = (int)fVar15;
    if ((fVar15 < 0.0) && ((float)iVar6 != fVar15)) {
      iVar6 = iVar6 + -1;
    }
    *(float *)(lVar3 + 0x24e0) = (float)iVar6;
    *(float *)(lVar3 + 0x24e4) = (float)iVar7;
    *pfVar1 = (float)iVar6;
    *(float *)(lVar3 + 0x114) = (float)iVar7;
  }
  if ((-256000.0 <= *(float *)(lVar3 + 0x110)) && (-256000.0 <= *(float *)(lVar3 + 0x114))) {
    pfVar12 = (float *)(lVar3 + 0xae8);
    pfVar8 = pfVar12;
    if (pfVar12 == (float *)0x0) {
      pfVar8 = (float *)(lVar3 + 0x110);
    }
    if ((-256000.0 <= *pfVar8) && (-256000.0 <= pfVar8[1])) {
      local_res8 = *pfVar1 - *pfVar12;
      fVar15 = *(float *)(lVar3 + 0x114) - *(float *)(lVar3 + 0xaec);
      goto LAB_1804c3cdb;
    }
  }
  auVar14 = vunpcklps_avx(auVar2,auVar2);
  local_res8 = auVar14._0_4_;
  auVar14 = vshufps_avx(auVar14,auVar14,0x55);
  fVar15 = auVar14._0_4_;
LAB_1804c3cdb:
  *(float *)(lVar3 + 0xfc) = local_res8;
  *(float *)(lVar3 + 0x100) = fVar15;
  auVar14 = vpcmpeqd_avx(ZEXT416(*(uint *)(lVar3 + 0x128)),SUB6416(ZEXT464(0),0));
  auVar14 = vblendvps_avx(SUB6416(ZEXT464(0x40400000),0),SUB6416(ZEXT464(0x40000000),0),auVar14);
  if (auVar14._0_4_ * auVar14._0_4_ <
      *(float *)(lVar3 + 0xfc) * *(float *)(lVar3 + 0xfc) + fVar15 * fVar15) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x24dc);
  }
  *(float *)(lVar3 + 0x24dc) = fVar13;
  if ((*(float *)(lVar3 + 0xfc) != 0.0) || (fVar15 != 0.0)) {
    *(undefined1 *)(lVar3 + 0x2039) = 0;
  }
  lVar10 = 5;
  pcVar9 = (char *)(lVar3 + 0x118);
  pfVar12 = (float *)(lVar3 + 0xaf0);
  psVar11 = (short *)(lVar3 + 0xb54);
  pfVar8 = (float *)(lVar3 + 0xb9c);
  do {
    if ((*pcVar9 == '\0') || (0.0 <= *pfVar8)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pcVar9[0xa28] = cVar5;
    psVar11[-5] = 0;
    if ((*pcVar9 != '\0') || (*pfVar8 < 0.0)) {
      pcVar9[0xa46] = '\0';
    }
    else {
      pcVar9[0xa46] = '\x01';
      *(undefined8 *)(pfVar12 + 0x1e) = *(undefined8 *)(lVar3 + 0x10);
    }
    fVar15 = *pfVar8;
    pfVar8[5] = fVar15;
    if (*pcVar9 == '\0') {
      fVar15 = -1.0;
    }
    else if (0.0 <= fVar15) {
      fVar15 = fVar15 + *(float *)(lVar3 + 0x40);
    }
    else {
      fVar15 = 0.0;
    }
    *pfVar8 = fVar15;
    if (pcVar9[0xa28] == '\0') {
      if (*pcVar9 != '\0') {
        if ((*(float *)(lVar3 + 0x110) < -256000.0) || (*(float *)(lVar3 + 0x114) < -256000.0)) {
          auVar14 = auVar2;
        }
        else {
          fVar15 = *(float *)(lVar3 + 0x114) - pfVar12[1];
          auVar14 = ZEXT416((uint)(fVar15 * fVar15 + (*pfVar1 - *pfVar12) * (*pfVar1 - *pfVar12)));
        }
        auVar14 = vmaxss_avx(ZEXT416((uint)pfVar8[10]),auVar14);
        pfVar8[10] = auVar14._0_4_;
      }
    }
    else {
      if (*(float *)(lVar3 + 0x94) <= (float)(*(double *)(lVar3 + 0x10) - *(double *)(pfVar12 + 10))
         ) {
LAB_1804c3e99:
        *psVar11 = 1;
      }
      else {
        if ((*(float *)(lVar3 + 0x110) < -256000.0) || (*(float *)(lVar3 + 0x114) < -256000.0)) {
          fVar15 = 0.0;
          fVar13 = 0.0;
        }
        else {
          fVar15 = *(float *)(lVar3 + 0x114) - pfVar12[1];
          fVar13 = *pfVar1 - *pfVar12;
        }
        if (*(float *)(lVar3 + 0x98) * *(float *)(lVar3 + 0x98) <= fVar15 * fVar15 + fVar13 * fVar13
           ) goto LAB_1804c3e99;
        *psVar11 = *psVar11 + 1;
      }
      *(undefined8 *)(pfVar12 + 10) = *(undefined8 *)(lVar3 + 0x10);
      *(undefined8 *)pfVar12 = *(undefined8 *)pfVar1;
      psVar11[-5] = *psVar11;
      pfVar8[10] = 0.0;
    }
    pcVar9[0xa2d] = psVar11[-5] == 2;
    if (pcVar9[0xa28] != '\0') {
      *(undefined1 *)(lVar3 + 0x2039) = 0;
    }
    pfVar8 = pfVar8 + 1;
    psVar11 = psVar11 + 1;
    pfVar12 = pfVar12 + 2;
    pcVar9 = pcVar9 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}



