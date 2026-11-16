// FUN_1804f4d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f4d40 */

char FUN_1804f4d40(float *param_1,uint param_2,char *param_3,undefined1 *param_4,uint param_5)

{
  float fVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  char cVar22;
  undefined1 uVar23;
  bool bVar24;
  
  lVar5 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar2 = *(ulonglong *)(lVar5 + 0x14d0);
  lVar12 = 0x1ec4;
  if (*(uint *)(lVar5 + 0x1ec0) != param_2) {
    lVar12 = 0x1e80;
  }
  uVar4 = *(uint *)(lVar12 + lVar5) | 0x4000;
  if ((param_5 >> 0xc & 1) == 0) {
    uVar4 = *(uint *)(lVar12 + lVar5);
  }
  uVar14 = param_5 | 0x440000;
  if ((uVar4 >> 0x11 & 1) == 0) {
    uVar14 = param_5;
  }
  uVar19 = uVar14 | 1;
  if ((uVar14 & 7) != 0) {
    uVar19 = uVar14;
  }
  if ((uVar19 & 0x3f0) == 0) {
    uVar14 = 0x20;
    if ((uVar4 & 8) != 0) {
      uVar14 = 0x10;
    }
    uVar19 = uVar19 | uVar14;
  }
  lVar12 = *(longlong *)(lVar5 + 0x14d8);
  if ((((uVar19 >> 0xb & 1) == 0) || (lVar12 == 0)) ||
     (*(longlong *)(lVar12 + 0x3d8) != *(longlong *)(uVar2 + 0x3d8))) {
    bVar24 = false;
  }
  else {
    bVar24 = true;
    *(ulonglong *)(lVar5 + 0x14d8) = uVar2;
  }
  cVar22 = '\0';
  cVar7 = FUN_1804b7e00(param_1,param_2,uVar4);
  if (*(char *)(lVar5 + 0x2268) != '\0') {
    if (((uVar19 >> 9 & 1) != 0) && ((*(byte *)(lVar5 + 0x226c) & 4) == 0)) {
      cVar8 = FUN_1804b7b20(0x80);
      lVar6 = DAT_180bb8ae8;
      if (cVar8 != '\0') {
        cVar7 = '\x01';
        *(uint *)(DAT_180bb8ae8 + 0x1538) = param_2;
        *(undefined1 *)(lVar6 + 0x154c) = 0;
        if ((param_2 != 0) && (*(uint *)(lVar6 + 0x153c) != param_2)) {
          *(undefined8 *)(lVar6 + 0x1544) = 0;
        }
        if ((*(float *)(lVar5 + 0x1544) - *(float *)(lVar5 + 0x40) <= 0.7) &&
           (0.7 <= *(float *)(lVar5 + 0x1544))) {
          *(uint *)(lVar5 + 0x22f8) = param_2;
          cVar22 = '\x01';
          FUN_1804c8a10(uVar2,0);
        }
      }
    }
    if ((*(uint *)(lVar5 + 0x22f0) == param_2) && ((*(uint *)(lVar5 + 0x22e4) & 0x2000) != 0)) {
      cVar7 = '\x01';
    }
  }
  uVar15 = 0;
  if (bVar24) {
    *(longlong *)(lVar5 + 0x14d8) = lVar12;
  }
  uVar14 = param_2;
  if ((uVar19 >> 0x15 & 1) != 0) {
    uVar14 = 0;
  }
  if (cVar7 != '\0') {
    iVar18 = -1;
    iVar11 = -1;
    if ((uVar19 & 1) != 0) {
      bVar9 = FUN_1804c3510(0,0,uVar14);
      iVar18 = bVar9 - 1;
      iVar11 = -1;
      if ((*(char *)(DAT_180bb8ae8 + 0xb5e) != '\0') &&
         (cVar8 = FUN_1804c5140(0x290,uVar14), cVar8 != '\0')) {
        iVar11 = (int)uVar15;
      }
    }
    if ((uVar19 & 2) == 0) {
      uVar21 = (ulonglong)uVar14;
    }
    else {
      cVar8 = FUN_1804c3510(1,0,uVar14);
      if ((cVar8 != '\0') && (iVar18 == -1)) {
        iVar18 = 1;
      }
      uVar21 = (ulonglong)uVar14;
      if (((*(char *)(DAT_180bb8ae8 + 0xb5f) != '\0') &&
          (cVar8 = FUN_1804c5140(0x291,uVar21), cVar8 != '\0')) && (iVar11 == -1)) {
        iVar11 = 1;
      }
    }
    if ((uVar19 & 4) != 0) {
      cVar8 = FUN_1804c3510(2,0,uVar21 & 0xffffffff);
      iVar20 = 2;
      if ((cVar8 != '\0') && (iVar18 == -1)) {
        iVar18 = 2;
      }
      if (*(char *)(DAT_180bb8ae8 + 0xb60) != '\0') {
        cVar8 = FUN_1804c5140(0x292,uVar14);
        if ((cVar8 != '\0') && (iVar11 == -1)) {
          iVar11 = iVar20;
        }
      }
    }
    if (((uVar19 >> 0x10 & 1) == 0) ||
       (((*(char *)(lVar5 + 300) == '\0' && (*(char *)(lVar5 + 0x12d) == '\0')) &&
        (*(char *)(lVar5 + 0x12e) == '\0')))) {
      if ((iVar18 == -1) || (*(uint *)(lVar5 + 0x1550) == param_2)) {
        if ((char)uVar19 < '\0') goto LAB_1804f513f;
      }
      else {
        if ((uVar19 >> 0x14 & 1) == 0) {
          puVar13 = (uint *)FUN_1804af210(DAT_180bb8ae8,iVar18 + 0x290);
          puVar13[1] = param_2;
          *puVar13 = param_2;
          *(undefined2 *)(puVar13 + 2) = 0;
        }
        uVar17 = (undefined1)iVar18;
        if ((uVar19 & 0x60) != 0) {
          FUN_1804b7870(param_2,uVar2);
          *(undefined1 *)(lVar5 + 0x1565) = uVar17;
          if ((uVar19 >> 0x12 & 1) == 0) {
            FUN_1804c8fd0(param_2,uVar2);
            uVar16 = 0;
LAB_1804f50af:
            FUN_1804c8a10(uVar2,uVar16);
          }
          else if ((uVar19 >> 0x16 & 1) == 0) {
            uVar16 = 1;
            goto LAB_1804f50af;
          }
          uVar15 = 0;
        }
        if (((uVar19 & 0x10) != 0) ||
           (((uVar19 >> 8 & 1) != 0 && (*(short *)(lVar5 + 0xb4a + (longlong)iVar18 * 2) == 2)))) {
          cVar22 = '\x01';
          uVar21 = uVar15 & 0xffffffff;
          if ((uVar19 >> 0x11 & 1) == 0) {
            uVar21 = (ulonglong)param_2;
            uVar15 = uVar2;
          }
          FUN_1804b7870(uVar21,uVar15);
          *(undefined1 *)(lVar5 + 0x1565) = uVar17;
          if ((uVar19 >> 0x12 & 1) == 0) {
            FUN_1804c8fd0(param_2,uVar2);
            uVar16 = 0;
          }
          else {
            if ((uVar19 >> 0x16 & 1) != 0) goto LAB_1804f511c;
            uVar16 = 1;
          }
          FUN_1804c8a10(uVar2,uVar16);
        }
LAB_1804f511c:
        if ((char)uVar19 < '\0') {
          if ((uVar19 >> 0x11 & 1) == 0) {
            FUN_1804b7870(param_2,uVar2);
          }
          *(undefined1 *)(lVar5 + 0x1565) = uVar17;
LAB_1804f513f:
          if (iVar11 != -1) {
            if (((uVar4 & 8) == 0) ||
               (*(float *)(lVar5 + 0xbb0 + (longlong)iVar11 * 4) < *(float *)(lVar5 + 0xa4))) {
              cVar22 = '\x01';
            }
            if ((uVar19 >> 0x12 & 1) == 0) {
              FUN_1804c8fd0(param_2,uVar2);
            }
            FUN_1804b7870(0,0);
          }
        }
      }
      if ((((*(uint *)(lVar5 + 0x1550) != param_2) || ((uVar4 & 8) == 0)) ||
          (*(float *)(lVar5 + 0xb9c + (longlong)*(char *)(lVar5 + 0x1565) * 4) <= 0.0)) ||
         (cVar8 = FUN_1804c3510((longlong)*(char *)(lVar5 + 0x1565),1,uVar14), cVar8 == '\0'))
      goto LAB_1804f51d1;
      cVar22 = '\x01';
    }
    else {
LAB_1804f51d1:
      if (cVar22 == '\0') goto LAB_1804f51e3;
    }
    if (*(char *)(lVar5 + 0x76) != '\0') {
      *(undefined1 *)(lVar5 + 0x2038) = 0;
    }
  }
LAB_1804f51e3:
  if ((uVar4 & 0x40) == 0) {
    if (((*(uint *)(lVar5 + 0x203c) == param_2) && (*(char *)(lVar5 + 0x2038) != '\0')) &&
       ((*(char *)(lVar5 + 0x2039) != '\0' && ((uVar19 >> 0x13 & 1) == 0)))) {
      cVar7 = '\x01';
    }
    if (*(uint *)(lVar5 + 0x2058) == param_2) {
      bVar24 = *(uint *)(lVar5 + 0x205c) == param_2;
      if ((!bVar24) && ((uVar4 & 8) != 0)) {
        auVar3 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0x1f8)),
                            ZEXT416(*(uint *)(DAT_180bb8ae8 + 0x208)));
        lVar12 = 0x908;
        if (*(char *)(lVar5 + 0x71) != '\0') {
          lVar12 = 0x8e8;
        }
        auVar3 = vmaxss_avx(auVar3,ZEXT416(*(uint *)(lVar12 + DAT_180bb8ae8)));
        iVar11 = FUN_1804c2c30(auVar3._0_4_ - *(float *)(lVar5 + 0x40),0x8e8,
                               *(undefined4 *)(lVar5 + 0xa4),*(undefined4 *)(lVar5 + 0xa8));
        bVar24 = 0 < iVar11;
      }
      if ((*(uint *)(lVar5 + 0x2054) == param_2) || (bVar24)) {
        cVar22 = '\x01';
        FUN_1804b7870(param_2,uVar2);
        *(undefined4 *)(lVar5 + 0x1574) = *(undefined4 *)(lVar5 + 0x2090);
        if ((uVar19 >> 0x12 & 1) == 0) {
          if ((*(byte *)(lVar5 + 0x2060) & 0x10) == 0) {
            FUN_1804c8fd0(param_2,uVar2);
            goto LAB_1804f52ca;
          }
        }
        else {
LAB_1804f52ca:
          if ((*(byte *)(lVar5 + 0x2060) & 0x10) == 0) goto LAB_1804f52da;
        }
        *(undefined1 *)(lVar5 + 0x1564) = 1;
      }
    }
  }
LAB_1804f52da:
  uVar23 = 0;
  uVar17 = 0;
  if (*(uint *)(lVar5 + 0x1550) != param_2) goto LAB_1804f5450;
  if (*(int *)(lVar5 + 0x1574) == 1) {
    if (*(char *)(lVar5 + 0x155c) != '\0') {
      fVar1 = param_1[1];
      *(float *)(lVar5 + 0x156c) = *(float *)(lVar5 + 0x110) - *param_1;
      *(float *)(lVar5 + 0x1570) = *(float *)(lVar5 + 0x114) - fVar1;
    }
    cVar8 = *(char *)(lVar5 + 0x1565);
    lVar12 = (longlong)cVar8;
    if (cVar8 == -1) {
LAB_1804f5408:
      FUN_1804b7870(0,0);
    }
    else {
      if ((*(char *)(lVar12 + 0x118 + DAT_180bb8ae8) == '\0') ||
         (cVar8 = FUN_1804c5140(cVar8 + 0x290,uVar14), cVar8 == '\0')) {
        if ((((cVar7 != '\0') && ((uVar19 & 0x20) != 0)) || ((uVar19 & 0x40) != 0)) &&
           (*(char *)(lVar5 + 0x2268) == '\0')) {
          if ((((uVar19 >> 8 & 1) == 0) || (*(char *)(lVar12 + 0xb5e + lVar5) == '\0')) ||
             (*(short *)(lVar5 + 0xb54 + lVar12 * 2) != 2)) {
            bVar24 = false;
          }
          else {
            bVar24 = true;
          }
          if (((uVar4 & 8) == 0) ||
             (*(float *)(lVar5 + 0xbb0 + lVar12 * 4) < *(float *)(lVar5 + 0xa4))) {
            cVar8 = '\0';
          }
          else {
            cVar8 = '\x01';
          }
          cVar10 = FUN_1804c5140((int)lVar12 + 0x290,uVar14);
          if ((!bVar24) && (cVar8 == '\0')) {
            if (cVar10 != '\0') {
              cVar22 = '\x01';
            }
          }
        }
        goto LAB_1804f5408;
      }
      uVar23 = 1;
    }
    uVar17 = uVar23;
    if (((uVar19 >> 0x12 & 1) == 0) && (*(char *)(lVar5 + 0x76) != '\0')) {
      *(undefined1 *)(lVar5 + 0x2038) = 0;
    }
  }
  else {
    uVar17 = uVar23;
    if (*(int *)(lVar5 + 0x1574) - 2U < 2) {
      if (*(uint *)(lVar5 + 0x2058) == param_2) {
        uVar17 = 1;
      }
      else {
        FUN_1804b7870(0,0);
      }
    }
  }
  if (cVar22 != '\0') {
    *(undefined1 *)(lVar5 + 0x1561) = 1;
  }
LAB_1804f5450:
  if ((*(uint *)(lVar5 + 0x2078) == param_2) && ((uVar4 & 0x40) == 0)) {
    cVar7 = '\x01';
  }
  if (param_3 != (char *)0x0) {
    *param_3 = cVar7;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar17;
  }
  return cVar22;
}



