// FUN_1803daa60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803daa60 */

uint FUN_1803daa60(int *param_1,int *param_2)

{
  if (((char)param_1[1] == '\0') || ((char)param_2[1] == '\0')) {
    return (uint)((char)param_1[1] == (char)param_2[1]);
  }
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 == *param_2);
}



