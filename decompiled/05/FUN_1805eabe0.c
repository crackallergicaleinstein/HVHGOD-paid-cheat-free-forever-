// FUN_1805eabe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805eabe0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805eabe0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_2098 [32];
  uint local_2078;
  undefined1 local_2068 [32];
  ushort local_2048;
  undefined1 local_2046 [8206];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x1805eabef;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2098;
  local_2048 = 0xc;
  FUN_18063ab10(local_2046,0,0x2000);
  uVar1 = FUN_1805ebbd0(&local_2048,param_3,param_4);
  if ((((uVar1 < 0xffffffffffffff89) && (uVar1 < param_4)) && (param_4 - uVar1 < param_2)) &&
     (uVar1 = FUN_1805e97f0(local_2068,uVar1 + param_3,param_4 - uVar1), uVar1 < 0xffffffffffffff89)
     ) {
    local_2078 = (uint)local_2048;
    FUN_1805ea660(param_1,local_2068,param_2 + param_1,local_2046);
  }
}



