// FUN_1805580e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805580e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805580e0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined ***local_148;
  undefined8 **local_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_d8 = 0;
  auVar16 = ZEXT864(0);
  uStack_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_90 = 0;
  local_8c = 0;
  puVar8 = &local_d8;
  uVar9 = 0;
  auVar14 = ZEXT464(0x3f800000);
  do {
    if (*(longlong *)((longlong)&PTR_s_hegrenade_1807bfe40 + uVar9) != 0) {
      local_118 = (undefined1  [16])0x0;
      local_108 = (undefined1  [16])0x0;
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(*(longlong *)((longlong)&PTR_s_hegrenade_1807bfe40 + uVar9) + lVar10) !=
               '\0');
      uVar13 = FUN_18015ba30(local_118);
      puVar7 = (undefined8 *)FUN_1803db750(uVar13,local_118,auVar14._0_8_);
      FUN_18015c010(local_118);
      if (puVar7 == (undefined8 *)0x0) {
        local_138 = 0;
        fStack_130 = auVar16._0_4_;
        fStack_12c = fStack_130;
      }
      else {
        local_138 = *puVar7;
        fStack_130 = (float)*(int *)(puVar7 + 4);
        fStack_12c = (float)*(int *)((longlong)puVar7 + 0x24);
      }
      *puVar8 = local_138;
      puVar8[1] = CONCAT44(fStack_12c,fStack_130);
    }
    fVar3 = DAT_180b0a41c;
    local_128 = auVar16._0_4_;
    uVar9 = uVar9 + 8;
    puVar8 = puVar8 + 2;
  } while (uVar9 < 0x28);
  fVar17 = local_128;
  local_124 = local_128;
  fVar15 = local_128;
  if (DAT_180bbecdb == '\0') {
    fVar2 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar4 = vmaxss_avx(auVar14._0_16_,auVar4);
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    fVar15 = auVar5._0_4_ + *(float *)(param_1 + 8) + auVar4._0_4_;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar2 * DAT_180b0a41c + 0.5)),1);
    fVar17 = auVar5._0_4_ + *(float *)(param_1 + 0xc);
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x18)) *
                                         DAT_180b0a41c + 0.5)),1);
    local_128 = (auVar5._0_4_ + *(float *)(param_1 + 8)) - auVar4._0_4_;
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar2 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    local_124 = auVar4._0_4_ + *(float *)(param_1 + 0xc);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  fVar2 = fVar3 * 8.0;
  local_128 = local_128 - fVar2;
  fVar3 = fVar3 * 3.0;
  local_124 = local_124 - fVar3;
  local_138 = CONCAT44(fVar3 + fVar17,fVar2 + fVar15);
  local_f8 = &local_d8;
  local_f0 = 5;
  local_e8 = &PTR_DAT_1807bfda8;
  local_e0 = 5;
  local_118._8_8_ = 5;
  local_118._0_8_ = &PTR_s_HE_Grenade_1807bfe18;
  local_140 = &local_f8;
  local_148 = &local_e8;
  local_158 = &DAT_180c5a50c;
  cVar6 = FUN_1804abea0("##trajectory_target",&local_138,&local_128,local_118);
  if (cVar6 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar10 = FUN_180439770();
    *(undefined8 *)(lVar10 + 0x420) = 0;
    iVar1 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
    uVar9 = (ulonglong)iVar1;
    if (0 < iVar1) {
      plVar12 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30 + uVar9 * 0x38);
      uVar11 = uVar9;
      do {
        if ((*plVar12 == 0) || ((*(uint *)(*plVar12 + 0x14) & 0x8000000) != 0)) break;
        uVar11 = (ulonglong)((int)uVar11 - 1);
        uVar9 = uVar9 - 1;
        plVar12 = plVar12 + -7;
      } while (0 < (longlong)uVar9);
      if ((int)uVar11 < iVar1) {
        FUN_1804c7a50(uVar11 & 0xffffffff,CONCAT71((int7)(uVar9 >> 8),1));
      }
    }
  }
}



