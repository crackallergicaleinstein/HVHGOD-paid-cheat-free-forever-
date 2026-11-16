// FUN_18053b680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053b680 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053b680(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  float local_d0;
  char *local_c8;
  undefined4 local_c0;
  code **local_b8;
  char *local_b0;
  code *local_a8;
  undefined1 *local_a0 [2];
  undefined1 *puStack_90;
  float fStack_8c;
  undefined1 *puStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_c0 = 4;
  local_c8 = "Events";
  local_d0 = 55.0;
  local_d8 = 0x436e0000;
  uVar6 = 0x425c0000;
  FUN_180485630(&local_70,param_1,0);
  local_a0[0] = &DAT_180b0be78;
  local_a0[1] = &DAT_180b0bfb8;
  puStack_90 = &DAT_180b0c088;
  puStack_88 = &DAT_180b0c020;
  local_a8._0_4_ = 0;
  uVar5 = 0x43af0000;
  do {
    pcVar3 = local_a0[(int)local_a8];
    cVar1 = *pcVar3;
    local_b8 = &local_a8;
    local_d0 = (float)uVar5;
    local_b0 = pcVar3;
    FUN_180558ee0(&local_70,(&PTR_s_Damage_Dealt_18086c4c8)[(int)local_a8],pcVar3,&local_b8);
    if (cVar1 != *pcVar3) {
      pcVar3[0x10] = *pcVar3;
    }
    local_a8._0_4_ = (int)local_a8 + 1;
  } while ((int)local_a8 < 4);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  local_a0[0] = (undefined1 *)0x0;
  local_a0[1] = (undefined1 *)0x0;
  puStack_90 = (undefined1 *)0x0;
  puStack_88 = (undefined1 *)0x0;
  local_80 = (undefined1  [16])0x0;
  local_c0 = 3;
  local_c8 = "Output Destinations";
  local_d8 = 0x436a199a;
  uVar7 = 0x436a199a;
  local_d0 = (float)uVar6;
  FUN_180485630(local_a0,param_1,1);
  cVar1 = DAT_180b0b340;
  local_a8 = FUN_18053b180;
  local_d0 = (float)uVar5;
  FUN_180559330(local_a0,"On Screen",&DAT_180b0b340,&local_a8);
  cVar4 = DAT_180b0bf50;
  if (cVar1 != DAT_180b0b340) {
    DAT_180b0b350 = DAT_180b0b340;
  }
  local_a8 = (code *)&DAT_180b0be78;
  local_d0 = (float)uVar5;
  FUN_180559780(local_a0);
  cVar1 = DAT_180b0bee8;
  if (cVar4 != DAT_180b0bf50) {
    DAT_180b0bf60 = DAT_180b0bf50;
  }
  local_a8 = (code *)&DAT_180b0be78;
  local_d0 = (float)uVar5;
  FUN_180559bf0(local_a0);
  if (cVar1 != DAT_180b0bee8) {
    DAT_180b0bef8 = DAT_180b0bee8;
  }
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_d0 = (float)(int)local_80._8_4_ * 30.855553 + 0.6 + fStack_8c + 21.0;
  local_c0 = 1;
  local_c8 = "Game Console";
  local_d8 = uVar7;
  FUN_180485630(&local_70,param_1,1);
  cVar1 = DAT_180b0da70;
  local_a8 = (code *)&DAT_180b0da70;
  local_d0 = (float)uVar5;
  FUN_18055a050(&local_70);
  if (cVar1 != DAT_180b0da70) {
    DAT_180b0da80 = DAT_180b0da70;
  }
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar2 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
  }
}



