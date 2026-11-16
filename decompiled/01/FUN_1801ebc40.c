// FUN_1801ebc40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ebc40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ebc40(undefined1 (*param_1) [16],undefined8 *param_2)

{
  char ****ppppcVar1;
  char ****ppppcVar2;
  undefined1 auStack_78 [48];
  undefined8 *local_48;
  undefined8 local_40;
  char ****local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    local_48 = (undefined8 *)*param_2;
  }
  local_40 = param_2[2];
  FUN_1801a4fb0(local_38,param_2,&local_48);
  ppppcVar2 = (char ****)local_38;
  if (0xf < local_20) {
    ppppcVar2 = local_38[0];
  }
  ppppcVar2 = (char ****)((longlong)ppppcVar2 + local_28);
  ppppcVar1 = (char ****)local_38;
  if (0xf < local_20) {
    ppppcVar1 = local_38[0];
  }
  if (ppppcVar1 != ppppcVar2) {
    do {
      if (*(char *)ppppcVar1 == '\\') {
        *(char *)ppppcVar1 = '/';
      }
      ppppcVar1 = (char ****)((longlong)ppppcVar1 + 1);
    } while (ppppcVar1 != ppppcVar2);
  }
  ppppcVar2 = (char ****)local_38;
  if (0xf < local_20) {
    ppppcVar2 = local_38[0];
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_18015ba30(param_1,ppppcVar2,local_28);
  FUN_18015c010(local_38);
}



