// FUN_1806352d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806352d0 */

undefined8 FUN_1806352d0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_180635240(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_180635260(local_res10);
    if (iVar2 == 0) {
      FUN_180635d80();
      return 0;
    }
  }
  return 1;
}



