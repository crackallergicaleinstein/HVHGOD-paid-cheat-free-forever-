// FUN_180497290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180497290 */

void FUN_180497290(longlong *param_1)

{
  longlong lVar1;
  undefined **local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_180488c60();
  local_10 = 5;
  local_18 = &PTR_DAT_1807b7ad8;
  FUN_18048aae0("Sound",lVar1 + 0x2c,&local_18);
  FUN_18048a250("Volume",lVar1 + 0x30,0,0x42c80000,"%.0f%%",0x3f800000,1,0);
  FUN_180488f10();
  return;
}



