// FUN_18026fca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026fca0 */

void FUN_18026fca0(undefined8 param_1,int param_2,int param_3,char param_4,int param_5,float param_6
                  ,float param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  
  pfVar6 = param_8;
  if (param_5 != 3) {
    pfVar6 = param_8 + 1;
  }
  lVar5 = 8;
  if (param_5 != 3) {
    lVar5 = 0xc;
  }
  fVar1 = *(float *)(lVar5 + (longlong)param_8);
  switch(param_2) {
  case 1:
    *param_9 = param_7 * *pfVar6 * *param_9;
    goto LAB_18026fd0a;
  case 2:
  case 4:
  case 5:
  case 8:
    *param_9 = fVar1 * *param_9;
    break;
  case 3:
    *param_9 = fVar1 * 1.25 * *param_9;
    goto LAB_18026fd0a;
  case 6:
  case 7:
    *param_9 = fVar1 * 0.75 * *param_9;
  }
  if ((param_2 - 1U < 5) || (param_2 == 8)) {
LAB_18026fd0a:
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_3 < 1) || (!bVar4)) || ((param_2 == 1 && (param_4 == '\0')))) {
    fVar1 = *param_9;
  }
  else {
    fVar2 = *param_9;
    fVar1 = param_6 * 0.5 * fVar2;
    fVar7 = (float)param_3;
    if (fVar7 < (fVar2 - fVar1) * 0.5) {
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar2 - (fVar7 + fVar7))),1);
      *param_9 = auVar3._0_4_;
      return;
    }
  }
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar1),1);
  *param_9 = auVar3._0_4_;
  return;
}



