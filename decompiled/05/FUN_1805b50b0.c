// FUN_1805b50b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b50b0 */

undefined8 FUN_1805b50b0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_res8 [2];
  
  lVar1 = param_1[2];
  local_res8[0] = 0;
  if (param_2 <= 0x7fffffff / (ulonglong)param_1[2]) {
    uVar3 = FUN_18057ac40(*param_1,1,*(undefined4 *)(param_1 + 5),lVar1 * param_2 & 0xffffffff,
                          param_1[6],local_res8);
    param_1[6] = uVar3;
    if (local_res8[0] == 0) {
      param_1[3] = param_2;
      param_1[5] = lVar1 * param_2;
      if ((ulonglong)param_1[4] <= param_2) {
        return 1;
      }
      piVar2 = (int *)param_1[1];
      if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
        *piVar2 = 0x82;
      }
      param_1[4] = param_2;
      return 0;
    }
  }
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    *piVar2 = 0x40;
  }
  return 0;
}



