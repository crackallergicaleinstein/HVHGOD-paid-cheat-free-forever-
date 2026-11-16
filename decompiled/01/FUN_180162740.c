// FUN_180162740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162740 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180162740(longlong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_28 = 0xc;
  local_24 = 8;
  local_20 = 4;
  puVar2 = (ulonglong *)&local_28;
  while( true ) {
    FUN_180162620(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    if (((9 < iVar1 - 0x30U) && (5 < iVar1 - 0x41U)) && (5 < iVar1 - 0x61U)) break;
    puVar2 = (ulonglong *)((longlong)puVar2 + 4);
    if (puVar2 == local_18) {
    }
  }
}



