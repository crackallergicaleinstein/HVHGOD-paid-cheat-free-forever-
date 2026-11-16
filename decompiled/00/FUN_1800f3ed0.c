// FUN_1800f3ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3ed0 */

undefined8 * FUN_1800f3ed0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  puVar1 = (undefined1 *)*param_2;
  switch(*puVar1) {
  default:
    param_2[3] = 1;
    return param_2;
  case 1:
    param_2[1] = **(undefined8 **)(puVar1 + 8);
    return param_2;
  case 2:
    param_2[2] = *(undefined8 *)(*(longlong *)(puVar1 + 8) + 8);
    return param_2;
  }
}



