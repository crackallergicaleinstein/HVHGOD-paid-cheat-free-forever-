// FUN_1800a8ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a8ec0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a8ec0(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0 = param_1;
  FUN_1800a8d90(local_38);
  if (local_28 == 0) {
    FUN_1800f5370(local_78,local_38);
    puVar1 = local_78;
    uVar2 = 1;
  }
  else {
    local_98 = (undefined1  [16])0x0;
    local_88 = 0;
    local_80 = 0;
    FUN_180159e60(local_98,L"Internal",8);
    local_a8 = 0x32;
    puVar1 = (undefined1 *)FUN_1800a7e60(local_58,local_38,local_98);
    uVar2 = 0x36;
  }
  local_a8 = uVar2;
  FUN_1800f5370(param_1,puVar1);
  if ((uVar2 & 4) != 0) {
    uVar2 = uVar2 & 0xfffffffb;
    FUN_18015b930(local_58);
  }
  if ((uVar2 & 2) != 0) {
    uVar2 = uVar2 & 0xfffffffd;
    FUN_18015b930(local_98);
  }
  if ((uVar2 & 1) != 0) {
    FUN_18015b930(local_78);
  }
  FUN_18015b930(local_38);
}



