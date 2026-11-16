// FUN_180171970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180171970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180171d69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180171970(ulonglong param_1,longlong *param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  undefined7 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8;
  undefined7 uStack_2d7;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 *apuStack_2c0 [3];
  ulonglong local_2a8;
  undefined8 local_2a0;
  int *local_298;
  int *local_290;
  ulonglong local_288;
  ulonglong local_280;
  longlong *local_278;
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [48];
  undefined8 local_1f8 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8 [2];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  ulonglong local_198;
  undefined8 uStack_190;
  undefined1 local_188 [32];
  undefined1 local_168 [56];
  undefined1 local_130 [56];
  undefined1 local_f8;
  undefined7 uStack_f7;
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined1 local_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 local_b8 [16];
  undefined1 auStack_a8 [16];
  char local_98 [8];
  undefined8 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  undefined1 (*local_68 [2]) [16];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_318;
  uVar24 = 0;
  local_2c8 = (int *)((ulonglong)local_2c8 & 0xffffffff00000000);
  auVar27 = ZEXT1664(_DAT_18086d450);
  uVar22 = param_1;
  local_2a8 = param_1;
  local_288 = param_1;
  local_280 = param_1;
  local_278 = param_2;
  do {
    if ((*param_2 != 0) && ((*(uint *)(*param_2 + 4) & 1) != 0)) goto LAB_180171b1f;
    auStack_c8 = auVar27._0_16_;
    local_d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar26[0xf] = 0;
    auVar26._0_15_ = local_d8._1_15_;
    local_d8 = auVar26 << 8;
    local_b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_b8._1_15_;
    local_b8 = auVar3 << 8;
    local_98[0] = '\0';
    auStack_a8 = auStack_c8;
    FUN_180111d10(&local_90,0);
    local_78 = 0;
    local_70 = 7;
    local_88._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar4._14_2_ = 0;
    auVar4._0_14_ = local_88._2_14_;
    local_88 = auVar4 << 0x10;
    local_2f8._8_8_ = 0;
    local_2f8._0_8_ = uVar22;
    iVar16 = FUN_1805f68d0(param_1);
    if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_2f8[8] = 1;
    local_2c8 = (int *)*param_2;
    if (local_2c8 != (int *)0x0) {
      LOCK();
      *local_2c8 = *local_2c8 + 1;
      UNLOCK();
    }
    cVar15 = FUN_180175c90(uVar22 + 0x50,local_2f8,&local_2c8,uVar22);
    auVar26 = auVar27._0_16_;
    if (cVar15 == '\0') {
      if (local_2f8[8] != '\0') {
        FUN_1805f68fc(local_2f8._0_8_);
      }
      FUN_18015b930(local_88);
      FUN_1801409d0(&local_90,local_98[0]);
LAB_180171b04:
      FUN_18015c010(local_b8);
      FUN_18015c010(local_d8);
LAB_180171b1f:
      FUN_18017cdd0(param_2);
    }
    pauVar21 = *(undefined1 (**) [16])
                (*(longlong *)(param_1 + 0xb0) +
                (*(longlong *)(param_1 + 0xb8) - 1U & *(ulonglong *)(param_1 + 0xc0)) * 8);
    if (&local_d8 != pauVar21) {
      FUN_18015c010(local_d8);
      auVar26 = auVar27._0_16_;
      local_d8 = *pauVar21;
      auStack_c8 = pauVar21[1];
      *(undefined8 *)pauVar21[1] = 0;
      *(undefined8 *)(pauVar21[1] + 8) = 0xf;
      (*pauVar21)[0] = 0;
    }
    pauVar1 = pauVar21 + 2;
    if (&local_b8 != pauVar1) {
      auVar27 = ZEXT1664(auVar26);
      FUN_18015c010(local_b8);
      auVar26 = auVar27._0_16_;
      local_b8 = *pauVar1;
      auStack_a8 = pauVar21[3];
      *(undefined8 *)pauVar21[3] = 0;
      *(undefined8 *)(pauVar21[3] + 8) = 0xf;
      (*pauVar1)[0] = 0;
    }
    cVar15 = pauVar21[4][0];
    uVar11 = *(undefined7 *)(pauVar21[4] + 1);
    puVar10 = *(undefined8 **)(pauVar21[4] + 8);
    pauVar21[4][0] = 0;
    *(undefined8 *)(pauVar21[4] + 8) = 0;
    local_2c8 = (int *)CONCAT71(uVar11,local_98[0]);
    apuStack_2c0[0] = local_90;
    auVar27 = ZEXT1664(auVar26);
    local_98[0] = cVar15;
    local_90 = puVar10;
    FUN_1801409d0(apuStack_2c0);
    FUN_180176c30(local_88,pauVar21 + 5);
    lVar20 = *(longlong *)
              (*(longlong *)(param_1 + 0xb0) +
              (*(longlong *)(param_1 + 0xb8) - 1U & *(ulonglong *)(param_1 + 0xc0)) * 8);
    FUN_18015b930(lVar20 + 0x50);
    FUN_1801409d0(lVar20 + 0x48,*(undefined1 *)(lVar20 + 0x40));
    FUN_18015c010(lVar20 + 0x20);
    FUN_18015c010(lVar20);
    plVar17 = (longlong *)(param_1 + 200);
    *plVar17 = *plVar17 + -1;
    if (*plVar17 == 0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
    }
    if (local_2f8[8] != '\0') {
      FUN_1805f68fc(local_2f8._0_8_);
    }
    auStack_2e8 = auVar27._0_16_;
    local_2f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_2f8._1_15_;
    local_2f8 = auVar5 << 8;
    if (local_98[0] != '\x01') {
      local_2a0 = FUN_180112a50(local_98);
      uVar18 = FUN_1800f6bd0(&local_f8,"cannot use value() with ",&local_2a0);
      FUN_1800f6ca0(local_130,0x132,uVar18);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_130,&DAT_1808d1050);
    }
    local_f8 = SUB81(local_98,0);
    uStack_f7 = (undefined7)((ulonglong)local_98 >> 8);
    uStack_e8 = 0;
    lStack_f0 = *local_90;
    lStack_e0 = -0x8000000000000000;
    plVar17 = (longlong *)FUN_1800f6de0(local_90,local_188,"action");
    lStack_f0 = *plVar17;
    uVar18 = FUN_1800f3e20(local_98,&local_2c8);
    cVar15 = FUN_1800e6ca0(&local_f8,uVar18);
    auVar26 = auVar27._0_16_;
    if (cVar15 == '\0') {
      switch(*(undefined1 *)CONCAT71(uStack_f7,local_f8)) {
      case 0x180171de4:
                    /* WARNING: This code block may not be properly labeled as switch case */
        FUN_1800e69c0(lStack_f0 + 0x40,local_68);
        auVar26 = auVar27._0_16_;
        break;
      default:
        if (lStack_e0 != 0) {
          FUN_18015bae0(&local_f8,"cannot get value");
          FUN_1800f6e80(local_168,0xd6,&local_f8);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_168,&DAT_1808d0fe8);
        }
        FUN_1800e69c0((undefined1 *)CONCAT71(uStack_f7,local_f8),local_68);
        auVar26 = auVar27._0_16_;
      }
    }
    else {
      local_68[0] = (undefined1 (*) [16])local_2f8._0_8_;
      local_68[1] = (undefined1 (*) [16])local_2f8._8_8_;
      uStack_58 = auStack_2e8._0_8_;
      uStack_50 = auStack_2e8._8_8_;
      auVar6[0xf] = 0;
      auVar6._0_15_ = local_2f8._1_15_;
      local_2f8 = auVar6 << 8;
      auStack_2e8 = auVar26;
    }
    uVar23 = uVar24 | 0x10;
    local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar24) | 0x10);
    auVar27 = ZEXT1664(auVar26);
    FUN_18015c010(local_2f8);
    pauVar21 = (undefined1 (*) [16])local_68;
    if (0xf < uStack_50) {
      pauVar21 = local_68[0];
    }
    if (uStack_58 == 4) {
      lVar20 = 0;
      do {
        lVar19 = lVar20 + 1;
        if ((*pauVar21)[lVar20] != (&DAT_180700e24)[lVar20]) {
          uVar25 = -(uint)((byte)(*pauVar21)[lVar20] < (byte)(&DAT_180700e24)[lVar20]) | 1;
          goto LAB_180171ebe;
        }
        lVar20 = lVar19;
      } while (lVar19 != 4);
      uVar25 = 0;
LAB_180171ebe:
      if (uVar25 != 0) goto LAB_180171f12;
      uStack_f7 = 0;
      lStack_f0 = 0;
      uStack_e8 = auVar27._0_8_;
      lStack_e0 = auVar27._8_8_;
      local_f8 = 0;
      local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar24) | 0x11);
      lVar20 = FUN_180175fb0(local_98,local_2f8,&DAT_180700e24,&local_f8);
      uVar23 = uVar24 | 0x13;
      local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar24) | 0x13);
      if (*(longlong *)(lVar20 + 0x10) != 0) goto LAB_180171f12;
      bVar7 = true;
    }
    else {
LAB_180171f12:
      bVar7 = false;
    }
    uVar24 = uVar23;
    if ((uVar23 & 2) != 0) {
      uVar24 = uVar23 & 0xfffffffd;
      local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar23) & 0xfffffffffffffffd);
      FUN_18015c010(local_2f8);
    }
    uVar23 = uVar24;
    if ((uVar24 & 1) != 0) {
      uVar23 = uVar24 & 0xfffffffe;
      local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar24) & 0xfffffffffffffffe);
      FUN_18015c010(&local_f8);
    }
    if (bVar7) {
      FUN_180113930(local_68,"clear",5);
    }
    local_2d8 = 0;
    FUN_180111d10(&uStack_2d0,0);
    piVar2 = (int *)*param_2;
    if (local_78 == 0) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_298 = piVar2;
      pauVar21 = (undefined1 (*) [16])FUN_18016f430(local_230,local_d8,&local_298,0);
      uVar23 = uVar23 | 4;
    }
    else {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      local_290 = piVar2;
      pauVar21 = (undefined1 (*) [16])FUN_180170da0(local_240,local_d8,&local_290);
      uVar23 = uVar23 | 8;
    }
    uVar12 = uStack_2d0;
    local_2c8 = (int *)CONCAT44(local_2c8._4_4_,uVar23);
    uVar18 = *(undefined8 *)*pauVar21;
    auVar26 = *pauVar21;
    (*pauVar21)[0] = 0;
    *(undefined8 *)(*pauVar21 + 8) = 0;
    local_2f8._1_15_ = auVar26._1_15_;
    local_2f8[0] = local_2d8;
    auVar3 = local_2f8;
    local_2f8._8_8_ = auVar26._8_8_;
    uStack_2d0 = local_2f8._8_8_;
    local_2f8._0_8_ = auVar3._0_8_;
    local_2f8._8_8_ = uVar12;
    local_2d8 = (char)uVar18;
    FUN_1801409d0(local_2f8 + 8);
    uVar25 = uVar23;
    if ((uVar23 & 8) != 0) {
      uVar25 = uVar23 & 0xfffffff7;
      local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar23) & 0xfffffffffffffff7);
      FUN_1801409d0(local_238,local_240[0]);
    }
    uVar24 = uVar25;
    if ((uVar25 & 4) != 0) {
      uVar24 = uVar25 & 0xfffffffb;
      local_2c8 = (int *)(CONCAT44(local_2c8._4_4_,uVar25) & 0xfffffffffffffffb);
      FUN_1801409d0(local_228,local_230[0]);
    }
    uVar13 = local_2a8;
    if ((*param_2 != 0) && ((*(uint *)(*param_2 + 4) & 1) != 0)) {
      FUN_1801409d0(&uStack_2d0,local_2d8);
      FUN_18015c010(local_68);
      FUN_18015b930(local_88);
      FUN_1801409d0(&local_90,local_98[0]);
      goto LAB_180171b04;
    }
    local_2f8._0_8_ = uVar22;
    iVar16 = FUN_1805f68d0(uVar22);
    uVar14 = uStack_58;
    auVar26 = auVar27._0_16_;
    if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(uVar13 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(uVar13 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_2c8 = (int *)(uVar22 + 0xd0);
    local_1f8[0] = local_d8._0_8_;
    local_1f8[1] = local_d8._8_8_;
    uStack_1e8 = auStack_c8._0_8_;
    uStack_1e0 = auStack_c8._8_8_;
    auVar8[0xf] = 0;
    auVar8._0_15_ = local_d8._1_15_;
    local_d8 = auVar8 << 8;
    local_1d8[0] = local_b8._0_8_;
    local_1d8[1] = local_b8._8_8_;
    uStack_1c8 = auStack_a8._0_8_;
    uStack_1c0 = auStack_a8._8_8_;
    auVar9[0xf] = 0;
    auVar9._0_15_ = local_b8._1_15_;
    local_b8 = auVar9 << 8;
    local_1b8 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    pauVar21 = (undefined1 (*) [16])local_68;
    if (0xf < uStack_50) {
      pauVar21 = local_68[0];
    }
    auStack_c8 = auVar26;
    auStack_a8 = auVar26;
    if (0x7fffffffffffffff < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uStack_58 < 0x10) {
      local_1a8._8_8_ = 0xf;
      local_1a8._0_8_ = uStack_58;
      local_1b8 = *pauVar21;
    }
    else {
      uVar22 = uStack_58 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
      auVar27 = ZEXT1664(auVar26);
      uVar18 = FUN_18015bca0(uVar22 + 1);
      local_1b8._0_8_ = uVar18;
      local_1a8._8_8_ = uVar22;
      local_1a8._0_8_ = uVar14;
      FUN_18063aed0(uVar18,pauVar21,uVar14 + 1);
      auVar26 = auVar27._0_16_;
    }
    local_198 = CONCAT71(uStack_2d7,local_2d8);
    uStack_190 = uStack_2d0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    auVar27 = ZEXT1664(auVar26);
    FUN_180177f80(local_2c8,local_1f8);
    FUN_1801409d0(&uStack_190,local_198 & 0xff);
    FUN_18015c010(local_1b8);
    FUN_18015c010(local_1d8);
    FUN_18015c010(local_1f8);
    uVar22 = local_288;
    FUN_1805f68fc(local_288);
    FUN_1801409d0(&uStack_2d0,0);
    FUN_18015c010(local_68);
    FUN_18015b930(local_88);
    FUN_1801409d0(&local_90);
    FUN_18015c010(local_b8);
    FUN_18015c010(local_d8);
  } while( true );
}



