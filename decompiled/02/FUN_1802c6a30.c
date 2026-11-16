// FUN_1802c6a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c6a30 */

void FUN_1802c6a30(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = *param_2;
  if (*param_1 < fVar1) {
    *param_2 = *param_1;
    *param_1 = fVar1;
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  fVar1 = *param_3;
  if (*param_2 < fVar1) {
    *param_3 = *param_2;
    *param_2 = fVar1;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = uVar2;
    fVar1 = *param_2;
    if (*param_1 < fVar1) {
      *param_2 = *param_1;
      *param_1 = fVar1;
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar2;
    }
  }
  return;
}



