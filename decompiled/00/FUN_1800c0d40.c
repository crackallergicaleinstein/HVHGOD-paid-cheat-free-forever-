// FUN_1800c0d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c0d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800c0d40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  char *local_58;
  longlong local_50;
  char *local_48;
  longlong local_40;
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  local_20 = 0;
  FUN_18015ba30(local_38,*param_2,param_2[1]);
  FUN_180113930(param_1 + 0x20,"enabled",7);
  if ((undefined1 *)(param_1 + 0x40) != local_38) {
    puVar3 = local_38;
    if (0xf < local_20) {
      puVar3 = (undefined1 *)local_38._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x40),puVar3,local_28);
  }
  FUN_180113930(param_1 + 0x98,&DAT_1806bd1f0,4);
  if ((undefined1 *)(param_1 + 0xb8) != local_38) {
    puVar3 = local_38;
    if (0xf < local_20) {
      puVar3 = (undefined1 *)local_38._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0xb8),puVar3,local_28);
  }
  local_48 = local_38;
  if (0xf < local_20) {
    local_48 = (char *)local_38._0_8_;
  }
  local_58 = "arc color";
  local_50 = 9;
  local_40 = local_28;
  FUN_1800aa4b0(param_1 + 0x68,&local_48,&local_58);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "icon color";
  local_40 = 10;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x6c,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "background color";
  local_40 = 0x10;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x70,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "glow strength";
  local_40 = 0xd;
  local_50 = local_28;
  FUN_1800f2e80(param_1 + 0xe0,&local_58,&local_48);
  FUN_180113930(param_1 + 0x108,"danger pulse",0xc);
  if ((undefined1 *)(param_1 + 0x128) != local_38) {
    puVar3 = local_38;
    if (0xf < local_20) {
      puVar3 = (undefined1 *)local_38._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x128),puVar3,local_28);
  }
  puVar3 = local_38;
  if (0xf < local_20) {
    puVar3 = (undefined1 *)local_38._0_8_;
  }
  if (local_28 == 0x1a) {
    iVar2 = memcmp(puVar3,"esp indicator - he grenade",0x1a);
    if (iVar2 == 0) {
      FUN_180113930(param_1 + 0x170,"estimated hp loss",0x11);
      if ((undefined1 *)(param_1 + 400) != local_38) {
        puVar3 = local_38;
        if (0xf < local_20) {
          puVar3 = (undefined1 *)local_38._0_8_;
        }
        FUN_180113930((undefined1 *)(param_1 + 400),puVar3,local_28);
      }
    }
  }
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "danger color";
  local_40 = 0xc;
  local_50 = local_28;
  FUN_1800aa4b0(param_1 + 0x1b8,&local_58,&local_48);
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "pulse speed";
  local_40 = 0xb;
  local_50 = local_28;
  FUN_1800f2e80(param_1 + 0x1bc,&local_58,&local_48);
  lVar1 = local_28;
  puVar3 = local_38;
  if (0xf < local_20) {
    puVar3 = (undefined1 *)local_38._0_8_;
  }
  if (local_28 == 0x1a) {
    iVar2 = memcmp(puVar3,"esp indicator - he grenade",0x1a);
    if (iVar2 == 0) goto LAB_1800c1092;
  }
  local_58 = local_38;
  if (0xf < local_20) {
    local_58 = (char *)local_38._0_8_;
  }
  local_48 = "danger distance";
  local_40 = 0xf;
  local_50 = lVar1;
  FUN_1800f2e80(param_1 + 0x1c0,&local_58,&local_48);
LAB_1800c1092:
  FUN_18015c010(local_38);
}



