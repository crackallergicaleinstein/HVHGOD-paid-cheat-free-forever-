// FUN_180474ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180474ed0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180474ed0(longlong param_1,float *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 in_ZMM3 [64];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_168 [32];
  int *local_148;
  float local_140;
  undefined4 local_138;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_108;
  longlong lStack_100;
  int local_f8 [2];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  fVar11 = DAT_180b0a41c * 6.6;
  auVar13 = ZEXT1664(in_ZMM3._0_16_);
  if (DAT_180cd6838 == 0) {
    if (param_3 == 0) {
      fVar12 = 255.0;
      fVar9 = ((float)(DAT_180b0a434 >> 0x18) / 255.0) * in_ZMM3._0_4_;
      fVar14 = 0.0;
      auVar16 = ZEXT464(0x3f800000);
      if (0.0 <= fVar9) {
        auVar3 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar9));
        fVar10 = auVar3._0_4_;
      }
      else {
        fVar10 = 0.0;
      }
      local_148._0_4_ = 0x20;
      FUN_1804e01c0(param_1,fVar9,fVar11,
                    (int)(longlong)(fVar10 * 255.0 + 0.5) << 0x18 | DAT_180b0a434 & 0xffffff);
      local_140 = DAT_180b0a41c * 1.2;
      fVar9 = ((float)(DAT_180b0a458 >> 0x18) / fVar12) * auVar13._0_4_;
      if (fVar14 <= fVar9) {
        auVar3 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar9));
        fVar9 = auVar3._0_4_;
      }
      else {
        fVar9 = 0.0;
      }
      local_148._0_4_ = 0x20;
      FUN_1804dff40(param_1,param_2,fVar11 - DAT_180b0a41c * 0.6,
                    (int)(longlong)(fVar9 * fVar12 + 0.5) << 0x18 | DAT_180b0a458 & 0xffffff);
      local_e0 = *param_2;
      local_dc = param_2[1];
      local_e4 = local_dc - DAT_180b0a41c * 2.4;
      local_f0 = local_e0 - DAT_180b0a41c * 3.4;
      local_ec = DAT_180b0a41c * 2.2 + local_dc;
      local_e8 = local_e0 - DAT_180b0a41c * 1.7;
      local_dc = DAT_180b0a41c * 0.6 + local_dc;
      local_d0 = local_e0 + DAT_180b0a41c * 3.4;
      local_d8 = DAT_180b0a41c * 1.7 + local_e0;
      fVar11 = ((float)(DAT_180b0a458 >> 0x18) / fVar12) * auVar13._0_4_;
      if (fVar14 <= fVar11) {
        auVar3 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar11));
        fVar14 = auVar3._0_4_;
      }
      local_138 = 0x7f7fffff;
      local_140 = 0.0;
      local_148 = (int *)CONCAT44(local_148._4_4_,DAT_180b0a41c * 1.3);
      local_d4 = local_e4;
      local_cc = local_ec;
      FUN_1804d9a00(param_1,&local_f0,5,
                    (int)(longlong)(fVar14 * fVar12 + 0.5) << 0x18 | DAT_180b0a458 & 0xffffff);
    }
    else {
      fVar12 = 255.0;
      auVar16 = ZEXT464(0x3f800000);
      fVar9 = ((float)(DAT_180b0a458 >> 0x18) / 255.0) * in_ZMM3._0_4_;
      fVar14 = 0.0;
      if (0.0 <= fVar9) {
        auVar3 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar9));
        fVar10 = auVar3._0_4_;
      }
      else {
        fVar10 = 0.0;
      }
      fVar15 = 0.5;
      local_148._0_4_ = 0x20;
      FUN_1804e01c0(param_1,fVar9,fVar11,
                    (int)(longlong)(fVar10 * 255.0 + 0.5) << 0x18 | DAT_180b0a458 & 0xffffff);
      fVar9 = ((float)(DAT_180b0a434 >> 0x18) / fVar12) * auVar13._0_4_;
      if (fVar14 <= fVar9) {
        auVar3 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar9));
        fVar9 = auVar3._0_4_;
      }
      else {
        fVar9 = 0.0;
      }
      local_140 = DAT_180b0a41c;
      local_148._0_4_ = 0x20;
      FUN_1804dff40(param_1,param_2,fVar11 - DAT_180b0a41c * 1.6,
                    (int)(longlong)(fVar9 * fVar12 + fVar15) << 0x18 | DAT_180b0a434 & 0xffffff);
      fVar11 = ((float)(DAT_180b0a434 >> 0x18) / fVar12) * auVar13._0_4_;
      if (fVar14 <= fVar11) {
        auVar3 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar11));
        fVar14 = auVar3._0_4_;
      }
      local_148 = (int *)CONCAT44(local_148._4_4_,0x10);
      FUN_1804e01c0(param_1,param_2,DAT_180b0a41c * 2.1,
                    (int)(longlong)(fVar14 * fVar12 + fVar15) << 0x18 | DAT_180b0a434 & 0xffffff);
    }
  }
  else {
    local_f8[0] = param_3;
    lVar7 = (**(code **)(*(longlong *)DAT_180cd6838 + 0x10))(DAT_180cd6838,local_f8);
    if (lVar7 != 0) {
      if (0.0 <= auVar13._0_4_) {
        auVar3 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar13._0_16_);
        fVar9 = auVar3._0_4_;
      }
      else {
        fVar9 = 0.0;
      }
      uVar5 = (int)(longlong)(fVar9 * 255.0 + 0.5) << 0x18;
      local_128 = 0;
      local_124 = 0;
      local_120 = fVar11 + *param_2;
      local_f8[0] = 0x3f800000;
      local_f8[1] = 0x3f800000;
      local_11c = fVar11 + param_2[1];
      local_118 = *param_2 - fVar11;
      local_114 = param_2[1] - fVar11;
      if (uVar5 != 0) {
        if ((lVar7 == *(longlong *)(param_1 + 0x78)) && (*(longlong *)(param_1 + 0x70) == 0)) {
          bVar4 = false;
        }
        else {
          piVar1 = (int *)(param_1 + 0xb0);
          local_108 = 0;
          iVar6 = *(int *)(param_1 + 0xb4);
          bVar4 = true;
          lStack_100 = lVar7;
          if (*piVar1 == iVar6) {
            iVar8 = *piVar1 + 1;
            if (iVar6 == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = iVar6 / 2 + iVar6;
            }
            if (iVar8 < iVar6) {
              iVar8 = iVar6;
            }
            FUN_1804aec70(piVar1,iVar8);
          }
          iVar6 = *piVar1;
          lVar2 = *(longlong *)(param_1 + 0xb8);
          *(undefined8 *)(lVar2 + (longlong)iVar6 * 0x10) = 0;
          *(longlong *)(lVar2 + 8 + (longlong)iVar6 * 0x10) = lVar7;
          *piVar1 = *piVar1 + 1;
          *(undefined8 *)(param_1 + 0x70) = local_108;
          *(longlong *)(param_1 + 0x78) = lStack_100;
          FUN_1804d92c0(param_1);
        }
        FUN_1804d9590(param_1,6,4);
        local_148 = local_f8;
        local_140 = (float)(uVar5 | 0xffffff);
        FUN_1804d97d0(param_1,&local_118,&local_120,&local_128);
        if (bVar4) {
          FUN_1804d9530(param_1);
        }
      }
    }
  }
}



