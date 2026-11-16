// FUN_1801bdde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bdde0 */

undefined8 * FUN_1801bdde0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  FUN_1806066d8(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_1800f5370(param_1 + 5,param_2 + 0x28);
  FUN_1800f5370(param_1 + 9,param_2 + 0x48);
  FUN_18015b360(param_1 + 0xd,param_2 + 0x68);
  return param_1;
}



