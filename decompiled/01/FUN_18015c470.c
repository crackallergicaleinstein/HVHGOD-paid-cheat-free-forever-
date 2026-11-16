// FUN_18015c470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015c470(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong local_38 [7];
  
  local_38[4] = DAT_1808d5f00 ^ (ulonglong)local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  puVar4 = &DAT_1808da650;
  do {
    uVar1 = *puVar4;
    if ((((uVar1 - 8 < 0xf7) && (uVar1 != 0x1b)) && (2 < uVar1 - 0x10)) &&
       ((1 < uVar1 - 0x5b && (5 < uVar1 - 0xa0)))) {
      uVar3 = uVar1 & 0x3f;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 0x3f;
        uVar3 = uVar3 - 0x40;
      }
      local_38[(int)uVar1 >> 6] = local_38[(int)uVar1 >> 6] | 1L << ((longlong)(int)uVar3 & 0x3fU);
    }
    puVar4 = puVar4 + 1;
  } while (puVar4 != (uint *)&DAT_1808da668);
  uVar2 = 0;
  do {
    *(undefined8 *)((longlong)&DAT_180bbe890 + uVar2) = *(undefined8 *)((longlong)local_38 + uVar2);
    uVar2 = uVar2 + 8;
  } while (uVar2 < 0x20);
  DAT_180bb904a = 1;
}



