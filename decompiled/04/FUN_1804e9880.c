// FUN_1804e9880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e9880 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e9880(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_58[0] = *(undefined4 *)(param_2 + 0x18);
  puVar6 = local_58;
  local_58[1] = (int)param_3;
  local_58[2] = (int)param_4;
  uVar8 = 0xffffffff;
  do {
    uVar8 = crc32(uVar8,*puVar6);
    puVar2 = puVar6 + 2;
    puVar6 = puVar6 + 1;
  } while (puVar2 <= local_58 + 3);
  if (puVar6 < local_58 + 3) {
    do {
      uVar8 = crc32(uVar8,*(undefined1 *)puVar6);
      puVar6 = (undefined4 *)((longlong)puVar6 + 1);
    } while (puVar6 < local_58 + 3);
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  uVar8 = ~uVar8;
  uVar7 = (longlong)*(int *)(lVar4 + 0xd8);
  puVar3 = *(uint **)(lVar4 + 0xe0);
  while (uVar1 = uVar7, uVar1 != 0) {
    uVar7 = uVar1 >> 1;
    if (puVar3[uVar7 * 4] < uVar8) {
      puVar3 = puVar3 + uVar7 * 4 + 4;
      uVar7 = uVar1 + (-1 - uVar7);
    }
  }
  if ((puVar3 == *(uint **)(lVar4 + 0xe0) + (longlong)*(int *)(lVar4 + 0xd8) * 4) ||
     (*puVar3 != uVar8)) {
    local_60 = 0;
    local_68[0] = uVar8;
    puVar3 = (uint *)FUN_1804d0dd0(lVar4 + 0xd8,puVar3,local_68);
  }
  if ((*(longlong *)(puVar3 + 2) == 0) &&
     ((((*(byte *)(param_2 + 0x10) & 8) == 0 && (*(char *)(param_1 + 0x50) == '\0')) ||
      ((lVar4 = FUN_1804e6490(param_1,param_2,param_3,param_4), lVar4 == 0 &&
       (*(char *)(param_1 + 0x50) == '\0')))))) {
    local_78 = uVar8;
    uVar5 = FUN_1804e6070(param_1,param_2,param_3,param_4);
    *(undefined8 *)(puVar3 + 2) = uVar5;
  }
}



