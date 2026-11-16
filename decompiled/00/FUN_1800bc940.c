// FUN_1800bc940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bc940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bc940(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_158 [32];
  undefined8 ***local_138;
  char *local_130;
  undefined8 local_128;
  undefined8 ***local_118;
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
  undefined8 ***local_98 [4];
  undefined8 *local_78 [4];
  longlong local_58;
  undefined8 *****local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_f8 = (undefined8 *****)local_98;
  local_138 = (undefined8 ***)param_2[2];
  local_58 = param_1;
  if (0x7fffffffffffffffU - (longlong)local_138 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_128 = 5;
  local_130 = " ammo";
  FUN_18015a9c0(local_98,param_2,param_3,puVar1);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,"ammo bar",8);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = local_98;
  FUN_18015a8b0(param_1,1,&local_f8,local_d8);
  *(undefined1 *)(param_1 + 0x68) = 2;
  local_118 = (undefined8 ***)local_78;
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 5;
  local_130 = " ammo";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_78);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18015ba30(local_b8,"outline",7);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = (undefined8 ***)local_78;
  FUN_18015a8b0(param_1 + 0x70,1,&local_f8,local_b8);
  local_118 = local_98;
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 5;
  local_130 = " ammo";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_98);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,"gradient",8);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = local_98;
  FUN_18015a8b0(param_1 + 0xd8,1,&local_f8,local_d8);
  local_118 = (undefined8 ***)local_78;
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 5;
  local_130 = " ammo";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_78);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18015ba30(local_b8,"show value",10);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = (undefined8 ***)local_78;
  FUN_18015a8b0(param_1 + 0x140,0,&local_f8,local_b8);
  local_118 = local_98;
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 5;
  local_130 = " ammo";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_98);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,&DAT_1806bd1f0,4);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (char *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = local_98;
  FUN_18015a8b0(param_1 + 0x1a8,1,&local_f8,local_d8);
  *(undefined4 *)(param_1 + 0x210) = 0xffeaabff;
  *(undefined4 *)(param_1 + 0x214) = 0xfff4d2ff;
  *(undefined4 *)(param_1 + 0x218) = 0xff000000;
  *(undefined8 *)(param_1 + 0x21c) = 0xffffffffff000000;
  *(undefined4 *)(param_1 + 0x224) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0x228) = 0x3f0ccccd;
  if (0x7fffffffffffffff - param_2[2] < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 5;
  local_130 = " ammo";
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_50);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd630;
  uStack_110 = 8;
  uStack_f0 = local_40;
  FUN_1800f2090(param_1 + 0x68,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd640;
  uStack_110 = 10;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x210,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd650;
  uStack_110 = 9;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x214,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd660;
  uStack_110 = 10;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x218,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd670;
  uStack_110 = 0xd;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x21c,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd680;
  uStack_110 = 10;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x220,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd5f8;
  uStack_110 = 10;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x224,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd1f8;
  uStack_110 = 0xd;
  uStack_f0 = local_40;
  FUN_1800f2e80(param_1 + 0x228,&local_f8,&local_118);
  FUN_18015c010(local_50);
}



