// FUN_1801418b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801418b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801418b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 *local_60;
  undefined1 local_58 [32];
  undefined8 ***local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = param_1;
  FUN_18015ba30(local_80,&PTR_180700558,0);
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  FUN_18015ba30(local_a0,"out_of_range",0xc);
  uVar1 = FUN_1800a7780(local_58,local_a0,0x196);
  FUN_180114130(local_38,uVar1,local_80,param_3);
  FUN_18015c010(local_58);
  FUN_18015c010(local_a0);
  FUN_18015c010(local_80);
  pppuVar2 = local_38;
  if (0xf < local_20) {
    pppuVar2 = local_38[0];
  }
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = 0x196;
  FUN_18015c090(param_1 + 4,pppuVar2);
  *param_1 = nlohmann::json_abi_v3_12_0::detail::out_of_range::vftable;
  FUN_18015c010(local_38);
}



