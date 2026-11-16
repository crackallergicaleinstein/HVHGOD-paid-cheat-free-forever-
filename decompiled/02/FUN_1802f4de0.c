// FUN_1802f4de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f4de0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f4de0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)&local_38;
  local_18 = 8;
  local_14 = 9;
  uVar5 = (ulonglong)param_2;
  if (0x375eff < param_2) {
    uVar5 = 0;
  }
  local_38 = 0x100000000;
  uStack_30 = 0x300000002;
  uStack_28 = 0x500000004;
  uStack_20 = 0x700000006;
  iVar1 = (int)(uVar5 / 0x58980);
  puVar3 = (undefined4 *)((longlong)&local_38 + (uVar5 / 0x58980) * 4);
  iVar4 = (int)uVar5 + iVar1 * -0x58980;
  uVar2 = iVar1 + 1;
  *param_1 = *puVar3;
  if (uVar2 < 10) {
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while ((int)uVar2 < 10);
  }
  iVar1 = iVar4 / 0x9d80;
  iVar4 = iVar4 % 0x9d80;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[1] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 9) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  iVar1 = iVar4 / 0x13b0;
  iVar4 = iVar4 % 0x13b0;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[2] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 8) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  iVar1 = iVar4 / 0x2d0;
  iVar4 = iVar4 % 0x2d0;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[3] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 7) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  iVar1 = iVar4 / 0x78;
  iVar4 = iVar4 % 0x78;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[4] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 6) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  iVar1 = iVar4 / 0x18;
  iVar4 = iVar4 % 0x18;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[5] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 5) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  iVar1 = iVar4 / 6;
  iVar4 = iVar4 % 6;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[6] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 4) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  iVar1 = iVar4 / 2;
  iVar4 = iVar4 % 2;
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar1 * 4);
  param_1[7] = *puVar3;
  while (iVar1 = iVar1 + 1, iVar1 < 3) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)((longlong)&local_38 + (longlong)iVar4 * 4);
  param_1[8] = *puVar3;
  while (iVar4 = iVar4 + 1, iVar4 < 2) {
    *puVar3 = puVar3[1];
    puVar3 = puVar3 + 1;
  }
  param_1[9] = (undefined4)local_38;
}



