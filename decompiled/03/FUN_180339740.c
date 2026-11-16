// FUN_180339740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180339740 */

float * FUN_180339740(float *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  sVar5 = thunk_FUN_180624430(param_2);
  fVar13 = (float)param_2;
  if (sVar5 < 1) {
    sVar5 = thunk_FUN_180624430(param_3);
    fVar10 = (float)param_3;
    if (((sVar5 < 1) && (fVar11 = 0.0, 0.0 < fVar10)) && (lVar1 = *param_4, -1 < lVar1)) {
      lVar4 = param_4[1];
      fVar14 = 1.0;
      if ((char)lVar4 == '\0') {
        if ((-1 < param_4[2]) || (param_4[2] == -0x400)) {
          fVar12 = *(float *)(param_4 + 3);
          sVar5 = thunk_FUN_180624430(fVar12);
          if ((sVar5 < 1) && ((fVar11 <= fVar12 && (fVar12 < fVar14)))) goto LAB_180339847;
        }
      }
      else {
        if (*(char *)((longlong)param_4 + 9) == '\0') {
          *(undefined1 *)(param_1 + 1) = 1;
          *param_1 = 0.0;
          return param_1;
        }
        sVar5 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_4 + 0x1c));
        if (sVar5 < 1) {
LAB_180339847:
          iVar6 = 0;
          while( true ) {
            fVar12 = (float)iVar6 * 0.015625;
            if ((char)lVar4 == '\0') {
              fVar2 = fVar12 - *(float *)(param_4 + 3);
              lVar7 = lVar1 - param_4[2];
              if (fVar2 < fVar11) {
                fVar2 = fVar2 + fVar14;
                lVar7 = lVar7 + -1;
              }
              fVar2 = (float)lVar7 * fVar10 + fVar2 * fVar10;
              bVar9 = fVar2 == fVar13;
              bVar8 = fVar2 < fVar13;
            }
            else {
              fVar2 = fVar13 + *(float *)((longlong)param_4 + 0x1c);
              fVar3 = (float)lVar1 * fVar10 + fVar12 * fVar10;
              bVar9 = fVar3 == fVar2;
              bVar8 = fVar3 < fVar2;
            }
            if (!bVar8 && !bVar9) break;
            iVar6 = iVar6 + 1;
            if (0x3f < iVar6) {
              *param_1 = 1.0;
              *(undefined1 *)(param_1 + 1) = 1;
              return param_1;
            }
          }
          *param_1 = fVar12;
          *(undefined1 *)(param_1 + 1) = 1;
          return param_1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



