// FUN_1805d2450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d2450 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d2450(undefined4 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_4038 [32];
  undefined1 local_4018 [16384];
  ulonglong local_18 [2];
  
  local_18[1] = 0x1805d245c;
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)auStack_4038;
  uVar1 = param_1[0x26];
  *(undefined1 **)(param_1 + 6) = local_4018;
  *(ulonglong **)(param_1 + 8) = local_18;
  uVar4 = 0x100;
  if (((uVar1 & 0x100) == 0) || (0xff < (int)(param_1[0x29] + param_1[0x28]))) {
    uVar4 = 0x20;
    uVar3 = 6;
  }
  else {
    uVar3 = 0xc;
  }
  *param_1 = uVar3;
  param_1[4] = uVar4;
  iVar5 = 1 << (sbyte)uVar3;
  param_1[1] = iVar5;
  param_1[2] = iVar5 >> 1;
  bVar2 = 0;
  param_1[3] = iVar5 >> 6;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)(param_1 + 0xf) = 2;
    bVar2 = 2;
  }
  if ((uVar1 & 0x10) != 0) {
    bVar2 = bVar2 | 4;
    *(byte *)(param_1 + 0xf) = bVar2;
  }
  if ((uVar1 & 0x20) == 0) {
    *(byte *)(param_1 + 0xf) = bVar2 | 1;
  }
  *(code **)(param_1 + 0x30) = FUN_1805d29a0;
  *(code **)(param_1 + 0x32) = FUN_1805d29c0;
  *(code **)(param_1 + 0x34) = FUN_1805d28f0;
  *(code **)(param_1 + 0x36) = FUN_1805d2a60;
  iVar5 = FUN_1805d25d0(param_1,0,0,param_1[0x28]);
  if ((iVar5 == 0) && ((param_1[0x26] & 0x200) == 0)) {
    *(code **)(param_1 + 0x30) = FUN_180159a00;
    *(code **)(param_1 + 0x32) = FUN_1805d2010;
    *(code **)(param_1 + 0x34) = FUN_1805d1f40;
    *(code **)(param_1 + 0x36) = FUN_180159a00;
    FUN_1805d25d0(param_1,1,0,param_1[0x29]);
  }
}



