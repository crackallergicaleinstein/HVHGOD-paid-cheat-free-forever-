// FUN_18030d2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030d2e0 */

void FUN_18030d2e0(longlong *param_1,longlong param_2,float *param_3,float param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 extraout_var [56];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  
  auVar15 = ZEXT864(0);
  *(int *)(*param_1 + 0x13c) = *(int *)(*param_1 + 0x13c) + 1;
  fStack_ec = 0.0;
  uVar3 = *(undefined1 *)param_1[1];
  uVar4 = *(undefined2 *)param_1[2];
  if (*(char *)(param_2 + 0xbb) != '\0') {
    *(int *)(*param_1 + 0x148) = *(int *)(*param_1 + 0x148) + 1;
    lVar6 = *param_1;
    iVar5 = *(int *)(lVar6 + 0x670);
    lVar10 = (longlong)iVar5;
    if (iVar5 < 0x40) {
      *(int *)(lVar6 + 0x670) = iVar5 + 1;
      *(undefined1 *)(lVar6 + 0x170 + lVar10 * 0x14) = 0x58;
      *(undefined1 *)(lVar6 + 0x171 + lVar10 * 0x14) = uVar3;
      *(undefined2 *)(lVar6 + 0x172 + lVar10 * 0x14) = uVar4;
      *(undefined8 *)(lVar6 + 0x174 + lVar10 * 0x14) = 0x3f800000;
      *(undefined4 *)(lVar6 + 0x17c + lVar10 * 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x180 + lVar10 * 0x14) = 0;
      return;
    }
    return;
  }
  lVar6 = *param_1;
  cVar8 = FUN_18030c0e0(param_2);
  if (cVar8 == '\0') {
    piVar1 = (int *)(lVar6 + 0x144);
    *piVar1 = *piVar1 + 1;
    lVar6 = *param_1;
    iVar5 = *(int *)(lVar6 + 0x670);
    lVar10 = (longlong)iVar5;
    if (iVar5 < 0x40) {
      *(int *)(lVar6 + 0x670) = iVar5 + 1;
      *(undefined1 *)(lVar6 + 0x170 + lVar10 * 0x14) = 0x2d;
      *(undefined1 *)(lVar6 + 0x171 + lVar10 * 0x14) = uVar3;
      *(undefined2 *)(lVar6 + 0x172 + lVar10 * 0x14) = uVar4;
      *(undefined8 *)(lVar6 + 0x174 + lVar10 * 0x14) = 0x3f800000;
      *(undefined4 *)(lVar6 + 0x17c + lVar10 * 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x180 + lVar10 * 0x14) = 0;
      return;
    }
    return;
  }
  piVar1 = (int *)(lVar6 + 0x140);
  *piVar1 = *piVar1 + 1;
  fVar13 = *(float *)(param_2 + 0x94);
  auVar18 = ZEXT464((uint)fVar13);
  fVar16 = *(float *)(param_2 + 0x90);
  auVar20 = ZEXT464((uint)fVar16);
  fVar19 = *(float *)(param_2 + 0x98);
  auVar21 = ZEXT464((uint)fVar19);
  fVar13 = fVar16 * fVar16 + fVar13 * fVar13 + fVar19 * fVar19;
  if (fVar13 < 0.0) {
    auVar14._0_8_ = FUN_18061e150(fVar13);
    auVar14._8_56_ = extraout_var;
    auVar11 = auVar14._0_16_;
  }
  else {
    auVar11 = ZEXT416((uint)SQRT(fVar13));
  }
  auVar14 = ZEXT1664(auVar11);
  sVar9 = thunk_FUN_180624430(auVar11._0_8_);
  if ((0 < sVar9) || (fVar13 = auVar14._0_4_, fVar13 < 1e-06)) {
    auVar18 = ZEXT464(0x3f800000);
    auVar11 = ZEXT816(0);
    auVar17 = ZEXT816(0);
  }
  else {
    auVar11._0_4_ = auVar20._0_4_ / fVar13;
    auVar11._4_12_ = auVar20._4_12_;
    auVar17._0_4_ = auVar18._0_4_ / fVar13;
    auVar17._4_12_ = auVar18._4_12_;
    auVar18 = ZEXT1664(CONCAT124(auVar21._4_12_,auVar21._0_4_ / fVar13));
  }
  auVar21 = ZEXT1664(auVar11);
  auVar20 = ZEXT1664(auVar17);
  auVar17 = vunpcklps_avx(auVar11,auVar17);
  local_e0 = auVar17._0_8_;
  local_d8 = auVar18._0_4_;
  sVar9 = thunk_FUN_180624430(auVar11._0_8_);
  if (((sVar9 < 1) && (sVar9 = thunk_FUN_180624430(auVar20._0_8_), sVar9 < 1)) &&
     (sVar9 = thunk_FUN_180624430(auVar18._0_8_), sVar9 < 1)) {
    fVar16 = auVar20._0_4_;
    fVar19 = auVar21._0_4_;
    fStack_f0 = auVar18._0_4_;
    fVar13 = fVar16 * fVar16 + fVar19 * fVar19 + fStack_f0 * fStack_f0;
    if ((fVar13 <= 0.9) || (1.1 <= fVar13)) goto LAB_18030d72b;
    if (*(float *)(param_1[3] + 0x68) <= fStack_f0) {
      fStack_f4 = *(float *)(param_2 + 0xac);
      local_f8 = 0x57;
      *(undefined1 *)(*param_1 + 0x674) = 1;
      *(int *)(*param_1 + 0x14c) = *(int *)(*param_1 + 0x14c) + 1;
      goto LAB_18030d75d;
    }
    fVar13 = 0.05;
    if (0.05 <= fStack_f0) {
      fStack_f4 = *(float *)(param_2 + 0xac);
      auVar12._0_4_ = -(fVar16 * param_3[1] + fVar19 * *param_3 + fStack_f0 * param_3[2]);
      auVar12._4_4_ = 0x80000000;
      auVar12._8_4_ = 0x80000000;
      auVar12._12_4_ = 0x80000000;
      auVar11 = vmaxss_avx(auVar15._0_16_,auVar12);
      auVar11 = vmaxss_avx(ZEXT416((uint)(auVar11._0_4_ * fStack_f4 * param_4)),auVar15._0_16_);
      auVar18 = ZEXT1664(auVar11);
      fStack_ec = auVar11._0_4_;
      if (fStack_ec <= *(float *)param_1[4]) {
        local_bc = (float)FUN_18030c4c0(&local_e0,*(undefined4 *)param_1[5]);
        lVar6 = *param_1;
        iVar5 = *(int *)(lVar6 + 0x670);
        if (iVar5 < 0x40) {
          *(int *)(lVar6 + 0x670) = iVar5 + 1;
          puVar2 = (undefined8 *)(lVar6 + 0x170 + (longlong)iVar5 * 0x14);
          *puVar2 = CONCAT44(fStack_f4,CONCAT22(uVar4,CONCAT11(uVar3,0x53)));
          puVar2[1] = CONCAT44(fStack_ec,fStack_f0);
          *(float *)(lVar6 + 0x180 + (longlong)iVar5 * 0x14) = local_bc;
        }
        local_b0 = 0x3f800000;
        uStack_a8 = 0;
        *(int *)(*param_1 + 0x154) = *(int *)(*param_1 + 0x154) + 1;
        local_cc = (undefined4)local_e0;
        local_c8 = local_e0._4_4_;
        local_c4 = local_d8;
        local_a0 = *(float *)param_1[6] < local_bc;
        local_d0[0] = 1;
        local_c0 = auVar18._0_4_;
        if ((bool)local_a0) {
          *(undefined1 *)(*param_1 + 0x676) = 1;
          *(int *)(*param_1 + 0x15c) = *(int *)(*param_1 + 0x15c) + 1;
        }
        auVar11 = vpcmpeqd_avx(ZEXT116((byte)local_a0),SUB6416(ZEXT464(0),0));
        auVar11 = vblendvps_avx(SUB6416(ZEXT464(0x41c80000),0),auVar15._0_16_,auVar11);
        local_b8 = local_bc * fVar13 + local_c0 + auVar11._0_4_;
        local_b4 = 0;
        FUN_18030c6e0(*param_1,local_d0);
        return;
      }
      local_f8 = 0x46;
      *(undefined1 *)(*param_1 + 0x677) = 1;
      *(int *)(*param_1 + 0x158) = *(int *)(*param_1 + 0x158) + 1;
      goto LAB_18030d75d;
    }
    bVar7 = 1;
  }
  else {
LAB_18030d72b:
    fStack_f0 = auVar18._0_4_;
    bVar7 = 0;
  }
  fStack_f4 = *(float *)(param_2 + 0xac);
  local_f8 = 0x77;
  *(byte *)(*param_1 + 0x675) = *(byte *)(*param_1 + 0x675) | bVar7;
  *(int *)(*param_1 + 0x150) = *(int *)(*param_1 + 0x150) + 1;
LAB_18030d75d:
  lVar6 = *param_1;
  iVar5 = *(int *)(lVar6 + 0x670);
  if (iVar5 < 0x40) {
    *(int *)(lVar6 + 0x670) = iVar5 + 1;
    puVar2 = (undefined8 *)(lVar6 + 0x170 + (longlong)iVar5 * 0x14);
    *puVar2 = CONCAT44(fStack_f4,CONCAT22(uVar4,CONCAT11(uVar3,local_f8)));
    puVar2[1] = CONCAT44(fStack_ec,fStack_f0);
    *(int *)(lVar6 + 0x180 + (longlong)iVar5 * 0x14) = auVar15._0_4_;
  }
  return;
}



