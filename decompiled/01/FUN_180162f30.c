// FUN_180162f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162f30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180162f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  _Threadpool_chore *p_Var2;
  char *local_28;
  undefined8 local_20;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_20 = 0x15;
    local_28 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  p_Var2 = (_Threadpool_chore *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  if (p_Var2 == (_Threadpool_chore *)0x0) {
    p_Var2 = (_Threadpool_chore *)0x0;
  }
  else {
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(undefined8 *)(p_Var2 + 0x10) = 0;
    *(undefined8 *)(p_Var2 + 0x18) = 0;
    *(undefined8 *)p_Var2 = 0;
    *(code **)(p_Var2 + 8) = FUN_180162f00;
    *(_Threadpool_chore **)(p_Var2 + 0x10) = p_Var2;
    *(undefined8 *)(p_Var2 + 0x18) = param_2;
    *(undefined8 *)(p_Var2 + 0x20) = param_3;
  }
  iVar1 = Concurrency::details::_Schedule_chore(p_Var2);
  if (iVar1 == 0) {
    return;
  }
  if (p_Var2 != (_Threadpool_chore *)0x0) {
    FUN_180163010(p_Var2);
  }
  FUN_18015c090(&local_28,"Fail to schedule the chore!");
                    /* WARNING: Subroutine does not return */
  FUN_180606630(&local_28,&DAT_1808d12a8);
}



