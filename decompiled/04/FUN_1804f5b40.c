// FUN_1804f5b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f5b40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f5b40(undefined4 param_1,float *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  float local_c8;
  undefined4 local_c0;
  float local_b8;
  float local_b4;
  undefined1 local_b0 [12];
  float fStack_a4;
  char local_a0;
  char local_9f [7];
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  ulonglong local_78;
  
  lVar6 = DAT_180bb8ae8;
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined8 *)param_2;
  local_98._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_88 = (float)uVar1;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  local_90 = *(float *)(DAT_180bb8ae8 + 0x11e0) + *param_2;
  local_8c = *(float *)(DAT_180bb8ae8 + 0x11e0) + param_2[1];
  local_84 = local_98._4_4_;
  local_80 = local_90;
  local_7c = local_8c;
  if (((*(float *)(lVar3 + 0x224) - *(float *)(lVar3 + 0x21c)) *
      (*(float *)(lVar3 + 0x220) - *(float *)(lVar3 + 0x218))) /
      ((local_8c - local_98._4_4_) * (local_90 - local_88)) < 1.5) {
    local_80 = (float)(int)((local_90 - local_88) * -0.25);
    local_88 = local_88 - local_80;
    local_7c = (float)(int)((local_8c - local_98._4_4_) * -0.25);
    local_84 = local_98._4_4_ - local_7c;
    local_7c = local_7c + local_8c;
    local_80 = local_80 + local_90;
  }
  local_98 = uVar1;
  cVar7 = FUN_1804c6190(&local_88,param_1,0,0);
  local_c8 = 0.0;
  FUN_1804f4d40(&local_88,param_1,local_9f,&local_a0);
  if (cVar7 != '\0') {
    lVar9 = 0x2c0;
    if (local_a0 != '\0') {
      lVar9 = 0x2d0;
    }
    auVar2 = *(undefined1 (*) [16])(lVar9 + 0xc78 + DAT_180bb8ae8);
    auVar5 = vshufps_avx(auVar2,auVar2,0xff);
    local_b0 = auVar2._0_12_;
    fStack_a4 = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    if (local_9f[0] != '\0') {
      uVar8 = FUN_1804b1120(local_b0);
      local_c0 = 0;
      local_c8 = 0.0;
      FUN_1804df870(*(undefined8 *)(lVar3 + 0x2c8),&local_98,&local_90,uVar8);
    }
    FUN_1804b4250(&local_98,param_1,2,0xbf800000);
    auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
    auVar5 = vshufps_avx(auVar2,auVar2,0xff);
    local_b0 = auVar2._0_12_;
    fStack_a4 = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    uVar8 = FUN_1804b1120(local_b0);
    fVar11 = ((float)local_98 + local_90) * 0.5;
    fVar4 = (local_98._4_4_ + local_8c) * 0.5;
    fVar10 = *(float *)(lVar6 + 0x11e0) * 0.5 * 0.7071 - 1.0;
    fVar14 = (float)(int)*(float *)(lVar6 + 0x11ac);
    fVar12 = -fVar10 + fVar11;
    fVar13 = -fVar10 + fVar4;
    fVar11 = fVar10 + fVar11;
    fVar10 = fVar10 + fVar4;
    local_b0._4_4_ = fVar10;
    local_b0._0_4_ = fVar11;
    local_c8 = fVar14;
    local_b8 = fVar12;
    local_b4 = fVar13;
    FUN_1804dcf10(*(undefined8 *)(lVar3 + 0x2c8),local_b0,&local_b8,uVar8);
    local_b0._4_4_ = fVar10;
    local_b0._0_4_ = fVar12;
    local_c8 = fVar14;
    local_b8 = fVar11;
    local_b4 = fVar13;
    FUN_1804dcf10(*(undefined8 *)(lVar3 + 0x2c8),&local_b8,local_b0,uVar8);
  }
}



