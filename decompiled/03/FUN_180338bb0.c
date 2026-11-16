// FUN_180338bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338bb0 */

void FUN_180338bb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short sVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      FUN_180338f00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
      uVar13 = param_2[-4];
      uVar3 = param_2[-3];
      uVar4 = param_2[-2];
      auVar16 = ZEXT464(0x3f800000);
      param_3[-5] = param_2[-5];
      param_3[-4] = uVar13;
      param_3[-3] = uVar3;
      param_3[-2] = uVar4;
      puVar10 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x28);
      puVar9 = param_2 + -10;
      param_3[-1] = param_2[-1];
      puVar12 = param_3 + -5;
      do {
        while( true ) {
          puVar11 = puVar12;
          auVar14 = ZEXT464(*(uint *)((longlong)puVar10 + 0x14));
          auVar16 = ZEXT1664(auVar16._0_16_);
          sVar7 = thunk_FUN_180624430();
          auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar7),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar14._0_16_,auVar16._0_16_,auVar2);
          auVar15 = ZEXT1664(auVar2);
          auVar14 = ZEXT464(*(uint *)((longlong)puVar9 + 0x14));
          sVar7 = thunk_FUN_180624430(*(uint *)((longlong)puVar9 + 0x14));
          puVar12 = puVar11 + -5;
          auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar7),SUB6416(ZEXT464(0),0));
          auVar2 = vblendvps_avx(auVar14._0_16_,auVar16._0_16_,auVar2);
          if (auVar2._0_4_ <= auVar15._0_4_) break;
          uVar13 = puVar9[1];
          uVar3 = puVar9[2];
          uVar4 = puVar9[3];
          *puVar12 = *puVar9;
          puVar11[-4] = uVar13;
          puVar11[-3] = uVar3;
          puVar11[-2] = uVar4;
          puVar11[-1] = puVar9[4];
          if (param_1 == puVar9) {
            uVar13 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            puVar11[-10] = *puVar10;
            puVar11[-9] = uVar13;
            puVar11[-8] = uVar3;
            puVar11[-7] = uVar4;
            puVar11[-6] = puVar10[4];
            FUN_18063aed0((longlong)puVar11 + (-0x50 - ((longlong)puVar10 - (longlong)param_6)),
                          param_6,(longlong)puVar10 - (longlong)param_6);
            return;
          }
          puVar9 = puVar9 + -5;
        }
        uVar13 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *puVar12 = *puVar10;
        puVar11[-4] = uVar13;
        puVar11[-3] = uVar3;
        puVar11[-2] = uVar4;
        puVar1 = puVar10 + 4;
        puVar10 = puVar10 + -5;
        puVar11[-1] = *puVar1;
      } while (param_6 != puVar10);
      uVar13 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      puVar11[-10] = *puVar9;
      puVar11[-9] = uVar13;
      puVar11[-8] = uVar3;
      puVar11[-7] = uVar4;
      puVar11[-6] = puVar9[4];
      FUN_18063aed0((longlong)puVar11 + (-0x50 - ((longlong)puVar9 - (longlong)param_1)),param_1,
                    (longlong)puVar9 - (longlong)param_1);
      uVar13 = param_6[1];
      uVar3 = param_6[2];
      uVar4 = param_6[3];
      *param_1 = *param_6;
      param_1[1] = uVar13;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1[4] = param_6[4];
    }
  }
  else {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    FUN_18063aed0(param_6,param_1,lVar8);
    uVar13 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    auVar16 = ZEXT464(0x3f800000);
    *param_1 = *param_2;
    param_1[1] = uVar13;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    puVar9 = param_2 + 5;
    param_1[4] = param_2[4];
    puVar12 = (undefined8 *)((longlong)param_6 + lVar8 + -0x28);
    puVar10 = param_6;
    do {
      while( true ) {
        puVar11 = param_1;
        param_1 = puVar11 + 5;
        auVar14 = ZEXT464(*(uint *)((longlong)puVar9 + 0x14));
        auVar16 = ZEXT1664(auVar16._0_16_);
        sVar7 = thunk_FUN_180624430();
        auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar7),SUB6416(ZEXT464(0),0));
        auVar2 = vblendvps_avx(auVar14._0_16_,auVar16._0_16_,auVar2);
        auVar15 = ZEXT1664(auVar2);
        auVar14 = ZEXT464(*(uint *)((longlong)puVar10 + 0x14));
        sVar7 = thunk_FUN_180624430(*(uint *)((longlong)puVar10 + 0x14));
        auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar7),SUB6416(ZEXT464(0),0));
        auVar2 = vblendvps_avx(auVar14._0_16_,auVar16._0_16_,auVar2);
        if (auVar2._0_4_ <= auVar15._0_4_) break;
        uVar13 = puVar9[1];
        uVar3 = puVar9[2];
        uVar4 = puVar9[3];
        *param_1 = *puVar9;
        puVar11[6] = uVar13;
        puVar11[7] = uVar3;
        puVar11[8] = uVar4;
        puVar1 = puVar9 + 4;
        puVar9 = puVar9 + 5;
        puVar11[9] = *puVar1;
        if (puVar9 == param_3) {
          FUN_18063aed0(puVar11 + 10,puVar10,(longlong)param_6 + (lVar8 - (longlong)puVar10));
          return;
        }
      }
      uVar13 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      *param_1 = *puVar10;
      puVar11[6] = uVar13;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar1 = puVar10 + 4;
      puVar10 = puVar10 + 5;
      puVar11[9] = *puVar1;
    } while (puVar10 != puVar12);
    uVar3 = *puVar12;
    uVar4 = *(undefined8 *)((longlong)param_6 + lVar8 + -0x20);
    uVar5 = *(undefined8 *)((longlong)param_6 + lVar8 + -0x18);
    uVar6 = *(undefined8 *)((longlong)param_6 + lVar8 + -0x10);
    uVar13 = *(undefined8 *)((longlong)param_6 + lVar8 + -8);
    lVar8 = (longlong)param_3 - (longlong)puVar9;
    FUN_18063aed0(puVar11 + 10,puVar9,lVar8);
    puVar9 = (undefined8 *)((longlong)puVar11 + lVar8 + 0x50);
    *puVar9 = uVar3;
    puVar9[1] = uVar4;
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    *(undefined8 *)((longlong)puVar11 + lVar8 + 0x70) = uVar13;
  }
  return;
}



