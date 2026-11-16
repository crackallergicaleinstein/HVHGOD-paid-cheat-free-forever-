// FUN_1804e95f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e95f0 */

longlong FUN_1804e95f0(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  lVar2 = FUN_1804e83c0(param_1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
  }
  return lVar2;
}



