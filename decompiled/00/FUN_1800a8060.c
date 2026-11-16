// FUN_1800a8060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a8060 */

ulonglong FUN_1800a8060(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_res18 [16];
  
  piVar2 = (int *)FUN_1800a80b0(local_res18,param_1,param_2);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return (ulonglong)piVar2 & 0xffffffffffffff00;
  }
  *param_2 = 0;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_1808d7db8;
  return CONCAT71(0x1808d7d,iVar1 != 1);
}



