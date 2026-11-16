// FUN_180497320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180497320 */

void FUN_180497320(longlong *param_1)

{
  longlong lVar1;
  undefined **local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_180488c60();
  local_10 = 5;
  local_18 = &PTR_DAT_1807b7ba0;
  FUN_18048aae0("Primary",lVar1 + 0x38,&local_18);
  local_10 = 5;
  local_18 = &PTR_DAT_1807b7a38;
  FUN_18048aae0("Secondary",lVar1 + 0x3c,&local_18);
  local_10 = 5;
  local_18 = &PTR_s_Armor_1807b7b78;
  FUN_18048adf0("Utility",&local_18,lVar1 + 0x40);
  FUN_180488f10();
  return;
}



