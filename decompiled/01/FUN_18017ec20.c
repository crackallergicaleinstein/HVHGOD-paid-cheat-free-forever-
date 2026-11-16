// FUN_18017ec20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017ec20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017ec20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  local_e0 = param_1;
  FUN_1800a8ec0(local_38);
  if (local_28 == 0) {
    FUN_1800f5370(local_98,local_38);
    puVar2 = local_98;
    uVar3 = 1;
  }
  else {
    local_b8 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_180159e60(local_b8,&DAT_1807c2400,2);
    local_e8 = 0xc2;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_180159e60(local_d8,L"Cache",5);
    local_e8 = 0x3c6;
    uVar1 = FUN_1800a7e60(local_58,local_38,local_d8);
    local_e8 = 0x3ce;
    puVar2 = (undefined1 *)FUN_1800a7e60(local_78,uVar1,local_b8);
    uVar3 = 0x3de;
  }
  local_e8 = uVar3;
  FUN_1800f5370(param_1,puVar2);
  if ((uVar3 & 0x10) != 0) {
    uVar3 = uVar3 & 0xffffffef;
    FUN_18015b930(local_78);
  }
  if ((uVar3 & 8) != 0) {
    uVar3 = uVar3 & 0xfffffff7;
    FUN_18015b930(local_58);
  }
  if ((uVar3 & 4) != 0) {
    uVar3 = uVar3 & 0xfffffffb;
    FUN_18015b930(local_d8);
  }
  if ((uVar3 & 2) != 0) {
    uVar3 = uVar3 & 0xfffffffd;
    FUN_18015b930(local_b8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_18015b930(local_98);
  }
  FUN_18015b930(local_38);
}



