// FUN_180611790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180611790 */

ulonglong thunk_FUN_1806243d0(ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x34) & 0x7ff;
  if (uVar1 == 0x7ff) {
    return (ulonglong)(ushort)(((param_1 & 0xfffffffffffff) != 0) + 1);
  }
  if (uVar1 == 0) {
    return CONCAT62((int6)(-(param_1 & 0x7fffffffffffffff) >> 0x10),
                    -(ushort)((param_1 & 0x7fffffffffffffff) != 0)) & 0xfffffffffffffffe;
  }
  return 0xffffffff;
}



