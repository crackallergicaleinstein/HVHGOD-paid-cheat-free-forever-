// FUN_1801ac560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ac560 */

undefined4 *
FUN_1801ac560(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  puVar2 = param_1;
  lVar1 = FUN_1801bc880();
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1801406e0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2),param_4,puVar2);
  return param_1;
}



