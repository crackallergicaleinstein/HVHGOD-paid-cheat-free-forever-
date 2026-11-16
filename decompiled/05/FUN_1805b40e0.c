// FUN_1805b40e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b40e0 */

undefined8 FUN_1805b40e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x298);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x240);
  param_1[6] = *(longlong *)(lVar1 + 0x248);
  param_1[4] = *(longlong *)(lVar2 + 0x28);
  param_1[3] = *(longlong *)(lVar2 + 0x30);
  return 0;
}



