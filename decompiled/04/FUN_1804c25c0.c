// FUN_1804c25c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c25c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c25c0(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  puVar2 = &local_18;
  uVar3 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  do {
    uVar3 = crc32(uVar3,(int)*puVar2);
    puVar1 = puVar2 + 1;
    puVar2 = (ulonglong *)((longlong)puVar2 + 4);
  } while (puVar1 <= &local_10);
  if (puVar2 < &local_10) {
    do {
      uVar3 = crc32(uVar3,(char)*puVar2);
      puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    } while (puVar2 < &local_10);
  }
  if (*(uint *)(*param_1 + 0x1534) == ~uVar3) {
    FUN_1804cf810(~uVar3,0xc,param_2);
  }
}



