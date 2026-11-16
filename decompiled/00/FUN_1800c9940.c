// FUN_1800c9940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c9940 */

undefined8 FUN_1800c9940(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined7 uStackX_9;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_140 [24];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_110 [24];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_148 = 0;
  FUN_1800e60e0(local_b0,&DAT_1806bdf44);
  local_98 = ZEXT816(0);
  uVar1 = *param_1;
  FUN_1801409d0(local_98 + 8,0);
  local_98[0] = 4;
  auVar4 = local_98;
  local_98._9_7_ = uStackX_9;
  local_98[8] = uVar1;
  local_98._0_8_ = auVar4._0_8_;
  local_88 = 0;
  local_158 = local_b0;
  local_150 = local_80;
  FUN_1800f4e90(local_78,&local_158,1,2);
  local_68 = 0;
  FUN_1800e60e0(local_e0,"tint_color");
  local_c8 = ZEXT816(0);
  uVar2 = *(undefined4 *)(param_1 + 4);
  FUN_1801409d0(local_c8 + 8,0);
  local_c8[0] = 6;
  local_c8._8_4_ = uVar2;
  local_c8._12_4_ = 0;
  local_b8 = 0;
  local_158 = local_e0;
  local_150 = local_b0;
  FUN_1800f4e90(local_60,&local_158,1,2);
  local_50 = 0;
  FUN_1800e60e0(local_110,"menu_material");
  local_f8 = ZEXT816(0);
  iVar3 = *(int *)(param_1 + 8);
  FUN_1801409d0(local_f8 + 8,0);
  local_f8[0] = 5;
  local_f8._8_8_ = (longlong)iVar3;
  local_e8 = 0;
  local_158 = local_110;
  local_150 = local_e0;
  FUN_1800f4e90(local_48,&local_158,1,2);
  local_38 = 0;
  FUN_1800e60e0(local_140,"material_color");
  local_128 = ZEXT816(0);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_1801409d0(local_128 + 8,0);
  local_128[0] = 6;
  local_128._8_4_ = uVar2;
  local_128._12_4_ = 0;
  local_118 = 0;
  local_158 = local_140;
  local_150 = local_110;
  FUN_1800f4e90(local_30,&local_158,1,2);
  local_20 = 0;
  local_150 = local_30 + 0x18;
  local_158 = local_78;
  FUN_1800f4e90(param_2,&local_158,1,2);
  local_148 = 1;
  _eh_vector_destructor_iterator_(local_78,0x18,4,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_140,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_110,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e0,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_b0,0x18,2,FUN_1800aab30);
  return param_2;
}



