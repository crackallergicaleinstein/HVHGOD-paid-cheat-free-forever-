// FUN_1804aba00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aba00 */

void FUN_1804aba00(uint param_1,undefined8 *param_2,float *param_3,float *param_4,byte param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar20;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  bVar7 = param_5;
  lVar2 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x14d0);
  uVar13 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),param_5);
  puVar10 = (undefined2 *)FUN_1804aad60(&param_5,param_1,param_3,param_4,uVar13);
  uVar20 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar1 = *puVar10;
  if (*(char *)(puVar10 + 1) != '\0') {
    FUN_1804c7740(param_1,0);
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == param_1)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  auVar18 = ZEXT464(0x3f800000);
  fVar17 = 0.0;
  if (((char)uVar1 != '\0') || (bVar6)) {
    uVar13 = auVar18._0_8_;
  }
  else {
    uVar13 = 0;
  }
  uVar11 = (ulonglong)(param_1 >> 0x1e ^ param_1) * -0x40a7b892e31b1a47;
  uVar11 = (uVar11 >> 0x1b ^ uVar11) * -0x6b2fb644ecceee15;
  uVar11 = uVar11 >> 0x1f ^ uVar11;
  fVar12 = (float)FUN_1804aaa10((uint)(uVar11 >> 0x20) ^ (uint)uVar11,uVar13,0x41900000);
  lVar2 = *(longlong *)(lVar2 + 0x2c8);
  auVar4 = vpcmpeqd_avx(ZEXT116(bVar7),SUB6416(ZEXT464(0),0));
  local_a8 = *param_2;
  _uStack_a0 = CONCAT44(auVar18._0_4_,(int)param_2[1]);
  auVar4 = vblendvps_avx(auVar18._0_16_,SUB6416(ZEXT464(0x3ee66666),0),auVar4);
  auVar15 = ZEXT1664(auVar4);
  local_res10 = (float)FUN_1804b1120(&local_a8);
  fVar19 = DAT_180b0a41c * 4.0;
  local_res14 = auVar15._0_4_;
  fVar14 = ((float)(DAT_180b0a4b0 >> 0x18) / 255.0) * local_res14;
  if (fVar17 <= fVar14) {
    auVar4 = vminss_avx(auVar18._0_16_,ZEXT416((uint)fVar14));
    fVar14 = auVar4._0_4_;
  }
  else {
    fVar14 = 0.0;
  }
  local_res18 = DAT_180b0a41c + *param_4;
  local_res1c = DAT_180b0a41c + param_4[1];
  local_res20 = *param_3 - DAT_180b0a41c;
  local_res24 = param_3[1] - DAT_180b0a41c;
  FUN_1804df870(lVar2,&local_res20,&local_res18,
                (int)(longlong)(fVar14 * 255.0 + 0.5) << 0x18 | DAT_180b0a4b0 & 0xffffff,
                CONCAT44(uVar20,DAT_180b0a41c + fVar19),0);
  uVar20 = *(undefined4 *)(lVar2 + 0x20);
  FUN_1804df870(lVar2,param_3,param_4,0xffffffff,fVar19,0);
  auVar16 = ZEXT464((uint)*param_4);
  auVar15 = ZEXT464((uint)param_3[1]);
  uVar8 = FUN_1804abde0(&local_res10);
  uVar9 = FUN_1804abde0(&local_res10);
  auVar4 = vunpcklps_avx(auVar16._0_16_,auVar15._0_16_);
  FUN_1804e1ee0(lVar2,uVar20,*(undefined4 *)(lVar2 + 0x20),*(undefined8 *)param_3,auVar4._0_8_,uVar9
                ,uVar8);
  if (fVar17 < fVar12) {
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 2.0 + 0.5)),1);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar4 = vmaxss_avx(auVar18._0_16_,auVar4);
    if (fVar17 <= fVar12 * 0.3529412) {
      auVar3 = vminss_avx(auVar18._0_16_,ZEXT416((uint)(fVar12 * 0.3529412)));
      fVar17 = auVar3._0_4_;
    }
    fVar14 = auVar5._0_4_;
    local_res10 = fVar14 + *param_4;
    local_res14 = fVar14 + param_4[1];
    local_res18 = *param_3 - fVar14;
    local_res1c = param_3[1] - fVar14;
    FUN_180463090(lVar2,&local_res18,&local_res10,
                  (int)(longlong)(fVar17 * 255.0 + 0.5) << 0x18 | 0xffffff,fVar14 + fVar19,
                  auVar4._0_4_);
  }
  return;
}



