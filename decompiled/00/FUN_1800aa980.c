// FUN_1800aa980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aa980 */

undefined1 * FUN_1800aa980(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined1 local_20 [8];
  
  local_b8 = 0;
  if (*param_2 == 0) {
    *param_1 = 0;
    FUN_180111d10(param_1 + 8,0);
  }
  else {
    FUN_1800e60e0(local_80,&DAT_1806bbed8);
    local_68 = ZEXT816(0);
    iVar1 = *param_2;
    FUN_1801409d0(local_68 + 8,0);
    local_68[0] = 5;
    local_68._8_8_ = (longlong)iVar1;
    local_58 = 0;
    local_c8 = local_80;
    local_c0 = local_50;
    FUN_1800f4e90(local_50,&local_c8,1,2);
    local_40 = 0;
    FUN_1800e60e0(local_b0,&DAT_1806bbedc);
    iVar1 = param_2[1];
    local_98 = ZEXT816(0);
    FUN_1801409d0(local_98 + 8,0);
    local_98[0] = 5;
    local_98._8_8_ = (longlong)iVar1;
    local_88 = 0;
    local_c8 = local_b0;
    local_c0 = local_80;
    FUN_1800f4e90(local_38,&local_c8,1,2);
    local_28 = 0;
    local_c8 = local_50;
    local_c0 = local_20;
    FUN_1800f4e90(param_1,&local_c8,1,2);
    local_b8 = 1;
    _eh_vector_destructor_iterator_(local_50,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_b0,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_80,0x18,2,FUN_1800aab30);
  }
  return param_1;
}



