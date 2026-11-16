// FUN_1804c73e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c73e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c73e0(ulonglong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  lVar6 = DAT_180bb8ae8;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if ((*(char *)(DAT_180bb8ae8 + 0x2269) == '\0') && (*(char *)(DAT_180bb8ae8 + 0x226a) == '\0')) {
    bVar5 = false;
    bVar7 = false;
    if ((param_1 & 2) == 0) goto LAB_1804c7554;
  }
  else {
    uVar8 = *(uint *)(DAT_180bb8ae8 + 0x1f10);
    if ((uVar8 & 1) == 0) {
      fVar14 = *(float *)(DAT_180bb8ae8 + 0xdac);
      fVar1 = *(float *)(DAT_180bb8ae8 + 0x110);
      if (*(int *)(DAT_180bb8ae8 + 0x128) == 1) {
        fVar3 = fVar14 * 0.0;
        uVar13 = 0x3f8000003f000000;
        fVar14 = *(float *)(DAT_180bb8ae8 + 0x114) - fVar14 * 20.0;
      }
      else {
        fVar3 = fVar14 * 16.0;
        auVar4 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
        uVar13 = auVar4._0_8_;
        fVar14 = fVar14 * 10.0 + *(float *)(DAT_180bb8ae8 + 0x114);
      }
      local_40._0_4_ = (undefined4)uVar13;
      local_40._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      *(undefined4 *)(DAT_180bb8ae8 + 0x1f28) = (undefined4)local_40;
      *(undefined4 *)(lVar6 + 0x1f2c) = local_40._4_4_;
      *(float *)(lVar6 + 0x1f20) = fVar3 + fVar1;
      *(float *)(lVar6 + 0x1f24) = fVar14;
      *(undefined4 *)(lVar6 + 0x1f14) = 1;
      uVar8 = uVar8 | 1;
      local_40 = uVar13;
    }
    *(float *)(lVar6 + 0x1f80) = *(float *)(lVar6 + 0xe14) * 0.6;
    *(uint *)(lVar6 + 0x1f10) = uVar8 | 0x40;
    bVar7 = true;
  }
  bVar5 = bVar7;
  lVar2 = *(longlong *)(lVar6 + 0x26b0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xcc) != '\0')) {
    iVar9 = *(int *)(lVar6 + 0x14a0) + -1;
    if (-1 < iVar9) {
      lVar11 = (longlong)iVar9;
      plVar10 = (longlong *)(lVar11 * 0x88 + *(longlong *)(lVar6 + 0x14a8));
      do {
        if (*plVar10 == lVar2) goto LAB_1804c7554;
        plVar10 = plVar10 + -0x11;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    *(undefined1 *)(lVar2 + 0xd1) = 1;
    *(undefined1 *)(lVar2 + 0xd4) = 1;
    *(undefined1 *)(lVar2 + 0xeb) = 1;
    *(short *)(lVar6 + 0x26aa) = *(short *)(lVar6 + 0x26aa) + 1;
  }
LAB_1804c7554:
  pcVar12 = "##Tooltip_%02d";
  if (bVar5) {
    pcVar12 = "##Tooltip_DragDrop_%02d";
  }
  FUN_1804b08d0(local_38,0x20,pcVar12,(int)*(short *)(lVar6 + 0x26aa));
  FUN_1804bee10(local_38,0,0x2030347);
}



