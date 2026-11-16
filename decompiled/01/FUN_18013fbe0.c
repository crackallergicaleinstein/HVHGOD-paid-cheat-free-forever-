// FUN_18013fbe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013fbe0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013fbe0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined1 local_38 [16];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_48 = param_1;
  local_28 = param_3;
  FUN_180111f10(param_1 + 0xe,param_3);
  *(undefined1 *)(param_1 + 0x16) = param_4;
  *(undefined1 *)(param_1 + 0x17) = 9;
  FUN_180111d10(param_1 + 0x18,9);
  param_1[0x19] = param_5;
  local_68[0] = 1;
  local_50 = param_1[7];
  if (((longlong)local_50 < 0) && (local_50 != 0)) {
    local_58 = -((~local_50 >> 5) * 4 + 4);
  }
  else {
    local_58 = (local_50 >> 5) * 4;
  }
  local_58 = param_1[4] + local_58;
  local_50 = local_50 & 0x1f;
  local_78 = local_68;
  FUN_180157500(param_1 + 4,local_38,&local_58);
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
}



