// FUN_1804f9620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f9620 */

void FUN_1804f9620(float *param_1,longlong *param_2,float param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res10 [8];
  uint local_res18 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  fVar7 = *(float *)(param_2 + 3);
  iVar4 = 0;
  if ((param_3 == fVar7) && (param_4 != 0)) {
    FUN_1804f89b0(&local_78,param_2,0);
    param_1[2] = local_68 - local_6c;
    *param_1 = local_74;
    param_1[1] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar7;
    return;
  }
  param_1[1] = 0.0;
  FUN_1804f89b0(&local_78,param_2,0);
  fVar9 = 0.0;
  fVar6 = 0.0;
  fVar8 = local_64;
  while( true ) {
    fVar5 = fVar9;
    if ((((int)param_3 < (int)fVar8) ||
        ((((*(char *)((longlong)param_2 + 0x77) == '\x01' && (0 < *(int *)param_2[1])) &&
          (*(int *)param_2[1] == (int)local_64 + (int)fVar5)) &&
         (*(char *)(param_2[4] + -1 + (longlong)((int)local_64 + (int)fVar5)) != '\n')))) ||
       (((fVar9 = (float)((int)local_64 + (int)fVar5), fVar9 == fVar7 && (0 < (int)fVar7)) &&
        (*(char *)(param_2[4] + -1 + (longlong)(int)fVar7) != '\n')))) goto LAB_1804f9728;
    param_1[1] = local_70 + param_1[1];
    fVar6 = fVar5;
    if (fVar9 == fVar7) break;
    FUN_1804f89b0(&local_78,param_2,fVar9);
    fVar8 = (float)((int)local_64 + (int)fVar9);
  }
  local_64 = 0.0;
  fVar5 = fVar9;
LAB_1804f9728:
  param_1[3] = fVar5;
  param_1[4] = local_64;
  param_1[5] = fVar6;
  *param_1 = local_78;
  param_1[2] = local_68 - local_6c;
  if ((int)fVar5 < (int)param_3) {
    fVar9 = 0.0;
    fVar7 = -1.0;
    do {
      FUN_1804b0e50(local_res18,(longlong)iVar4 + (longlong)(int)fVar5 + param_2[4],
                    (longlong)(int)param_2[3] + param_2[4]);
      fVar8 = fVar7;
      if ((short)local_res18[0] != 10) {
        lVar1 = *param_2;
        piVar2 = *(int **)(lVar1 + 0x11d8);
        if ((*piVar2 <= (int)(local_res18[0] & 0xffff)) ||
           (fVar6 = *(float *)(*(longlong *)(piVar2 + 2) + ((ulonglong)local_res18[0] & 0xffff) * 4)
           , fVar6 < fVar9)) {
          fVar6 = (float)FUN_1804e8740(piVar2);
          fVar8 = fVar7;
        }
        fVar7 = fVar6 * *(float *)(lVar1 + 0x11e8);
      }
      *param_1 = fVar7 + *param_1;
      iVar3 = (int)param_2[3];
      iVar4 = iVar4 + (int)fVar5;
      if (iVar4 < iVar3) {
        iVar3 = FUN_1804b0e50(local_res10,(longlong)iVar4 + param_2[4],(longlong)iVar3 + param_2[4])
        ;
        iVar3 = iVar3 + iVar4;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar3 - (int)fVar5;
      fVar7 = fVar8;
    } while (iVar3 < (int)param_3);
  }
  return;
}



