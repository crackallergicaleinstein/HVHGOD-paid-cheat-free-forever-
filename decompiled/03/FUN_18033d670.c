// FUN_18033d670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033d670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033d670(undefined4 *param_1,float param_2,int param_3)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [64];
  undefined1 auStack_58 [32];
  int local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_38[2] = param_3;
  local_38[1] = 7;
  local_38[0] = 0;
  piVar3 = local_38;
  if (-1 < param_3) {
    piVar3 = local_38 + 2;
  }
  piVar2 = local_38 + 1;
  if (param_3 < 8) {
    piVar2 = piVar3;
  }
  uVar5 = (&DAT_180701dc4)[(longlong)*piVar2 * 2];
  *param_1 = (&DAT_180701dc0)[(longlong)*piVar2 * 2];
  param_1[1] = uVar5;
  fVar4 = (float)FUN_180636c80();
  param_2 = param_2 - fVar4 * 57.295776;
  auVar6 = ZEXT464((uint)param_2);
  sVar1 = thunk_FUN_180624430(param_2);
  if (sVar1 < 1) {
    uVar5 = FUN_180615070(auVar6._0_8_,0x43b40000);
  }
  else {
    uVar5 = 0;
  }
  local_38[0] = 7;
  local_38[1] = 0;
  piVar3 = local_38 + 1;
  if (-1 < param_3) {
    piVar3 = local_38 + 2;
  }
  param_1[2] = uVar5;
  piVar2 = local_38;
  if (param_3 < 8) {
    piVar2 = piVar3;
  }
  param_1[3] = *piVar2;
}



