// FUN_1804af270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804af270 */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_180bb26a0,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_180631080();
    } while ((iVar1 != 0) && (iVar1 = FUN_18062c350(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18060fe00();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



