// FUN_180267610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180267610 */

float * FUN_180267610(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_2;
  }
  pfVar1 = param_1 + 4;
  if (pfVar1 != param_2) {
    lVar8 = 0x10;
    pfVar7 = pfVar1;
    do {
      uVar9 = *(undefined8 *)pfVar7;
      uVar10 = *(undefined8 *)(pfVar7 + 2);
      if (*param_1 <= (float)uVar9) {
        pfVar6 = (float *)((longlong)param_1 + lVar8 + -0x10);
        fVar2 = *pfVar6;
        pfVar5 = pfVar7;
        while (pfVar4 = pfVar6, (float)uVar9 < fVar2) {
          uVar3 = *(undefined8 *)(pfVar4 + 2);
          *(undefined8 *)pfVar5 = *(undefined8 *)pfVar4;
          *(undefined8 *)(pfVar5 + 2) = uVar3;
          pfVar6 = pfVar4 + -4;
          pfVar5 = pfVar4;
          fVar2 = pfVar4[-4];
        }
        *(undefined8 *)pfVar5 = uVar9;
        *(undefined8 *)(pfVar5 + 2) = uVar10;
      }
      else {
        FUN_18063aed0(pfVar1,param_1,lVar8);
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 2) = uVar10;
      }
      pfVar7 = pfVar7 + 4;
      lVar8 = lVar8 + 0x10;
    } while (pfVar7 != param_2);
  }
  return param_2;
}



