// FUN_180624430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180624430 */

uint FUN_180624430(uint param_1)

{
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return (uint)(ushort)(((param_1 & 0x7fffff) != 0) + 1);
  }
  if ((param_1 & 0x7f800000) == 0) {
    return CONCAT22((short)(-(param_1 & 0x7fffffff) >> 0x10),-(ushort)((param_1 & 0x7fffffff) != 0))
           & 0xfffffffe;
  }
  return 0xffffffff;
}



