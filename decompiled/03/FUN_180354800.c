// FUN_180354800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354800 */

ushort FUN_180354800(float *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  byte extraout_AH;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_54;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = thunk_FUN_180624430(uVar1);
  if ((short)uVar2 < 1) {
    uStack_54 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar2 = thunk_FUN_180624430(uStack_54);
    if (((short)uVar2 < 1) && (uVar2 = thunk_FUN_180624430(param_1[2]), (short)uVar2 < 1)) {
      uVar1 = *(undefined8 *)param_2;
      uVar2 = thunk_FUN_180624430(uVar1);
      if ((short)uVar2 < 1) {
        uStack_54 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar2 = thunk_FUN_180624430(uStack_54);
        if (((((short)uVar2 < 1) && (uVar2 = thunk_FUN_180624430(param_2[2]), (short)uVar2 < 1)) &&
            (uVar2 = thunk_FUN_180624430(param_3), uVar2 != 2)) &&
           (fVar5 = 0.0, 0.0 < (float)param_3)) {
          fVar6 = param_1[1];
          fVar7 = *param_1;
          fVar3 = (float)FUN_180636420(fVar7,fVar6);
          fVar4 = (float)FUN_180636420(*param_2,param_2[1]);
          if ((fVar3 <= fVar4 + 0.01) &&
             ((fVar3 <= 0.01 || (fVar5 < fVar6 * param_2[1] + fVar7 * *param_2)))) {
            return CONCAT11(extraout_AH,1);
          }
          return (ushort)extraout_AH << 8;
        }
      }
    }
  }
  return uVar2 & 0xff00;
}



