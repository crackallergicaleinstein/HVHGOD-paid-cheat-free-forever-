// FUN_180339510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180339510 */

float * FUN_180339510(float *param_1,float param_2,undefined8 param_3,float param_4,float param_5)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 local_48;
  int iStack_44;
  
  param_2 = param_2 - param_5;
  sVar1 = thunk_FUN_180624430(param_2);
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_3);
    fVar3 = (float)param_3;
    if (sVar1 < 1) {
      if (param_2 <= 0.0) {
        *param_1 = 0.0;
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      if (param_4 <= 0.0001) {
        if (fVar3 < -0.0001) {
          iStack_44 = CONCAT31(iStack_44._1_3_,1);
          *(ulonglong *)param_1 = CONCAT44(iStack_44,param_2 / -fVar3);
          return param_1;
        }
        iStack_44 = (uint)iStack_44._1_3_ << 8;
        *(ulonglong *)param_1 = CONCAT44(iStack_44,local_48);
        return param_1;
      }
      fVar2 = (param_4 + param_4) * param_2 + fVar3 * fVar3;
      if (fVar2 < 0.0) {
        fVar2 = (float)FUN_18061e150(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      *param_1 = (fVar2 + fVar3) / param_4;
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



