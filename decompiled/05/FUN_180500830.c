// FUN_180500830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180500830 */

undefined4 * FUN_180500830(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  lVar10 = DAT_180bb8ae8;
  puVar1 = *(undefined4 **)(DAT_180bb8ae8 + 0x2478);
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  lVar3 = *(longlong *)(puVar1 + 10);
  if (puVar1[0xc] != *(int *)(DAT_180bb8ae8 + 0x1e7c)) {
    FUN_1804c5a40("EndMultiSelect() FocusScope mismatch!");
  }
  if ((puVar1[0xd] & 0x1000) == 0) {
    auVar5 = *(undefined1 (*) [16])(lVar2 + 0x238);
    auVar4 = vshufps_avx(auVar5,auVar5,0xaa);
    auVar7 = vshufps_avx(auVar5,auVar5,0x55);
    auVar6 = vminss_avx(ZEXT416((uint)(auVar5._0_4_ + *(float *)(lVar2 + 0x80))),auVar4);
    auVar17 = ZEXT1664(auVar6);
    auVar5 = vshufps_avx(auVar5,auVar5,0xff);
    auVar6 = vminss_avx(ZEXT416((uint)(auVar7._0_4_ + *(float *)(lVar2 + 0x84))),auVar5);
    auVar18 = ZEXT1664(auVar6);
  }
  else {
    auVar17 = ZEXT464((uint)puVar1[0xe]);
    auVar18 = ZEXT464((uint)puVar1[0xf]);
    auVar4 = vmaxss_avx(ZEXT416(*(uint *)(lVar2 + 0x130)),ZEXT416((uint)puVar1[0xe]));
    auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar2 + 0x134)),ZEXT416((uint)puVar1[0xf]));
  }
  auVar19 = ZEXT1664(auVar4);
  auVar16 = ZEXT1664(auVar5);
  local_4c = auVar5._0_4_;
  local_50 = auVar4._0_4_;
  local_54 = auVar18._0_4_;
  local_58 = auVar17._0_4_;
  if (*(char *)((longlong)puVar1 + 0x52) != '\0') {
    if ((*(char *)((longlong)puVar1 + 0x21) != '\0') ||
       ((*(char *)((longlong)puVar1 + 0x55) == '\0' && (*(longlong *)(puVar1 + 4) != -1)))) {
      if ((*(byte *)(lVar10 + 0x28cc) & 0x40) != 0) {
        FUN_1804cf3e0("[selection] EndMultiSelect: Reset RangeSrcItem.\n");
      }
      *(undefined8 *)(lVar3 + 0x18) = 0xffffffffffffffff;
    }
    if ((*(char *)(puVar1 + 0x15) == '\0') && (*(longlong *)(lVar3 + 0x20) != -1)) {
      if ((*(byte *)(lVar10 + 0x28cc) & 0x40) != 0) {
        FUN_1804cf3e0("[selection] EndMultiSelect: Reset NavIdItem.\n");
      }
      *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined1 *)(lVar3 + 0x15) = 0xff;
    }
    if ((puVar1[0xd] & 0xc0) != 0) {
      if ((((puVar1[0x12] != 0) && (*(int *)(DAT_180bb8ae8 + 0x23f0) == puVar1[0x12])) &&
          (*(char *)(DAT_180bb8ae8 + 0x23f4) != '\0')) &&
         ((int *)(DAT_180bb8ae8 + 0x23f0) != (int *)0x0)) {
        FUN_1805004d0(&local_58);
        auVar16 = ZEXT464(local_4c);
        auVar19 = ZEXT464(local_50);
        auVar18 = ZEXT464(local_54);
        auVar17 = ZEXT464(local_58);
      }
    }
  }
  if (*(char *)((longlong)puVar1 + 0x51) == '\0') {
    iVar12 = puVar1[1];
    if (iVar12 < 0) {
      iVar12 = iVar12 + iVar12 / 2;
      iVar13 = 0;
      if (0 < iVar12) {
        iVar13 = iVar12;
      }
      FUN_180504820(puVar1,iVar13);
    }
    *puVar1 = 0;
  }
  if (((*(float *)(lVar2 + 0x228) <= *(float *)(lVar10 + 0x110)) &&
      (*(float *)(lVar2 + 0x22c) <= *(float *)(lVar10 + 0x114))) &&
     (*(float *)(lVar10 + 0x110) < *(float *)(lVar2 + 0x230))) {
    if (*(float *)(lVar10 + 0x114) < *(float *)(lVar2 + 0x234)) {
      cVar11 = FUN_1804c1970(1);
      lVar3 = DAT_180bb8ae8;
      if (cVar11 != '\0') {
        if (((uint)puVar1[0xd] >> 0xc & 1) != 0) {
          if (*(float *)(lVar10 + 0x110) < auVar17._0_4_) goto LAB_180500c0f;
          if (((*(float *)(lVar10 + 0x114) < auVar18._0_4_) ||
              (auVar19._0_4_ <= *(float *)(lVar10 + 0x110))) ||
             (auVar16._0_4_ <= *(float *)(lVar10 + 0x114))) goto LAB_180500c0f;
        }
        if ((*(int *)(lVar10 + 0x1538) == 0) && (*(int *)(lVar10 + 0x1550) == 0)) {
          if (((puVar1[0xd] & 0xc0) != 0) &&
             (((*(char *)(lVar10 + 0x23f4) == '\0' && (*(char *)(lVar10 + 0x23f5) == '\0')) &&
              (*(short *)(lVar10 + 0xb4a) == 1)))) {
            *(undefined4 *)(DAT_180bb8ae8 + 0x23f0) = puVar1[0x12];
            *(undefined2 *)(lVar3 + 0x23f5) = 0x101;
            *(undefined1 *)(lVar3 + 0x23f7) = 1;
            *(undefined2 *)(lVar3 + 0x23fc) = *(undefined2 *)(lVar3 + 0x130);
            fVar8 = *(float *)(lVar3 + 0x110) - *(float *)(*(longlong *)(lVar3 + 0x14d0) + 0x128);
            fVar9 = *(float *)(lVar3 + 0x114) - *(float *)(*(longlong *)(lVar3 + 0x14d0) + 300);
            *(float *)(lVar3 + 0x2408) = fVar8;
            *(float *)(lVar3 + 0x240c) = fVar9;
            *(float *)(lVar3 + 0x2400) = fVar8;
            *(float *)(lVar3 + 0x2404) = fVar9;
            *(undefined8 *)(lVar3 + 0x2410) = 0;
            FUN_1804c8a10(lVar2,2);
            lVar3 = DAT_180bb8ae8;
            iVar12 = puVar1[0x12];
            *(int *)(DAT_180bb8ae8 + 0x1538) = iVar12;
            *(undefined1 *)(lVar3 + 0x154c) = 0;
            if ((iVar12 != 0) && (*(int *)(lVar3 + 0x153c) != iVar12)) {
              *(undefined8 *)(lVar3 + 0x1544) = 0;
            }
            if ((puVar1[0xd] & 0x1000) != 0) {
              local_58 = *(uint *)(lVar10 + 0x110);
              local_54 = *(uint *)(lVar10 + 0x114);
              local_50 = local_58;
              local_4c = local_54;
              FUN_1804c8f10(0,0,puVar1[0xc],&local_58);
            }
          }
          if ((puVar1[0xd] & 0x400) != 0) {
            cVar11 = FUN_1804c3590(0);
            if (cVar11 != '\0') {
              if ((*(float *)(DAT_180bb8ae8 + 0xbc4) <
                   *(float *)(DAT_180bb8ae8 + 0xa0) * *(float *)(DAT_180bb8ae8 + 0xa0)) &&
                 (*(int *)(lVar10 + 0x130) == 0)) {
                FUN_1805015a0(puVar1);
              }
            }
          }
        }
      }
    }
  }
LAB_180500c0f:
  lVar3 = DAT_180bb8ae8;
  if ((puVar1[0xd] & 0x10000) != 0) {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    if (((*(longlong *)(lVar3 + 0x2040) == *(longlong *)(lVar3 + 0x14d0)) &&
        (*(char *)(lVar3 + 0x20e1) != '\0')) &&
       (*(int *)(lVar3 + 0x204c) == *(int *)(*(longlong *)(lVar3 + 0x14d0) + 0x170))) {
      *(uint *)(lVar3 + 0x20e4) = *(uint *)(lVar3 + 0x20e4) & 0xfffffff4;
      *(uint *)(lVar3 + 0x20e4) = *(uint *)(lVar3 + 0x20e4) | 4;
    }
  }
  if ((*(longlong *)(lVar10 + 0x2338) != 0) &&
     (*(char *)(*(longlong *)(lVar10 + 0x2338) + 0x23e) != '\0')) {
    FUN_1804ef4b0();
  }
  lVar3 = DAT_180bb8ae8;
  uVar15 = (ulonglong)(uint)puVar1[0x11];
  auVar5 = vmaxss_avx(ZEXT416((uint)puVar1[0x10]),ZEXT416(*(uint *)(lVar2 + 0x130)));
  auVar4 = vmaxss_avx(ZEXT416((uint)puVar1[0x11]),ZEXT416(*(uint *)(lVar2 + 0x134)));
  *(int *)(lVar2 + 0x130) = auVar5._0_4_;
  *(int *)(lVar2 + 0x134) = auVar4._0_4_;
  iVar12 = *(int *)(lVar3 + 0x1fc8);
  if (*(short *)(*(longlong *)(lVar3 + 0x28c0) + 0xc) < iVar12) {
    *(int *)(lVar3 + 0x1fc8) = iVar12 + -1;
    if (iVar12 + -1 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(*(longlong *)(lVar3 + 0x1fd0) + -0x10 + (longlong)iVar12 * 8);
    }
    *(undefined4 *)(lVar3 + 0x1e7c) = uVar14;
  }
  else {
    uVar15 = FUN_1804c5a40("Calling PopFocusScope() too many times!");
  }
  if ((*(byte *)(lVar10 + 0x28cc) & 0x40) != 0) {
    FUN_180500740(uVar15,puVar1);
  }
  *(undefined8 *)(puVar1 + 0xc) = 0;
  iVar12 = *(int *)(lVar10 + 0x2480);
  iVar13 = iVar12 + -1;
  *(int *)(lVar10 + 0x2480) = iVar13;
  if (iVar13 < 1) {
    *(undefined8 *)(lVar10 + 0x2478) = 0;
    return puVar1;
  }
  *(longlong *)(lVar10 + 0x2478) = (longlong)(iVar12 + -2) * 0x58 + *(longlong *)(lVar10 + 0x2490);
  return puVar1;
}



