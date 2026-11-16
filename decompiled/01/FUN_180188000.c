// FUN_180188000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180188000 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180188000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined8 *******local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *******local_138 [2];
  undefined8 local_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong **local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  longlong *local_90;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  local_c8 = param_5;
  local_168 = 0;
  lVar5 = param_1 + 0x40;
  if (0xf < *(ulonglong *)(param_1 + 0x58)) {
    lVar5 = *(longlong *)(param_1 + 0x40);
  }
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_160 = param_2;
  FUN_18015ba30(local_b0,lVar5,*(undefined8 *)(param_1 + 0x50));
  bVar9 = false;
  pcVar7 = local_b0;
  if (0xf < (ulonglong)local_a0._8_8_) {
    pcVar7 = (char *)local_b0._0_8_;
  }
  pcVar8 = pcVar7 + local_a0._0_8_;
  if (pcVar7 != pcVar8) {
    do {
      cVar4 = *pcVar7;
      if (('@' < cVar4) && (cVar4 < '[')) {
        *pcVar7 = cVar4 + ' ';
      }
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != pcVar8);
  }
  local_90 = &param_6;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if (0x7fffffffffffffff - local_a0._0_8_ < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    pcVar7 = local_b0;
    if (0xf < (ulonglong)local_a0._8_8_) {
      pcVar7 = (char *)local_b0._0_8_;
    }
    local_188 = 2;
    local_190 = &DAT_1807c2514;
    local_198 = local_a0._0_8_;
    FUN_18015a9c0(local_138,pcVar8,local_a0._0_8_,pcVar7);
    bVar9 = true;
    local_168 = 7;
    local_178 = local_138;
    if (0xf < local_120) {
      local_178 = local_138[0];
    }
    local_170 = local_128;
    cVar4 = FUN_18017eed0(&local_178);
    if (cVar4 != '\0') {
      bVar2 = false;
      goto LAB_18018816b;
    }
  }
  bVar2 = true;
LAB_18018816b:
  if (bVar9) {
    FUN_18015c010(local_138);
  }
  if (bVar2) {
    local_158 = (undefined1  [16])0x0;
    uStack_148 = 0;
    uStack_140 = 0;
    FUN_18015ba30(local_158,"model_not_ready_or_unsupported",0x1e);
    puVar1 = (undefined8 *)*local_90;
    if ((puVar1 != (undefined8 *)0x0) && (puVar1 != (undefined8 *)local_158)) {
      FUN_18015c010(puVar1);
      *puVar1 = local_158._0_8_;
      puVar1[1] = local_158._8_8_;
      puVar1[2] = uStack_148;
      puVar1[3] = uStack_140;
      uStack_148 = 0;
      uStack_140 = 0xf;
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_158._1_15_;
      local_158 = auVar3 << 8;
    }
    FUN_18015c010(local_158);
    FUN_18015c010(local_b0);
    FUN_18017cdd0(param_5);
  }
  else {
    local_c0 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_178 = (undefined8 *******)0x180827288;
      local_170 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_178);
    }
    lVar5 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    local_c0._0_8_ = lVar5;
    uStack_74 = 0;
    uStack_60 = 0;
    local_58 = ZEXT816(0);
    uStack_48 = 0;
    uStack_40 = 0;
    local_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_178 = (undefined8 *******)0x180827288;
      local_170 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_178);
    }
    lStack_70 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
    *(longlong *)lStack_70 = lStack_70;
    *(longlong *)(lStack_70 + 8) = lStack_70;
    uStack_60 = 0;
    local_58 = (undefined1  [16])0x0;
    uStack_48 = 7;
    uStack_40 = 8;
    local_78 = 0x3f800000;
    FUN_1801406e0(&uStack_60,0x10,lStack_70);
    local_88[0] = 0;
    local_118 = param_5;
    local_110 = &local_90;
    local_100 = local_c0;
    local_f8 = local_b0;
    local_e8 = local_160;
    local_e0 = &local_78;
    local_d8 = local_88;
    local_108 = param_3;
    local_f0 = param_1;
    local_d0 = param_4;
    uVar6 = FUN_18015b360(local_138,param_1 + 0x40);
    FUN_1801a65c0(&local_118,&local_118,uVar6,0);
    FUN_1801869d0(&local_78);
    FUN_1801b63b0(local_c0,local_c0,*(undefined8 *)(local_c0._0_8_ + 8));
    FUN_1804547d0(local_c0._0_8_,0x40);
    FUN_18015c010(local_b0);
    FUN_18017cdd0(param_5);
  }
}



