// FUN_1803074b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803074b0 */

undefined8 FUN_1803074b0(void)

{
  float fVar1;
  undefined1 auVar2 [16];
  char cVar3;
  short sVar4;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  
  cVar3 = FUN_180306f60();
  if ((cVar3 != '\0') && ((DAT_180b8e114 & 1) == 0)) {
    auVar6._0_8_ = FUN_1803070e0();
    auVar6._8_56_ = extraout_var;
    fVar1 = (float)DAT_180b8e174 * (float)DAT_180b8e174 + DAT_180b8e174._4_4_ * DAT_180b8e174._4_4_;
    auVar7 = ZEXT864(0);
    auVar6 = ZEXT1664(auVar6._0_16_);
    if (fVar1 == 0.0) {
      auVar5 = ZEXT864(0);
    }
    else if (fVar1 < 0.0) {
      auVar5._0_8_ = FUN_18061e150(fVar1);
      auVar5._8_56_ = extraout_var_00;
      auVar5 = ZEXT1664(auVar5._0_16_);
    }
    else {
      auVar5 = ZEXT464((uint)SQRT(fVar1));
    }
    sVar4 = thunk_FUN_180624430(auVar5._0_8_);
    if (((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(auVar6._0_8_), sVar4 < 1)) &&
       (auVar6._0_4_ + 1.0 < auVar5._0_4_)) {
      auVar2 = vmaxss_avx(auVar7._0_16_,auVar6._0_16_);
      return auVar2._0_8_;
    }
  }
  return SUB648(ZEXT464(0xbf800000),0);
}



