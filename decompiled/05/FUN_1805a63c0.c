// FUN_1805a63c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a63c0 */

undefined8 FUN_1805a63c0(longlong param_1,int param_2,undefined4 *param_3)

{
  *param_3 = 0;
  if (((param_2 == 0) || (param_1 == 0)) || (*(uint *)(param_1 + 0x218) <= param_2 - 1U)) {
    return 6;
  }
  *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x228) + 4 + (ulonglong)(param_2 - 1U) * 0x10);
  return 0;
}



