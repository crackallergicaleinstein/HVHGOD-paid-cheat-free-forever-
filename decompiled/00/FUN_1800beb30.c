// FUN_1800beb30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800beb30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800beb30(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_20 = 0;
  FUN_18015ba30(local_38,*param_2,param_2[1]);
  FUN_1800be5c0(param_1,local_38,&DAT_1806bd758);
  FUN_1800be5c0(param_1 + 0x78,local_38,"range");
  FUN_180113930(param_1 + 0x110,"icon outline",0xc);
  if ((undefined1 *)(param_1 + 0x130) != local_38) {
    puVar1 = local_38;
    if (0xf < local_20) {
      puVar1 = (undefined1 *)local_38._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x130),puVar1,local_28);
  }
  local_48 = local_38;
  if (0xf < local_20) {
    local_48 = (char *)local_38._0_8_;
  }
  local_58 = "icon outline width";
  local_50 = 0x12;
  local_40 = local_28;
  FUN_1800f2e80(param_1 + 0x158,&local_48,&local_58);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "icon outline color";
  local_40 = 0x12;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x15c,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "display";
  local_40 = 7;
  local_50 = local_28;
  FUN_1800f1c50(param_1 + 0x160,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "max distance";
  local_40 = 0xc;
  local_50 = local_28;
  FUN_1800f2e80(param_1 + 0x164,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "visibility";
  local_40 = 10;
  local_50 = local_28;
  FUN_1800f3030(param_1 + 0x168,&local_58,&local_48);
  FUN_180113930(param_1 + 400,"distance",8);
  if ((undefined1 *)(param_1 + 0x1b0) != local_38) {
    puVar1 = local_38;
    if (0xf < local_20) {
      puVar1 = (undefined1 *)local_38._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x1b0),puVar1,local_28);
  }
  *(undefined1 *)(param_1 + 0x170) = 1;
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "distance color";
  local_40 = 0xe;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x1d8,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "text color";
  local_40 = 10;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x1dc,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "icon color";
  local_40 = 10;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x1e0,&local_58,&local_48);
  FUN_18015c010(local_38);
}



