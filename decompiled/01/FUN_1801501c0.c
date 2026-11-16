// FUN_1801501c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801501c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801501c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  longlong local_98;
  ulonglong local_90 [3];
  undefined1 local_78 [32];
  undefined1 local_58 [56];
  undefined1 local_20 [8];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_20[0] = 2;
  local_18[0] = (undefined4)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  local_20[0] = (**(code **)(*plVar1 + 0x10))(plVar1,local_18,local_20,param_1 + 0xb8);
  local_90[0] = *(ulonglong *)(param_1 + 0x38);
  if (((longlong)local_90[0] < 0) && (local_90[0] != 0)) {
    local_98 = -((~local_90[0] >> 5) * 4 + 4);
  }
  else {
    local_98 = (local_90[0] >> 5) * 4;
  }
  local_98 = *(longlong *)(param_1 + 0x20) + local_98;
  local_90[0] = local_90[0] & 0x1f;
  local_a8 = local_20;
  FUN_180157500(param_1 + 0x20,local_78,&local_98);
  local_20[0] = 2;
  FUN_180152aa0(param_1,&local_98,local_20);
  FUN_1801543a0(param_1 + 8,local_90);
  puVar2 = *(undefined1 **)(*(longlong *)(param_1 + 0x10) + -8);
  if ((puVar2 != (undefined1 *)0x0) && (param_2 != 0xffffffffffffffff)) {
    switch(*puVar2) {
    default:
      uVar3 = FUN_1800f3d40(puVar2);
      break;
    case 1:
      uVar3 = 0x333333333333333;
      break;
    case 2:
      uVar3 = 0xfffffffffffffff;
    }
    if (uVar3 < param_2) {
      FUN_18015b9b0(local_78,param_2);
      uVar4 = FUN_180151f90(&local_98);
      FUN_180152320(local_58,0x198,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_58,&DAT_1808d0f80);
    }
  }
}



