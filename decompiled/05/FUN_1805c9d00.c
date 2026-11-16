// FUN_1805c9d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9d00 */

int FUN_1805c9d00(longlong *param_1,longlong *param_2)

{
  if (*(uint *)(*param_2 + 4) < *(uint *)(*param_1 + 4)) {
    return 1;
  }
  return -(uint)(*(uint *)(*param_1 + 4) < *(uint *)(*param_2 + 4));
}



