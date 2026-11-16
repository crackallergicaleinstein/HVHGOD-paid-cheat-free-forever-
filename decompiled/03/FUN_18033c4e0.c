// FUN_18033c4e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033c4e0 */

longlong FUN_18033c4e0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                      uint param_6,float param_7)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [64];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  sVar1 = thunk_FUN_180624430(*param_2);
  if (((sVar1 < 1) && (sVar1 = thunk_FUN_180624430(param_2[1]), sVar1 < 1)) &&
     (sVar1 = thunk_FUN_180624430(param_2[2]), sVar1 < 1)) {
    fVar10 = *param_3;
    sVar1 = thunk_FUN_180624430(fVar10);
    if (((sVar1 < 1) && (sVar1 = thunk_FUN_180624430(param_3[1]), sVar1 < 1)) &&
       (sVar1 = thunk_FUN_180624430(param_3[2]), sVar1 < 1)) {
      fVar5 = *param_4;
      sVar1 = thunk_FUN_180624430(fVar5);
      if (sVar1 < 1) {
        fVar6 = param_4[1];
        sVar1 = thunk_FUN_180624430(fVar6);
        if (sVar1 < 1) {
          fVar8 = param_4[2];
          sVar1 = thunk_FUN_180624430(fVar8);
          if (sVar1 < 1) {
            fVar9 = *param_5;
            sVar1 = thunk_FUN_180624430(fVar9);
            if (sVar1 < 1) {
              fVar7 = param_5[1];
              sVar1 = thunk_FUN_180624430(fVar7);
              if (sVar1 < 1) {
                fVar2 = param_5[2];
                sVar1 = thunk_FUN_180624430(fVar2);
                if ((sVar1 < 1) && (0.0001 < fVar2)) {
                  auVar4 = ZEXT464(param_6);
                  sVar1 = thunk_FUN_180624430(param_6);
                  if ((sVar1 < 1) &&
                     (((fVar3 = 0.0, 0.0 <= auVar4._0_4_ &&
                       (sVar1 = thunk_FUN_180624430(param_7), sVar1 < 1)) && (fVar3 < param_7)))) {
                    FUN_180339630(param_1,(*param_2 - fVar5) * (fVar9 / fVar2) +
                                          (param_2[2] - fVar8) +
                                          (param_2[1] - fVar6) * (fVar7 / fVar2),
                                  (fVar9 / fVar2) * fVar10 + param_3[2] +
                                  (fVar7 / fVar2) * param_3[1],auVar4._0_8_,param_7,fVar3);
                    return param_1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



