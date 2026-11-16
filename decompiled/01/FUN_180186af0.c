// FUN_180186af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180186af0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180186af0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_128 = 0;
  local_120 = param_1;
  FUN_1800a8ec0(local_38);
  if (local_28 == 0) {
    FUN_1800f5370(local_b8,local_38);
    puVar2 = local_b8;
    uVar3 = 1;
  }
  else {
    local_d8 = (undefined1  [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_180159e60(local_d8,L"Models",6);
    local_128 = 0x302;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_180159e60(local_f8,L"Synchronization",0xf);
    local_128 = 0xf06;
    local_118 = (undefined1  [16])0x0;
    local_108 = 0;
    local_100 = 0;
    FUN_180159e60(local_118,L"Cache",5);
    local_128 = 0x3f0e;
    uVar1 = FUN_1800a7e60(local_58,local_38,local_118);
    local_128 = 0x3f1e;
    uVar1 = FUN_1800a7e60(local_78,uVar1,local_f8);
    local_128 = 0x3f3e;
    puVar2 = (undefined1 *)FUN_1800a7e60(local_98,uVar1,local_d8);
    uVar3 = 0x3f7e;
  }
  local_128 = uVar3;
  FUN_1800f5370(param_1,puVar2);
  if ((uVar3 & 0x40) != 0) {
    uVar3 = uVar3 & 0xffffffbf;
    FUN_18015b930(local_98);
  }
  if ((uVar3 & 0x20) != 0) {
    uVar3 = uVar3 & 0xffffffdf;
    FUN_18015b930(local_78);
  }
  if ((uVar3 & 0x10) != 0) {
    uVar3 = uVar3 & 0xffffffef;
    FUN_18015b930(local_58);
  }
  if ((uVar3 & 8) != 0) {
    uVar3 = uVar3 & 0xfffffff7;
    FUN_18015b930(local_118);
  }
  if ((uVar3 & 4) != 0) {
    uVar3 = uVar3 & 0xfffffffb;
    FUN_18015b930(local_f8);
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = uVar3 & 0xfffffffd;
    FUN_18015b930(local_d8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_18015b930(local_b8);
  }
  FUN_18015b930(local_38);
}



