// FUN_180229ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180229ea0 */

undefined4 * FUN_180229ea0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined1 in_ZMM2 [64];
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [4];
  undefined8 *local_198;
  undefined1 *local_190;
  longlong local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  if ((DAT_180cd3ad0 & 1) == 0) {
    DAT_180cd3ad0 = DAT_180cd3ad0 | 1;
    local_178 = 0xf000000f3;
    uStack_170 = 0x500000010;
    local_168 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
    local_158 = 0x8b00000048;
    uStack_150 = 0xffffffff0000000d;
    uStack_148 = 0xffffffffffffffff;
    uStack_140 = 0x48ffffffff;
    local_138 = 0xc100000081;
    uStack_130 = 0xa0;
    uStack_128 = 0;
    uStack_120 = 0x4800000081;
    local_118 = 0x8000000010;
    uStack_110 = 0;
    uStack_108 = 0xf300000000;
    uStack_100 = 0x110000000f;
    local_f8 = 0x3c00000040;
    uStack_f0 = 0x8b00000048;
    uStack_e8 = 0x2400000044;
    uStack_e0 = 0xf300000040;
    local_d8 = 0x100000000f;
    uStack_d0 = 0xffffffff0000000d;
    uStack_c8 = 0xffffffffffffffff;
    uStack_c0 = 0x81ffffffff;
    local_b8 = 0x1000000048;
    uStack_b0 = 0x100000000;
    uStack_a8 = 0;
    uStack_a0 = 0xf000000f3;
    local_98 = 0x4800000011;
    uStack_90 = 0x4800000040;
    uStack_88 = 0x440000008b;
    uStack_80 = 0x4000000024;
    local_78 = 0xf000000f3;
    uStack_70 = 0x500000010;
    local_198 = &local_178;
    local_190 = local_58;
    local_68 = local_168;
    lVar4 = FUN_180219910(&local_198);
    if ((((lVar4 == 0) || (lVar5 = FUN_180219870(lVar4,4,8), lVar5 == 0)) ||
        (lVar6 = FUN_180219870(lVar4 + 0x27,4,8), lVar6 != lVar5 + 4)) ||
       (lVar4 = FUN_180219870(lVar4 + 0x40,4,8), lVar4 != lVar5 + 8)) {
      lVar5 = 0;
    }
    DAT_180cd3ad8 = lVar5;
  }
  if (DAT_180cd3ad8 != 0) {
    plVar7 = (longlong *)FUN_180224dc0(&local_198,param_2,param_3);
    lVar4 = DAT_180cd3ad8;
    local_188 = plVar7[2];
    lVar5 = plVar7[1];
    if (*plVar7 != 0) {
      lVar5 = *plVar7;
    }
    if (lVar5 != 0) {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      if (lVar4 == 0) {
        local_19c[0] = 0;
        bVar1 = false;
      }
      else {
        local_198 = (undefined8 *)0x0;
        local_190 = (undefined1 *)((ulonglong)local_190 & 0xffffffff00000000);
        cVar2 = FUN_1804514f0(&local_198,lVar4,0xc);
        if (cVar2 == '\0') {
          bVar1 = false;
          local_19c[0] = 0;
        }
        else {
          local_1a8 = local_198;
          local_1a0 = local_190._0_4_;
          local_19c[0] = 1;
          bVar1 = true;
        }
      }
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if (bVar1) {
        puVar8 = (uint *)&local_1a8;
        uVar10 = 0x7fffffff;
        fVar11 = 128.0;
        while( true ) {
          uVar9 = *puVar8;
          sVar3 = thunk_FUN_180624430(uVar9);
          if ((0 < sVar3) || (fVar11 < (float)(uVar9 & uVar10))) break;
          puVar8 = puVar8 + 1;
          if (puVar8 == (uint *)local_19c) {
            *param_1 = 0;
            param_1[1] = (uint)local_1a8;
            param_1[2] = local_1a8._4_4_;
            param_1[3] = 0;
            param_1[4] = 0xffffffff;
            param_1[5] = local_1a0;
            *(undefined1 *)(param_1 + 6) = 1;
            return param_1;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



