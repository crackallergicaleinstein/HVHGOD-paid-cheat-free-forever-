// FUN_180354970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354970 */

ushort FUN_180354970(float *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  byte extraout_AH;
  float fVar4;
  undefined1 extraout_var [56];
  undefined1 in_ZMM2 [64];
  float fVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  undefined4 uStack_64;
  
  uVar1 = *(undefined8 *)param_1;
  auVar6 = ZEXT1664(in_ZMM2._0_16_);
  uVar3 = thunk_FUN_180624430(uVar1);
  if ((short)uVar3 < 1) {
    uStack_64 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar3 = thunk_FUN_180624430(uStack_64);
    if (((short)uVar3 < 1) && (uVar3 = thunk_FUN_180624430(param_1[2]), (short)uVar3 < 1)) {
      uVar1 = *(undefined8 *)param_2;
      uVar3 = thunk_FUN_180624430(uVar1);
      if ((short)uVar3 < 1) {
        uStack_64 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar3 = thunk_FUN_180624430(uStack_64);
        if (((((short)uVar3 < 1) && (uVar3 = thunk_FUN_180624430(param_2[2]), (short)uVar3 < 1)) &&
            (uVar3 = thunk_FUN_180624430(auVar6._0_8_), uVar3 != 2)) &&
           (fVar5 = 0.0, 0.0 < auVar6._0_4_)) {
          fVar8 = param_1[1];
          fVar9 = *param_1;
          auVar7._0_8_ = FUN_180636420(fVar9,fVar8);
          auVar7._8_56_ = extraout_var;
          auVar7 = ZEXT1664(auVar7._0_16_);
          fVar4 = (float)FUN_180636420(*param_2,param_2[1]);
          auVar2 = vminss_avx(auVar6._0_16_,auVar7._0_16_);
          if ((auVar2._0_4_ <= fVar4 + 0.01) &&
             ((auVar7._0_4_ <= 0.01 || (fVar5 < fVar8 * param_2[1] + fVar9 * *param_2)))) {
            return CONCAT11(extraout_AH,1);
          }
          return (ushort)extraout_AH << 8;
        }
      }
    }
  }
  return uVar3 & 0xff00;
}



