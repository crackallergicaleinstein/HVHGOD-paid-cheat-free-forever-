// FUN_18061f648 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f648 */

void FUN_18061f648(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_1808d72d0 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_1808d72d0);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_1808d72d0,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_180621380(p_Var1);
  }
  return;
}



