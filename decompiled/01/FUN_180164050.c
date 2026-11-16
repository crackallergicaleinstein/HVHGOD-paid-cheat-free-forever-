// FUN_180164050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164050 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180164050(longlong param_1,longlong *param_2,int param_3)

{
  longlong *local_28 [2];
  longlong local_18;
  
  local_18 = param_1;
  if (param_3 == -1) {
    local_28[0] = param_2;
    (**(code **)(*param_2 + 8))(param_2);
    if (param_2 != (longlong *)0x0) {
      (**(code **)*param_2)(param_2,1);
    }
  }
  else if (*(undefined8 **)(param_1 + 0x130) == (undefined8 *)0x0) {
    FUN_180162f30(local_28,FUN_180163550,param_2);
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x130))();
  }
  return;
}



