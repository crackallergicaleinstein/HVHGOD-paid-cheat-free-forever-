// FUN_180337f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180337f80 */

void FUN_180337f80(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  
  puVar10 = param_1;
  if (0x20 < param_3) {
    lVar11 = (param_3 - 0x21U >> 5) + 1;
    do {
      puVar10 = (undefined8 *)FUN_180334850(puVar10,puVar10 + 0xa0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  FUN_180334850(puVar10,param_2);
  if (param_3 < 0x21) {
    return;
  }
  auVar18 = ZEXT464(0x3f800000);
  puVar10 = param_1;
  puVar13 = param_4;
  lVar11 = param_3;
LAB_180338030:
  lVar11 = lVar11 + -0x20;
  puVar3 = puVar10 + 0xa0;
  lVar14 = 0x20;
  if (lVar11 < 0x20) {
    lVar14 = lVar11;
  }
  lVar11 = lVar11 - lVar14;
  puVar4 = puVar3 + lVar14 * 5;
  puVar12 = puVar3;
  do {
    auVar15 = ZEXT464(*(uint *)((longlong)puVar12 + 0x14));
    auVar18 = ZEXT1664(auVar18._0_16_);
    sVar9 = thunk_FUN_180624430();
    auVar5 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar9),ZEXT416(0));
    auVar5 = vblendvps_avx(auVar15._0_16_,auVar18._0_16_,auVar5);
    auVar16 = ZEXT1664(auVar5);
    auVar15 = ZEXT464(*(uint *)((longlong)puVar10 + 0x14));
    sVar9 = thunk_FUN_180624430(*(uint *)((longlong)puVar10 + 0x14));
    puVar1 = puVar13 + 5;
    auVar5 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar9),ZEXT416(0));
    auVar17 = auVar18._0_16_;
    auVar5 = vblendvps_avx(auVar15._0_16_,auVar17,auVar5);
    if (auVar5._0_4_ <= auVar16._0_4_) {
      uVar6 = puVar10[1];
      uVar7 = puVar10[2];
      uVar8 = puVar10[3];
      *puVar13 = *puVar10;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      puVar2 = puVar10 + 4;
      puVar10 = puVar10 + 5;
      puVar13[4] = *puVar2;
      if (puVar10 == puVar3) {
        lVar14 = (longlong)puVar4 - (longlong)puVar12;
        auVar18 = ZEXT1664(auVar17);
        FUN_18063aed0(puVar1,puVar12,lVar14);
        goto LAB_180338124;
      }
    }
    else {
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      *puVar13 = *puVar12;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      puVar2 = puVar12 + 4;
      puVar12 = puVar12 + 5;
      puVar13[4] = *puVar2;
      if (puVar12 == puVar4) break;
    }
    puVar13 = puVar1;
  } while( true );
  lVar14 = (longlong)puVar3 - (longlong)puVar10;
  auVar18 = ZEXT1664(auVar17);
  FUN_18063aed0(puVar1,puVar10,lVar14);
LAB_180338124:
  puVar13 = (undefined8 *)(lVar14 + (longlong)puVar1);
  puVar10 = puVar4;
  if (lVar11 < 0x21) {
    FUN_18063aed0(puVar13,puVar4,param_2 - (longlong)puVar4);
    lVar11 = 0x40;
    FUN_1803389f0(param_4,param_4 + param_3 * 5,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_1803389f0(param_1,param_2,param_4,lVar11 * 2,param_3,param_5);
      lVar11 = lVar11 * 4;
      FUN_1803389f0(param_4,param_4 + param_3 * 5,param_1,lVar11,param_3,param_5);
    } while (lVar11 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_180338030;
}



