// FUN_1800b73f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b73f0 */

void FUN_1800b73f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *****local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *****local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  if (0x7fffffffffffffff - param_3[2] < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar1 = (undefined8 *)*param_3;
  }
  FUN_18015a9c0(local_38,param_2,param_3,puVar1,param_3[2]," flash check",0xc);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = local_38[0];
  }
  local_50 = local_28;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_1800f29f0(param_1,&local_48,&local_58);
  FUN_18015c010(local_38);
  if (0x7fffffffffffffff - param_3[2] < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  FUN_18015a9c0(local_38);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = local_38[0];
  }
  local_50 = local_28;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_1800f29f0(param_1 + 1,&local_48,&local_58);
  FUN_18015c010(local_38);
  if (0x7fffffffffffffff - param_3[2] < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  FUN_18015a9c0(local_38);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = local_38[0];
  }
  local_50 = local_28;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_1800f29f0(param_1 + 2,&local_48,&local_58);
  FUN_18015c010(local_38);
  if (0x7fffffffffffffff - param_3[2] < 0x11) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  FUN_18015a9c0(local_38);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = local_38[0];
  }
  local_50 = local_28;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_1800f29f0(param_1 + 3,&local_48,&local_58);
  FUN_18015c010(local_38);
  return;
}



