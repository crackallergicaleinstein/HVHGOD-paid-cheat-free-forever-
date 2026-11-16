// FUN_180589d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589d00 */

undefined8 FUN_180589d00(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if ((*(byte *)(lVar1 + 8) & 1) != 0) {
    FUN_180577980();
    FUN_180596060(param_1);
    return 0;
  }
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2d0) + 0xe8))(lVar1,param_2,param_1 + 3);
  if ((int)uVar2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return uVar2;
}



