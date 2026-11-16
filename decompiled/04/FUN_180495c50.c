// FUN_180495c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180495c50 */

void FUN_180495c50(longlong *param_1)

{
  longlong lVar1;
  undefined **local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  FUN_180488c60();
  local_10 = 5;
  local_18 = &PTR_s_Disabled_1807b79f0;
  FUN_18048aae0(&DAT_180829e20,lVar1 + 0x238,&local_18);
  FUN_18048a250("Offset",lVar1 + 0x23c,0xc2b20000,0x42b20000,&DAT_180829cdc,0x3f800000,
                *(int *)(lVar1 + 0x238) == 4,0);
  FUN_180488f10();
  return;
}



