// FUN_180172820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180172820 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180172820(longlong param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [14];
  char cVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  bVar2 = false;
  local_148 = (undefined1  [16])0x0;
  local_38 = param_2;
  FUN_180172510(0,local_148);
  if (local_148._8_8_ != 0) {
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    FUN_18015ba30(local_138,local_148._0_8_);
    FUN_18016df60(param_1,local_138,0);
    FUN_18015c010(local_138);
    FUN_1801409d0(param_2 + 1,(char)*param_2);
  }
  if (*(char *)(param_1 + 0x232) == '\0') {
    FUN_18015b360(local_118,param_1 + 0x1a0);
    local_148._0_4_ = 1;
    FUN_18015b360(local_f8,param_1 + 0x180);
    local_68 = *param_2;
    uStack_60 = param_2[1];
    *(undefined1 *)param_2 = 0;
    param_2[1] = 0;
    local_c8._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar4 = (undefined1  [14])local_c8._2_14_;
    bVar2 = true;
    local_148._0_4_ = 0x1f;
    uStack_a0 = uStack_110;
    uStack_98 = uStack_108;
    uStack_90 = uStack_100;
    uStack_108 = 0;
    uStack_100 = 0xf;
    local_118[0] = 0;
    uStack_80 = uStack_f0;
    uStack_78 = uStack_e8;
    uStack_70 = uStack_e0;
    uStack_e8 = 0;
    uStack_e0 = 0xf;
    local_f8[0] = 0;
    local_d8 = local_68 & 0xffffffffffffff00;
    uStack_d0 = 0;
    local_c8._8_8_ = SUB168((undefined1  [16])0x0,8);
    local_58 = 0;
    uStack_50 = local_c8._8_8_;
    uStack_48 = 0;
    uStack_40 = 7;
    uStack_b8 = 0;
    uStack_b0 = 7;
    auVar1._14_2_ = 0;
    auVar1._0_14_ = auVar4;
    local_c8 = auVar1 << 0x10;
    cVar5 = FUN_180171620(param_1 + 0x58,local_a8);
    if (cVar5 != '\0') {
      bVar3 = false;
      goto LAB_1801729a9;
    }
  }
  bVar3 = true;
LAB_1801729a9:
  if (bVar2) {
    FUN_18015b930(local_c8);
    FUN_1801409d0(&uStack_d0,local_d8 & 0xff);
    FUN_18015c010(local_f8);
    FUN_18015c010(local_118);
  }
  if (bVar3) {
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    FUN_18015ba30(local_138,"Wait for the current private fork operation.",0x2c);
    FUN_18016df60(param_1,local_138,0);
    FUN_18015c010(local_138);
    FUN_1801409d0(param_2 + 1,(char)*param_2);
  }
  else {
    *(undefined2 *)(param_1 + 0x232) = 1;
    FUN_180113930(param_1 + 0x460,"Syncing private fork...",0x17);
    FUN_1801409d0(param_2 + 1,(char)*param_2);
  }
}



