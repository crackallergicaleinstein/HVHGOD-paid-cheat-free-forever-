// FUN_180338220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338220 */

void FUN_180338220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  auVar14 = ZEXT464(*(uint *)((longlong)param_2 + 0x14));
  sVar6 = thunk_FUN_180624430(*(uint *)((longlong)param_2 + 0x14));
  auVar13 = ZEXT464(0x3f800000);
  do {
    auVar11 = ZEXT464(*(uint *)((longlong)param_1 + 0x14));
    auVar1 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar6),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar1);
    auVar12 = ZEXT1664(auVar1);
    sVar7 = thunk_FUN_180624430(*(uint *)((longlong)param_1 + 0x14));
    auVar1 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar7),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar11._0_16_,auVar13._0_16_,auVar1);
    if (auVar12._0_4_ < auVar1._0_4_) {
      do {
        puVar8 = param_3;
        lVar9 = param_5;
        if (param_2 == puVar8 + -5) {
          uVar2 = *param_2;
          uVar3 = param_2[1];
          uVar4 = param_2[2];
          uVar5 = param_2[3];
          uVar10 = param_2[4];
          FUN_18063aed0((longlong)puVar8 - ((longlong)param_2 - (longlong)param_1),param_1,
                        (longlong)param_2 - (longlong)param_1);
          *param_1 = uVar2;
          param_1[1] = uVar3;
          param_1[2] = uVar4;
          param_1[3] = uVar5;
          param_1[4] = uVar10;
          return;
        }
        auVar14 = ZEXT464(*(uint *)((longlong)puVar8 + -0x14));
        sVar6 = thunk_FUN_180624430(*(uint *)((longlong)puVar8 + -0x14));
        auVar1 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar6),SUB6416(ZEXT464(0),0));
        auVar1 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar1);
        auVar11 = ZEXT1664(auVar1);
        auVar14 = ZEXT464(*(uint *)((longlong)param_2 + -0x14));
        sVar6 = thunk_FUN_180624430(*(uint *)((longlong)param_2 + -0x14));
        auVar1 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar6),SUB6416(ZEXT464(0),0));
        auVar1 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar1);
        param_5 = lVar9 + -1;
        param_3 = puVar8 + -5;
      } while (auVar1._0_4_ <= auVar11._0_4_);
      if (param_4 == 1) {
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar10 = param_1[4];
        lVar9 = (longlong)puVar8 - (longlong)param_2;
        FUN_18063aed0(param_1,param_2,lVar9);
        puVar8 = (undefined8 *)(lVar9 + (longlong)param_1);
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        *(undefined8 *)(lVar9 + 0x20 + (longlong)param_1) = uVar10;
      }
      else {
        FUN_180338bb0(param_1,param_2,puVar8,param_4,lVar9,param_6,param_7,param_8);
      }
      return;
    }
    param_1 = param_1 + 5;
    param_4 = param_4 + -1;
  } while (param_1 != param_2);
  return;
}



