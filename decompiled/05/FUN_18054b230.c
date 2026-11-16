// FUN_18054b230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054b230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18054b230(byte param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 *******pppppppuVar9;
  byte *pbVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  uint local_1c8;
  uint local_1c4;
  undefined8 local_1b8;
  undefined8 *puStack_1b0;
  undefined8 *local_1a8;
  longlong lStack_1a0;
  undefined4 *local_198;
  undefined1 *puStack_190;
  undefined1 auStack_188 [16];
  uint local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined8 local_168;
  undefined8 **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  uint local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [32];
  longlong local_c0 [4];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 (*local_70) [16];
  undefined8 *******local_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  uVar12 = (uint)param_1;
  local_1c4 = (uint)param_1;
  puVar15 = (undefined4 *)0x0;
  uVar2 = 0;
  local_1c8 = 0;
  DAT_180c6293c = 0x12ffffff;
  if (DAT_1808e4fb5 != '\0') {
    DAT_180c6293c = 0x18000000;
  }
  DAT_180c62f64 = 0xff969696;
  if (DAT_1808e4fb5 != '\0') {
    DAT_180c62f64 = 0xff646464;
  }
  uVar13 = 0xffffffff;
  pcVar3 = "##neverlose";
  cVar11 = '#';
  do {
    pcVar3 = pcVar3 + 1;
    if (((cVar11 == '#') && (*pcVar3 == '#')) && (pcVar3[1] == '#')) {
      uVar13 = 0xffffffff;
      pcVar3 = pcVar3 + 2;
    }
    else {
      uVar13 = crc32(uVar13,cVar11);
    }
    cVar11 = *pcVar3;
  } while (cVar11 != '\0');
  lVar4 = FUN_1804bbfd0(~uVar13);
  if (((lVar4 != 0) && (DAT_180bbef49 != '\0')) && (DAT_180bda4dc == 0)) {
    if (*(float *)(lVar4 + 0x28) <= *(float *)(DAT_180bb8ae8 + 0x110)) {
      if ((*(float *)(lVar4 + 0x2c) <= *(float *)(DAT_180bb8ae8 + 0x114)) &&
         (*(float *)(DAT_180bb8ae8 + 0x110) < *(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x30)))
      {
        uVar12 = (uint)param_1;
        if (*(float *)(DAT_180bb8ae8 + 0x114) < *(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x34))
        {
          uVar12 = 0;
        }
        local_1c4 = uVar12;
      }
    }
  }
  if (*(int *)(DAT_180bb8ae8 + 0x1ff8) < 1) {
    if (((char)uVar12 == '\0') || ((DAT_180bda4dc & 0xfffffffd) != 0)) goto LAB_18054b35f;
    FUN_180548760();
LAB_18054b372:
    cVar11 = (char)uVar12;
    if ((DAT_180bda4dc == 0) || (DAT_180bda4dc == 3)) goto LAB_18054b39d;
  }
  else {
    uVar12 = 0;
LAB_18054b35f:
    FUN_180548760();
    local_1c4 = uVar12;
    if ((char)uVar12 != '\0') goto LAB_18054b372;
  }
  cVar11 = (char)uVar12;
LAB_18054b39d:
  FUN_180549500();
  auVar20 = ZEXT1664(_DAT_18086d450);
  if (DAT_1808e68b0 != '\0') {
    local_80 = (undefined1  [16])0x0;
    local_70 = (undefined1 (*) [16])0x0;
    local_1a8 = DAT_1808e68c0;
    if (DAT_1808e68b8 != DAT_1808e68c0) {
      puVar16 = DAT_1808e68b8 + 4;
      do {
        lVar4 = puVar16[2];
        if (lVar4 == 0) {
          local_a0 = (undefined1  [16])0x0;
          local_90 = (undefined1  [16])0x0;
          FUN_18015ba30(local_a0,&PTR_180700558,0);
          auVar19 = auVar20._0_16_;
          uVar12 = uVar2 | 1;
        }
        else {
          if (0x7fffffffffffffffU - lVar4 < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_1e0 = puVar16;
          if (0xf < (ulonglong)puVar16[3]) {
            local_1e0 = (undefined8 *)*puVar16;
          }
          local_1e8 = (undefined1 *)0x3;
          local_1d8 = lVar4;
          FUN_18015a9c0(local_e0);
          local_1c8 = uVar2 | 0x82;
          puVar5 = (undefined8 *)FUN_18015b2a0(local_e0,&DAT_1807d32dc,1);
          auVar19 = auVar20._0_16_;
          local_100 = *puVar5;
          uStack_f8 = puVar5[1];
          uStack_f0 = puVar5[2];
          uStack_e8 = puVar5[3];
          *(undefined1 *)puVar5 = 0;
          puVar5[2] = 0;
          puVar5[3] = 0xf;
          uVar12 = uVar2 | 0xc6;
        }
        auVar20 = ZEXT1664(auVar19);
        local_1c8 = uVar12;
        pbVar6 = (byte *)FUN_18015b360(&local_148,puVar16 + -4);
        auVar19 = auVar20._0_16_;
        bVar18 = true;
        if (*(ulonglong *)(pbVar6 + 0x18) < 0x10) {
          pbVar10 = pbVar6;
        }
        else {
          pbVar10 = *(byte **)pbVar6;
        }
        pbVar17 = pbVar10 + *(longlong *)(pbVar6 + 0x10);
        for (; pbVar10 != pbVar17; pbVar10 = pbVar10 + 1) {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
          bVar1 = *pbVar10;
          uVar2 = (uint)bVar1;
          if ((bVar1 == 0x5f) || (bVar1 == 0x2d)) {
            *pbVar10 = 0x20;
            uVar2 = 0x20;
          }
          if (bVar18) {
            uVar2 = toupper(uVar2);
            *pbVar10 = (byte)uVar2;
          }
          auVar19 = auVar20._0_16_;
          bVar18 = (char)uVar2 == ' ';
        }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
        local_168 = *(undefined8 *)pbVar6;
        ppuStack_160 = *(undefined8 ***)(pbVar6 + 8);
        uStack_158 = *(undefined8 *)(pbVar6 + 0x10);
        uStack_150 = *(undefined8 *)(pbVar6 + 0x18);
        *pbVar6 = 0;
        pbVar6[0x10] = 0;
        pbVar6[0x11] = 0;
        pbVar6[0x12] = 0;
        pbVar6[0x13] = 0;
        pbVar6[0x14] = 0;
        pbVar6[0x15] = 0;
        pbVar6[0x16] = 0;
        pbVar6[0x17] = 0;
        pbVar6[0x18] = 0xf;
        pbVar6[0x19] = 0;
        pbVar6[0x1a] = 0;
        pbVar6[0x1b] = 0;
        pbVar6[0x1c] = 0;
        pbVar6[0x1d] = 0;
        pbVar6[0x1e] = 0;
        pbVar6[0x1f] = 0;
        auVar20 = ZEXT1664(auVar19);
        FUN_18015c010(pbVar6);
        FUN_18015a6e0(&local_198);
        auVar19 = auVar20._0_16_;
        uVar2 = uVar12 | 0x20;
        local_1b8 = (char *)CONCAT44(local_1b8._4_4_,DAT_180b0d680);
        pcVar3 = local_1b8;
        local_178 = DAT_180b0d680 & 0xff;
        uVar13 = DAT_180b0d680 >> 8 & 0xff;
        bVar1 = (byte)(DAT_180b0d680 >> 0x10);
        if (DAT_1808e4fb5 != '\0') {
          bVar8 = (byte)(DAT_180b0d680 >> 8);
          if ((((byte)DAT_180b0d680 == bVar8) && (bVar8 == bVar1)) && (0xb4 < (byte)DAT_180b0d680))
          {
            bVar1 = 0x1e;
            local_178 = 0x1e;
            uVar13 = 0x1e;
          }
        }
        local_1b8._3_1_ = (undefined1)(DAT_180b0d680 >> 0x18);
        local_178 = ((uint)CONCAT11(local_1b8._3_1_,bVar1) << 8 | uVar13) << 8 | local_178;
        local_1c8 = uVar2;
        local_1b8 = pcVar3;
        if ((undefined1 (*) [16])local_80._8_8_ == local_70) {
          FUN_18056eba0(local_80);
          auVar19 = auVar20._0_16_;
        }
        else {
          *(undefined4 **)local_80._8_8_ = local_198;
          *(undefined1 **)(local_80._8_8_ + 8) = puStack_190;
          *(undefined8 *)(local_80._8_8_ + 0x10) = auStack_188._0_8_;
          *(undefined8 *)(local_80._8_8_ + 0x18) = auStack_188._8_8_;
          local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffffffffff00);
          *(uint *)(local_80._8_8_ + 0x20) = local_178;
          local_80._8_8_ = (undefined8 *)(local_80._8_8_ + 0x28);
          auStack_188 = auVar19;
        }
        auVar20 = ZEXT1664(auVar19);
        FUN_18015c010(&local_198);
        FUN_18015c010(&local_168);
        if ((uVar12 & 4) != 0) {
          uVar2 = uVar12 & 0xfffffffb | 0x20;
          local_1c8 = uVar2;
          FUN_18015c010(&local_100);
        }
        if ((uVar2 & 2) != 0) {
          uVar2 = uVar2 & 0xfffffffd;
          local_1c8 = uVar2;
          FUN_18015c010(local_e0);
        }
        if ((uVar2 & 1) != 0) {
          uVar2 = uVar2 & 0xfffffffe;
          local_1c8 = uVar2;
          FUN_18015c010(local_a0);
        }
        puVar5 = puVar16 + 4;
        puVar16 = puVar16 + 8;
      } while (puVar5 != local_1a8);
    }
    local_198 = &DAT_180b0d67c;
    puStack_190 = &DAT_180b0d670;
    auStack_188._8_8_ = &DAT_180b0d678;
    auStack_188._0_8_ = &DAT_180b0d674;
    local_178 = 0;
    local_174 = 0x3eb33333;
    local_170 = &DAT_180b0d67c;
    bVar18 = DAT_180b0d692 == '\0';
    if (bVar18) {
      local_110 = (undefined1  [16])0x0;
      local_120 = ZEXT816(0);
      FUN_18015ba30(local_120,"Active Binds",0xc);
      auVar19 = auVar20._0_16_;
      plVar7 = (longlong *)local_120;
    }
    else {
      lStack_1a0 = (longlong)(local_80._8_8_ - local_80._0_8_) / 0x28;
      local_1a8 = (undefined8 *)0x4000000000000000;
      local_168 = 1;
      ppuStack_160 = &local_1a8;
      local_1b8 = "Active Binds ({})";
      puStack_1b0 = (undefined8 *)0x11;
      FUN_1801d97f0(local_c0,&local_1b8,&local_168);
      auVar19 = auVar20._0_16_;
      plVar7 = local_c0;
    }
    local_68 = (undefined8 *******)*plVar7;
    lStack_60 = plVar7[1];
    lStack_58 = plVar7[2];
    uStack_50 = plVar7[3];
    *(undefined1 *)plVar7 = 0;
    plVar7[2] = 0;
    plVar7[3] = 0xf;
    if (bVar18) {
      auVar20 = ZEXT1664(auVar19);
      FUN_18015c010(local_120);
      auVar19 = auVar20._0_16_;
    }
    else {
      auVar20 = ZEXT1664(auVar19);
      FUN_18015c010(local_c0);
      auVar19 = auVar20._0_16_;
    }
    cVar11 = (char)local_1c4;
    if ((cVar11 == '\0') || (1 < DAT_180bda4dc)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    pppppppuVar9 = &local_68;
    if (0xf < uStack_50) {
      pppppppuVar9 = local_68;
    }
    local_1d8 = CONCAT44(local_1d8._4_4_,DAT_1808e68b4);
    local_1e8 = &DAT_180b0d5f0;
    auVar20 = ZEXT1664(auVar19);
    FUN_18055ca80(pppppppuVar9,local_80,&local_198,uVar14);
    FUN_18015c010(&local_68);
    FUN_18055df30();
  }
  if (DAT_1808e6938 == '\0') {
  }
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1 (*) [16])0x0;
  if ((DAT_180b0d4c8 != '\0') || (DAT_180bda4dc == 4)) {
    ppuStack_160 = (undefined8 **)CONCAT44(ppuStack_160._4_4_,DAT_1808e6910);
    local_168 = 0x7000000000000000;
    local_1b8 = (char *)0x1;
    puStack_1b0 = &local_168;
    local_1a8 = (undefined8 *)&DAT_18086b330;
    lStack_1a0 = 10;
    FUN_1801d97f0(&local_148,&local_1a8,&local_1b8);
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,DAT_180b0d598);
    pcVar3 = local_1b8;
    local_128 = DAT_180b0d598 & 0xff;
    uVar12 = DAT_180b0d598 >> 8 & 0xff;
    bVar1 = (byte)(DAT_180b0d598 >> 0x10);
    if (DAT_1808e4fb5 != '\0') {
      bVar8 = (byte)(DAT_180b0d598 >> 8);
      if ((((byte)DAT_180b0d598 == bVar8) && (bVar8 == bVar1)) && (0xb4 < (byte)DAT_180b0d598)) {
        bVar1 = 0x1e;
        local_128 = 0x1e;
        uVar12 = 0x1e;
      }
    }
    local_1b8._3_1_ = (undefined1)(DAT_180b0d598 >> 0x18);
    local_128 = ((uint)CONCAT11(local_1b8._3_1_,bVar1) << 8 | uVar12) << 8 | local_128;
    local_1b8 = pcVar3;
    if ((undefined1 (*) [16])local_80._8_8_ == local_70) {
      FUN_18056eba0(local_80,local_80._8_8_,&local_148);
    }
    else {
      *(undefined1 (*) [16])local_80._8_8_ = (undefined1  [16])0x0;
      *(undefined8 *)*(undefined1 (*) [16])(local_80._8_8_ + 0x10) = 0;
      *(undefined8 *)(*(undefined1 (*) [16])(local_80._8_8_ + 0x10) + 8) = 0;
      *(ulonglong *)(undefined1 *)local_80._8_8_ = CONCAT71(uStack_147,local_148);
      *(undefined8 *)((undefined1 *)local_80._8_8_ + 8) = uStack_140;
      *(undefined8 *)*(undefined1 (*) [16])(local_80._8_8_ + 0x10) = auStack_138._0_8_;
      *(undefined8 *)(*(undefined1 (*) [16])(local_80._8_8_ + 0x10) + 8) = auStack_138._8_8_;
      auStack_138 = auVar20._0_16_;
      local_148 = 0;
      *(uint *)*(undefined1 (*) [16])(local_80._8_8_ + 0x20) = local_128;
      local_80._8_8_ = *(undefined1 (*) [16])(local_80._8_8_ + 0x20) + 8;
    }
    FUN_18015c010();
  }
  local_a0 = ZEXT816(0x180b0d5b0) << 0x40;
  local_90._8_8_ = &DAT_180b0d5b4;
  local_90._0_8_ = &DAT_180b0d5ac;
  local_a0[0] = DAT_180b0d5dd == '\0';
  local_198 = &DAT_180b0d5e8;
  puStack_190 = &DAT_180b0d5de;
  auStack_188._8_8_ = &DAT_180b0d5e4;
  auStack_188._0_8_ = &DAT_180b0d5e0;
  local_178 = 0x3f000000;
  local_174 = 0x3f570a3d;
  local_170 = &DAT_180b0d5e8;
  if (DAT_180b0d530 != '\0') {
    puVar15 = &DAT_1808e6910;
  }
  if ((cVar11 == '\0') || ((DAT_180bda4dc & 0xfffffffb) != 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  local_1d8 = CONCAT44(local_1d8._4_4_,0x3f800000);
  local_1e8 = local_a0;
  local_1e0 = (undefined8 *)puVar15;
  FUN_18055d440(&DAT_1808e6910,local_80,&local_198,uVar14);
  FUN_18055df30(local_80);
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



