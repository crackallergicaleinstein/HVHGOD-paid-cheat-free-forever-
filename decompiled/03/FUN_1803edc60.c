// FUN_1803edc60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803edc60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803edc60(int *param_1,int *param_2)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  size_t sVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  ULONGLONG UVar15;
  float *pfVar16;
  float *pfVar17;
  int *piVar18;
  int *piVar19;
  longlong lVar20;
  longlong *plVar21;
  byte bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c8 [32];
  char local_1a8;
  float local_1a4;
  float local_1a0 [2];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int *local_78;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  piVar1 = param_1 + 0xc;
  local_198._0_8_ = piVar1;
  local_78 = param_2;
  iVar13 = FUN_1805f68d0(piVar1);
  if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (param_1[0x1f] == 0x7fffffff) {
    param_1[0x1f] = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  UVar15 = GetTickCount64();
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  if ((uVar5 == 0) || (uVar5 <= UVar15)) {
    *(ULONGLONG *)(param_1 + 0x8e) = UVar15 + 0x2ee;
  }
  iVar13 = *param_2;
  if ((((((((iVar13 < 1) || (uVar3 = param_2[2], 3 < uVar3)) ||
          (iVar14 = param_2[0xe], iVar14 < 0x10)) ||
         ((iVar4 = param_2[0xf], iVar4 < 0x10 || (param_2[0xc] < 0)))) || (param_2[0xd] < 0)) ||
       (((param_2[0x10] < iVar14 || (param_2[0x11] < iVar4)) ||
        ((param_2[0x10] - iVar14 < param_2[0xc] ||
         ((param_2[0x11] - iVar4 < param_2[0xd] || (1000000 < (uint)param_2[0x33])))))))) ||
      ((param_2[0x33] != 0 &&
       ((((uVar3 != 0 || (*(longlong *)(param_2 + 0x28) == 0)) || (param_2[0x26] != 0)) ||
        (param_2[0x27] != 0)))))) ||
     ((sVar12 = thunk_FUN_180624430(param_2[0x12]), 0 < sVar12 ||
      (sVar12 = thunk_FUN_180624430(param_2[0x13]), 0 < sVar12)))) {
LAB_1803ee331:
    if ((param_1[0x20] != 0) && (uVar5 != 0)) {
      *(longlong *)(param_1 + 100) = *(longlong *)(param_1 + 100) + 1;
    }
    if (*param_2 == 0) {
      param_1[0x38] = 0;
      param_1[0x39] = 0;
    }
    else {
      local_188 = 0;
      local_180 = 0;
      local_168 = 0;
      uStack_160 = 0xf;
      local_178._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar7[0xf] = 0;
      auVar7._0_15_ = local_178._1_15_;
      local_178 = auVar7 << 8;
      local_158 = (undefined1  [16])0x0;
      local_148 = 0;
      local_140 = 0;
      local_13c = 0;
      local_138 = 0x3f800000;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_100 = 0;
      local_f8 = 0xf;
      local_110._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_110._1_15_;
      local_110 = auVar9 << 8;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0xffffffff;
      local_bc = 0;
      local_a8 = 0;
      uStack_a0 = 0xf;
      local_b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar10[0xf] = 0;
      auVar10._0_15_ = local_b8._1_15_;
      local_b8 = auVar10 << 8;
      local_98 = 0;
      local_90 = 0;
      local_8c = 0x3f000000;
      local_88 = 0x3f000000;
      local_84 = 0x101010;
      local_80 = 0x808080;
      local_7c = 0xffffffff;
      FUN_1803c1c00(param_1 + 0x20,&local_188);
      FUN_18015c010(local_b8);
      FUN_18015c010(local_110);
      FUN_18015c010(local_178);
      plVar21 = *(longlong **)(param_1 + 0x104);
      if (plVar21 != (longlong *)0x0) {
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        (**(code **)(*plVar21 + 0x10))();
      }
      param_1[0x106] = 0;
      param_1[0x107] = 0;
      *(undefined1 *)(param_1 + 0x10c) = 0;
    }
  }
  else {
    pfVar2 = (float *)(param_2 + 0x14);
    fVar23 = *pfVar2;
    sVar12 = thunk_FUN_180624430(fVar23);
    if (0 < sVar12) goto LAB_1803ee331;
    fVar24 = (float)param_2[0x3f];
    sVar12 = thunk_FUN_180624430(fVar24);
    if (0 < sVar12) goto LAB_1803ee331;
    fVar25 = (float)param_2[0x40];
    sVar12 = thunk_FUN_180624430(fVar25);
    if (0 < sVar12) goto LAB_1803ee331;
    if (((*param_1 - 4U < 2) && (uVar3 == 3)) && (param_2[0x3c] != 0)) {
      local_1a8 = '\x01';
      if ((*(char *)((longlong)param_1 + 0x252) != '\0') && ((char)param_2[0x2d] == '\0')) {
        *(undefined1 *)(param_2 + 0x3e) = 1;
        param_2[0x42] = 0x10ef25;
      }
    }
    else {
      local_1a8 = '\0';
    }
    bVar22 = *(byte *)((longlong)param_2 + 0xfa);
    auVar7 = vpcmpeqd_avx(ZEXT116(bVar22),SUB6416(ZEXT464(0),0));
    auVar7 = vblendvps_avx(SUB6416(ZEXT464(0x41000000),0),SUB6416(ZEXT464(0x40400000),0),auVar7);
    local_1a0[0] = auVar7._0_4_;
    local_1a4 = 0.6;
    pfVar17 = &local_1a4;
    if (0.6 <= fVar23) {
      pfVar17 = pfVar2;
    }
    pfVar16 = local_1a0;
    if (fVar23 <= auVar7._0_4_) {
      pfVar16 = pfVar17;
    }
    *pfVar2 = *pfVar16;
    local_1a4 = 1.0;
    local_1a0[0] = 0.0;
    pfVar17 = local_1a0;
    if (0.0 <= fVar24) {
      pfVar17 = (float *)(param_2 + 0x3f);
    }
    pfVar16 = &local_1a4;
    if (fVar24 <= 1.0) {
      pfVar16 = pfVar17;
    }
    param_2[0x3f] = (int)*pfVar16;
    local_1a4 = 1.0;
    local_1a0[0] = 0.0;
    pfVar17 = local_1a0;
    if (0.0 <= fVar25) {
      pfVar17 = (float *)(param_2 + 0x40);
    }
    pfVar16 = &local_1a4;
    if (fVar25 <= 1.0) {
      pfVar16 = pfVar17;
    }
    param_2[0x40] = (int)*pfVar16;
    if ((iVar13 == param_1[0x20]) && (uVar3 == param_1[0x22])) {
      piVar18 = param_1 + 0x24;
      piVar19 = param_2 + 4;
      if (0xf < *(ulonglong *)(param_1 + 0x2a)) {
        piVar18 = *(int **)piVar18;
      }
      sVar6 = *(size_t *)(param_2 + 8);
      if (0xf < *(ulonglong *)(param_2 + 10)) {
        piVar19 = *(int **)piVar19;
      }
      if (sVar6 != *(size_t *)(param_1 + 0x28)) goto LAB_1803edfdf;
      if (sVar6 != 0) {
        iVar13 = memcmp(piVar19,piVar18,sVar6);
        if (iVar13 != 0) goto LAB_1803edfdf;
        bVar22 = *(byte *)((longlong)param_2 + 0xfa);
      }
      if ((((param_2[0x3c] != param_1[0x5c]) || (param_2[0x3d] != param_1[0x5d])) ||
          (param_2[0x43] != param_1[99])) || (param_2[1] != param_1[0x21])) goto LAB_1803edfdf;
      bVar8 = true;
      bVar11 = true;
      if (bVar22 == 0) goto LAB_1803edfe2;
    }
    else {
LAB_1803edfdf:
      bVar11 = false;
LAB_1803edfe2:
      bVar8 = bVar11;
      plVar21 = *(longlong **)(param_1 + 0x104);
      if (plVar21 != (longlong *)0x0) {
        param_1[0x104] = 0;
        param_1[0x105] = 0;
        (**(code **)(*plVar21 + 0x10))();
      }
      param_1[0x106] = 0;
      param_1[0x107] = 0;
      *(undefined1 *)(param_1 + 0x10c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0xfb) == '\0') {
LAB_1803ee079:
      if (param_2[2] == 2) {
        param_2[0x12] = 0;
        param_2[0x13] = 0;
      }
      if (((bVar8) &&
          ((((param_2[2] != 3 || (param_2[0x3c] == 0)) ||
            (*(char *)((longlong)param_2 + 0xfa) != '\0')) || (*pfVar2 == (float)param_1[0x34]))))
         && (((((char)param_2[0x1c] == (char)param_1[0x3c] &&
               (*(longlong *)(param_2 + 0x1a) == *(longlong *)(param_1 + 0x3a))) &&
              ((param_2[0xe] == param_1[0x2e] &&
               ((param_2[0xf] == param_1[0x2f] && (param_2[0x10] == param_1[0x30])))))) &&
             ((param_2[0x11] == param_1[0x31] &&
              (((((char)param_2[0x2d] == (char)param_1[0x4d] &&
                 (iVar13 = param_2[0x3e], (char)iVar13 == (char)param_1[0x5e])) &&
                (param_2[0x42] == param_1[0x62])) &&
               (((*(char *)((longlong)param_2 + 0xf9) == *(char *)((longlong)param_1 + 0x179) &&
                 (*(longlong *)(param_2 + 0x28) == *(longlong *)(param_1 + 0x48))) &&
                ((param_2[0x26] == param_1[0x46] &&
                 ((param_2[0x27] == param_1[0x47] && (param_2[0x33] == param_1[0x53])))))))))))))) {
        piVar19 = param_1 + 0x54;
        piVar18 = param_2 + 0x34;
        if (0xf < *(ulonglong *)(param_1 + 0x5a)) {
          piVar19 = *(int **)piVar19;
        }
        sVar6 = *(size_t *)(param_2 + 0x38);
        if (0xf < *(ulonglong *)(param_2 + 0x3a)) {
          piVar18 = *(int **)piVar18;
        }
        if (((sVar6 != *(size_t *)(param_1 + 0x58)) ||
            ((sVar6 != 0 && (iVar14 = memcmp(piVar18,piVar19,sVar6), iVar14 != 0)))) ||
           (((char)iVar13 != '\0' &&
            (((*pfVar2 != (float)param_1[0x34] || ((float)param_2[0x3f] != (float)param_1[0x5f])) ||
             ((float)param_2[0x40] != (float)param_1[0x60])))))) goto LAB_1803ee26d;
        piVar18 = param_1 + 0x3e;
        piVar19 = param_2 + 0x1e;
        if (0xf < *(ulonglong *)(param_1 + 0x44)) {
          piVar18 = *(int **)piVar18;
        }
        sVar6 = *(size_t *)(param_2 + 0x22);
        if (0xf < *(ulonglong *)(param_2 + 0x24)) {
          piVar19 = *(int **)piVar19;
        }
        if ((sVar6 != *(size_t *)(param_1 + 0x42)) ||
           ((sVar6 != 0 && (iVar13 = memcmp(piVar19,piVar18,sVar6), iVar13 != 0))))
        goto LAB_1803ee26d;
      }
      else {
LAB_1803ee26d:
        *(longlong *)(param_1 + 100) = *(longlong *)(param_1 + 100) + 1;
      }
      if (((*(longlong *)(param_1 + 0x36) != *(longlong *)(param_1 + 100)) ||
          (param_2[0xc] != param_1[0x2c])) ||
         ((param_2[0xd] != param_1[0x2d] || (*(char *)((longlong)param_2 + 0xf9) == '\0')))) {
        local_198 = (undefined1  [16])0x0;
        FUN_1803c9920(param_1 + 0x100,local_198);
      }
      *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)(param_1 + 100);
      UVar15 = GetTickCount64();
      lVar20 = 0xfa;
      if (local_1a8 != '\0') {
        lVar20 = 0x4e2;
      }
      *(ULONGLONG *)(param_2 + 0x18) = UVar15 + lVar20;
      FUN_1803c1c00(param_1 + 0x20,param_2);
      goto LAB_1803ee4b1;
    }
    if (((*(char *)((longlong)param_2 + 0xfa) != '\0') && ((char)param_2[0x2d] == '\0')) &&
       (*(longlong *)(param_2 + 0x28) == 0)) {
      if ((bVar8) && (*(longlong *)(param_1 + 0x42) != 0)) {
        plVar21 = (longlong *)(param_1 + 0x3e);
        if ((longlong *)(param_2 + 0x1e) != plVar21) {
          if (0xf < *(ulonglong *)(param_1 + 0x44)) {
            plVar21 = (longlong *)*plVar21;
          }
          FUN_180113930(param_2 + 0x1e,plVar21);
        }
      }
      *(undefined1 *)((longlong)param_2 + 0xfb) = 0;
      goto LAB_1803ee079;
    }
    if (!bVar8) goto LAB_1803ee079;
    UVar15 = GetTickCount64();
    *(ULONGLONG *)(param_1 + 0x38) = UVar15 + 0xfa;
    *(undefined1 *)((longlong)param_1 + 0x17b) = 1;
    *(undefined1 *)((longlong)param_1 + 0x17a) = *(undefined1 *)((longlong)param_2 + 0xfa);
  }
  local_198 = (undefined1  [16])0x0;
  FUN_1803c9920(param_1 + 0x100,local_198);
LAB_1803ee4b1:
  FUN_1805f68fc(piVar1);
  FUN_18015c010(param_2 + 0x34);
  FUN_18015c010(param_2 + 0x1e);
  FUN_18015c010(param_2 + 4);
}



