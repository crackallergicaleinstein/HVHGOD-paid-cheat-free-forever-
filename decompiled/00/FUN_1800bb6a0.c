// FUN_1800bb6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bb6a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bb6a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_158 [32];
  undefined8 ***local_138;
  undefined *local_130;
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
  longlong local_78;
  undefined8 *local_70 [4];
  undefined8 *****local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_f8 = (undefined8 *****)local_98;
  local_138 = (undefined8 ***)param_2[2];
  local_78 = param_1;
  if (0x7fffffffffffffffU - (longlong)local_138 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_128 = 4;
  local_130 = &DAT_1806bd558;
  FUN_18015a9c0(local_98,param_2,param_3,puVar1);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,"bounding box",0xc);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (undefined *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = local_98;
  FUN_18015a8b0(param_1,0,&local_f8,local_d8);
  *(undefined1 *)(param_1 + 0x68) = 1;
  local_118 = (undefined8 ***)local_70;
  if (0x7fffffffffffffff - param_2[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 4;
  local_130 = &DAT_1806bd558;
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_70);
  local_b8 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18015ba30(local_b8,&DAT_1806bd570,4);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (undefined *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = (undefined8 ***)local_70;
  FUN_18015a8b0(param_1 + 0x70,1,&local_f8,local_b8);
  local_118 = local_98;
  if (0x7fffffffffffffff - param_2[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 4;
  local_130 = &DAT_1806bd558;
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_98);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_18015ba30(local_d8,"outline",7);
  local_118 = (undefined8 ***)0x0;
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  local_108 = 0;
  local_f8 = (undefined8 *****)0x0;
  uStack_f0 = uStack_110;
  local_e8 = 0;
  local_130 = (undefined *)((ulonglong)local_130 & 0xffffffffffffff00);
  local_138 = local_98;
  FUN_18015a8b0(param_1 + 0xd8,1,&local_f8,local_d8);
  *(undefined4 *)(param_1 + 0x140) = 0x41200000;
  *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x148) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0x150) = 0xffeaabff;
  if (0x7fffffffffffffff - param_2[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_128 = 4;
  local_130 = &DAT_1806bd558;
  local_138 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_50);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd578;
  uStack_110 = 5;
  uStack_f0 = local_40;
  FUN_1800f24e0(param_1 + 0x68,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd580;
  uStack_110 = 0xd;
  uStack_f0 = local_40;
  FUN_1800f2e80(param_1 + 0x140,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd590;
  uStack_110 = 9;
  uStack_f0 = local_40;
  FUN_1800f2e80(param_1 + 0x144,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd5a0;
  uStack_110 = 0xc;
  uStack_f0 = local_40;
  FUN_1800f2e80(param_1 + 0x148,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd5b0;
  uStack_110 = 0xd;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x14c,&local_f8,&local_118);
  local_f8 = local_50;
  if (0xf < local_38) {
    local_f8 = local_50[0];
  }
  local_118 = (undefined8 ***)0x1806bd5c0;
  uStack_110 = 0xe;
  uStack_f0 = local_40;
  FUN_1800aa4b0(param_1 + 0x150,&local_f8,&local_118);
  FUN_18015c010(local_50);
}



