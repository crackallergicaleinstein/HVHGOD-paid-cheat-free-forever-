// FUN_18031d040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031d040 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031d040(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  float local_40;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)param_1[1]);
  FUN_18031a9e0(*param_1,local_58,1,param_2);
  *(int *)(param_1[2] + 0xc) = *(int *)(param_1[2] + 0xc) + 1;
  if (local_28 != '\0') {
    *(int *)(param_1[2] + 4) = (int)param_2;
    local_80 = 0x3f800000;
    *(float *)(param_1[2] + 8) = local_40 - *(float *)param_1[3];
    local_88 = param_1[6] + 4;
    puVar5 = (undefined8 *)FUN_18030d8f0(local_78,param_1[4],param_1[5],local_58);
    uVar2 = *(undefined4 *)(puVar5 + 3);
    uVar4 = puVar5[1];
    uVar1 = puVar5[2];
    lVar3 = param_1[2];
    *(undefined8 *)(lVar3 + 0x14) = *puVar5;
    *(undefined8 *)(lVar3 + 0x1c) = uVar4;
    *(undefined8 *)(lVar3 + 0x24) = uVar1;
    *(undefined4 *)(lVar3 + 0x2c) = uVar2;
    FUN_18030db60(param_1[2] + 0x14,param_1[7],*(undefined4 *)param_1[8]);
  }
}



