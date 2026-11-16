// FUN_180524de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180524de0 */

undefined8 FUN_180524de0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 local_190 [8];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [24];
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined1 *local_108;
  undefined1 **local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [24];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [8];
  
  uVar5 = 0;
  local_d0 = &DAT_1808e6940;
  local_d8 = param_2;
  iVar2 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_178 = (undefined1  [16])0x0;
  FUN_1800f4e90(param_2,local_178,0,2,uVar5);
  uVar4 = 5;
  uVar6 = 5;
  piVar3 = (int *)(param_1 + 8);
  while (piVar3 != (int *)(param_1 + 0x1118)) {
    local_c8 = (undefined1  [16])0x0;
    FUN_1800f4e90(local_190,local_c8,0,2,uVar6);
    uVar4 = uVar4 | 2;
    piVar1 = piVar3 + 0x222;
    uVar6 = uVar4;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 0x1a) {
      FUN_1800e60e0(local_138,"definition");
      local_120 = ZEXT816(0);
      iVar2 = *piVar3;
      FUN_1801409d0(local_120 + 8,0);
      local_120[0] = 5;
      local_120._8_8_ = (longlong)iVar2;
      local_110 = 0;
      local_108 = local_138;
      local_100 = &local_108;
      FUN_1800f4e90(local_88,&local_108,1,2);
      local_78 = 0;
      FUN_1800e60e0(local_168,"paint");
      local_150 = ZEXT816(0);
      iVar2 = piVar3[1];
      FUN_1801409d0(local_150 + 8,0);
      local_150[0] = 5;
      local_150._8_8_ = (longlong)iVar2;
      local_140 = 0;
      local_f8 = local_168;
      local_f0 = local_138;
      FUN_1800f4e90(local_70,&local_f8,1,2);
      local_60 = 0;
      FUN_1800e60e0(local_b8,"custom");
      FUN_1800e64d0(local_a0,piVar3 + 2);
      local_90 = 0;
      local_e0 = local_88;
      local_e8 = local_b8;
      FUN_1800f4e90(local_58,&local_e8,1,2);
      local_48 = 0;
      local_178._8_8_ = local_40;
      local_178._0_8_ = local_88;
      FUN_1800f3aa0(local_190,local_178);
      _eh_vector_destructor_iterator_(local_88,0x18,3,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_b8,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_168,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_138,0x18,2,FUN_1800aab30);
    }
    FUN_1800f3c60(param_2,local_190);
    FUN_1801409d0(local_188,local_190[0]);
    piVar3 = piVar1;
  }
  FUN_1805f68fc(&DAT_1808e6940);
  return param_2;
}



