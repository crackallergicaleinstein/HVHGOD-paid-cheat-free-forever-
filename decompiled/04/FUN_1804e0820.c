// FUN_1804e0820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e0820 */

void FUN_1804e0820(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  iVar3 = *param_1;
  puVar4 = *(undefined4 **)(param_1 + 2);
  if (-1 < iVar3) {
    if ((int)(iVar3 + 1U) < 4) goto LAB_1804e0a05;
    uVar1 = iVar3 + 1U >> 2;
    uVar5 = (ulonglong)uVar1;
    iVar3 = iVar3 + uVar1 * -4;
    do {
      piVar2 = param_1 + 10;
      if ((*(float *)(*(longlong *)(puVar4 + 4) + 0xc) - (float)puVar4[3]) *
          ((float)puVar4[2] - *(float *)(*(longlong *)(puVar4 + 6) + 8)) -
          ((float)puVar4[3] - *(float *)(*(longlong *)(puVar4 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar4 + 4) + 8) - (float)puVar4[2]) <= 0.0) {
        *puVar4 = 2;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)*piVar2 * 8) = puVar4;
        *piVar2 = *piVar2 + 1;
      }
      puVar4 = *(undefined4 **)(puVar4 + 4);
      if ((*(float *)(*(longlong *)(puVar4 + 4) + 0xc) - (float)puVar4[3]) *
          ((float)puVar4[2] - *(float *)(*(longlong *)(puVar4 + 6) + 8)) -
          ((float)puVar4[3] - *(float *)(*(longlong *)(puVar4 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar4 + 4) + 8) - (float)puVar4[2]) <= 0.0) {
        *puVar4 = 2;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)*piVar2 * 8) = puVar4;
        *piVar2 = *piVar2 + 1;
      }
      piVar2 = param_1 + 10;
      puVar4 = *(undefined4 **)(puVar4 + 4);
      if ((*(float *)(*(longlong *)(puVar4 + 4) + 0xc) - (float)puVar4[3]) *
          ((float)puVar4[2] - *(float *)(*(longlong *)(puVar4 + 6) + 8)) -
          ((float)puVar4[3] - *(float *)(*(longlong *)(puVar4 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar4 + 4) + 8) - (float)puVar4[2]) <= 0.0) {
        *puVar4 = 2;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)*piVar2 * 8) = puVar4;
        *piVar2 = *piVar2 + 1;
      }
      puVar4 = *(undefined4 **)(puVar4 + 4);
      if ((*(float *)(*(longlong *)(puVar4 + 4) + 0xc) - (float)puVar4[3]) *
          ((float)puVar4[2] - *(float *)(*(longlong *)(puVar4 + 6) + 8)) -
          ((float)puVar4[3] - *(float *)(*(longlong *)(puVar4 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar4 + 4) + 8) - (float)puVar4[2]) <= 0.0) {
        *puVar4 = 2;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)*piVar2 * 8) = puVar4;
        *piVar2 = *piVar2 + 1;
      }
      puVar4 = *(undefined4 **)(puVar4 + 4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    for (; -1 < iVar3; iVar3 = iVar3 + -1) {
LAB_1804e0a05:
      if ((*(float *)(*(longlong *)(puVar4 + 4) + 0xc) - (float)puVar4[3]) *
          ((float)puVar4[2] - *(float *)(*(longlong *)(puVar4 + 6) + 8)) -
          ((float)puVar4[3] - *(float *)(*(longlong *)(puVar4 + 6) + 0xc)) *
          (*(float *)(*(longlong *)(puVar4 + 4) + 8) - (float)puVar4[2]) <= 0.0) {
        *puVar4 = 2;
        *(undefined4 **)(*(longlong *)(param_1 + 8) + (longlong)param_1[10] * 8) = puVar4;
        param_1[10] = param_1[10] + 1;
      }
      puVar4 = *(undefined4 **)(puVar4 + 4);
    }
  }
  return;
}



