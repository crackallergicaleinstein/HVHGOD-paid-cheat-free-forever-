// FUN_18057db90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057db90 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18057db90(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_24b8 [32];
  undefined4 local_2498;
  undefined8 local_2488;
  undefined8 uStack_2480;
  undefined8 *local_2478;
  undefined8 local_2470;
  undefined8 local_2468;
  undefined8 uStack_2460;
  undefined8 local_2458;
  undefined8 uStack_2450;
  undefined8 local_2448;
  undefined8 uStack_2440;
  undefined8 local_2438;
  undefined1 local_2430 [9224];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18057dba2;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_24b8;
  FUN_18063ab10(local_2430,0,0x1180);
  local_2438 = *(undefined8 *)(param_1 + 0x10);
  local_2478 = &local_2438;
  local_2488 = 0;
  local_2498 = param_5;
  uStack_2480 = 0;
  local_2470 = 0;
  local_2468 = 0;
  uStack_2460 = 0;
  local_2458 = 0;
  uStack_2450 = 0;
  local_2448 = 0;
  uStack_2440 = 0;
  FUN_180586a30(&local_2488,param_1,*(undefined8 *)(param_2 + 8),param_4);
  local_2478 = (undefined8 *)0x0;
  local_2488 = 0;
  uStack_2480 = 0;
  FUN_180581e90(&local_2438);
}



