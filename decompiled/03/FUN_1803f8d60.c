// FUN_1803f8d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f8d60 */

undefined8
FUN_1803f8d60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  short sVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  
  pcVar4 = (char *)FUN_1803f9660(param_1,&param_5,param_2,param_3,param_4);
  if ((pcVar4[1] == '\0') || (*pcVar4 == '\0')) {
    return 0;
  }
  lVar6 = *param_2;
  lVar5 = FUN_18017ea70();
  auVar10 = ZEXT864(0);
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  uVar7 = 0;
  if (lVar6 + 0x50 != 0) {
    param_5 = 0;
    cVar2 = FUN_1804514f0(&param_5,lVar6 + 0x50,4);
    if (cVar2 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  auVar8 = ZEXT464(param_5);
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  lVar6 = *param_2;
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar7),SUB6416(ZEXT464(0),0));
  auVar1 = vblendvps_avx(auVar8._0_16_,auVar10._0_16_,auVar1);
  auVar8 = ZEXT1664(auVar1);
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  uVar7 = 0;
  if (lVar6 + 0x54 != 0) {
    param_5 = auVar10._0_4_;
    cVar2 = FUN_1804514f0(&param_5,lVar6 + 0x54,4);
    if (cVar2 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  auVar9 = ZEXT464(param_5);
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar7),SUB6416(ZEXT464(0),0));
  auVar1 = vblendvps_avx(auVar9._0_16_,auVar10._0_16_,auVar1);
  auVar10 = ZEXT1664(auVar1);
  sVar3 = thunk_FUN_180624430(auVar8._0_8_);
  if (sVar3 < 1) {
    sVar3 = thunk_FUN_180624430(auVar10._0_8_);
    if ((((sVar3 < 1) && (16.0 <= auVar8._0_4_)) && (16.0 <= auVar10._0_4_)) &&
       ((auVar8._0_4_ <= 32768.0 && (auVar10._0_4_ <= 32768.0)))) {
      return 1;
    }
  }
  return 0;
}



