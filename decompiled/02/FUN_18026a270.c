// FUN_18026a270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026a270 */

void FUN_18026a270(float *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  
joined_r0x00018026a28e:
  if (param_5 <= param_4) {
    FUN_18063aed0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  param_5 = param_5 - param_4;
  pfVar2 = param_1 + param_4 * 4;
  lVar6 = param_4;
  if (param_5 < param_4) {
    lVar6 = param_5;
  }
  param_5 = param_5 - lVar6;
  pfVar7 = pfVar2 + lVar6 * 4;
  pfVar5 = pfVar2;
  do {
    puVar1 = param_3 + 2;
    if (*param_1 <= *pfVar5) {
      uVar3 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 2);
      param_1 = param_1 + 4;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      if (param_1 == pfVar2) {
        lVar6 = (longlong)pfVar7 - (longlong)pfVar5;
        goto LAB_18026a313;
      }
    }
    else {
      uVar3 = *(undefined8 *)pfVar5;
      uVar4 = *(undefined8 *)(pfVar5 + 2);
      pfVar5 = pfVar5 + 4;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      if (pfVar5 == pfVar7) break;
    }
    param_3 = puVar1;
  } while( true );
  lVar6 = (longlong)pfVar2 - (longlong)param_1;
  pfVar5 = param_1;
LAB_18026a313:
  FUN_18063aed0(puVar1,pfVar5,lVar6);
  param_3 = (undefined8 *)(lVar6 + (longlong)puVar1);
  param_1 = pfVar7;
  goto joined_r0x00018026a28e;
}



