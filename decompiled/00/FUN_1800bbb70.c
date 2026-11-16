// FUN_1800bbb70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bbb70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bbb70(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_158 [32];
  undefined8 ***local_138;
  char *local_130;
  undefined8 local_128;
  char *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 *****local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 ***local_90 [4];
  char local_70 [32];
  undefined8 *****local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_f8 = (undefined8 *****)local_90;
  local_138 = (undefined8 ***)param_2[2];
  local_98 = param_1;
  if (0x7fffffffffffffffU - (longlong)local_138 < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_128 = 9;
  local_130 = " skeleton";
  FUN_18015a9c0(local_90,param_2,param_3,puVar1);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,"skeleton",8);
  local_118 = (char *)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = local_90;
  FUN_18015a8b0(param_1,0,&local_f8,local_d8);
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0x3fc00000;
  local_118 = local_70;
  if (0x7fffffffffffffff - param_2[2] < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 9;
  local_130 = " skeleton";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_70);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18015ba30(local_b8,&DAT_1806bd1f0,4);
  local_118 = (char *)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = (undefined8 ***)local_70;
  FUN_18015a8b0(param_1 + 0x70,0,&local_f8,local_b8);
  *(undefined4 *)(param_1 + 0xd8) = 0x3ee66666;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0xe0) = 0xfff0e1dc;
  *(undefined4 *)(param_1 + 0xe4) = 0xaaffc0ad;
  if (0x7fffffffffffffff - param_2[2] < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 9;
  local_130 = " skeleton";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_50);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = "mode";
  uStack_110 = 4;
  uStack_f0 = local_40;
  FUN_1800f2370(param_1 + 0x68,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = "thickness";
  uStack_110 = 9;
  uStack_f0 = local_40;
  FUN_1800f2e80(param_1 + 0x6c,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = "glow strength";
  uStack_110 = 0xd;
  uStack_f0 = local_40;
  FUN_1800f2e80(param_1 + 0xd8,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = "visible color";
  uStack_110 = 0xd;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0xdc,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = "occluded color";
  uStack_110 = 0xe;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0xe0,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = "glow color";
  uStack_110 = 10;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0xe4,&local_f8,&local_118);
  FUN_18015c010(local_50);
}



