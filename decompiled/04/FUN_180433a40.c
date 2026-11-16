// FUN_180433a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180433a40 */

void FUN_180433a40(undefined8 *param_1,int param_2,float *param_3,float *param_4,undefined4 *param_5
                  )

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [64];
  
  if (*(char *)*param_1 == '\0') {
    if (param_2 == 0) {
      pfVar4 = *(float **)param_1[2];
      *param_3 = *pfVar4;
      fVar7 = pfVar4[1];
    }
    else if (param_2 == *(int *)param_1[3] + -1) {
      lVar3 = *(longlong *)param_1[2];
      piVar2 = (int *)param_1[1];
      *param_3 = *(float *)(lVar3 + -8 + (longlong)*piVar2 * 8);
      fVar7 = *(float *)(lVar3 + -4 + (longlong)*piVar2 * 8);
    }
    else {
      lVar3 = *(longlong *)param_1[2];
      lVar6 = (longlong)param_2;
      *param_3 = (*(float *)(lVar3 + -8 + lVar6 * 8) + *(float *)(lVar3 + lVar6 * 8)) * 0.5;
      fVar7 = (*(float *)(lVar3 + -4 + lVar6 * 8) + *(float *)(lVar3 + 4 + lVar6 * 8)) * 0.5;
    }
  }
  else {
    piVar2 = (int *)param_1[1];
    lVar3 = *(longlong *)param_1[2];
    iVar1 = *piVar2;
    lVar6 = (longlong)((param_2 + -1 + iVar1) % iVar1);
    *param_3 = (*(float *)(lVar3 + ((ulonglong)(longlong)param_2 % (ulonglong)(longlong)iVar1) * 8)
               + *(float *)(lVar3 + lVar6 * 8)) * 0.5;
    fVar7 = (*(float *)(lVar3 + 4 +
                       ((ulonglong)(longlong)param_2 % (ulonglong)(longlong)*piVar2) * 8) +
            *(float *)(lVar3 + 4 + lVar6 * 8)) * 0.5;
  }
  *param_4 = fVar7;
  fVar8 = *param_3;
  auVar9 = ZEXT464((uint)fVar8);
  fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_18061e150();
    fVar8 = auVar9._0_4_;
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  if (0.0001 < fVar7) {
    *param_3 = fVar8 / fVar7;
    auVar5 = vminss_avx(SUB6416(ZEXT464(0x40800000),0),ZEXT416((uint)(1.0 / fVar7)));
    *param_4 = *param_4 / fVar7;
    *param_5 = auVar5._0_4_;
    return;
  }
  *param_5 = 0x3f800000;
  return;
}



