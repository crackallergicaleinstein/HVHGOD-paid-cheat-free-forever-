// FUN_1800f5870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5870 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_1800f5870(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar1) - 1;
    }
  }
  return 0;
}



