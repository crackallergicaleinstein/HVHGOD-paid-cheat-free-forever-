// FUN_1804a3b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a3b90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a3b90(undefined8 param_1,int param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_88 [32];
  float *local_68;
  float *local_60;
  float local_58;
  float local_54;
  float local_50 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  pcVar11 = &DAT_180cd6fb0;
  if (param_2 == 0) {
    for (; (cVar6 = *pcVar11, cVar6 == '#' || (cVar6 == ' ')); pcVar11 = pcVar11 + 1) {
    }
    uVar7 = 0;
    uVar8 = uVar7;
    if (cVar6 != '\0') {
      do {
        if (7 < (int)uVar8) break;
        if ((byte)(cVar6 - 0x30U) < 10) {
          uVar4 = (int)cVar6 - 0x30;
        }
        else if ((byte)(cVar6 + 0x9fU) < 6) {
          uVar4 = (int)cVar6 - 0x57;
        }
        else {
          if (5 < (byte)(cVar6 + 0xbfU)) break;
          uVar4 = (int)cVar6 - 0x37;
        }
        if ((int)uVar4 < 0) break;
        cVar6 = pcVar11[1];
        pcVar11 = pcVar11 + 1;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 << 4 | uVar4;
      } while (cVar6 != '\0');
      if (uVar8 == 6) {
        uVar7 = uVar7 << 8 | 0xff;
      }
      else if (uVar8 != 8) {
      }
      *param_3 = (float)(uVar7 >> 0x18) / 255.0;
      param_3[1] = (float)(uVar7 >> 0x10 & 0xff) / 255.0;
      param_3[2] = (float)(uVar7 >> 8 & 0xff) / 255.0;
      param_3[3] = (float)(uVar7 & 0xff) / 255.0;
    }
  }
  else {
    auVar16 = ZEXT864(0);
    local_50[0] = 0.0;
    local_54 = 0.0;
    local_58 = 0.0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    lVar9 = -1;
    do {
      pcVar11 = &DAT_180cd6fb1 + lVar9;
      lVar9 = lVar9 + 1;
    } while (*pcVar11 != '\0');
    FUN_18015ba30(local_48,&DAT_180cd6fb0);
    pcVar11 = local_48;
    if (0xf < (ulonglong)local_38._8_8_) {
      pcVar11 = (char *)local_48._0_8_;
    }
    pcVar10 = pcVar11 + local_38._0_8_;
    if (pcVar11 != pcVar10) {
      do {
        cVar6 = *pcVar11;
        if (((cVar6 != '.') && (cVar6 != '-')) && (9 < (byte)(cVar6 - 0x30U))) {
          *pcVar11 = ' ';
        }
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 != pcVar10);
    }
    local_68 = &local_58;
    pcVar11 = local_48;
    if (0xf < (ulonglong)local_38._8_8_) {
      pcVar11 = (char *)local_48._0_8_;
    }
    iVar5 = FUN_1804396b0(pcVar11,"%f %f %f",local_50,&local_54);
    uVar15 = auVar16._0_8_;
    if (iVar5 == 3) {
      fVar14 = auVar16._0_4_;
      if (param_2 == 1) {
        auVar13 = SUB6416(ZEXT464(0x3f800000),0);
        fVar12 = fVar14;
        if (fVar14 <= local_50[0] / 255.0) {
          auVar1 = vminss_avx(auVar13,ZEXT416((uint)(local_50[0] / 255.0)));
          fVar12 = auVar1._0_4_;
        }
        *param_3 = fVar12;
        fVar12 = fVar14;
        if (fVar14 <= local_54 / 255.0) {
          auVar1 = vminss_avx(auVar13,ZEXT416((uint)(local_54 / 255.0)));
          fVar12 = auVar1._0_4_;
        }
        param_3[1] = fVar12;
        if (fVar14 <= local_58 / 255.0) {
          auVar13 = vminss_avx(auVar13,ZEXT416((uint)(local_58 / 255.0)));
          auVar16 = ZEXT1664(auVar13);
        }
        param_3[2] = auVar16._0_4_;
      }
      else {
        uVar2 = uVar15;
        if (fVar14 <= local_58 / 100.0) {
          auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)(local_58 / 100.0)));
          uVar2 = auVar13._0_8_;
        }
        uVar3 = uVar15;
        if (fVar14 <= local_54 / 100.0) {
          auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)(local_54 / 100.0)));
          uVar3 = auVar13._0_8_;
        }
        if (fVar14 <= local_50[0] / 360.0) {
          auVar13 = vminss_avx(SUB6416(ZEXT464(0x3f7ff972),0),ZEXT416((uint)(local_50[0] / 360.0)));
          uVar15 = auVar13._0_8_;
        }
        local_60 = param_3 + 2;
        local_68 = param_3 + 1;
        FUN_1804b11e0(uVar15,uVar3,uVar2,param_3);
      }
    }
    FUN_18015c010(local_48);
  }
}



