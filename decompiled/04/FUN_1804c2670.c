// FUN_1804c2670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c2670(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  puVar2 = local_18;
  local_18[0] = param_2;
  uVar3 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    uVar3 = crc32(uVar3,*puVar2);
    puVar1 = puVar2 + 2;
    puVar2 = puVar2 + 1;
  } while (puVar1 <= local_18 + 1);
  if (puVar2 < local_18 + 1) {
    do {
      uVar3 = crc32(uVar3,*(undefined1 *)puVar2);
      puVar2 = (undefined4 *)((longlong)puVar2 + 1);
    } while (puVar2 < local_18 + 1);
  }
  if (*(uint *)(*param_1 + 0x1534) == ~uVar3) {
    FUN_1804cf810(~uVar3,4);
  }
}



