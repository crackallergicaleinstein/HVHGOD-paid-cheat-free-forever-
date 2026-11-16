// FUN_180556e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180556e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180556e00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 *local_138;
  undefined8 **local_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_c8 = 0;
  auVar17 = ZEXT864(0);
  uStack_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  uVar10 = 0;
  puVar9 = &local_c8;
  auVar15 = ZEXT464(0x3f800000);
  local_110 = param_3;
  do {
    lVar8 = *(longlong *)(param_5 + uVar10 * 8);
    if (lVar8 != 0) {
      local_108 = (undefined1  [16])0x0;
      local_f8 = (undefined1  [16])0x0;
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(lVar8 + lVar11) != '\0');
      uVar14 = FUN_18015ba30(local_108);
      puVar7 = (undefined8 *)FUN_1803db750(uVar14,local_108,auVar15._0_8_);
      FUN_18015c010(local_108);
      if (puVar7 == (undefined8 *)0x0) {
        fStack_120 = auVar17._0_4_;
        local_128 = 0;
        fStack_11c = fStack_120;
      }
      else {
        local_128 = *puVar7;
        fStack_120 = (float)*(int *)(puVar7 + 4);
        fStack_11c = (float)*(int *)((longlong)puVar7 + 0x24);
      }
      *puVar9 = local_128;
      puVar9[1] = CONCAT44(fStack_11c,fStack_120);
    }
    fVar3 = DAT_180b0a41c;
    local_118 = auVar17._0_4_;
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 2;
  } while (uVar10 < 3);
  fVar18 = local_118;
  local_114 = local_118;
  fVar16 = local_118;
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
    local_118 = (auVar5._0_4_ + *(float *)(param_1 + 8)) - auVar4._0_4_;
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar2 + 30.855553) * DAT_180b0a41c + 0.5)),1);
    local_114 = auVar4._0_4_ + *(float *)(param_1 + 0xc);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  fVar2 = fVar3 * 8.0;
  local_118 = local_118 - fVar2;
  fVar3 = fVar3 * 3.0;
  local_114 = local_114 - fVar3;
  local_128 = CONCAT44(fVar3 + fVar18,fVar2 + fVar16);
  local_e8 = &local_c8;
  local_e0 = 3;
  local_d8 = param_6;
  local_d0 = 3;
  local_108._8_8_ = 3;
  local_108._0_8_ = param_4;
  local_130 = &local_e8;
  local_138 = &local_d8;
  local_148 = local_110;
  cVar6 = FUN_1804abea0(param_2,&local_128,&local_118,local_108);
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



