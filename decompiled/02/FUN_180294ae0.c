// FUN_180294ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180294ae0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180294ae0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auStack_3108 [32];
  undefined8 *local_30e8;
  float local_30d8 [12];
  undefined1 local_30a8 [4100];
  undefined8 local_20a4;
  undefined4 local_209c;
  undefined1 local_2088 [4096];
  undefined1 local_1088 [4096];
  int local_88;
  undefined8 local_84;
  undefined4 local_7c;
  ulonglong local_68;
  undefined8 uStack_30;
  
  uStack_30 = 0x180294afa;
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_3108;
  FUN_1802929a0(local_1088);
  lVar14 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar14 == lVar2) {
    FUN_18063aed0(param_1,local_1088,0x1020);
  }
  else {
    fVar17 = 1.0;
    auVar16 = ZEXT1264(ZEXT812(0)) << 0x20;
    local_30d8[9] = 1.0;
    local_30d8[7] = 0.0;
    local_30d8[6] = 2.0;
    local_30d8[5] = 0.2;
    lVar3 = *(longlong *)(lVar14 + 0x1010);
    pfVar8 = local_30d8 + 5;
    if (0.2 <= DAT_180cb1d18) {
      pfVar8 = &DAT_180cb1d18;
    }
    pfVar7 = local_30d8 + 6;
    if (DAT_180cb1d18 <= 2.0) {
      pfVar7 = pfVar8;
    }
    local_30d8[8] = (float)(ulonglong)(param_3 - *(longlong *)(param_2 + 0x40)) / (*pfVar7 * 1000.0)
    ;
    pfVar8 = local_30d8 + 7;
    if (0.0 <= local_30d8[8]) {
      pfVar8 = local_30d8 + 8;
    }
    pfVar7 = local_30d8 + 9;
    if (local_30d8[8] <= 1.0) {
      pfVar7 = pfVar8;
    }
    fVar4 = (float)(ulonglong)(*(longlong *)(lVar2 + -0x10) - lVar3) * *pfVar7;
    uVar11 = 1;
    uVar9 = (lVar2 - lVar14) / 0x1020;
    if (1 < uVar9) {
      plVar13 = (longlong *)(lVar14 + 0x2030);
      do {
        if (fVar4 <= (float)(ulonglong)(*plVar13 - lVar3)) break;
        uVar11 = uVar11 + 1;
        plVar13 = plVar13 + 0x204;
      } while (uVar11 < uVar9);
    }
    uVar1 = uVar9 - 1;
    uVar5 = uVar11;
    if (uVar1 < uVar11) {
      uVar5 = uVar1;
    }
    lVar10 = uVar5 * 0x1020 + lVar14;
    lVar12 = 0;
    if (uVar11 != 0) {
      if (uVar1 < uVar11 - 1) {
        uVar11 = uVar9;
      }
      lVar12 = uVar11 - 1;
    }
    uVar9 = *(ulonglong *)(lVar10 + 0x1010);
    lVar14 = lVar12 * 0x1020 + lVar14;
    uVar11 = *(ulonglong *)(lVar14 + 0x1010);
    if (uVar11 < uVar9) {
      local_30d8[4] = 1.0;
      local_30d8[0] = 0.0;
      local_30d8[2] = (fVar4 - (float)(uVar11 - lVar3)) / (float)(uVar9 - uVar11);
      pfVar8 = local_30d8;
      if (0.0 <= local_30d8[2]) {
        pfVar8 = local_30d8 + 2;
      }
      pfVar7 = local_30d8 + 4;
      if (local_30d8[2] <= 1.0) {
        pfVar7 = pfVar8;
      }
      auVar15 = ZEXT464((uint)*pfVar7);
    }
    else {
      auVar15 = ZEXT1264(ZEXT812(0)) << 0x20;
    }
    FUN_18063aed0(local_1088,lVar2 + -0x1020,0x1020);
    local_30e8 = &local_84;
    uVar6 = FUN_180294fb0(local_2088,lVar14,lVar10,auVar15._0_8_);
    FUN_18063aed0(local_30a8,uVar6,0x1000);
    FUN_18063aed0(local_1088,local_30a8,0x1000);
    if (((*(char *)(param_2 + 0x1080) != '\0') && (*(int *)(param_2 + 0x1060) == local_88)) &&
       (uVar9 = param_3 - *(longlong *)(param_2 + 0x40), uVar9 < 0x50)) {
      FUN_18063aed0(local_30a8,param_2 + 0x60,0x1020);
      local_209c = local_7c;
      local_20a4 = local_84;
      local_30d8[2] = (float)uVar9 / 80.0;
      local_30d8[0] = fVar17;
      local_30d8[4] = auVar16._0_4_;
      pfVar8 = local_30d8 + 4;
      if (auVar16._0_4_ <= local_30d8[2]) {
        pfVar8 = local_30d8 + 2;
      }
      pfVar7 = local_30d8;
      if (local_30d8[2] <= fVar17) {
        pfVar7 = pfVar8;
      }
      fVar4 = *pfVar7;
      local_30e8 = &local_84;
      uVar6 = FUN_180294fb0(local_2088,local_30a8,local_1088,
                            fVar17 - (fVar17 - (3.0 - (fVar4 + fVar4)) * fVar4 * fVar4));
      FUN_18063aed0(local_30a8,uVar6,0x1000);
      FUN_18063aed0(local_1088,local_30a8,0x1000);
    }
    FUN_18063aed0(param_1,local_1088,0x1020);
  }
}



