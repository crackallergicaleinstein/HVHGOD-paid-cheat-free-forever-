// FUN_180454010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454010 */

undefined8 FUN_180454010(longlong *param_1,longlong param_2)

{
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + param_2 * 8);
}



