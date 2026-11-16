// FUN_1804f8920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f8920 */

float FUN_1804f8920(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  float fVar3;
  uint local_res10 [6];
  
  FUN_1804b0e50(local_res10,(longlong)param_2 + param_1[4] + (longlong)param_3,
                (longlong)(int)param_1[3] + param_1[4]);
  if ((short)local_res10[0] == 10) {
    return -1.0;
  }
  lVar1 = *param_1;
  piVar2 = *(int **)(lVar1 + 0x11d8);
  if ((int)(local_res10[0] & 0xffff) < *piVar2) {
    fVar3 = *(float *)(*(longlong *)(piVar2 + 2) + ((ulonglong)local_res10[0] & 0xffff) * 4);
    if (0.0 <= fVar3) goto LAB_1804f8994;
  }
  fVar3 = (float)FUN_1804e8740(piVar2);
LAB_1804f8994:
  return fVar3 * *(float *)(lVar1 + 0x11e8);
}



