// FUN_1806334f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806334f0 */

int FUN_1806334f0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong local_28;
  undefined *local_20;
  undefined8 uStack_18;
  char local_10;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    puVar3 = (undefined4 *)FUN_18060fe00();
    *puVar3 = 0x16;
    FUN_18060aad4();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (param_4 == (undefined8 *)0x0) {
    if (DAT_180bb2030 == 0) {
      local_20 = PTR_PTR_1808d7448;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_18061f698();
      local_20 = *(undefined **)(local_28 + 0x90);
      uStack_18 = *(undefined8 *)(local_28 + 0x88);
      __acrt_update_locale_info(local_28,&local_20);
      FUN_180621288(local_28,&uStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_4;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if ((iVar2 != 0) || (bVar1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}



