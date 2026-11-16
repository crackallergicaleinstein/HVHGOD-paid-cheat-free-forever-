// FUN_1803389f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803389f0 */

void FUN_1803389f0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  
  if (param_5 <= param_4) {
LAB_180338b88:
    FUN_18063aed0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  auVar15 = ZEXT464(0x3f800000);
  puVar9 = param_1;
LAB_180338a60:
  puVar3 = puVar9 + param_4 * 5;
  param_5 = param_5 - param_4;
  lVar11 = param_4;
  if (param_5 < param_4) {
    lVar11 = param_5;
  }
  param_5 = param_5 - lVar11;
  param_1 = puVar3 + lVar11 * 5;
  puVar10 = puVar3;
  do {
    auVar12 = ZEXT464(*(uint *)((longlong)puVar10 + 0x14));
    auVar15 = ZEXT1664(auVar15._0_16_);
    sVar8 = thunk_FUN_180624430();
    auVar4 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar8),ZEXT416(0));
    auVar4 = vblendvps_avx(auVar12._0_16_,auVar15._0_16_,auVar4);
    auVar13 = ZEXT1664(auVar4);
    auVar12 = ZEXT464(*(uint *)((longlong)puVar9 + 0x14));
    sVar8 = thunk_FUN_180624430(*(uint *)((longlong)puVar9 + 0x14));
    puVar1 = param_3 + 5;
    auVar4 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar8),ZEXT416(0));
    auVar14 = auVar15._0_16_;
    auVar4 = vblendvps_avx(auVar12._0_16_,auVar14,auVar4);
    if (auVar4._0_4_ <= auVar13._0_4_) {
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *param_3 = *puVar9;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      puVar2 = puVar9 + 4;
      puVar9 = puVar9 + 5;
      param_3[4] = *puVar2;
      if (puVar9 == puVar3) {
        lVar11 = (longlong)param_1 - (longlong)puVar10;
        auVar15 = ZEXT1664(auVar14);
        FUN_18063aed0(puVar1,puVar10,lVar11);
        goto LAB_180338b44;
      }
    }
    else {
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *param_3 = *puVar10;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      puVar2 = puVar10 + 4;
      puVar10 = puVar10 + 5;
      param_3[4] = *puVar2;
      if (puVar10 == param_1) break;
    }
    param_3 = puVar1;
  } while( true );
  lVar11 = (longlong)puVar3 - (longlong)puVar9;
  auVar15 = ZEXT1664(auVar14);
  FUN_18063aed0(puVar1,puVar9,lVar11);
LAB_180338b44:
  param_3 = (undefined8 *)(lVar11 + (longlong)puVar1);
  puVar9 = param_1;
  if (param_5 <= param_4) goto LAB_180338b88;
  goto LAB_180338a60;
}



