// FUN_18052a120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052a120 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052a120(int param_1,float *param_2,float *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  longlong lVar14;
  ULONGLONG UVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  int iVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [104];
  undefined1 local_260 [88];
  undefined1 local_208 [64];
  undefined1 local_1c8 [32];
  int local_1a8 [2];
  undefined1 local_1a0 [16];
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined1 local_180 [12];
  float fStack_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined1 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_318;
  if (DAT_180b909b0 == 0) {
  }
  if (param_1 < 0) {
  }
  lVar16 = *(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58);
  if ((int)(lVar16 / 0x68) <= param_1) {
  }
  puVar21 = (ushort *)((longlong)param_1 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58));
  if (puVar21 == (ushort *)0x0) {
  }
  if (*(longlong *)(puVar21 + 0xc) == 0) {
    if (*(longlong *)(puVar21 + 0x2c) == 0) {
      if (*(int *)puVar21 == 0) goto LAB_18052a215;
      plVar11 = (longlong *)FUN_180208bd0(lVar16,*(int *)puVar21,*(undefined4 *)(puVar21 + 2));
    }
    else {
      plVar11 = (longlong *)FUN_180208940();
    }
    if (((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) && (*(longlong *)(puVar21 + 0xc) == 0)) {
      *param_2 = (float)(int)plVar11[1];
      *param_3 = (float)*(int *)((longlong)plVar11 + 0xc);
    }
  }
LAB_18052a215:
  uVar1 = *puVar21;
  uVar20 = 0xcbf29ce484222325;
  uVar17 = ((ulonglong)(uVar1 >> 8) ^ ((ulonglong)uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3
           ) * 0x100000001b3 & DAT_180cc9cb8;
  lVar16 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar17 * 0x10);
  if (lVar16 == DAT_180cc9c90) {
LAB_18052a281:
    lVar16 = 0;
  }
  else {
    uVar2 = *(ushort *)(lVar16 + 0x10);
    while (uVar1 != uVar2) {
      if (lVar16 == *(longlong *)(DAT_180cc9ca0 + uVar17 * 0x10)) goto LAB_18052a281;
      lVar16 = *(longlong *)(lVar16 + 8);
      uVar2 = *(ushort *)(lVar16 + 0x10);
    }
  }
  lVar14 = DAT_180cc9c90;
  if (lVar16 != 0) {
    lVar14 = lVar16;
  }
  if (((lVar14 == DAT_180cc9c90) ||
      (lVar16 = *(longlong *)(lVar14 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar16 == 0)) ||
     (*(char *)(lVar16 + 0xb0) != '\x03')) {
    if ((*(int *)puVar21 == 0) && (*(longlong *)(puVar21 + 0x1c) != 0)) {
      uVar24 = FUN_18015bea0(local_1c8,*(undefined4 *)(puVar21 + 2));
      pauVar12 = (undefined1 (*) [16])FUN_180141490(uVar24,0,"imported-charm|",0xf);
      local_1a0 = *pauVar12;
      uStack_190 = *(ulonglong *)pauVar12[1];
      uStack_188 = *(ulonglong *)(pauVar12[1] + 8);
      (*pauVar12)[0] = 0;
      *(undefined8 *)pauVar12[1] = 0;
      *(undefined8 *)(pauVar12[1] + 8) = 0xf;
      FUN_18015c010(local_1c8);
      _local_180 = (undefined1  [16])0x0;
      local_170 = 0;
      local_1a8[0] = 1;
      local_120 = 0.0;
      if (((DAT_180bbab78 != 0) &&
          ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_1a8,local_180),
          local_1a8[0] == 0)) || ((float)local_180._8_4_ <= local_120)) {
        local_128 = 0;
        local_124 = 0;
      }
      else {
        local_128 = (int)(float)local_180._8_4_;
        local_124 = (int)fStack_174;
      }
      uVar17 = uStack_190;
      local_168 = 0x54b;
      local_164 = *(undefined4 *)(puVar21 + 2);
      local_160 = 0;
      local_148 = 0;
      uStack_140 = 0xf;
      local_158._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_158._1_15_;
      local_158 = auVar6 << 8;
      local_130 = 0x80;
      local_12c = 0x80;
      local_11c = local_120;
      local_118 = 0x3f800000;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_e0 = 0;
      local_d8 = 0xf;
      local_f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar7[0xf] = 0;
      auVar7._0_15_ = local_f0._1_15_;
      local_f0 = auVar7 << 8;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = local_120;
      local_b4 = 0;
      local_b0 = local_120;
      local_ac = local_120;
      local_a8 = local_120;
      local_a4 = 0;
      local_a0 = 0xffffffff;
      local_9c = 0;
      local_88 = 0;
      uStack_80 = 0xf;
      local_98._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_98._1_15_;
      local_98 = auVar8 << 8;
      local_78 = 0;
      local_6f = 0;
      local_6d = 0;
      local_6c = 0x3f000000;
      local_68 = 0x3f000000;
      local_64 = 0x101010;
      local_5c = 0xffffffff;
      local_70 = 1;
      local_60 = 0x10ef25;
      local_138 = (int)(DAT_180b0a41c * 146.0 +
                       *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x28));
      local_134 = (int)(DAT_180b0a41c * 244.0 +
                       *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x2c));
      local_2f8 = (undefined1  [16])0x0;
      auStack_2e8 = (undefined1  [16])0x0;
      pauVar12 = &local_1a0;
      if (0xf < uStack_188) {
        pauVar12 = (undefined1 (*) [16])local_1a0._0_8_;
      }
      if (0x7fffffffffffffff < uStack_190) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uStack_190 < 0x10) {
        auStack_2e8._0_8_ = uStack_190;
        auStack_2e8._8_8_ = 0xf;
        local_2f8 = *pauVar12;
      }
      else {
        uVar13 = uStack_190 | 0xf;
        uVar22 = 0x7fffffffffffffff;
        if ((uVar13 < 0x8000000000000000) && (uVar22 = uVar13, uVar13 < 0x16)) {
          uVar22 = 0x16;
        }
        uVar24 = FUN_18015bca0(uVar22 + 1);
        local_2f8._0_8_ = uVar24;
        auStack_2e8._0_8_ = uVar17;
        auStack_2e8._8_8_ = uVar22;
        FUN_18063aed0(uVar24,pauVar12,uVar17 + 1);
      }
      FUN_1801d8a70(local_2d8,&local_168);
      puVar10 = DAT_180c63098;
      if (DAT_180c63098 == DAT_180c630a0) {
        FUN_1801d9b90(&DAT_180c63090,DAT_180c63098,local_2f8);
      }
      else {
        *DAT_180c63098 = local_2f8._0_8_;
        puVar10[1] = local_2f8._8_8_;
        puVar10[2] = auStack_2e8._0_8_;
        puVar10[3] = auStack_2e8._8_8_;
        auStack_2e8._0_8_ = 0;
        auStack_2e8._8_8_ = 0xf;
        auVar9[0xf] = 0;
        auVar9._0_15_ = local_2f8._1_15_;
        local_2f8 = auVar9 << 8;
        FUN_1801d8a70(puVar10 + 4,local_2d8);
        DAT_180c63098 = DAT_180c63098 + 0x26;
      }
      FUN_18015c010(local_208);
      FUN_18015c010(local_260);
      FUN_18015c010(local_2c8);
      FUN_18015c010(local_2f8);
      *param_3 = 128.0;
      *param_2 = 128.0;
      puVar18 = local_1a0;
      if (0xf < uStack_188) {
        puVar18 = (undefined1 *)local_1a0._0_8_;
      }
      uVar17 = 0;
      if (uStack_190 != 0) {
        do {
          uVar20 = (uVar20 ^ (byte)puVar18[uVar17]) * 0x100000001b3;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uStack_190);
      }
      lVar14 = FUN_180177b00(&DAT_180ccf460,local_1c8,local_1a0,uVar20);
      lVar16 = DAT_180ccf468;
      if (*(longlong *)(lVar14 + 8) != 0) {
        lVar16 = *(longlong *)(lVar14 + 8);
      }
      if (lVar16 != DAT_180ccf468) {
        UVar15 = GetTickCount64();
        plVar11 = (longlong *)FUN_1801b0c90(&DAT_180ccf4a0,local_180,local_1a0);
        *(ULONGLONG *)(*plVar11 + 0x30) = UVar15;
      }
      FUN_18015c010(local_98);
      FUN_18015c010(local_f0);
      FUN_18015c010(local_158);
      FUN_18015c010(local_1a0);
    }
  }
  else {
    FUN_180529e00(local_1a0,puVar21);
    _local_180 = (undefined1  [16])0x0;
    local_170 = 0;
    local_1a8[0] = 1;
    fVar25 = 0.0;
    if (((DAT_180bbab78 != 0) &&
        ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_1a8,local_180),
        local_1a8[0] == 0)) || ((float)local_180._8_4_ <= fVar25)) {
      iVar19 = 0;
      iVar23 = 0;
    }
    else {
      iVar19 = (int)(float)local_180._8_4_;
      iVar23 = (int)fStack_174;
    }
    local_168 = *(undefined4 *)puVar21;
    local_164 = 0;
    local_160 = 3;
    FUN_18015b360(local_158,puVar21 + 0x14);
    local_130 = 0x80;
    local_12c = 0xa0;
    local_128 = iVar19;
    local_124 = iVar23;
    local_120 = fVar25;
    local_11c = fVar25;
    local_118 = 0x3f800000;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_f0._1_15_;
    local_f0 = auVar3 << 8;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = fVar25;
    local_b4 = 0;
    local_b0 = fVar25;
    local_ac = fVar25;
    local_a8 = fVar25;
    local_a4 = 0;
    local_a0 = 0xffffffff;
    local_9c = 0;
    local_88 = 0;
    uStack_80 = 0xf;
    local_98._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_98._1_15_;
    local_98 = auVar4 << 8;
    local_78 = 0;
    local_6f = 0x100;
    local_6d = 0;
    local_6c = 0x3f000000;
    local_68 = 0x3f000000;
    local_64 = 0x101010;
    local_5c = 0xffffffff;
    local_70 = 1;
    local_60 = 0x10ef25;
    local_138 = (int)(DAT_180b0a41c * 146.0 +
                     *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x28));
    local_134 = (int)(DAT_180b0a41c * 244.0 +
                     *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x2c));
    local_2f8 = (undefined1  [16])0x0;
    auStack_2e8 = (undefined1  [16])0x0;
    pauVar12 = &local_1a0;
    if (0xf < uStack_188) {
      pauVar12 = (undefined1 (*) [16])local_1a0._0_8_;
    }
    if (0x7fffffffffffffff < uStack_190) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uStack_190 < 0x10) {
      auStack_2e8._0_8_ = uStack_190;
      auStack_2e8._8_8_ = 0xf;
      local_2f8 = *pauVar12;
    }
    else {
      uVar20 = uStack_190 | 0xf;
      uVar17 = 0x7fffffffffffffff;
      if ((uVar20 < 0x8000000000000000) && (uVar17 = uVar20, uVar20 < 0x16)) {
        uVar17 = 0x16;
      }
      uVar24 = FUN_18015bca0(uVar17 + 1);
      local_2f8._0_8_ = uVar24;
      auStack_2e8._0_8_ = uStack_190;
      auStack_2e8._8_8_ = uVar17;
      FUN_18063aed0(uVar24,pauVar12,uStack_190 + 1);
    }
    FUN_1801d8a70(local_2d8,&local_168);
    puVar10 = DAT_180c63098;
    if (DAT_180c63098 == DAT_180c630a0) {
      FUN_1801d9b90(&DAT_180c63090,DAT_180c63098,local_2f8);
    }
    else {
      *DAT_180c63098 = local_2f8._0_8_;
      puVar10[1] = local_2f8._8_8_;
      puVar10[2] = auStack_2e8._0_8_;
      puVar10[3] = auStack_2e8._8_8_;
      auStack_2e8._0_8_ = 0;
      auStack_2e8._8_8_ = 0xf;
      auVar5[0xf] = 0;
      auVar5._0_15_ = local_2f8._1_15_;
      local_2f8 = auVar5 << 8;
      FUN_1801d8a70(puVar10 + 4,local_2d8);
      DAT_180c63098 = DAT_180c63098 + 0x26;
    }
    FUN_18015c010(local_208);
    FUN_18015c010(local_260);
    FUN_18015c010(local_2c8);
    uVar24 = FUN_18015c010(local_2f8);
    *param_2 = 128.0;
    *param_3 = 160.0;
    FUN_1803f53f0(uVar24,local_1a0);
    FUN_18015c010(local_98);
    FUN_18015c010(local_f0);
    FUN_18015c010(local_158);
    FUN_18015c010(local_1a0);
  }
}



