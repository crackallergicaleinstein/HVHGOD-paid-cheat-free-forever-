// FUN_180524500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180524500 */

undefined8 FUN_180524500(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined7 uStackX_19;
  undefined1 *local_1a8;
  float *pfStack_1a0;
  undefined4 local_198;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [24];
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_198 = 0;
  iVar3 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((DAT_180c62f50 == 0) || (*(char *)(param_1 + 0x1c) != '\0')) {
    puVar4 = (undefined8 *)(param_1 + 0xc);
  }
  else {
    puVar4 = (undefined8 *)(DAT_180c62f50 + 0x717c);
  }
  local_1a8 = (undefined1 *)*puVar4;
  pfStack_1a0 = (float *)puVar4[1];
  FUN_18047ce00(&local_128,&local_1a8);
  FUN_1800e60e0(local_e8,"scale");
  if ((DAT_180c62f50 == 0) || (*(char *)(param_1 + 0x1c) != '\0')) {
    fVar5 = *(float *)(param_1 + 8);
  }
  else {
    fVar5 = DAT_180b0a41c;
  }
  local_d0 = ZEXT816(0);
  FUN_1801409d0(local_d0 + 8,0);
  local_d0[0] = 7;
  local_d0._8_8_ = (double)fVar5;
  local_c0 = 0;
  local_1a8 = local_e8;
  pfStack_1a0 = (float *)local_b8;
  FUN_1800f4e90(local_88,&local_1a8,1,2);
  local_78 = 0;
  FUN_1800e60e0(local_118,&DAT_180867888);
  local_100 = ZEXT816(0);
  uVar1 = *(undefined1 *)(param_1 + 0x1d);
  FUN_1801409d0(local_100 + 8,0);
  local_100[0] = 4;
  auVar2 = local_100;
  local_100._9_7_ = uStackX_19;
  local_100[8] = uVar1;
  local_100._0_8_ = auVar2._0_8_;
  local_f0 = 0;
  local_1a8 = local_118;
  pfStack_1a0 = (float *)local_e8;
  FUN_1800f4e90(local_70,&local_1a8,1,2);
  local_60 = 0;
  FUN_1800e60e0(local_b8,"accent");
  local_188 = ZEXT816(0);
  FUN_1801409d0(local_188 + 8,0);
  local_188[0] = 7;
  local_188._8_8_ = (double)local_128;
  local_178 = 0;
  local_170 = ZEXT816(0);
  FUN_1801409d0(local_170 + 8,0);
  local_170[0] = 7;
  local_170._8_8_ = (double)local_124;
  local_160 = 0;
  local_158 = ZEXT816(0);
  FUN_1801409d0(local_158 + 8,0);
  local_158[0] = 7;
  local_158._8_8_ = (double)local_120;
  local_148 = 0;
  local_140 = ZEXT816(0);
  FUN_1801409d0(local_140 + 8,0);
  local_140[0] = 7;
  local_140._8_8_ = 0x3ff0000000000000;
  local_130 = 0;
  local_1a8 = local_188;
  pfStack_1a0 = &local_128;
  FUN_1800f4e90(local_a0,&local_1a8,1,2);
  local_90 = 0;
  local_1a8 = local_b8;
  pfStack_1a0 = (float *)local_88;
  FUN_1800f4e90(local_58,&local_1a8,1,2);
  local_48 = 0;
  local_1a8 = local_88;
  pfStack_1a0 = (float *)local_40;
  FUN_1800f4e90(param_2,&local_1a8,1,2);
  local_198 = 1;
  _eh_vector_destructor_iterator_(local_88,0x18,3,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_b8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_188,0x18,4,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_118,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_e8,0x18,2,FUN_1800aab30);
  FUN_1805f68fc(&DAT_1808e6940);
  return param_2;
}



