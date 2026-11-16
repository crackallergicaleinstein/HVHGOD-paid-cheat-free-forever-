// FUN_180531e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180531e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180531e00(longlong *param_1)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  undefined *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [32];
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int *piVar23;
  longlong lVar24;
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined4 local_1e0;
  float local_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  undefined1 local_1b8 [4];
  float local_1b4;
  undefined4 local_1b0;
  undefined1 local_1a8 [32];
  int *local_188;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  undefined1 local_148 [16];
  undefined1 auStack_138 [16];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 ****local_c0 [2];
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  piVar23 = (int *)*param_1;
  local_188 = piVar23 + 10;
  if (piVar23 != local_188) {
    auVar27 = ZEXT464(0x3f800000);
    auVar26 = ZEXT864(0);
    auVar28 = ZEXT464(0x41700000);
    auVar29 = ZEXT464(0x40000000);
    auVar30 = ZEXT464(0x41300000);
    do {
      iVar22 = *piVar23;
      lVar24 = (longlong)iVar22;
      if (*(undefined ***)(param_1[1] + lVar24 * 8) != &PTR_DAT_180801560) {
        FUN_1804c2920(iVar22);
        FUN_18050a310(local_c0,*(undefined8 *)(param_1[1] + lVar24 * 8),*(undefined4 *)param_1[2]);
        piVar2 = (int *)param_1[3];
        *piVar2 = *piVar2 + 1;
        uVar10 = FUN_18015bea0(local_128,*piVar2);
        pauVar11 = (undefined1 (*) [16])FUN_18015b2a0(uVar10,&DAT_180868224,3);
        local_148 = *pauVar11;
        auStack_138 = pauVar11[1];
        (*pauVar11)[0] = 0;
        *(undefined8 *)pauVar11[1] = 0;
        *(undefined8 *)(pauVar11[1] + 8) = 0xf;
        ppppuVar16 = local_c0;
        if (0xf < local_a8) {
          ppppuVar16 = local_c0[0];
        }
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar29 = ZEXT1664(auVar29._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        pauVar11 = (undefined1 (*) [16])FUN_18015b2a0(local_148,ppppuVar16,local_b0);
        local_168 = *pauVar11;
        auStack_158 = pauVar11[1];
        *(undefined8 *)(pauVar11[1] + 8) = 0xf;
        (*pauVar11)[0] = 0;
        *(undefined8 *)pauVar11[1] = 0;
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar29 = ZEXT1664(auVar29._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        pauVar11 = (undefined1 (*) [16])FUN_18015b2a0(local_168,"##rank",6);
        local_a0 = *pauVar11;
        auStack_90 = pauVar11[1];
        (*pauVar11)[0] = 0;
        *(undefined8 *)pauVar11[1] = 0;
        *(undefined8 *)(pauVar11[1] + 8) = 0xf;
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar29 = ZEXT1664(auVar29._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        FUN_18015c010(local_168);
        FUN_18015c010(local_148);
        FUN_18015c010(local_128);
        lVar12 = FUN_18050a280(*(undefined8 *)(param_1[1] + lVar24 * 8),*(undefined4 *)param_1[2]);
        local_1a8 = ZEXT1632((undefined1  [16])0x0);
        lVar20 = -1;
        do {
          lVar20 = lVar20 + 1;
        } while (*(char *)(lVar12 + lVar20) != '\0');
        uVar10 = FUN_18015ba30(local_1a8,lVar12);
        puVar13 = (undefined8 *)FUN_1803db750(uVar10,local_1a8,auVar27._0_8_);
        FUN_18015c010(local_1a8);
        auVar7 = local_1a8;
        lVar12 = DAT_180bb8ae8;
        fVar25 = auVar26._0_4_;
        if (puVar13 == (undefined8 *)0x0) {
          local_178 = 0;
          fStack_170 = fVar25;
          fStack_16c = fVar25;
        }
        else {
          local_178 = *puVar13;
          fStack_170 = (float)*(int *)(puVar13 + 4);
          fStack_16c = (float)*(int *)((longlong)puVar13 + 0x24);
        }
        puVar3 = (&PTR_s_Primary_weapon_18086b9f0)[lVar24];
        puVar18 = local_a0;
        if (0xf < (ulonglong)auStack_90._8_8_) {
          puVar18 = (undefined1 *)local_a0._0_8_;
        }
        if (DAT_180bbecdb == '\0') {
          *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
          plVar4 = *(longlong **)(lVar12 + 0x14d0);
          local_1a8._12_4_ = fStack_16c;
          local_1a8._8_4_ = fStack_170;
          local_1a8._16_16_ = auVar7._16_16_;
          local_1a8._0_8_ = local_178;
          local_1d0 = local_1a8;
          local_1e0 = auVar28._0_4_;
          local_1e8 = 0;
          local_1d8 = fVar25;
          local_1c8 = puVar3;
          pauVar14 = (undefined1 (*) [32])FUN_180487810(local_108,puVar18,0,1);
          local_1a8 = *pauVar14;
          auVar6 = vshufps_avx(local_1a8._16_16_,local_1a8._16_16_,0x55);
          local_1b4 = auVar6._0_4_ - auVar29._0_4_ * DAT_180b0a41c;
          local_1b0 = local_1a8._16_4_;
          local_1e8 = CONCAT44(local_1e8._4_4_,auVar30._0_4_);
          auVar26 = ZEXT1664(auVar26._0_16_);
          auVar27 = ZEXT1664(auVar27._0_16_);
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar29 = ZEXT1664(auVar29._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          FUN_180463dc0(plVar4[0x59],&local_1b4,DAT_1808da474,&DAT_18082a28c);
          iVar9 = FUN_1804b0a90(puVar18,0,
                                *(undefined4 *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4)
                               );
          if (*(int *)(*plVar4 + 0x1534) == iVar9) {
            FUN_1804cf810(iVar9,0xb,puVar18);
          }
          local_1e8 = CONCAT71(local_1e8._1_7_,1);
          FUN_1804aad60(local_1b8,iVar9,local_1a8,local_1a8 + 8);
        }
        cVar8 = FUN_1804cd1d0();
        lVar12 = DAT_180bb8ae8;
        if (cVar8 != '\0') {
          strncpy((char *)(DAT_180bb8ae8 + 0x2290),"PROFILE_BUY_ORDER",0x20);
          *(undefined1 *)(lVar12 + 0x22b0) = 0;
          FUN_1804d0b60(lVar12 + 0x2300,0);
          pauVar11 = (undefined1 (*) [16])(lVar12 + 0x2310);
          *pauVar11 = (undefined1  [16])0x0;
          *(undefined1 (**) [16])(lVar12 + 0x2278) = pauVar11;
          *(int *)*pauVar11 = iVar22;
          *(undefined4 *)(lVar12 + 0x2280) = 4;
          *(undefined4 *)(lVar12 + 0x228c) = *(undefined4 *)(lVar12 + 4);
          ppppuVar16 = local_c0;
          if (0xf < local_a8) {
            ppppuVar16 = local_c0[0];
          }
          FUN_1804f4780(&DAT_180868200,(&PTR_s_Primary_weapon_18086b9f0)[lVar24],ppppuVar16);
          lVar24 = DAT_180bb8ae8;
          if ((*(byte *)(DAT_180bb8ae8 + 0x226c) & 1) == 0) {
            FUN_1804c14e0();
          }
          if (*(int *)(lVar24 + 0x228c) == -1) {
            FUN_1804cd120();
          }
          *(undefined1 *)(lVar24 + 0x2269) = 0;
        }
        cVar8 = FUN_1804cd3b0();
        if (cVar8 != '\0') {
          puVar13 = (undefined8 *)FUN_1804cd4c0();
          if (puVar13 != (undefined8 *)0x0) {
            puVar5 = (undefined8 *)*param_1;
            local_e8 = (undefined1  [8])*puVar5;
            uStack_e0 = puVar5[1];
            uStack_d8 = puVar5[2];
            uStack_d0 = puVar5[3];
            local_c8 = puVar5[4];
            auVar26 = ZEXT1664(auVar26._0_16_);
            auVar27 = ZEXT1664(auVar27._0_16_);
            auVar28 = ZEXT1664(auVar28._0_16_);
            auVar29 = ZEXT1664(auVar29._0_16_);
            auVar30 = ZEXT1664(auVar30._0_16_);
            ppppuVar15 = (undefined8 ****)
                         thunk_FUN_1805f8070(local_e8,local_c0,*(undefined4 *)*puVar13);
            ppppuVar16 = (undefined8 ****)thunk_FUN_1805f8070(local_e8);
            if ((((undefined8 *****)ppppuVar15 != local_c0) &&
                ((undefined8 *****)ppppuVar16 != local_c0)) && (ppppuVar15 != ppppuVar16)) {
              ppppuVar1 = (undefined8 ****)((longlong)ppppuVar15 + 4);
              if (ppppuVar15 < ppppuVar16) {
                if ((ppppuVar15 != ppppuVar1) &&
                   (ppppuVar1 != (undefined8 ****)((longlong)ppppuVar16 + 4U))) {
                  FUN_1805f9ff0(ppppuVar15,ppppuVar1);
                  FUN_1805f9ff0(ppppuVar1,(undefined8 ****)((longlong)ppppuVar16 + 4U));
                  ppppuVar16 = ppppuVar15;
LAB_18053232a:
                  FUN_1805f9ff0(ppppuVar16);
                }
              }
              else if (ppppuVar15 != ppppuVar1) {
                FUN_1805f9ff0(ppppuVar16,ppppuVar15);
                FUN_1805f9ff0(ppppuVar15,ppppuVar1);
                goto LAB_18053232a;
              }
            }
            iVar22 = 0;
            uVar21 = 0;
            uVar19 = 0;
            do {
              ppppuVar16 = (undefined8 ****)(local_108 + (longlong)(int)uVar19 * 4 + 0x24);
              iVar9 = 0;
              if ((undefined8 *****)ppppuVar16 != local_c0) {
                iVar17 = 0;
                do {
                  iVar9 = iVar17 + 1;
                  if (*(int *)(local_108 + uVar21 * 4 + 0x20) <= *(int *)ppppuVar16) {
                    iVar9 = iVar17;
                  }
                  ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 4);
                  iVar17 = iVar9;
                } while ((undefined8 *****)ppppuVar16 != local_c0);
              }
              iVar22 = iVar22 * (10 - (int)uVar21) + iVar9;
              uVar19 = (int)uVar21 + 1;
              uVar21 = (ulonglong)uVar19;
            } while ((int)uVar19 < 10);
            *(int *)(param_1[4] + 0x1b4) = iVar22;
          }
          lVar24 = DAT_180bb8ae8;
          *(undefined1 *)(DAT_180bb8ae8 + 0x226a) = 0;
          if (*(char *)(lVar24 + 0x22b2) != '\0') {
            FUN_1804cd120();
          }
        }
        iVar22 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar22 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar22 + -1;
        }
        FUN_18015c010(local_a0);
        FUN_18015c010(local_c0);
      }
      piVar23 = piVar23 + 1;
    } while (piVar23 != local_188);
  }
  if (*(int *)param_1[3] == 0) {
    FUN_1805302b0("Choose equipment in Auto-buy to add items here.");
  }
}



