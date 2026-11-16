// FUN_1801ead70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ead70 */

undefined8 *
FUN_1801ead70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  char *local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = (char *)*param_4;
  lStack_30 = param_4[1];
  FUN_18015b430(local_38,&local_38,param_2);
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_1800f5370(param_1 + 5,param_3);
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  local_18 = 0;
  uStack_10 = 7;
  local_28._2_14_ = SUB1614((undefined1  [16])0x0,2);
  auVar1._14_2_ = 0;
  auVar1._0_14_ = local_28._2_14_;
  local_28 = auVar1 << 0x10;
  local_38 = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    local_38 = (char *)param_1[1];
  }
  lStack_30 = -1;
  do {
    lStack_30 = lStack_30 + 1;
  } while (local_38[lStack_30] != '\0');
  FUN_1801eae60(param_1 + 0xd,&local_38,param_3,local_28);
  FUN_18015b930(local_28);
  return param_1;
}



