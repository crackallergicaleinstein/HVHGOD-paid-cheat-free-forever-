// FUN_18025e110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025e110 */

undefined8 FUN_18025e110(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  undefined1 auVar7 [64];
  
  lVar1 = *(longlong *)(param_2 + 0x90);
  fVar3 = *(float *)(lVar1 + 0x2370) - DAT_180b8e130;
  fVar4 = *(float *)(lVar1 + 0x2374) - DAT_180b8e134;
  fVar5 = *(float *)(lVar1 + 0x2378) - DAT_180b8e138;
  auVar2 = vpcmpeqd_avx(ZEXT416(DAT_180c7e258),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(ZEXT416(*(uint *)(param_2 + 0x20)),
                         ZEXT416((uint)(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5)),auVar2);
  auVar7 = ZEXT1664(auVar2);
  sVar6 = thunk_FUN_180624430(auVar2._0_8_);
  if ((sVar6 < 1) && (0.0 <= auVar7._0_4_)) {
    return auVar7._0_8_;
  }
  return SUB648(ZEXT464(0x7f7fffff),0);
}



