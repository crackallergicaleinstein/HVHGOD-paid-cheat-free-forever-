// FUN_180152320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180152320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180152320(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 *local_70;
  undefined1 local_68 [32];
  undefined8 ***local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_70 = param_1;
  FUN_18015ba30(local_90,&PTR_180700558,0);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_b0,"out_of_range",0xc);
  uVar1 = FUN_1800a7780(local_68,local_b0,param_2);
  FUN_180114130(local_48,uVar1,local_90,param_3);
  FUN_18015c010(local_68);
  FUN_18015c010(local_b0);
  FUN_18015c010(local_90);
  pppuVar2 = local_48;
  if (0xf < local_30) {
    pppuVar2 = local_48[0];
  }
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = param_2;
  FUN_18015c090(param_1 + 4,pppuVar2);
  *param_1 = nlohmann::json_abi_v3_12_0::detail::out_of_range::vftable;
  FUN_18015c010(local_48);
}



