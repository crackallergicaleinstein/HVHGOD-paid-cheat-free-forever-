// FUN_180157120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157120 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180157120(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  puVar3 = (ulonglong *)&local_30;
  local_2c = 8;
  local_30 = 0xc;
  local_28 = 4;
  while( true ) {
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (uint)*pbVar1;
        *param_1 = pbVar1 + 1;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar2;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (uVar2 != 0xffffffff) {
      local_38[0] = (undefined1)uVar2;
      FUN_180157850(param_1 + 7,local_38);
    }
    uVar2 = *(uint *)((longlong)param_1 + 0x14);
    if (uVar2 == 10) break;
    if (((9 < uVar2 - 0x30) && (5 < uVar2 - 0x41)) && (5 < uVar2 - 0x61)) {
    }
    puVar3 = (ulonglong *)((longlong)puVar3 + 4);
    if (puVar3 == &local_20) {
    }
  }
  param_1[6] = param_1[6] + 1;
  param_1[5] = 0;
}



