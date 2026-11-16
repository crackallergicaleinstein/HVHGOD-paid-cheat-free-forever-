// FUN_18061742c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061742c */

undefined8 FUN_18061742c(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_1 == (undefined4 *)0x0) {
    if (DAT_180bb2030 != 0) goto LAB_180617487;
    local_30 = PTR_PTR_1808d7448._0_4_;
    uStack_2c = PTR_PTR_1808d7448._4_4_;
    uStack_28 = PTR_DAT_1808d7450._0_4_;
    uStack_24 = PTR_DAT_1808d7450._4_4_;
  }
  else {
    local_30 = *param_1;
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    uStack_24 = param_1[3];
  }
  local_20 = '\x01';
LAB_180617487:
  local_68 = *param_2;
  local_60 = param_2[1];
  local_58 = param_2[2];
  local_50 = param_2[3];
  param_2[3] = 0;
  *param_2 = 0;
  uVar1 = FUN_180616ff8(local_48,&local_68);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
    *(undefined1 *)param_2[3] = 0;
  }
  return uVar1;
}



