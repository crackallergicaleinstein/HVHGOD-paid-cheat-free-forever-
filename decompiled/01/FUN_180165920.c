// FUN_180165920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180165920 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165920(undefined1 (*param_1) [16],undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 (*local_c0) [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined2 local_58;
  undefined6 uStack_56;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_c0 = param_1;
  FUN_1801655d0(local_38);
  if (local_28 == 0) {
    FUN_1800f5370(local_98,local_38);
    puVar3 = local_98;
    uVar4 = 2;
  }
  else {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(short *)(param_3 + lVar5 * 2) != 0);
    local_b8 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_180159e60(local_b8,param_3);
    local_c8 = 100;
    puVar3 = (undefined1 *)FUN_1800a7e60(local_78,local_38,local_b8);
    uVar4 = 0x6c;
  }
  local_c8 = uVar4;
  FUN_1800f5370(&local_58,puVar3);
  if ((uVar4 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7;
    FUN_18015b930(local_78);
  }
  if ((uVar4 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb;
    FUN_18015b930(local_b8);
  }
  if ((uVar4 & 2) != 0) {
    FUN_18015b930(local_98);
  }
  FUN_18015b930(local_38);
  if (lStack_48 == 0) {
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    local_b8 = ZEXT816(0x1808d7db8) << 0x40;
    FUN_1800a80b0(&local_c0,&local_58,local_b8);
    uVar2 = uStack_40;
    lVar5 = lStack_48;
    uVar1 = CONCAT62(uStack_56,local_58);
    local_58 = 0;
    uStack_40 = 7;
    lStack_48 = 0;
    *(undefined8 *)*param_1 = uVar1;
    *(undefined8 *)(*param_1 + 8) = uStack_50;
    *(longlong *)param_1[1] = lVar5;
    *(undefined8 *)(param_1[1] + 8) = uVar2;
  }
  FUN_18015b930(&local_58);
}



