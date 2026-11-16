// FUN_1806161d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806161d0 */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = (LPVOID)_malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_180621380();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_180bb26a0,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_180631080();
        } while ((iVar1 != 0) && (iVar1 = FUN_18062c350(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_18060fe00();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}



