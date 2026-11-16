// FUN_1801212b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801212b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801212b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 *local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined8 ***local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = param_1;
  FUN_18015ba30(local_b0,&PTR_180700558,0);
  FUN_1800a7940(local_68,param_3);
  local_d0 = (undefined1  [16])0x0;
  local_c0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_d0,"parse_error",0xb);
  uVar1 = FUN_1800a7780(local_88,local_d0,0x65);
  local_f0 = local_b0;
  local_e8 = param_4;
  FUN_1800f6ab0(local_48,uVar1);
  FUN_18015c010(local_88);
  FUN_18015c010(local_d0);
  FUN_18015c010(local_68);
  FUN_18015c010(local_b0);
  uVar1 = *param_3;
  pppuVar2 = local_48;
  if (0xf < local_30) {
    pppuVar2 = local_48[0];
  }
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = 0x65;
  FUN_18015c090(param_1 + 4,pppuVar2);
  *param_1 = nlohmann::json_abi_v3_12_0::detail::parse_error::vftable;
  param_1[7] = uVar1;
  FUN_18015c010(local_48);
}



