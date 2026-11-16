// FUN_18048bb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048bb10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048bb10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auStack_108 [32];
  float *local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if (DAT_180bbecdb == '\0') {
    local_d0 = &local_a8;
    local_c8 = 0;
    fVar3 = 0.0;
    local_d8 = 0;
    local_e0 = CONCAT44(local_e0._4_4_,0x429c0000);
    local_b8 = 0;
    local_e8 = (float *)0x0;
    uStack_a0 = 0;
    local_a8 = 0;
    puVar2 = (undefined8 *)FUN_180487810(local_88,param_1,0,1);
    local_a8 = *puVar2;
    uStack_a0 = puVar2[1];
    uStack_98 = puVar2[2];
    uStack_90 = puVar2[3];
    FUN_1804c2800(param_1);
    local_e8 = &local_68;
    local_68 = fVar3;
    local_64 = fVar3;
    local_60 = fVar3;
    local_5c = fVar3;
    FUN_18048b8e0(&local_a8,DAT_180b0a41c * 62.0,1,&local_60);
    local_c8 = local_c8 & 0xffffffff00000000;
    local_e8 = (float *)&local_b8;
    local_d8 = local_d8 & 0xffffff00;
    local_b8 = CONCAT44(local_64,local_68 - DAT_180b0a41c * 6.0);
    local_a8 = CONCAT44(local_5c,DAT_180b0a41c * 6.0 + local_60);
    local_e0 = param_4;
    FUN_1804ad540("##input",param_2,param_3,&local_a8);
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
}



