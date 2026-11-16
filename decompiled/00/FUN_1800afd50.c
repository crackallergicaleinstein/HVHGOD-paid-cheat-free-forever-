// FUN_1800afd50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800afd50 */

undefined8 FUN_1800afd50(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  int *piVar6;
  undefined1 uVar7;
  uint uVar8;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_198;
  undefined8 *puStack_190;
  int local_188 [2];
  undefined8 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 local_168 [3];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138 [3];
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108 [3];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  local_res20[0] = (int)param_4;
  local_res18[0] = (int)param_3;
  local_68 = param_1;
  local_188[1] = 2;
  local_188[0] = 0;
  piVar6 = local_188;
  if (-1 < local_res18[0]) {
    piVar6 = local_res18;
  }
  piVar3 = local_188 + 1;
  if (local_res18[0] < 3) {
    piVar3 = piVar6;
  }
  iVar1 = *piVar3;
  local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0xff);
  local_180._0_4_ = 0;
  ppuVar5 = (undefined8 **)(local_188 + 2);
  if (-1 < local_res20[0]) {
    ppuVar5 = (undefined8 **)local_res20;
  }
  ppuVar4 = &local_198;
  if (local_res20[0] < 0x100) {
    ppuVar4 = ppuVar5;
  }
  iVar2 = *(int *)ppuVar4;
  FUN_1800e60e0(local_108,&DAT_1806bbee0,param_3,param_4,0);
  if ((param_2 == '\0') || ((iVar1 != 2 && (iVar2 == 0)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  local_f0 = ZEXT816(0);
  FUN_1801409d0(local_f0 + 8,0);
  local_f0[0] = 4;
  local_198 = (undefined8 *)CONCAT71(local_198._1_7_,uVar7);
  local_f0._8_8_ = local_198;
  local_e0 = 0;
  local_198 = local_108;
  puStack_190 = (undefined8 *)local_d8;
  FUN_1800f4e90(local_c8,&local_198,1,2);
  local_b8 = 0;
  FUN_1800e60e0(local_60,&DAT_1806bbee4);
  if ((iVar1 == 2) || (iVar2 == 0)) {
    local_198 = (undefined8 *)((ulonglong)local_198 & 0xffffffffffffff00);
    FUN_180111d10(&puStack_190,0);
    ppuVar5 = &local_198;
    uVar8 = 0x400;
  }
  else {
    FUN_1800e60e0(local_138,&DAT_1806bbed8);
    local_120 = ZEXT816(0);
    FUN_1801409d0(local_120 + 8,0);
    local_120[0] = 5;
    local_120._8_8_ = (longlong)iVar2;
    local_110 = 0;
    local_198 = local_138;
    puStack_190 = local_108;
    FUN_1800f4e90(local_98,&local_198,1,2,7);
    local_88 = 0;
    FUN_1800e60e0(local_168,&DAT_1806bbedc);
    local_150 = ZEXT816(0);
    FUN_1801409d0(local_150 + 8,0);
    local_150[0] = 5;
    local_150[8] = iVar1 == 0;
    local_150._9_7_ = 0;
    local_140 = 0;
    local_198 = local_168;
    puStack_190 = local_138;
    FUN_1800f4e90(local_80,&local_198,1,2,0x7f);
    local_70 = 0;
    local_198 = local_98;
    puStack_190 = &local_68;
    ppuVar5 = (undefined8 **)FUN_1800f4e90(local_d8,&local_198,1,2,0x1ff);
    uVar8 = 0x3ff;
  }
  local_48 = *ppuVar5;
  puStack_40 = ppuVar5[1];
  *(undefined1 *)ppuVar5 = 0;
  ppuVar5[1] = (undefined8 *)0x0;
  local_38 = 0;
  local_178 = local_60;
  local_170 = local_30;
  FUN_1800f4e90(local_b0,&local_178,1,2,uVar8);
  local_a0 = 0;
  local_170 = (undefined1 *)local_98;
  local_178 = local_c8;
  FUN_1800f4e90(param_1,&local_178,1,2);
  _eh_vector_destructor_iterator_(local_c8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_60,0x18,2,FUN_1800aab30);
  if (uVar8 >> 10 != 0) {
    uVar8 = uVar8 & 0xfffffbff;
    FUN_1801409d0(&puStack_190,(ulonglong)local_198 & 0xff);
  }
  if ((uVar8 & 0x200) != 0) {
    uVar8 = uVar8 & 0xfffffdff;
    FUN_1801409d0(local_d0,local_d8[0]);
  }
  if ((uVar8 & 0x100) != 0) {
    uVar8 = uVar8 & 0xfffffeff;
    _eh_vector_destructor_iterator_(local_98,0x18,2,FUN_1800aab30);
  }
  if ((uVar8 & 0x40) != 0) {
    uVar8 = uVar8 & 0xffffffbf;
    _eh_vector_destructor_iterator_(local_168,0x18,2,FUN_1800aab30);
  }
  if ((uVar8 & 4) != 0) {
    _eh_vector_destructor_iterator_(local_138,0x18,2,FUN_1800aab30);
  }
  _eh_vector_destructor_iterator_(local_108,0x18,2,FUN_1800aab30);
  return param_1;
}



