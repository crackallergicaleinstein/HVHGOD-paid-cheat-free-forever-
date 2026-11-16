// FUN_180435a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435a10 */

void FUN_180435a10(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [64];
  float fVar7;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (0.5 < param_4) {
    iVar4 = 0;
    fVar7 = 1.5707964 / (float)param_6;
    if (0 < param_6) {
      do {
        fVar5 = (float)iVar4 * fVar7 + param_5;
        auVar6 = ZEXT464((uint)fVar5);
        fVar5 = (float)FUN_180637540(fVar5);
        local_res20[0] = fVar5 * param_4 + param_2;
        FUN_1802aa650(*param_1,local_res20);
        fVar5 = (float)FUN_180638e00(auVar6._0_8_);
        local_res20[0] = fVar5 * param_4 + param_3;
        FUN_1802aa650(*param_1,local_res20);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_6);
    }
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar2 = *plVar1;
    if (((lVar2 == plVar1[1]) ||
        (lVar3 = plVar1[1] - lVar2 >> 2, *(float *)(lVar2 + -8 + lVar3 * 4) != param_2)) ||
       (*(float *)(lVar2 + -4 + lVar3 * 4) != param_3)) {
      FUN_1802aa650(plVar1,local_res10);
      FUN_1802aa650(*param_1,local_res18);
    }
  }
  return;
}



