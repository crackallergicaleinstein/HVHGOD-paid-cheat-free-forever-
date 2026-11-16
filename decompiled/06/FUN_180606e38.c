// FUN_180606e38 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606e38 */

void FUN_180606e38(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_180621380(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}



