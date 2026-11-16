// FUN_18015a8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a8b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015a8b0(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_18 = param_5;
  *param_1 = param_2;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = param_3[2];
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined8 *)(param_1 + 0x20) = *param_4;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  param_4[3] = 0xf;
  *(undefined1 *)param_4 = 0;
  param_4[2] = 0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined8 *)(param_1 + 0x40) = *param_5;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined1 *)param_5 = 0;
  param_5[2] = 0;
  param_5[3] = 0xf;
  param_1[0x60] = param_6;
  local_28 = param_1;
  local_20 = param_4;
  FUN_18043aba0();
  FUN_18015c010(param_4);
  FUN_18015c010(param_5);
}



