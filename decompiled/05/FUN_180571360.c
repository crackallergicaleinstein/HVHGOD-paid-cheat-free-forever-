// FUN_180571360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180571360 */

void FUN_180571360(undefined8 param_1,float *param_2)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float local_res10 [6];
  int local_28 [10];
  
  fVar7 = *param_2;
  sVar2 = thunk_FUN_180624430(fVar7);
  if (sVar2 < 1) {
    local_28[1] = 2;
    local_28[0] = 0;
    local_res10[4] = 100000.0;
    piVar3 = (int *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x2e8);
    local_res10[0] = -100000.0;
    iVar1 = *piVar3;
    piVar5 = local_28;
    if (-1 < iVar1) {
      piVar5 = piVar3;
    }
    piVar3 = local_28 + 1;
    if (iVar1 < 3) {
      piVar3 = piVar5;
    }
    local_res10[2] = fVar7 * 0.35 + *(float *)(&DAT_180c62f58 + (longlong)*piVar3 * 4);
    pfVar6 = local_res10;
    if (-100000.0 <= local_res10[2]) {
      pfVar6 = local_res10 + 2;
    }
    pfVar4 = local_res10 + 4;
    if (local_res10[2] <= 100000.0) {
      pfVar4 = pfVar6;
    }
    *(float *)(&DAT_180c62f58 + (longlong)*piVar3 * 4) = *pfVar4;
  }
  return;
}



