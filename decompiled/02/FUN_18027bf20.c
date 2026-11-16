// FUN_18027bf20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027bf20 */

longlong FUN_18027bf20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
  *(longlong *)param_2[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_2[1];
  FUN_1801bd550(param_2 + 3);
  lVar2 = param_2[3];
  param_2[3] = 0;
  FUN_1804547d0(lVar2,0x10);
  FUN_1804547d0(param_2,0x40);
  return lVar1;
}



