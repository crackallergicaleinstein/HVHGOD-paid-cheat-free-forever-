// FUN_180338f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338f00 */

void FUN_180338f00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  
  if (param_5 < param_4) {
    lVar11 = param_5 >> 1;
    lVar7 = param_2 + lVar11 * 0x28;
    uVar6 = (param_2 - param_1) / 0x28;
    lVar8 = param_1;
    if (0 < (longlong)uVar6) {
      auVar13 = ZEXT464(*(uint *)(lVar7 + 0x14));
      sVar4 = thunk_FUN_180624430(*(uint *)(lVar7 + 0x14));
      auVar15 = ZEXT464(0x3f800000);
      do {
        auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar4),SUB6416(ZEXT464(0),0));
        uVar9 = uVar6 >> 1;
        auVar2 = vblendvps_avx(auVar13._0_16_,auVar15._0_16_,auVar2);
        auVar14 = ZEXT1664(auVar2);
        uVar1 = *(uint *)(lVar8 + 0x14 + uVar9 * 0x28);
        auVar12 = ZEXT464(uVar1);
        sVar5 = thunk_FUN_180624430(uVar1);
        auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
        auVar2 = vblendvps_avx(auVar12._0_16_,auVar15._0_16_,auVar2);
        if (auVar2._0_4_ <= auVar14._0_4_) {
          lVar8 = lVar8 + uVar9 * 0x28 + 0x28;
          uVar9 = uVar6 + (-1 - uVar9);
        }
        uVar6 = uVar9;
      } while (0 < (longlong)uVar9);
    }
    lVar10 = (lVar8 - param_1) / 0x28;
  }
  else {
    lVar10 = param_4 >> 1;
    lVar8 = param_1 + lVar10 * 0x28;
    uVar6 = (param_3 - param_2) / 0x28;
    lVar7 = param_2;
    if (0 < (longlong)uVar6) {
      auVar13 = ZEXT464(*(uint *)(lVar8 + 0x14));
      sVar4 = thunk_FUN_180624430(*(uint *)(lVar8 + 0x14));
      auVar15 = ZEXT464(0x3f800000);
      do {
        uVar9 = uVar6 >> 1;
        uVar1 = *(uint *)(lVar7 + 0x14 + uVar9 * 0x28);
        auVar12 = ZEXT464(uVar1);
        sVar5 = thunk_FUN_180624430(uVar1);
        auVar2 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
        auVar2 = vblendvps_avx(auVar12._0_16_,auVar15._0_16_,auVar2);
        auVar3 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar4),SUB6416(ZEXT464(0),0));
        auVar3 = vblendvps_avx(auVar13._0_16_,auVar15._0_16_,auVar3);
        if (auVar2._0_4_ < auVar3._0_4_) {
          lVar7 = lVar7 + uVar9 * 0x28 + 0x28;
          uVar9 = uVar6 + (-1 - uVar9);
        }
        uVar6 = uVar9;
      } while (0 < (longlong)uVar9);
    }
    lVar11 = (lVar7 - param_2) / 0x28;
  }
  FUN_180339220(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar8,lVar7,lVar10,
                lVar11);
  return;
}



