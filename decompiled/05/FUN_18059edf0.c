// FUN_18059edf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059edf0 */

undefined8 FUN_18059edf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x28) < lVar1 + 0x10U) {
    return 0xa1;
  }
  iVar3 = FUN_1805a13c0(param_1,lVar1);
  if (-1 < iVar3) {
    *(int *)(lVar2 + 0x74) = iVar3;
    iVar3 = FUN_1805a13c0(param_1,lVar1 + 8);
    if (-1 < iVar3) {
      *(int *)(lVar2 + 0x70) = iVar3;
      return 0;
    }
  }
  return 3;
}



