// FUN_180421970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180421970 */

void FUN_180421970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (0 < *(int *)(param_1 + 0x9c10)) {
    lVar3 = (longlong)(*(int *)(param_1 + 0x9c10) * 2);
    lVar1 = *(longlong *)(param_1 + 0x9c08);
    fVar5 = ((float)param_3 - *(float *)(lVar1 + -4 + lVar3 * 4)) / 3.0;
    fVar2 = (float)param_2 - *(float *)(lVar1 + -8 + lVar3 * 4);
    fVar4 = fVar2 / 3.0;
    FUN_1804218b0(fVar2,fVar4 + *(float *)(lVar1 + -8 + lVar3 * 4),
                  fVar5 + *(float *)(lVar1 + -4 + lVar3 * 4));
    FUN_1804218b0(param_1,(float)param_2 - fVar4,(float)param_3 - fVar5);
    FUN_1804218b0(param_1,param_2,param_3);
  }
  return;
}



