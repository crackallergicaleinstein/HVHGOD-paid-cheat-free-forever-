// FUN_18024f560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024f560 */

void FUN_18024f560(longlong param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 extraout_var [56];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [64];
  int local_1d8;
  undefined4 uStack_1d4;
  ulonglong uStack_1d0;
  uint uStack_1c8;
  ulonglong local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  ulonglong local_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  ulonglong local_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar1 = false;
  if (lVar5 != 0) {
    local_198 = 0;
    lStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    local_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    local_124 = 0;
    local_120 = 0;
    local_118 = (undefined1  [16])0x0;
    local_108 = 0;
    cVar2 = FUN_1804514f0(&local_198,lVar5,0x98);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      local_d8 = CONCAT44(uStack_174,local_178);
      uStack_d0 = CONCAT44(uStack_16c,uStack_170);
      uStack_c8 = CONCAT44(uStack_164,uStack_168);
      lStack_c0 = CONCAT44(uStack_15c,uStack_160);
      local_f8 = local_198;
      lStack_f0 = lStack_190;
      uStack_e8 = uStack_188;
      uStack_e0 = uStack_180;
      local_b8 = CONCAT44(uStack_154,uStack_158);
      uStack_b0 = CONCAT44(uStack_14c,uStack_150);
      uStack_a8 = CONCAT44(uStack_144,uStack_148);
      uStack_a0 = CONCAT44(uStack_13c,uStack_140);
      local_98 = CONCAT44(local_134,uStack_138);
      uStack_90 = CONCAT44(uStack_12c,uStack_130);
      uStack_88 = CONCAT44(local_124,uStack_128);
      local_78 = local_118._0_8_;
      uStack_70 = local_118._8_8_;
      uStack_80 = local_120;
      bVar1 = true;
    }
  }
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
  if ((bVar1) && (*(longlong *)(param_1 + 0x58) = lStack_f0, local_b8 != 0)) {
    *(longlong *)(param_1 + 0x48) = local_b8 + 0x10;
    FUN_180250640(&local_198);
    if (((char)local_120 != '\0') && (CONCAT44(uStack_164,uStack_168) != 0)) {
      lVar5 = CONCAT44(uStack_164,uStack_168) + 0x10;
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      bVar1 = false;
      if (lVar5 != 0) {
        local_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        cVar2 = FUN_1804514f0(&local_1d8,lVar5,0x14);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          local_1b8 = CONCAT44(uStack_1d4,local_1d8);
          bVar1 = true;
          uStack_1b0 = uStack_1d0;
          local_1a8 = uStack_1c8;
        }
      }
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if (bVar1) {
        *(uint *)(param_1 + 100) = (uint)uStack_1b0;
        *(float *)(param_1 + 0x68) = uStack_1b0._4_4_;
        *(uint *)(param_1 + 0x6c) = local_1a8;
        uVar10 = *(undefined8 *)(param_1 + 100);
        local_1d8 = (int)uVar10;
        uStack_1d4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        sVar3 = thunk_FUN_180624430(uVar10);
        if ((((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(uStack_1d4), sVar3 < 1)) &&
            (sVar3 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x6c)), sVar3 < 1)) &&
           (-1 < *(longlong *)(param_1 + 0x58))) {
          cVar2 = '\x01';
        }
        else {
          cVar2 = '\0';
        }
        lVar5 = lStack_c0;
        *(undefined4 *)(param_1 + 0xe4) = (undefined4)local_198;
        *(undefined4 *)(param_1 + 0xe0) = (undefined4)local_1b8;
        *(undefined8 *)(param_1 + 0x10) = local_98;
        *(undefined8 *)(param_1 + 0x18) = uStack_90;
        *(undefined8 *)(param_1 + 0x20) = uStack_88;
        *(undefined1 *)(param_1 + 0xf8) = (undefined1)uStack_70;
        *(undefined4 *)(param_1 + 0xc4) = uStack_154;
        *(undefined4 *)(param_1 + 0xdc) = uStack_128;
        *(undefined4 *)(param_1 + 0xe8) = uStack_12c;
        *(undefined4 *)(param_1 + 0xec) = uStack_130;
        *(undefined4 *)(param_1 + 0xd0) = uStack_b0._4_4_;
        *(char *)(param_1 + 0xf0) = cVar2;
        *(uint *)(param_1 + 0xbc) = (uint)uStack_c8;
        *(undefined4 *)(param_1 + 0xb4) = uStack_150;
        *(undefined4 *)(param_1 + 0xb8) = uStack_14c;
        if ((((uint)uStack_c8 != 0) && (cVar2 != '\0')) &&
           (((uint)uStack_c8 < 0x21 &&
            (((int)(uint)uStack_c8 <= uStack_c8._4_4_ && (lStack_c0 != 0)))))) {
          lVar4 = FUN_18017ea70();
          local_1d8 = 0;
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          cVar2 = FUN_1804514f0(&local_1d8,lVar5,4);
          iVar8 = local_1d8;
          lVar4 = FUN_18017ea70();
          if (*(int *)(lVar4 + 4) != 0) {
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
          }
          if (((cVar2 != '\0') && (*(int *)(param_1 + 0xbc) <= iVar8)) &&
             (iVar8 = 0, 0 < *(int *)(param_1 + 0xbc))) {
            lVar4 = CONCAT44(uStack_1d4,local_1d8);
            uVar13 = 0x7fffffff;
            uVar14 = 0x7fffffff;
            uVar15 = 0x7fffffff;
            uVar16 = 0x7fffffff;
            auVar17 = ZEXT464(0x43b40000);
            do {
              lVar7 = lVar5 + ((longlong)iVar8 + 1) * 8;
              lVar6 = FUN_18017ea70();
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
              bVar1 = false;
              if (lVar7 != 0) {
                local_1d8 = 0;
                uStack_1d4 = 0;
                cVar2 = FUN_1804514f0(&local_1d8,lVar7,8);
                if (cVar2 == '\0') {
                  bVar1 = false;
                }
                else {
                  lVar4 = CONCAT44(uStack_1d4,local_1d8);
                  bVar1 = true;
                }
              }
              lVar7 = FUN_18017ea70();
              if (*(int *)(lVar7 + 4) != 0) {
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
              }
              if ((bVar1) && (lVar4 != 0)) {
                FUN_18024eed0(&local_198,lVar4 + 0x10);
                if (((char)uStack_130 != '\0') && (lStack_190 != 0)) {
                  lVar7 = lStack_190 + 0x10;
                  lVar6 = FUN_18017ea70();
                  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
                  if (lVar7 == 0) {
                    bVar1 = false;
                    uVar9 = local_1a8;
                  }
                  else {
                    local_1d8 = 0;
                    uStack_1d4 = 0;
                    uStack_1d0 = 0;
                    uStack_1c8 = 0;
                    cVar2 = FUN_1804514f0(&local_1d8,lVar7,0x14);
                    if (cVar2 == '\0') {
                      bVar1 = false;
                      uVar9 = local_1a8;
                    }
                    else {
                      local_1b8 = CONCAT44(uStack_1d4,local_1d8);
                      bVar1 = true;
                      uStack_1b0 = uStack_1d0;
                      uVar9 = uStack_1c8;
                    }
                  }
                  lVar7 = FUN_18017ea70();
                  if (*(int *)(lVar7 + 4) != 0) {
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                  }
                  if (bVar1) {
                    uVar12 = (uint)uStack_1b0;
                    sVar3 = thunk_FUN_180624430(uStack_1b0 & 0xffffffff);
                    if (((sVar3 < 1) && (((uint)uStack_1b0._4_4_ & 0x7f800000) != 0x7f800000)) &&
                       ((uVar9 & 0x7f800000) != 0x7f800000)) {
                      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
                      *(ulonglong *)(param_1 + 0x28) =
                           ((((((((((ulonglong)uVar12 ^ *(ulonglong *)(param_1 + 0x28)) *
                                   0x100000001b3 ^ (ulonglong)(uint)uStack_1b0._4_4_) *
                                  0x100000001b3 ^ (ulonglong)uVar9) * 0x100000001b3 ^
                                local_1b8 & 0xffffffff) * 0x100000001b3 ^ local_198 & 0xffffffff) *
                               0x100000001b3 ^ (ulonglong)uStack_148) * 0x100000001b3 ^
                             (ulonglong)uStack_144) * 0x100000001b3 ^ (ulonglong)uStack_140) *
                            0x100000001b3 ^ (ulonglong)uStack_13c) * 0x100000001b3;
                      if (iVar8 == 0) {
                        *(float *)(param_1 + 0x9c) = uStack_1b0._4_4_;
                      }
                      if (iVar8 == *(int *)(param_1 + 0xbc) + -1) {
                        *(float *)(param_1 + 0xa0) = uStack_1b0._4_4_;
                        *(uint *)(param_1 + 200) = uStack_148;
                        *(uint *)(param_1 + 0xa8) = uStack_144;
                        *(uint *)(param_1 + 0xcc) = uStack_140;
                        *(uint *)(param_1 + 0xac) = uStack_13c;
                      }
                      uVar10 = FUN_180615070(uStack_1b0._4_4_ - *(float *)(param_1 + 0x68),
                                             auVar17._0_8_);
                      auVar11._0_4_ = (uint)uVar10 & uVar13;
                      auVar11._4_4_ = (uint)((ulonglong)uVar10 >> 0x20) & uVar14;
                      auVar11._8_4_ = extraout_var._0_4_ & uVar15;
                      auVar11._12_4_ = extraout_var._4_4_ & uVar16;
                      auVar11 = vmaxss_avx(auVar11,ZEXT416(*(uint *)(param_1 + 0xa4)));
                      *(int *)(param_1 + 0xa4) = auVar11._0_4_;
                    }
                  }
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(param_1 + 0xbc));
          }
        }
      }
    }
  }
  return;
}



