// FUN_1800bbf80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bbf80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800bbf80(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined1 auStack_2e8 [32];
  char *local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  char *local_2a8;
  ulonglong uStack_2a0;
  undefined8 local_298;
  undefined1 *local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  undefined1 local_268 [16];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [16];
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  local_2c8 = (char *)param_2[2];
  local_288 = local_168;
  local_148 = param_1;
  if (local_2c8 == (char *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  local_2b8 = 1;
  local_2c0 = &DAT_1806bcfc0;
  FUN_18015a9c0(local_120,param_2,param_3,puVar2);
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_120,puVar2,param_3[2]);
  local_168 = *pauVar1;
  uStack_158 = *(undefined8 *)pauVar1[1];
  uStack_150 = *(undefined8 *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  if (0x7fffffffffffffff - param_3[2] < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_2b8 = 4;
  local_2c0 = &DAT_1806bd604;
  local_2c8 = (char *)param_3[2];
  FUN_18015a9c0(local_140);
  local_2a8 = (char *)0x0;
  uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
  local_298 = 0;
  local_288 = (undefined1 *)0x0;
  uStack_280 = uStack_2a0;
  local_278 = 0;
  local_2c0 = (undefined *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = local_168;
  FUN_18015a8b0(param_1,1,&local_288,local_140);
  FUN_18015c010(local_120);
  *(undefined1 *)(param_1 + 0x68) = 0;
  local_2a8 = local_268;
  if (param_2[2] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_2b8 = 1;
  local_2c0 = &DAT_1806bcfc0;
  local_2c8 = (char *)param_2[2];
  FUN_18015a9c0(local_100);
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_100,puVar2,param_3[2]);
  local_268 = *pauVar1;
  uStack_258 = *(undefined8 *)pauVar1[1];
  uStack_250 = *(undefined8 *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_248 = (undefined1  [16])0x0;
  local_238 = 0;
  local_230 = 0;
  FUN_18015ba30(local_248,"outline",7);
  local_2a8 = (char *)0x0;
  uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
  local_298 = 0;
  local_288 = (undefined1 *)0x0;
  uStack_280 = uStack_2a0;
  local_278 = 0;
  local_2c0 = (undefined *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = local_268;
  FUN_18015a8b0(param_1 + 0x70,1,&local_288,local_248);
  FUN_18015c010(local_100);
  local_2a8 = local_228;
  if (param_2[2] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_2b8 = 1;
  local_2c0 = &DAT_1806bcfc0;
  local_2c8 = (char *)param_2[2];
  FUN_18015a9c0(local_e0);
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_e0,puVar2,param_3[2]);
  local_228 = *pauVar1;
  uStack_218 = *(undefined8 *)pauVar1[1];
  uStack_210 = *(undefined8 *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = 0;
  local_1f0 = 0;
  FUN_18015ba30(local_208,"gradient",8);
  local_2a8 = (char *)0x0;
  uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
  local_298 = 0;
  local_288 = (undefined1 *)0x0;
  uStack_280 = uStack_2a0;
  local_278 = 0;
  local_2c0 = (undefined *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = local_228;
  FUN_18015a8b0(param_1 + 0xd8,1,&local_288,local_208);
  FUN_18015c010(local_e0);
  local_2a8 = local_1e8;
  if (param_2[2] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_2b8 = 1;
  local_2c0 = &DAT_1806bcfc0;
  local_2c8 = (char *)param_2[2];
  FUN_18015a9c0(local_c0);
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_c0,puVar2,param_3[2]);
  local_1e8 = *pauVar1;
  uStack_1d8 = *(undefined8 *)pauVar1[1];
  uStack_1d0 = *(undefined8 *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = 0;
  local_1b0 = 0;
  FUN_18015ba30(local_1c8,"show value",10);
  local_2a8 = (char *)0x0;
  uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
  local_298 = 0;
  local_288 = (undefined1 *)0x0;
  uStack_280 = uStack_2a0;
  local_278 = 0;
  local_2c0 = (undefined *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = local_1e8;
  FUN_18015a8b0(param_1 + 0x140,1,&local_288,local_1c8);
  FUN_18015c010(local_c0);
  local_2a8 = local_1a8;
  if (param_2[2] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_2b8 = 1;
  local_2c0 = &DAT_1806bcfc0;
  local_2c8 = (char *)param_2[2];
  FUN_18015a9c0(local_a0);
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_a0,puVar2,param_3[2]);
  local_1a8 = *pauVar1;
  uStack_198 = *(undefined8 *)pauVar1[1];
  uStack_190 = *(undefined8 *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  local_188 = (undefined1  [16])0x0;
  local_178 = 0;
  local_170 = 0;
  FUN_18015ba30(local_188,&DAT_1806bd1f0,4);
  local_2a8 = (char *)0x0;
  uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
  local_298 = 0;
  local_288 = (undefined1 *)0x0;
  uStack_280 = uStack_2a0;
  local_278 = 0;
  local_2c0 = (undefined *)((ulonglong)local_2c0 & 0xffffffffffffff00);
  local_2c8 = local_1a8;
  FUN_18015a8b0(param_1 + 0x1a8,1,&local_288,local_188);
  FUN_18015c010(local_a0);
  *(undefined4 *)(param_1 + 0x210) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0x214) = 0xffc89182;
  *(undefined4 *)(param_1 + 0x218) = 0xff000000;
  *(undefined8 *)(param_1 + 0x21c) = 0xffffffffff000000;
  *(undefined4 *)(param_1 + 0x224) = 0xffffc0ad;
  *(undefined4 *)(param_1 + 0x228) = 0x3f0ccccd;
  if (param_2[2] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_2b8 = 1;
  local_2c0 = &DAT_1806bcfc0;
  local_2c8 = (char *)param_2[2];
  FUN_18015a9c0(local_80);
  puVar2 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  pauVar1 = (undefined1 (*) [16])FUN_18015b2a0(local_80,param_3,*puVar2);
  local_60 = *pauVar1;
  uStack_50 = *(undefined8 *)pauVar1[1];
  uStack_48 = *(ulonglong *)(pauVar1[1] + 8);
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  FUN_18015c010(local_80);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "position";
  uStack_2a0 = 8;
  uStack_280 = uStack_50;
  FUN_1800f2200(param_1 + 0x68,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "full color";
  uStack_2a0 = 10;
  uStack_280 = uStack_50;
  FUN_1800aa4b0(param_1 + 0x210,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "low color";
  uStack_2a0 = 9;
  uStack_280 = uStack_50;
  FUN_1800aa4b0(param_1 + 0x214,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "background";
  uStack_2a0 = 10;
  uStack_280 = uStack_50;
  FUN_1800aa4b0(param_1 + 0x218,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "outline color";
  uStack_2a0 = 0xd;
  uStack_280 = uStack_50;
  FUN_1800aa4b0(param_1 + 0x21c,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "text color";
  uStack_2a0 = 10;
  uStack_280 = uStack_50;
  FUN_1800aa4b0(param_1 + 0x220,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "glow color";
  uStack_2a0 = 10;
  uStack_280 = uStack_50;
  FUN_1800aa4b0(param_1 + 0x224,&local_288,&local_2a8);
  local_288 = local_60;
  if (0xf < uStack_48) {
    local_288 = (undefined1 *)local_60._0_8_;
  }
  local_2a8 = "glow strength";
  uStack_2a0 = 0xd;
  uStack_280 = uStack_50;
  FUN_1800f2e80(param_1 + 0x228,&local_288,&local_2a8);
  FUN_18015c010(local_60);
}



