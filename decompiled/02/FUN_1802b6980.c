// FUN_1802b6980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b6980 */

void FUN_1802b6980(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  if ((fVar1 < *param_1) || ((fVar1 == *param_1 && (param_2[1] < param_1[1])))) {
    fVar2 = param_2[1];
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *param_1 = fVar1;
    param_1[1] = fVar2;
  }
  fVar1 = *param_3;
  if ((fVar1 < *param_2) || ((fVar1 == *param_2 && (param_3[1] < param_2[1])))) {
    fVar2 = param_3[1];
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *param_2 = fVar1;
    param_2[1] = fVar2;
    if ((fVar1 < *param_1) || ((fVar1 == *param_1 && (fVar2 < param_1[1])))) {
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *param_1 = fVar1;
      param_1[1] = fVar2;
    }
  }
  return;
}



