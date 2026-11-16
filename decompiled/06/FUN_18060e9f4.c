// FUN_18060e9f4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e9f4 */

int FUN_18060e9f4(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
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
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180bb2030 == 0) {
      local_30 = PTR_PTR_1808d7448._0_4_;
      uStack_2c = PTR_PTR_1808d7448._4_4_;
      uStack_28 = PTR_DAT_1808d7450._0_4_;
      uStack_24 = PTR_DAT_1808d7450._4_4_;
      goto LAB_18060ea41;
    }
  }
  else {
    local_30 = *param_5;
    uStack_2c = param_5[1];
    uStack_28 = param_5[2];
    uStack_24 = param_5[3];
LAB_18060ea41:
    local_20 = '\x01';
  }
  if (((param_4 == 0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) {
    local_1c = 0x16;
  }
  else {
    iVar2 = FUN_18060b59c();
    if (iVar2 < 0) {
      *param_2 = 0;
    }
    if (iVar2 != -2) goto LAB_18060eab2;
    local_1c = 0x22;
  }
  local_18 = '\x01';
  FUN_18060aa1c(0,0,0,0,0,local_48);
  iVar2 = -1;
LAB_18060eab2:
  uVar1 = local_1c;
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_18060a6e8(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar2;
}



