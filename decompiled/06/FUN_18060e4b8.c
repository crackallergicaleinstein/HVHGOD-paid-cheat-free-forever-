// FUN_18060e4b8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e4b8 */

undefined4
FUN_18060e4b8(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  
  local_98[0] = 0;
  local_88 = 0;
  local_70 = '\0';
  local_68 = '\0';
  local_60 = '\0';
  if (param_4 == (undefined4 *)0x0) {
    if (DAT_180bb2030 != 0) goto LAB_18060e501;
    local_80 = PTR_PTR_1808d7448._0_4_;
    uStack_7c = PTR_PTR_1808d7448._4_4_;
    uStack_78 = PTR_DAT_1808d7450._0_4_;
    uStack_74 = PTR_DAT_1808d7450._4_4_;
  }
  else {
    local_80 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    uStack_74 = param_4[3];
  }
  local_70 = '\x01';
LAB_18060e501:
  local_res20 = param_5;
  local_res8 = param_2;
  local_res10 = param_1;
  local_res18 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_18060aa1c(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_48 = &local_res8;
    local_40 = local_98;
    local_38 = &local_res10;
    local_30 = &local_res18;
    local_28 = &local_res20;
    local_58 = param_2;
    local_50 = param_2;
    uVar2 = operator()<>(&param_5,&local_50,&local_48,&local_58);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_18060a6e8(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_18060a6e8(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



