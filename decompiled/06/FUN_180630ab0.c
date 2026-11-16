// FUN_180630ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180630ab0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180630ab0(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  lVar3 = FUN_18061f698();
  lVar4 = FUN_18061f698();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_180630bb8(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  iVar2 = FUN_180615da0(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) != 0) goto LAB_180630b80;
    uVar5 = 1;
  }
  else {
    if (*(int *)(lVar3 + 0xb0) != 0) {
    }
    if (*(int *)(lVar3 + 0xac) == 0) {
    }
    iVar2 = FUN_180615da0(*(undefined8 *)(lVar3 + 0x98),local_108);
    if (iVar2 != 0) {
    }
    uVar5 = 0;
  }
  iVar2 = FUN_180630cbc(Locale,uVar5,puVar1);
  if (iVar2 == 0) {
  }
LAB_180630b80:
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
}



