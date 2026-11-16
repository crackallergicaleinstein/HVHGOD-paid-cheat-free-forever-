// FUN_1801598a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801598a0 */

undefined8 * FUN_1801598a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  FUN_1806066d8(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::ios_base::failure::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



