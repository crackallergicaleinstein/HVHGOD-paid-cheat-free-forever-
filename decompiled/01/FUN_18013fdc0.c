// FUN_18013fdc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013fdc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013fdc0(longlong param_1,undefined1 (*param_2) [16])

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 (*local_30) [16];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  (*param_2)[0] = 0;
  local_38 = 1;
  pbVar1 = *(byte **)(param_1 + 0x40);
  local_30 = param_2;
  for (pbVar3 = *(byte **)(param_1 + 0x38); pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
    if (*pbVar3 < 0x20) {
      local_28 = 0;
      local_20 = 0;
      FUN_18015abc0(&local_28,9,"<U+%.4X>",*pbVar3);
      lVar4 = -1;
      do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (*(char *)((longlong)&local_28 + lVar2) != '\0');
      FUN_18015b2a0(param_2,&local_28);
    }
    else {
      FUN_18015af80(param_2);
    }
  }
}



