// FUN_18050e290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050e290 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18050e290(char *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  char local_68 [64];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_68[8] = '\0';
  local_68[9] = '\0';
  local_68[10] = '\0';
  local_68[0xb] = '\0';
  local_68[0xc] = '\0';
  local_68[0xd] = '\0';
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  local_68[0x10] = '\0';
  local_68[0x11] = '\0';
  local_68[0x12] = '\0';
  local_68[0x13] = '\0';
  local_68[0x14] = '\0';
  local_68[0x15] = '\0';
  local_68[0x16] = '\0';
  local_68[0x17] = '\0';
  local_68[0x18] = '\0';
  local_68[0x19] = '\0';
  local_68[0x1a] = '\0';
  local_68[0x1b] = '\0';
  local_68[0x1c] = '\0';
  local_68[0x1d] = '\0';
  local_68[0x1e] = '\0';
  local_68[0x1f] = '\0';
  local_68[0x20] = '\0';
  local_68[0x21] = '\0';
  local_68[0x22] = '\0';
  local_68[0x23] = '\0';
  local_68[0x24] = '\0';
  local_68[0x25] = '\0';
  local_68[0x26] = '\0';
  local_68[0x27] = '\0';
  local_68[0x28] = '\0';
  local_68[0x29] = '\0';
  local_68[0x2a] = '\0';
  local_68[0x2b] = '\0';
  local_68[0x2c] = '\0';
  local_68[0x2d] = '\0';
  local_68[0x2e] = '\0';
  local_68[0x2f] = '\0';
  local_68[0x30] = '\0';
  local_68[0x31] = '\0';
  local_68[0x32] = '\0';
  local_68[0x33] = '\0';
  local_68[0x34] = '\0';
  local_68[0x35] = '\0';
  local_68[0x36] = '\0';
  local_68[0x37] = '\0';
  local_68[0x38] = '\0';
  local_68[0x39] = '\0';
  local_68[0x3a] = '\0';
  local_68[0x3b] = '\0';
  local_68[0x3c] = '\0';
  local_68[0x3d] = '\0';
  local_68[0x3e] = '\0';
  local_68[0x3f] = '\0';
  local_28 = (undefined1  [16])0x0;
  if (DAT_180c62f48 == param_1) {
    builtin_strncpy(local_68,"Press a key...",0xf);
    local_68[0xf] = '\0';
  }
  else if (*(int *)(param_1 + 8) == 0) {
    builtin_strncpy(local_68,"None",5);
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
  }
  else {
    FUN_18050da90(local_b0);
    puVar5 = local_b0;
    if (0xf < (ulonglong)local_a0._8_8_) {
      puVar5 = (undefined1 *)local_b0._0_8_;
    }
    FUN_1806157a0(local_68,0x50,puVar5,0xffffffffffffffff);
    FUN_18015c010(local_b0);
  }
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  FUN_18015ba30(local_b0,"Key: ",5);
  lVar4 = -1;
  do {
    lVar1 = lVar4 + 1;
    lVar4 = lVar4 + 1;
  } while (local_68[lVar1] != '\0');
  pauVar3 = (undefined1 (*) [16])FUN_18015b2a0(local_b0,local_68);
  local_90 = *pauVar3;
  auStack_80 = pauVar3[1];
  (*pauVar3)[0] = 0;
  *(undefined8 *)pauVar3[1] = 0;
  *(undefined8 *)(pauVar3[1] + 8) = 0xf;
  FUN_18015c010(local_b0);
  puVar5 = local_90;
  if (0xf < (ulonglong)auStack_80._8_8_) {
    puVar5 = (undefined1 *)local_90._0_8_;
  }
  cVar2 = FUN_18048b0e0(puVar5,&DAT_180829e08,1);
  if (cVar2 != '\0') {
    DAT_180c62f48 = (char *)0x0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar4 = FUN_180439770();
    *(undefined8 *)(lVar4 + 0x420) = 0;
    DAT_180bbecdf = 1;
    DAT_180c62f48 = param_1;
    lVar4 = FUN_180439770();
    *(char **)(lVar4 + 0x420) = param_1;
    FUN_18050cd00();
  }
  local_b8[0] = *(undefined4 *)(param_1 + 0xc);
  cVar2 = FUN_1804891c0(local_b8);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = local_b8[0];
    param_1[0x10] = *param_1;
    FUN_18050cd00();
  }
  puVar5 = &DAT_180829dd0;
  if (*param_1 != '\0') {
    puVar5 = &DAT_180829dd4;
  }
  local_c0 = 0;
  local_c8 = 0;
  cVar2 = FUN_1804898a0("Active",param_1,puVar5,1);
  if (cVar2 != '\0') {
    param_1[0x10] = *param_1;
    FUN_18050cd00();
  }
  cVar2 = FUN_18048b0e0("Remove Keybind",&DAT_180829a48,1);
  if (cVar2 != '\0') {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0x10] = '\0';
    DAT_180c62f48 = (char *)0x0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar4 = FUN_180439770();
    *(undefined8 *)(lVar4 + 0x420) = 0;
    FUN_18050cd00();
  }
  FUN_18015c010(local_90);
}



