// FUN_180546170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180546170 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180546170(undefined8 param_1,float *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  puVar3 = &DAT_180cd1850;
  if (*(int *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x2e8) != 0) {
    puVar3 = &DAT_180cd2930;
  }
  plVar2 = (longlong *)FUN_1803c3340(puVar3);
  if (plVar2 == (longlong *)0x0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
  else {
    local_50 = (longlong *)0x0;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_50);
    local_58 = (longlong *)0x0;
    iVar1 = (**(code **)*local_50)(local_50,&DAT_180806ff8,&local_58);
    plVar2 = local_58;
    if (iVar1 < 0) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    else {
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[4] = 0;
      local_20 = 0;
      (**(code **)(*local_58 + 0x50))(local_58,local_48);
      plVar2 = local_58;
      *param_2 = (float)(local_48[0] & 0xffffffff);
      param_2[1] = (float)(local_48[0] >> 0x20);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      local_50 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
    }
  }
}



