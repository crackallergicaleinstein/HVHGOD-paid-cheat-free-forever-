// FUN_18023fb40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023fb40 */

void FUN_18023fb40(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined4 local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  int local_18 [6];
  
  local_res18[0] = param_3;
  local_res10[0] = param_2;
  local_18[1] = 0x96;
  local_18[3] = 0x96;
  local_res8[0] = 0;
  local_18[2] = 0;
  local_18[0] = 0;
  piVar6 = local_res18;
  if (param_2 <= param_3) {
    piVar6 = local_res10;
  }
  piVar4 = local_res18;
  if (param_3 <= param_2) {
    piVar4 = local_res10;
  }
  puVar1 = local_res8;
  if (0.0 <= *(float *)(param_1 + 0x6c)) {
    puVar1 = (undefined4 *)(param_1 + 0x6c);
  }
  puVar5 = local_res20;
  if (*(float *)(param_1 + 0x6c) <= 1.0) {
    puVar5 = puVar1;
  }
  local_res20[0] = 0x3f800000;
  piVar3 = local_18;
  if (-1 < *piVar4) {
    piVar3 = piVar4;
  }
  piVar2 = local_18 + 1;
  if (*piVar4 < 0x97) {
    piVar2 = piVar3;
  }
  piVar4 = local_18 + 2;
  if (-1 < *piVar6) {
    piVar4 = piVar6;
  }
  auVar7._0_4_ = (float)*piVar2 / 100.0;
  auVar7._4_12_ = SUB1612(ZEXT816(0),4);
  piVar3 = local_18 + 3;
  if (*piVar6 < 0x97) {
    piVar3 = piVar4;
  }
  FUN_180242260((float)*piVar3 / 100.0,auVar7._0_8_,*puVar5);
  return;
}



