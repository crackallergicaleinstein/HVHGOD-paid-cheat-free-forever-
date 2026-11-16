// FUN_1804f49a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f49a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f49a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  float local_88;
  float fStack_84;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  lVar6 = DAT_180bb8ae8;
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar6 + 0x14d0);
  if (*(char *)(lVar1 + 0xd1) != '\0') {
  }
  FUN_1804b0940(&local_88,local_80,param_1,param_2);
  lVar5 = CONCAT44(fStack_84,local_88);
  uVar7 = local_80._0_8_;
  fVar13 = 0.0;
  fVar14 = *(float *)(DAT_180bb8ae8 + 0x11e0);
  if (lVar5 != local_80._0_8_) {
    local_98 = 0;
    local_a8 = 0;
    local_b0 = local_80._0_8_;
    local_b8 = local_80._0_8_;
    local_c8 = 0xbf800000;
    FUN_1804ea040(&local_88,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                  *(float *)(DAT_180bb8ae8 + 0x11e0));
    fVar12 = (float)(int)((uint)((float)(int)local_88 < local_88) + (int)local_88);
    fVar14 = fStack_84;
    if (fVar13 < fVar12) {
      fVar12 = *(float *)(lVar6 + 0xcc4) + *(float *)(lVar6 + 0xcc4) + fVar12;
      goto LAB_1804f4ad7;
    }
  }
  fStack_84 = fVar14;
  fVar12 = 0.0;
LAB_1804f4ad7:
  fVar12 = fVar12 + *(float *)(lVar6 + 0x11e0);
  auVar16 = ZEXT464((uint)(*(float *)(lVar1 + 0x11c) + *(float *)(lVar1 + 0x150)));
  auVar15 = ZEXT464(*(uint *)(lVar1 + 0x118));
  fVar14 = fStack_84;
  local_88 = fVar12;
  FUN_1804c6420(&local_88,0);
  lVar10 = DAT_180bb8ae8;
  fVar14 = auVar16._0_4_ + fVar14;
  fVar12 = auVar15._0_4_ + fVar12;
  auVar3 = vinsertps_avx(auVar15._0_16_,auVar16._0_16_,0x10);
  auVar3 = vinsertps_avx(auVar3,ZEXT416((uint)fVar12),0x20);
  *(uint *)(DAT_180bb8ae8 + 0x1ec4) =
       *(uint *)(DAT_180bb8ae8 + 0x1e80) | *(uint *)(DAT_180bb8ae8 + 0x1e8c);
  lVar2 = *(longlong *)(lVar10 + 0x14d0);
  local_80 = vinsertps_avx(auVar3,ZEXT416((uint)fVar14),0x30);
  auVar11._16_16_ = local_80;
  auVar11._0_16_ = local_80;
  *(undefined4 *)(lVar10 + 0x1ec0) = 0;
  *(undefined1 (*) [32])(lVar10 + 0x1ecc) = auVar11;
  *(undefined4 *)(lVar10 + 0x1ec8) = 0;
  *(undefined8 *)(lVar10 + 0x1e88) = 0;
  if ((((fVar14 <= *(float *)(lVar2 + 0x26c)) || (*(float *)(lVar2 + 0x274) <= auVar16._0_4_)) ||
      (fVar12 <= *(float *)(lVar2 + 0x268))) || (*(float *)(lVar2 + 0x270) <= auVar15._0_4_)) {
    if (*(char *)(lVar10 + 0x154e) == '\0') {
    }
    uVar9 = 1;
  }
  else {
    *(undefined4 *)(lVar10 + 0x1ec8) = 0x100;
    uVar9 = 0x101;
  }
  auVar15 = ZEXT1664(auVar15._0_16_);
  auVar16 = ZEXT1664(auVar16._0_16_);
  cVar8 = FUN_1804c3600(local_80,local_80 + 8,1);
  if (cVar8 != '\0') {
    *(undefined4 *)(lVar10 + 0x1ec8) = uVar9;
  }
  auVar3 = *(undefined1 (*) [16])(lVar10 + 0xdc8);
  auVar4 = vshufps_avx(auVar3,auVar3,0xff);
  local_80._0_12_ = auVar3._0_12_;
  local_80._12_4_ = auVar4._0_4_ * *(float *)(lVar10 + 0xc84);
  uVar9 = FUN_1804b1120(local_80);
  fVar14 = *(float *)(lVar6 + 0x11e0) * 0.5;
  auVar3 = vunpcklps_avx(ZEXT416((uint)(fVar14 + *(float *)(lVar6 + 0xcc4) + auVar15._0_4_)),
                         ZEXT416((uint)(fVar14 + auVar16._0_4_)));
  local_80._0_8_ = auVar3._0_8_;
  fVar14 = *(float *)(*(longlong *)(*(longlong *)(lVar1 + 0x2c8) + 0x38) + 0x28);
  if (22.0 <= fVar14) {
    local_c8 = 0;
    if (fVar14 < 40.0) {
      local_c8 = 0xc;
    }
  }
  else {
    local_c8 = 8;
  }
  FUN_1804e01c0(*(longlong *)(lVar1 + 0x2c8),local_80,fVar14 * 0.2,uVar9);
  auVar3 = vunpcklps_avx(ZEXT416((uint)(*(float *)(lVar6 + 0xcc4) + *(float *)(lVar6 + 0xcc4) +
                                        *(float *)(lVar6 + 0x11e0) + auVar15._0_4_)),
                         ZEXT416((uint)(auVar16._0_4_ + fVar13)));
  FUN_1804b3060(auVar3._0_8_,lVar5,uVar7,0);
}



