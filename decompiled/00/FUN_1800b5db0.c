// FUN_1800b5db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b5db0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1800b5db0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 ***local_180;
  longlong local_178;
  char *local_168;
  undefined8 local_160;
  undefined8 ***local_158;
  longlong local_150;
  undefined8 ***local_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  undefined8 ***local_118;
  longlong local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 local_b8 [32];
  undefined1 local_98 [16];
  undefined8 local_88;
  ulonglong local_80;
  undefined8 ***local_78;
  longlong lStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_80 = 0;
  FUN_18015ba30(local_98,*param_2,param_2[1]);
  if ((undefined1 *)(param_1 + 0x2f0) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x2f0),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x358) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x358),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x3c0) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x3c0),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x428) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x428),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x490) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x490),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x4f8) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x4f8),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x570) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x570),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x5e0) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x5e0),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x650) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x650),puVar5,local_88);
  }
  if ((undefined1 *)(param_1 + 0x6b8) != local_98) {
    puVar5 = local_98;
    if (0xf < local_80) {
      puVar5 = (undefined1 *)local_98._0_8_;
    }
    FUN_180113930((undefined1 *)(param_1 + 0x6b8),puVar5,local_88);
  }
  local_158 = (undefined8 ***)local_98;
  if (0xf < local_80) {
    local_158 = (undefined8 ***)local_98._0_8_;
  }
  local_168 = "max fov";
  local_160 = 7;
  local_150 = local_88;
  FUN_1800f2e80(param_1 + 0x520,&local_158,&local_168);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bc658;
  local_150 = 10;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x524,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bbf80;
  local_150 = 10;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x528,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bc6b8;
  local_150 = 0x19;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x52c,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bcb58;
  local_150 = 0x19;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x598,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bc668;
  local_150 = 0xb;
  local_160 = local_88;
  FUN_1800f2e80(param_1 + 0x608,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bc4d8;
  local_150 = 8;
  local_160 = local_88;
  FUN_1800f2d20(param_1 + 0x6e0,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bcb78;
  local_150 = 0x12;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x2a0,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bcb90;
  local_150 = 0x15;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x2a4,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bc6d8;
  local_150 = 0x13;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x2a8,&local_168,&local_158);
  local_168 = local_98;
  if (0xf < local_80) {
    local_168 = (char *)local_98._0_8_;
  }
  local_158 = (undefined8 ***)0x1806bc6f0;
  local_150 = 0x16;
  local_160 = local_88;
  FUN_1800f3030(param_1 + 0x2ac,&local_168,&local_158);
  uVar7 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x170);
  auVar10 = ZEXT1664(_DAT_18086d450);
  while( true ) {
    pcVar8 = (char *)((longlong)&uStack_68 + 5);
    uVar4 = (ulonglong)(uVar7 + 2);
    do {
      pcVar8 = pcVar8 + -1;
      uVar2 = uVar4 / 10;
      *pcVar8 = (char)uVar4 + (char)uVar2 * -10 + '0';
      uVar4 = uVar2;
    } while ((int)uVar2 != 0);
    FUN_18015bdb0(local_b8,pcVar8,(longlong)&uStack_68 + 5);
    plVar3 = (longlong *)FUN_180141490(local_b8,0," preset ",8);
    local_148 = (undefined8 ***)*plVar3;
    lStack_140 = plVar3[1];
    lStack_138 = plVar3[2];
    uStack_130 = plVar3[3];
    *(undefined1 *)plVar3 = 0;
    plVar3[2] = 0;
    plVar3[3] = 0xf;
    auVar10 = ZEXT1664(auVar10._0_16_);
    local_78 = local_148;
    lStack_70 = lStack_140;
    uStack_68 = lStack_138;
    uStack_60 = uStack_130;
    FUN_18015c010(local_b8);
    auVar9 = auVar10._0_16_;
    if (puVar6 + -0x26 != (undefined8 *)local_98) {
      puVar5 = local_98;
      if (0xf < local_80) {
        puVar5 = (undefined1 *)local_98._0_8_;
      }
      FUN_180113930(puVar6 + -0x26,puVar5,local_88);
      auVar9 = auVar10._0_16_;
    }
    if (0x7fffffffffffffffU - lStack_138 < 0x13) break;
    local_180 = &local_78;
    if (0xf < uStack_60) {
      local_180 = local_78;
    }
    local_188 = 0x13;
    auVar10 = ZEXT1664(auVar9);
    local_178 = lStack_138;
    FUN_18015a9c0(&local_f8);
    auVar9 = auVar10._0_16_;
    puVar1 = puVar6 + -0x2a;
    if (puVar1 != &local_f8) {
      FUN_18015c010(puVar1);
      *puVar1 = CONCAT71(local_f8._1_7_,(undefined1)local_f8);
      puVar6[-0x29] = uStack_f0;
      puVar6[-0x28] = auStack_e8._0_8_;
      puVar6[-0x27] = auStack_e8._8_8_;
      auVar9 = auVar10._0_16_;
      local_f8._0_1_ = 0;
      auStack_e8 = auVar9;
    }
    auVar10 = ZEXT1664(auVar9);
    FUN_18015c010(&local_f8);
    *(undefined4 *)(puVar6 + -0x21) = 0xb;
    if (0x7fffffffffffffffU - uStack_68 < 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_180 = &local_78;
    if (0xf < uStack_60) {
      local_180 = local_78;
    }
    local_178 = uStack_68;
    local_188 = 0x19;
    FUN_18015a9c0(&local_148);
    local_158 = &local_148;
    if (0xf < uStack_130) {
      local_158 = local_148;
    }
    local_168 = local_98;
    if (0xf < local_80) {
      local_168 = (char *)local_98._0_8_;
    }
    local_150 = lStack_138;
    local_160 = local_88;
    FUN_1800f3030(puVar6 + -0x21,&local_168,&local_158);
    FUN_18015c010(&local_148);
    if (puVar6 + 4 != (undefined8 *)local_98) {
      puVar5 = local_98;
      if (0xf < local_80) {
        puVar5 = (undefined1 *)local_98._0_8_;
      }
      FUN_180113930(puVar6 + 4,puVar5,local_88);
    }
    if (0x7fffffffffffffffU - uStack_68 < 0x13) break;
    local_180 = &local_78;
    if (0xf < uStack_60) {
      local_180 = local_78;
    }
    local_178 = uStack_68;
    local_188 = 0x13;
    FUN_18015a9c0(&local_d8);
    auVar9 = auVar10._0_16_;
    if (puVar6 != &local_d8) {
      FUN_18015c010(puVar6);
      *puVar6 = CONCAT71(local_d8._1_7_,(undefined1)local_d8);
      puVar6[1] = uStack_d0;
      puVar6[2] = auStack_c8._0_8_;
      puVar6[3] = auStack_c8._8_8_;
      auVar9 = auVar10._0_16_;
      local_d8._0_1_ = 0;
      auStack_c8 = auVar9;
    }
    auVar10 = ZEXT1664(auVar9);
    FUN_18015c010(&local_d8);
    *(undefined4 *)(puVar6 + 9) = 0x4b;
    if (0x7fffffffffffffffU - uStack_68 < 0x19) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_180 = &local_78;
    if (0xf < uStack_60) {
      local_180 = local_78;
    }
    local_178 = uStack_68;
    local_188 = 0x19;
    FUN_18015a9c0(&local_148);
    local_118 = &local_148;
    if (0xf < uStack_130) {
      local_118 = local_148;
    }
    local_108 = local_98;
    if (0xf < local_80) {
      local_108 = (undefined1 *)local_98._0_8_;
    }
    local_110 = lStack_138;
    local_100 = local_88;
    FUN_1800f3030(puVar6 + 9,&local_108,&local_118);
    FUN_18015c010(&local_148);
    FUN_18015c010(&local_78);
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 0xe;
    if (2 < uVar7) {
      FUN_18015c010(local_98);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18015bb70();
}



