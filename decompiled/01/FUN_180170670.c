// FUN_180170670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180170670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180170670(undefined1 (*param_1) [16],undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_178 [32];
  undefined1 (*local_158) [16];
  undefined8 local_150;
  undefined1 local_140 [16];
  undefined1 auStack_130 [16];
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [16];
  longlong local_50;
  undefined1 local_40 [16];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_158 = param_1;
  FUN_1800a8ec0(local_60);
  if ((local_50 == 0) || (param_2[1] == 0)) {
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    uVar8 = 0xcbf29ce484222325;
    pbVar4 = (byte *)*param_2;
    pbVar1 = pbVar4 + param_2[1];
    for (; pbVar4 != pbVar1; pbVar4 = pbVar4 + 1) {
      uVar8 = (uVar8 ^ *pbVar4) * 0x100000001b3;
    }
    local_40 = (undefined1  [16])0x0;
    local_30 = 0;
    FUN_18015abc0(local_40,0x11,"%016llx",uVar8);
    local_e0 = (undefined1  [16])0x0;
    local_d0 = (undefined1  [16])0x0;
    lVar7 = -1;
    do {
      lVar2 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_40[lVar2] != '\0');
    FUN_18015ba30(local_e0,local_40);
    pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(local_e0,&DAT_180701408,4);
    local_140 = *pauVar5;
    auStack_130 = pauVar5[1];
    (*pauVar5)[0] = 0;
    *(undefined8 *)pauVar5[1] = 0;
    *(undefined8 *)(pauVar5[1] + 8) = 0xf;
    local_150 = auStack_130._0_8_;
    pauVar5 = &local_140;
    if (0xf < (ulonglong)auStack_130._8_8_) {
      pauVar5 = (undefined1 (*) [16])local_140._0_8_;
    }
    uVar3 = __std_fs_code_page();
    local_158 = pauVar5;
    FUN_1801628d0(local_c0,uVar3,&local_158);
    local_100 = (undefined1  [16])0x0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_180159e60(local_100,L"Forks",5);
    local_120 = (undefined1  [16])0x0;
    local_110 = 0;
    local_108 = 0;
    FUN_180159e60(local_120,L"Configs",7);
    uVar6 = FUN_1800a7e60(local_80,local_60,local_120);
    uVar6 = FUN_1800a7e60(local_a0,uVar6,local_100);
    FUN_1800a7e60(param_1,uVar6,local_c0);
    FUN_18015b930(local_a0);
    FUN_18015b930(local_80);
    FUN_18015b930(local_120);
    FUN_18015b930(local_100);
    FUN_18015b930(local_c0);
    FUN_18015c010(local_140);
    FUN_18015c010(local_e0);
  }
  FUN_18015b930(local_60);
}



