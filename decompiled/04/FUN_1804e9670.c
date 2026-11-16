// FUN_1804e9670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e9670 */

longlong FUN_1804e9670(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x8000000;
  lVar2 = FUN_1804e83c0(param_1,param_2,0);
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xf7ffffff;
  return lVar2;
}



