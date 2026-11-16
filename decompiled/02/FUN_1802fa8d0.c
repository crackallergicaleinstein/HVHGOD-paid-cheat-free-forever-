// FUN_1802fa8d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fa8d0 */

undefined8 * FUN_1802fa8d0(undefined8 *param_1,longlong param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(uint *)(param_2 + 0x68) < 0x1c) {
    ppuVar1 = &PTR_DAT_180800fb0 + (longlong)(int)*(uint *)(param_2 + 0x68) * 4;
  }
  else {
    ppuVar1 = &PTR_DAT_180801560;
  }
  *param_1 = ppuVar1;
  if (*(char *)(param_2 + 0x70) == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = 2 - (ulonglong)(*(char *)(param_2 + 0x1ad) != '\0');
  }
  param_1[1] = &PTR_DAT_1808014b0 + lVar2 * 4;
  param_1[2] = (longlong)&PTR_DAT_180801510 +
               (ulonglong)(-(uint)(*(char *)(param_2 + 0x140) != '\0') & 0x20);
  param_1[3] = (longlong)&PTR_DAT_180800ed0 +
               (ulonglong)(-(uint)(*(char *)(param_2 + 0xd8) != '\0') & 0x20);
  if (*(uint *)(param_2 + 0x6c) < 0xc) {
    ppuVar1 = &PTR_DAT_180801330 + (longlong)(int)*(uint *)(param_2 + 0x6c) * 4;
  }
  else {
    ppuVar1 = &PTR_DAT_180801560;
  }
  param_1[4] = ppuVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  ppuVar1 = &PTR_s_Molotov___Incendiary_180800f10;
  if (*(char *)(param_2 + 0x1a8) == '\0') {
    ppuVar1 = &PTR_DAT_180801560;
  }
  param_1[5] = ppuVar1;
  ppuVar1 = &PTR_s_HE_Grenade_180800f30;
  if (*(char *)(param_2 + 0x1a9) == '\0') {
    ppuVar1 = &PTR_DAT_180801560;
  }
  param_1[6] = ppuVar1;
  ppuVar1 = &PTR_s_Smoke_Grenade_180800f50;
  if (*(char *)(param_2 + 0x1aa) == '\0') {
    ppuVar1 = &PTR_DAT_180801560;
  }
  param_1[7] = ppuVar1;
  ppuVar1 = &PTR_s_Flashbang_180800f70;
  if (*(char *)(param_2 + 0x1ab) == '\0') {
    ppuVar1 = &PTR_DAT_180801560;
  }
  param_1[8] = ppuVar1;
  ppuVar1 = &PTR_s_Decoy_Grenade_180800f90;
  if (*(char *)(param_2 + 0x1ac) == '\0') {
    ppuVar1 = &PTR_DAT_180801560;
  }
  param_1[9] = ppuVar1;
  return param_1;
}



