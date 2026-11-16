// FUN_1800b4410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4410 */

undefined8 FUN_1800b4410(undefined8 param_1)

{
  longlong lVar1;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined1 local_10 [8];
  
  local_a8 = 0;
  FUN_1800e60e0(local_a0,"version");
  local_88 = ZEXT816(0);
  FUN_1801409d0(local_88 + 8,0);
  local_88[0] = 5;
  local_88._8_8_ = 0xc;
  local_78 = 0;
  local_b8 = local_a0;
  local_b0 = local_70;
  FUN_1800f4e90(local_70,&local_b8,1,2);
  local_60 = 0;
  FUN_1800e60e0(local_40,"fields");
  lVar1 = FUN_1800aa200();
  FUN_1800f4a50(local_28,lVar1 + 0x18);
  local_18 = 0;
  local_b8 = local_40;
  local_b0 = local_10;
  FUN_1800f4e90(local_58,&local_b8,1,2);
  local_48 = 0;
  local_b8 = local_70;
  local_b0 = local_40;
  FUN_1800f4e90(param_1,&local_b8,1,2);
  local_a8 = 1;
  _eh_vector_destructor_iterator_(local_70,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_40,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_a0,0x18,2,FUN_1800aab30);
  return param_1;
}



