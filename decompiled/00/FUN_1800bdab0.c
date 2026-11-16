// FUN_1800bdab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bdab0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bdab0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_168 [32];
  undefined8 ***local_148;
  undefined *local_140;
  undefined8 local_138;
  char *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 *****local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 ***local_a0 [4];
  char local_80 [32];
  undefined8 *****local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_108 = (undefined8 *****)local_a0;
  local_148 = (undefined8 ***)param_2[2];
  local_a8 = param_1;
  if (0x7fffffffffffffffU - (longlong)local_148 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  local_138 = 4;
  local_140 = &DAT_1806bd77c;
  FUN_18015a9c0(local_a0,param_2,param_3,puVar1);
  local_e8 = (undefined1  [16])0x0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_18015ba30(local_e8,"oof arrow",9);
  local_128 = (char *)0x0;
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  local_118 = 0;
  local_108 = (undefined8 *****)0x0;
  uStack_100 = uStack_120;
  local_f8 = 0;
  local_140 = (undefined *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_148 = local_a0;
  FUN_18015a8b0(param_1,1,&local_108,local_e8);
  local_128 = local_80;
  if (0x7fffffffffffffff - param_2[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_138 = 4;
  local_140 = &DAT_1806bd77c;
  local_148 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_80);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18015ba30(local_c8,&DAT_1806bd1f0,4);
  local_128 = (char *)0x0;
  uStack_120 = uStack_120 & 0xffffffffffffff00;
  local_118 = 0;
  local_108 = (undefined8 *****)0x0;
  uStack_100 = uStack_120;
  local_f8 = 0;
  local_140 = (undefined *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_148 = (undefined8 ***)local_80;
  FUN_18015a8b0(param_1 + 0x68,1,&local_108,local_c8);
  *(undefined4 *)(param_1 + 0xd0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0xd4) = 0x41700000;
  *(undefined4 *)(param_1 + 0xd8) = 0x43480000;
  *(undefined4 *)(param_1 + 0xdc) = 0x43480000;
  *(undefined8 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xf8) = 0xff0c0a0a;
  *(undefined4 *)(param_1 + 0xfc) = 0xd2ffbe78;
  *(undefined4 *)(param_1 + 0x100) = 0xffeaabff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffc0ad;
  if (0x7fffffffffffffff - param_2[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_138 = 4;
  local_140 = &DAT_1806bd77c;
  local_148 = (undefined8 ***)param_2[2];
  FUN_18015a9c0(local_60);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "width";
  uStack_120 = 5;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xd0,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "height";
  uStack_120 = 6;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xd4,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "radius x";
  uStack_120 = 8;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xd8,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "radius y";
  uStack_120 = 8;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xdc,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "glow strength";
  uStack_120 = 0xd;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xe0,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "shape";
  uStack_120 = 5;
  uStack_100 = local_50;
  FUN_1800f3030(param_1 + 0xe4,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "outline";
  uStack_120 = 7;
  uStack_100 = local_50;
  FUN_1800f29f0(param_1 + 0xe8,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "outline width";
  uStack_120 = 0xd;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xec,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "pulse";
  uStack_120 = 5;
  uStack_100 = local_50;
  FUN_1800f29f0(param_1 + 0xe9,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "pulse speed";
  uStack_120 = 0xb;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xf0,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "minimum pulse alpha";
  uStack_120 = 0x13;
  uStack_100 = local_50;
  FUN_1800f2e80(param_1 + 0xf4,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "custom glow color";
  uStack_120 = 0x11;
  uStack_100 = local_50;
  FUN_1800f29f0(param_1 + 0xea,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "glow color";
  uStack_120 = 10;
  uStack_100 = local_50;
  FUN_1800aa4b0(param_1 + 0xfc,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "outline color";
  uStack_120 = 0xd;
  uStack_100 = local_50;
  FUN_1800aa4b0(param_1 + 0xf8,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "visible color";
  uStack_120 = 0xd;
  uStack_100 = local_50;
  FUN_1800aa4b0(param_1 + 0x100,&local_108,&local_128);
  local_108 = local_60;
  if (0xf < local_48) {
    local_108 = local_60[0];
  }
  local_128 = "occluded color";
  uStack_120 = 0xe;
  uStack_100 = local_50;
  FUN_1800aa4b0(param_1 + 0x104,&local_108,&local_128);
  FUN_18015c010(local_60);
}



