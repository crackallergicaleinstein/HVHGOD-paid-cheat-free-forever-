// FUN_1800bd7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bd7e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bd7e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_118 [32];
  undefined8 ***local_f8;
  char *local_f0;
  undefined8 local_e8;
  char *local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 *****local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 ***local_70 [4];
  undefined8 *****local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_b8 = (undefined8 *****)local_70;
  local_f8 = (undefined8 ***)param_2[2];
  local_78 = param_1;
  if (0x7fffffffffffffffU - (longlong)local_f8 < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_e8 = 7;
  local_f0 = " weapon";
  FUN_18015a9c0(local_70,param_2,param_3,puVar1);
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_80 = 0;
  FUN_18015ba30(local_98,"weapon",6);
  local_d8 = (char *)0x0;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  local_c8 = 0;
  local_b8 = (undefined8 *****)0x0;
  uStack_b0 = uStack_d0;
  local_a8 = 0;
  local_f0 = (char *)((ulonglong)local_f0 & 0xffffffffffffff00);
  local_f8 = local_70;
  FUN_18015a8b0(param_1,1,&local_b8,local_98);
  *(undefined1 *)(param_1 + 0x68) = 2;
  *(undefined4 *)(param_1 + 0x6c) = 2;
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x74) = 0xe1ffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xe1ffffff;
  if (0x7fffffffffffffff - param_2[2] < 7) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_e8 = 7;
  local_f0 = " weapon";
  local_f8 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_50);
  local_b8 = local_50;
  if (0xf < local_38) {
    local_b8 = local_50[0];
  }
  local_d8 = "position";
  uStack_d0 = 8;
  uStack_b0 = local_40;
  FUN_1800f3030(param_1 + 0x6c,&local_b8,&local_d8);
  local_b8 = local_50;
  if (0xf < local_38) {
    local_b8 = local_50[0];
  }
  local_d8 = "anchor";
  uStack_d0 = 6;
  uStack_b0 = local_40;
  FUN_1800f2e80(param_1 + 0x70,&local_b8,&local_d8);
  local_b8 = local_50;
  if (0xf < local_38) {
    local_b8 = local_50[0];
  }
  local_d8 = "display";
  uStack_d0 = 7;
  uStack_b0 = local_40;
  FUN_1800f1dc0(param_1 + 0x68,&local_b8,&local_d8);
  local_b8 = local_50;
  if (0xf < local_38) {
    local_b8 = local_50[0];
  }
  local_d8 = "text color";
  uStack_d0 = 10;
  uStack_b0 = local_40;
  FUN_1800aa4b0(param_1 + 0x74,&local_b8,&local_d8);
  local_b8 = local_50;
  if (0xf < local_38) {
    local_b8 = local_50[0];
  }
  local_d8 = "icon color";
  uStack_d0 = 10;
  uStack_b0 = local_40;
  FUN_1800aa4b0(param_1 + 0x78,&local_b8,&local_d8);
  FUN_18015c010(local_50);
}



