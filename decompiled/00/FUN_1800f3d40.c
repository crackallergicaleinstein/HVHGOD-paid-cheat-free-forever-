// FUN_1800f3d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3d40 */

longlong FUN_1800f3d40(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    return 0;
  case 1:
    return *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  case 2:
    return (*(longlong **)(param_1 + 8))[1] - **(longlong **)(param_1 + 8) >> 4;
  default:
    return 1;
  }
}



