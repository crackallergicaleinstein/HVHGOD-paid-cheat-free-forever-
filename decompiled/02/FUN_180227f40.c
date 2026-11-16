// FUN_180227f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180227f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_180227f40(uint *param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [64];
  uint uVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [64];
  uint local_res20 [2];
  undefined8 *local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [32];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac [116];
  
  if ((DAT_180cd3a80 & 1) == 0) {
    DAT_180cd3a80 = DAT_180cd3a80 | 1;
    local_1e8 = 0x50000008b;
    uStack_1e0 = 0xffffffffffffffff;
    uStack_1d8 = 0xffffffffffffffff;
    uStack_1d0 = 0x8b00000048;
    local_1c8 = 0x240000004c;
    uStack_1c0 = 0x8300000040;
    uStack_1b8 = 0x1000000049;
    uStack_1b0 = 0x8900000004;
    local_1a8 = 0x2800000041;
    uStack_1a0 = 0x8b00000048;
    uStack_198 = 0x2400000044;
    uStack_190 = 0xf300000040;
    local_188 = 0x100000000f;
    uStack_180 = 0xffffffff00000005;
    local_178 = 0xffffffffffffffff;
    uStack_170 = 0x81ffffffff;
    uStack_168 = 0x1000000048;
    uStack_160 = 0x80;
    local_158 = 0;
    uStack_150 = 0xf000000f3;
    uStack_148 = 0x4000000011;
    uStack_140 = 0x480000003c;
    local_138 = _DAT_18086e060;
    local_118 = vpcmpeqd_avx(DAT_18086e060._0_16_,DAT_18086e060._0_16_);
    local_108 = 0x4800000081;
    uStack_100 = 0x10;
    uStack_f8 = 1;
    uStack_f0 = 0xf300000000;
    local_e8 = 0x110000000f;
    uStack_e0 = 0x4000000048;
    uStack_d8 = 0x570000000f;
    uStack_d0 = 0xf3000000c9;
    local_c8 = 0x100000000f;
    uStack_c0 = 0xffffffff00000005;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0xffffffff;
    local_1f8 = &local_1e8;
    local_1f0 = local_ac;
    lVar8 = FUN_180219910(&local_1f8);
    if (lVar8 == 0) {
      DAT_180cd3a88 = 0;
      DAT_180cd3a90 = 0;
      DAT_180cd3a98 = 0;
      DAT_180cd3aa0 = 0;
    }
    else {
      DAT_180cd3a88 = FUN_180219870(lVar8,2,6);
      DAT_180cd3a90 = FUN_180219870(lVar8 + 0x17,4,8);
      DAT_180cd3a98 = FUN_180219870(lVar8 + 0x30,4,8);
      DAT_180cd3aa0 = FUN_180219870(lVar8 + 0x47,4,8);
    }
  }
  lVar8 = DAT_180cd3a88;
  if ((((DAT_180cd3a88 != 0) && (DAT_180cd3a90 != 0)) && (DAT_180cd3a98 != 0)) &&
     (DAT_180cd3aa0 != 0)) {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar8 == 0) {
      bVar1 = false;
    }
    else {
      local_res20[0] = 0;
      cVar6 = FUN_1804514f0(local_res20,lVar8,4);
      if (cVar6 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar5 = local_res20[0];
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    lVar8 = DAT_180cd3a90;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    uVar10 = 0;
    if (lVar8 == 0) {
      bVar2 = false;
    }
    else {
      local_res20[0] = 0;
      cVar6 = FUN_1804514f0(local_res20,lVar8,4);
      if (cVar6 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    auVar14 = ZEXT464(local_res20[0]);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    lVar8 = DAT_180cd3a98;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar8 == 0) {
      bVar3 = false;
    }
    else {
      local_res20[0] = uVar10;
      cVar6 = FUN_1804514f0(local_res20,lVar8,4);
      if (cVar6 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    auVar13 = ZEXT464(local_res20[0]);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    lVar8 = DAT_180cd3aa0;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar4 = false;
    if (lVar8 != 0) {
      local_res20[0] = uVar10;
      cVar6 = FUN_1804514f0(local_res20,lVar8,4);
      if (cVar6 == '\0') {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    auVar11 = ZEXT464(local_res20[0]);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (((((bVar1) && (uVar5 < 5)) && ((bVar2 && ((bVar3 && (bVar4)))))) &&
        (sVar7 = thunk_FUN_180624430(auVar14._0_8_), sVar7 < 1)) &&
       ((sVar7 = thunk_FUN_180624430(auVar13._0_8_), sVar7 < 1 &&
        (sVar7 = thunk_FUN_180624430(auVar11._0_8_), sVar7 < 1)))) {
      uVar12 = 0x7fffffff;
      fVar15 = 20.0;
      if ((ABS(auVar14._0_4_) <= 20.0) &&
         ((ABS(auVar13._0_4_) <= 20.0 &&
          (auVar16 = ZEXT464(0x43b40000), ABS(auVar11._0_4_) <= 360.0)))) {
        if (param_2 == 0) {
          uVar10 = FUN_180615070(auVar11._0_8_,auVar16._0_8_);
          *param_1 = uVar5;
          param_1[1] = auVar14._0_4_;
          param_1[2] = auVar13._0_4_;
          param_1[3] = uVar10;
          param_1[4] = 0xffffffff;
          param_1[5] = 0;
          *(undefined1 *)(param_1 + 6) = 1;
          return param_1;
        }
        cVar6 = FUN_180224970(param_2,param_3);
        if (cVar6 != '\0') {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          bVar1 = false;
          if (param_2 + 0x811 != 0) {
            local_res20[0] = local_res20[0] & 0xffffff00;
            cVar6 = FUN_1804514f0(local_res20,param_2 + 0x811,1);
            if (cVar6 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          cVar6 = (char)local_res20[0];
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          if ((bVar1) && (cVar6 == '\0')) {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (param_2 + 0x824 == 0) {
              bVar1 = false;
            }
            else {
              local_res20[0] = uVar10;
              cVar6 = FUN_1804514f0(local_res20,param_2 + 0x824,4);
              if (cVar6 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            auVar14 = ZEXT464(local_res20[0]);
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (param_2 + 0x828 == 0) {
              bVar2 = false;
            }
            else {
              local_res20[0] = uVar10;
              cVar6 = FUN_1804514f0(local_res20,param_2 + 0x828,4);
              if (cVar6 == '\0') {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
            }
            auVar13 = ZEXT464(local_res20[0]);
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (param_2 + 0x838 == 0) {
              bVar3 = false;
            }
            else {
              local_res20[0] = uVar10;
              cVar6 = FUN_1804514f0(local_res20,param_2 + 0x838,4);
              if (cVar6 == '\0') {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
            }
            auVar11 = ZEXT464(local_res20[0]);
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            if (((((bVar1) && (bVar2)) && (bVar3)) &&
                (((sVar7 = thunk_FUN_180624430(auVar14._0_8_), sVar7 < 1 &&
                  (sVar7 = thunk_FUN_180624430(auVar13._0_8_), sVar7 < 1)) &&
                 ((sVar7 = thunk_FUN_180624430(auVar11._0_8_), sVar7 < 1 &&
                  (((float)(auVar14._0_4_ & uVar12) <= fVar15 &&
                   ((float)(auVar13._0_4_ & uVar12) <= fVar15)))))))) &&
               ((float)(auVar11._0_4_ & uVar12) <= auVar16._0_4_)) {
              uVar10 = FUN_180615070(auVar11._0_8_,auVar16._0_8_);
              *param_1 = uVar5;
              param_1[1] = auVar14._0_4_;
              param_1[2] = auVar13._0_4_;
              param_1[3] = uVar10;
              param_1[4] = uVar5;
              param_1[5] = 0;
              *(undefined1 *)(param_1 + 6) = 1;
              return param_1;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Read-only address (ram,0x00018086e060) is written */
  return param_1;
}



