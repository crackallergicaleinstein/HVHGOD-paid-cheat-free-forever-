// FUN_1804c6a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6a30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c6a30(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  ulonglong local_20;
  
  lVar10 = DAT_180bb8ae8;
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x1ff0);
  lVar14 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1fe8) * 0x3c;
  if ((*(char *)(lVar3 + 0x159) != '\0') &&
     (((*(undefined1 *)(lVar3 + 0x159) = 0, *(float *)(lVar3 + 0x130) < *(float *)(lVar3 + 0x118) ||
       (*(float *)(lVar3 + 0x134) < *(float *)(lVar3 + 0x11c))) && (*(char *)(lVar3 + 0xd1) == '\0')
      ))) {
    FUN_1804c5a40(
                 "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                 );
  }
  auVar6 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + 0x130)),ZEXT416(*(uint *)(lVar10 + 0x1ed4)));
  local_30 = *(float *)(lVar14 + -0x38 + lVar4);
  auVar6 = vmaxss_avx(auVar6,ZEXT416((uint)local_30));
  auVar7 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + 0x134)),ZEXT416(*(uint *)(lVar10 + 0x1ed8)));
  auVar7 = vmaxss_avx(auVar7,ZEXT416(*(uint *)(lVar14 + -0x34 + lVar4)));
  fStack_2c = *(float *)(lVar14 + -0x34 + lVar4);
  fStack_24 = auVar7._0_4_;
  fStack_28 = auVar6._0_4_;
  *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(lVar14 + -0x38 + lVar4);
  *(undefined8 *)(lVar3 + 0x120) = *(undefined8 *)(lVar14 + -0x28 + lVar4);
  auVar6 = vmaxss_avx(ZEXT416(*(uint *)(lVar14 + -0x2c + lVar4)),ZEXT416((uint)fStack_24));
  auVar7 = vmaxss_avx(ZEXT416(*(uint *)(lVar14 + -0x30 + lVar4)),ZEXT416((uint)fStack_28));
  *(int *)(lVar3 + 0x130) = auVar7._0_4_;
  *(int *)(lVar3 + 0x134) = auVar6._0_4_;
  *(undefined4 *)(lVar3 + 0x15c) = *(undefined4 *)(lVar14 + -0x20 + lVar4);
  *(undefined4 *)(lVar3 + 0x164) = *(undefined4 *)(lVar14 + -0x1c + lVar4);
  *(undefined8 *)(lVar3 + 0x140) = *(undefined8 *)(lVar14 + -0x18 + lVar4);
  *(undefined4 *)(lVar3 + 0x150) = *(undefined4 *)(lVar14 + -0x10 + lVar4);
  *(undefined1 *)(lVar3 + 0x158) = *(undefined1 *)(lVar14 + -5 + lVar4);
  if (*(char *)(lVar10 + 0x2840) != '\0') {
    *(undefined4 *)(lVar10 + 0x2878) = 0xff7fffff;
  }
  if (*(char *)(lVar14 + -4 + lVar4) == '\0') {
    *(int *)(lVar10 + 0x1fe8) = *(int *)(lVar10 + 0x1fe8) + -1;
  }
  auVar6 = vmaxss_avx(ZEXT416(*(uint *)(lVar3 + 0x154)),ZEXT416(*(uint *)(lVar14 + -0x10 + lVar4)));
  *(int *)(lVar3 + 0x150) = auVar6._0_4_;
  local_38 = fStack_28 - local_30;
  local_34 = fStack_24 - fStack_2c;
  FUN_1804c6420(&local_38,0xbf800000);
  lVar15 = DAT_180bb8ae8;
  uVar1 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
  uVar2 = *(uint *)(DAT_180bb8ae8 + 0x1e8c);
  *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0) = 0;
  *(ulonglong *)(lVar15 + 0x1ecc) = CONCAT44(fStack_2c,local_30);
  *(ulonglong *)(lVar15 + 0x1ed4) = CONCAT44(fStack_24,fStack_28);
  *(uint *)(lVar15 + 0x1ec4) = uVar1 | uVar2 | 1;
  lVar5 = *(longlong *)(lVar15 + 0x14d0);
  *(ulonglong *)(lVar15 + 0x1edc) = CONCAT44(fStack_2c,local_30);
  *(ulonglong *)(lVar15 + 0x1ee4) = CONCAT44(fStack_24,fStack_28);
  *(undefined4 *)(lVar15 + 0x1ec8) = 0;
  *(undefined8 *)(lVar15 + 0x1e88) = 0;
  if (((fStack_24 <= *(float *)(lVar5 + 0x26c)) || (*(float *)(lVar5 + 0x274) <= fStack_2c)) ||
     ((fStack_28 <= *(float *)(lVar5 + 0x268) || (*(float *)(lVar5 + 0x270) <= local_30)))) {
    if (*(char *)(lVar15 + 0x154e) != '\0') {
      uVar16 = 1;
      goto LAB_1804c6cbf;
    }
  }
  else {
    *(undefined4 *)(lVar15 + 0x1ec8) = 0x100;
    uVar16 = 0x101;
LAB_1804c6cbf:
    cVar11 = FUN_1804c3600(&local_30,&fStack_28,1);
    if (cVar11 != '\0') {
      *(undefined4 *)(lVar15 + 0x1ec8) = uVar16;
    }
  }
  iVar12 = *(int *)(lVar10 + 0x1550);
  if (((*(int *)(lVar14 + -0xc + lVar4) == iVar12) || (*(int *)(lVar10 + 0x1554) != iVar12)) ||
     (iVar12 == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((*(char *)(lVar14 + -7 + lVar4) == '\0') && (*(char *)(lVar10 + 0x158d) == '\x01')) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (!bVar8) {
    if (!bVar9) goto LAB_1804c6d23;
    iVar12 = *(int *)(lVar10 + 0x1584);
  }
  *(int *)(lVar10 + 0x1ec0) = iVar12;
LAB_1804c6d23:
  *(ulonglong *)(lVar10 + 0x1ecc) = CONCAT44(fStack_2c,local_30);
  *(ulonglong *)(lVar10 + 0x1ed4) = CONCAT44(fStack_24,fStack_28);
  if ((*(char *)(lVar14 + -6 + lVar4) == '\0') && (*(int *)(lVar10 + 0x1538) != 0)) {
    *(uint *)(lVar10 + 0x1ec8) = *(uint *)(lVar10 + 0x1ec8) | 0x80;
  }
  puVar13 = (uint *)(lVar10 + 0x1ec8);
  if ((*(char *)(lVar10 + 0x154f) != '\0') && (*(char *)(lVar14 + -8 + lVar4) == '\0')) {
    *puVar13 = *puVar13 | 4;
  }
  uVar1 = *puVar13;
  *puVar13 = uVar1 | 0x20;
  if (bVar9) {
    *puVar13 = uVar1 | 0x60;
  }
  *(int *)(lVar10 + 0x1fe8) = *(int *)(lVar10 + 0x1fe8) + -1;
  if (*(char *)(lVar10 + 0x1f90) != '\0') {
    local_48 = 0;
    local_50 = 0x3f800000;
    local_58 = 0;
    FUN_1804de7c0(*(undefined8 *)(lVar3 + 0x2c8),&local_30,&fStack_28,0xffff00ff);
  }
}



