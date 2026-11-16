// FUN_1800bd030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bd030 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bd030(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  char *local_110;
  undefined8 local_108;
  char *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 ****local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 **local_88 [4];
  undefined8 ****local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_d8 = (undefined8 ****)local_88;
  local_118 = (undefined8 **)param_2[2];
  local_90 = param_1;
  if (0x7fffffffffffffffU - (longlong)local_118 < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  local_108 = 6;
  local_110 = " flags";
  FUN_18015a9c0(local_88,param_2,param_3,puVar5);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_98 = 0;
  FUN_18015ba30(local_b0,"info flags",10);
  local_f8 = (char *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_e8 = 0;
  local_d8 = (undefined8 ****)0x0;
  uStack_d0 = uStack_f0;
  local_c8 = 0;
  local_110 = (char *)((ulonglong)local_110 & 0xffffffffffffff00);
  local_118 = local_88;
  FUN_18015a8b0(param_1,1,&local_d8,local_b0);
  local_b8 = 0x1000000;
  local_b4 = 0x10101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  uVar3 = 0;
  puVar4 = &local_b8;
  do {
    uVar2 = *(undefined1 *)puVar4;
    if (8 < (uint)uVar3) break;
    *(undefined1 *)(uVar3 + 0x68 + param_1) = uVar2;
    uVar3 = (ulonglong)((uint)uVar3 + 1);
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  } while (puVar4 != (undefined4 *)local_b0);
  *(undefined8 *)(param_1 + 0x74) = 3;
  *(undefined4 *)(param_1 + 0x7c) = 0xff8cd2a0;
  *(undefined4 *)(param_1 + 0x80) = 0xfff0e1dc;
  *(undefined4 *)(param_1 + 0x84) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0x88) = 0xfff0e1dc;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0x90) = 0xffaae6f0;
  *(undefined4 *)(param_1 + 0x94) = 0xffcdbeb9;
  *(undefined4 *)(param_1 + 0x98) = 0xffcdcdcd;
  plVar1 = param_2 + 2;
  if (0x7fffffffffffffffU - *plVar1 < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_108 = 6;
  local_110 = " flags";
  local_118 = (undefined8 **)*plVar1;
  FUN_18015a9c0(local_68,puVar4,uVar2,param_2);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "position";
  uStack_f0 = 8;
  uStack_d0 = local_58;
  FUN_1800f3030(param_1 + 0x74,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "anchor";
  uStack_f0 = 6;
  uStack_d0 = local_58;
  FUN_1800f2e80(param_1 + 0x78,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "flags";
  uStack_f0 = 5;
  uStack_d0 = local_58;
  FUN_1800f1f30(param_1 + 0x68,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "money color";
  uStack_f0 = 0xb;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x7c,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "armor color";
  uStack_f0 = 0xb;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x80,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "kit color";
  uStack_f0 = 9;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x84,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "scoped color";
  uStack_f0 = 0xc;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x88,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "defusing color";
  uStack_f0 = 0xe;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x8c,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "flashed color";
  uStack_f0 = 0xd;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x90,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "distance color";
  uStack_f0 = 0xe;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x94,&local_d8,&local_f8);
  local_d8 = local_68;
  if (0xf < local_50) {
    local_d8 = local_68[0];
  }
  local_f8 = "protected color";
  uStack_f0 = 0xf;
  uStack_d0 = local_58;
  FUN_1800aa4b0(param_1 + 0x98,&local_d8,&local_f8);
  FUN_18015c010(local_68);
}



