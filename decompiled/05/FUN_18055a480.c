// FUN_18055a480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055a480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18055a480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_148;
  undefined8 **local_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
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
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_d8 = 0;
  auVar17 = ZEXT864(0);
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
  uVar10 = 0;
  puVar9 = &local_d8;
  auVar15 = ZEXT464(0x3f800000);
  local_120 = param_3;
  do {
    lVar8 = *(longlong *)(param_5 + uVar10 * 8);
    if (lVar8 != 0) {
      local_118 = (undefined1  [16])0x0;
      local_108 = (undefined1  [16])0x0;
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(lVar8 + lVar11) != '\0');
      uVar14 = FUN_18015ba30(local_118);
      puVar7 = (undefined8 *)FUN_1803db750(uVar14,local_118,auVar15._0_8_);
      FUN_18015c010(local_118);
      if (puVar7 == (undefined8 *)0x0) {
        fStack_130 = auVar17._0_4_;
        local_138 = 0;
        fStack_12c = fStack_130;
      }
      else {
        local_138 = *puVar7;
        fStack_130 = (float)*(int *)(puVar7 + 4);
        fStack_12c = (float)*(int *)((longlong)puVar7 + 0x24);
      }
      *puVar9 = local_138;
      puVar9[1] = CONCAT44(fStack_12c,fStack_130);
    }
    fVar3 = DAT_180b0a41c;
    local_128 = auVar17._0_4_;
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 2;
  } while (uVar10 < 4);
  fVar18 = local_128;
  local_124 = local_128;
  fVar16 = local_128;
  if (DAT_180bbecdb == '\0') {
    fVar2 = (float)*(int *)(param_1 + 0x2c) * 30.855553 + *(float *)(param_1 + 0x14) + 0.1;
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar4 = vmaxss_avx(auVar15._0_16_,auVar4);
    auVar5 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 0x10) + 0.5)),1);
    fVar16 = auVar5._0_4_ + *(float *)(param_1 + 8) + auVar4._0_4_;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar2 * DAT_180b0a41c + 0.5)),1);
    fVar18 = auVar5._0_4_ + *(float *)(param_1 + 0xc);
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
  local_138 = CONCAT44(fVar3 + fVar18,fVar2 + fVar16);
  local_f8 = &local_d8;
  local_f0 = 4;
  local_e8 = param_6;
  local_e0 = 4;
  local_118._8_8_ = 4;
  local_118._0_8_ = param_4;
  local_140 = &local_f8;
  local_148 = &local_e8;
  local_158 = local_120;
  cVar6 = FUN_1804abea0(param_2,&local_138,&local_128,local_118);
  if (cVar6 != '\0') {
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    lVar8 = FUN_180439770();
    *(undefined8 *)(lVar8 + 0x420) = 0;
    iVar1 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
    uVar10 = (ulonglong)iVar1;
    if (0 < iVar1) {
      plVar13 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30 + uVar10 * 0x38);
      uVar12 = uVar10;
      do {
        if ((*plVar13 == 0) || ((*(uint *)(*plVar13 + 0x14) & 0x8000000) != 0)) break;
        uVar12 = (ulonglong)((int)uVar12 - 1);
        uVar10 = uVar10 - 1;
        plVar13 = plVar13 + -7;
      } while (0 < (longlong)uVar10);
      if ((int)uVar12 < iVar1) {
        FUN_1804c7a50(uVar12 & 0xffffffff,CONCAT71((int7)(uVar10 >> 8),1));
      }
    }
  }
}



