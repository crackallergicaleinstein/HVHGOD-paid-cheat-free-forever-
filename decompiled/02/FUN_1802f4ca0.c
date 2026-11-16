// FUN_1802f4ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f4ca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f4ca0(undefined1 (*param_1) [16],int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 ****local_80;
  longlong local_78;
  undefined1 (*local_60) [16];
  undefined1 local_58 [32];
  undefined8 ****local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_60 = param_1;
  FUN_1802f4a90(local_38);
  if ((param_2 == 1) && (local_28 == 0)) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    if (0x7fffffffffffffffU - local_28 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_80 = local_38;
    if (0xf < local_20) {
      local_80 = local_38[0];
    }
    local_78 = local_28;
    local_88 = 2;
    FUN_18015a9c0(local_58);
    puVar4 = (undefined8 *)FUN_18015b2a0(local_58,&DAT_1808007bc,2);
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined8 *)*param_1 = *puVar4;
    *(undefined8 *)(*param_1 + 8) = uVar1;
    *(undefined8 *)param_1[1] = uVar2;
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    *(undefined1 *)puVar4 = 0;
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    FUN_18015c010(local_58);
  }
  FUN_18015c010(local_38);
}



