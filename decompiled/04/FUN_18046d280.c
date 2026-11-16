// FUN_18046d280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046d280 */

undefined8 * FUN_18046d280(undefined8 *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  char *pcVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return param_1;
  }
  pfVar2 = (float *)param_4[1];
  lVar3 = param_4[2];
  iVar1 = **(int **)*param_4;
  do {
    pcVar4 = (char *)((undefined8 *)*param_4)[1];
    if ((iVar1 - 1U & 0xfffffffd) == 0) {
      if (*pcVar4 == '\0') {
        fVar6 = *pfVar2;
      }
      else {
        fVar6 = pfVar2[1];
        if (iVar1 == 1) {
          fVar6 = -fVar6;
        }
      }
      pfVar5 = (float *)(lVar3 + (longlong)*param_2 * 8);
      if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_18046d32e;
      if (*pcVar4 == '\0') {
        fVar7 = *pfVar5;
      }
      else {
        fVar7 = pfVar5[1];
        if (iVar1 == 1) {
          fVar7 = -fVar7;
        }
      }
    }
    else {
      if (*pcVar4 == '\0') {
        fVar6 = pfVar2[1];
      }
      else {
        fVar6 = *pfVar2;
        if (iVar1 == 0) {
          fVar6 = -fVar6;
          pfVar5 = (float *)(lVar3 + (longlong)*param_2 * 8);
          goto LAB_18046d32e;
        }
      }
      pfVar5 = (float *)(lVar3 + (longlong)*param_2 * 8);
LAB_18046d32e:
      if (*pcVar4 == '\0') {
        fVar7 = pfVar5[1];
      }
      else {
        fVar7 = *pfVar5;
        if (iVar1 == 0) {
          fVar7 = -fVar7;
        }
      }
    }
    if ((fVar6 < fVar7) || (param_2 = param_2 + 1, param_2 == param_3)) {
      *param_1 = param_2;
      return param_1;
    }
  } while( true );
}



