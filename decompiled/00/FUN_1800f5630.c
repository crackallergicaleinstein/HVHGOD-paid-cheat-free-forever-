// FUN_1800f5630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5630 */

void FUN_1800f5630(undefined8 *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_res8;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + param_2) = 0;
    return;
  }
  uVar2 = param_2 - uVar1;
  if (param_1[3] - uVar1 < uVar2) {
    FUN_18013fa60(param_1,uVar2,local_res8,uVar2,param_3);
    return;
  }
  param_1[2] = param_2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_18063ab10(uVar1 + (longlong)param_1,(int)param_3,uVar2);
  *(undefined1 *)(uVar1 + (longlong)param_1 + uVar2) = 0;
  return;
}



