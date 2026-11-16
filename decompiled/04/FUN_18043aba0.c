// FUN_18043aba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043aba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18043aba0(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  puVar1 = (undefined8 *)FUN_18043aae0();
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != (undefined8 *)puVar1[1]; puVar2 = puVar2 + 1) {
    if ((undefined1 *)*puVar2 == param_1) {
    }
  }
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) == 0)) {
    param_1[0x10] = *param_1;
  }
  puVar2 = (undefined8 *)puVar1[1];
  if (puVar2 == (undefined8 *)puVar1[2]) {
    FUN_1801b6250(puVar1,puVar2,&local_18);
  }
  *puVar2 = param_1;
  puVar1[1] = puVar1[1] + 8;
}



