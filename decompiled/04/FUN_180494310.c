// FUN_180494310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180494310 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180494310(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_118 [32];
  byte local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  if ((param_2 == (byte *)0x0) || (bVar4 = *param_2, bVar4 == 0)) {
  }
  FUN_18063ab10(local_f8,0,0xc0);
  pbVar3 = param_2;
  do {
    if (0x7f < bVar4) {
      FUN_1804941c0(param_2,local_f8);
      param_2 = local_f8;
      break;
    }
    bVar4 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
  } while (bVar4 != 0);
  pbVar3 = param_1;
  if (param_1 != (byte *)0xffffffffffffffff) {
    while (*pbVar3 != 0) {
      pbVar5 = pbVar3 + 1;
      if (((*pbVar3 == 0x23) && (*pbVar5 == 0x23)) ||
         (pbVar3 = pbVar5, pbVar5 == (byte *)0xffffffffffffffff)) break;
    }
  }
  do {
    if (pbVar3 <= param_1) {
    }
    pbVar5 = param_1;
    pbVar6 = param_2;
    do {
      bVar4 = *pbVar6;
      if (bVar4 == 0) break;
      iVar1 = tolower((uint)*pbVar5);
      iVar2 = tolower((uint)bVar4);
      if (iVar1 != iVar2) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < pbVar3);
    if (*pbVar6 == 0) {
    }
    param_1 = param_1 + 1;
  } while( true );
}



