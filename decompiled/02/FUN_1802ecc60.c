// FUN_1802ecc60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ecc60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ecc60(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_238 [32];
  int local_218;
  undefined1 local_214 [460];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_238;
  uVar6 = param_2 / 10;
  while( true ) {
    if (uVar6 == 0) {
      if (param_2 % 10 != 0) {
        FUN_1802ecbd0(param_1,*(undefined4 *)(&DAT_1808004e0 + (ulonglong)(param_2 % 10 - 1) * 4));
      }
    }
    uVar5 = uVar6;
    if (0x26 < uVar6) {
      uVar5 = 0x26;
    }
    lVar1 = (ulonglong)(uVar5 - 1) * 4;
    bVar3 = (&DAT_180800513)[lVar1];
    lVar2 = (ulonglong)(byte)(&DAT_180800512)[lVar1] * 4;
    local_218 = (uint)(byte)(&DAT_180800512)[lVar1] + (uint)bVar3;
    FUN_18063ab10(local_214,0,lVar2);
    FUN_18063aed0(local_214 + lVar2,
                  &DAT_1806ac580 + (ulonglong)*(ushort *)(&DAT_180800510 + lVar1) * 4,
                  (ulonglong)bVar3 << 2);
    cVar4 = FUN_1802ec8c0(param_1);
    if (cVar4 == '\0') break;
    uVar6 = uVar6 - uVar5;
  }
}



