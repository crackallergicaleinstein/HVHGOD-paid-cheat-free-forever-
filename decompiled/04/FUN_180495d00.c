// FUN_180495d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180495d00 */

void FUN_180495d00(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined **local_28;
  undefined8 local_20;
  
  lVar1 = *param_1;
  FUN_180488c60();
  local_20 = 4;
  local_28 = &PTR_s_Backward_1807b7b18;
  FUN_18048aae0(&DAT_180829e20,lVar1 + 0x240,&local_28);
  uVar2 = 0x3f800000;
  FUN_18048a250("Offset",lVar1 + 0x244,0xc3340000,0x43340000,&DAT_180829cdc,0x3f800000,1,0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  local_20 = 5;
  local_28 = &PTR_s_Disabled_1807b7a80;
  FUN_18048aae0("Modifier",lVar1 + 0x248,&local_28);
  FUN_18048a250("Degree",lVar1 + 0x24c,0,0x43340000,&DAT_180829cdc,uVar2,
                *(int *)(lVar1 + 0x248) != 0,0);
  FUN_180488f10();
  return;
}



