// FUN_1805233d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805233d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805233d0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  char *pcVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auStack_6d98 [32];
  float local_6d78;
  float local_6d74;
  float local_6d70 [2];
  longlong local_6d68;
  uint local_6d60;
  longlong local_6d58;
  ulonglong local_6d50;
  undefined1 local_6d48 [32];
  ulonglong local_6d28;
  char *local_6d20;
  undefined1 *local_6d18;
  char *local_6d10;
  undefined *local_6d08;
  undefined1 local_6d00 [56];
  undefined1 local_6cc8 [56];
  undefined1 local_6c90 [56];
  undefined1 local_6c58 [56];
  undefined1 local_6c20 [56];
  undefined1 local_6be8 [56];
  undefined1 local_6bb0 [56];
  undefined1 local_6b78 [56];
  undefined1 local_6b40 [56];
  undefined1 local_6b08 [64];
  undefined1 local_6ac8 [4528];
  undefined1 local_5918 [4528];
  undefined1 local_4768 [4528];
  undefined1 local_35b8 [4524];
  undefined1 local_240c [4524];
  undefined1 local_1260 [4536];
  undefined1 local_a8 [16];
  undefined1 auStack_98 [16];
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_6d98;
  uVar20 = 0;
  local_6d60 = 0;
  local_6d08 = &DAT_1808e6940;
  local_6d68 = param_1;
  local_6d58 = param_1;
  local_6d20 = param_2;
  local_6d10 = param_2;
  iVar7 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar9 = FUN_18045ffa0(local_6ac8);
  FUN_18063aed0(local_35b8,uVar9,0x11ac);
  uVar9 = FUN_18045ffa0(local_5918);
  FUN_18063aed0(local_240c,uVar9,0x11ac);
  uVar9 = FUN_18045ffa0(local_4768);
  FUN_18063aed0(local_1260,uVar9,0x11ac);
  FUN_18063aed0(param_1 + 8,local_35b8,0x3504);
  *(undefined1 *)(param_1 + 0x350c) = 1;
  if (*param_2 == '\x02') {
    local_6d50 = 0;
    auVar30 = ZEXT1664(_DAT_18086d450);
    auVar24 = ZEXT464(0x40000000);
    auVar26 = ZEXT464(0x3f400000);
    auVar28 = ZEXT464(0x3f800000);
    while( true ) {
      switch(*param_2) {
      case '\0':
        uVar13 = 0;
        break;
      case '\x01':
        uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 8);
        break;
      case '\x02':
        uVar13 = (*(longlong **)(param_2 + 8))[1] - **(longlong **)(param_2 + 8) >> 4;
        break;
      default:
        uVar13 = 1;
      }
      if (3 < uVar13) {
        uVar13 = 3;
      }
      if (uVar13 <= local_6d50) break;
      if (*param_2 != '\x02') {
        local_6d58 = FUN_180112a50(local_6d20);
        uVar9 = FUN_18010f410(local_6d48);
        FUN_1800f6ca0(local_6b08,0x131,uVar9);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_6b08,&DAT_1808d1050);
      }
      uVar13 = local_6d50;
      if (*(char *)(**(longlong **)(param_2 + 8) + local_6d50 * 0x10) == '\x02') {
        local_6d28 = 0;
        while( true ) {
          uVar3 = local_6d28;
          if (*param_2 != '\x02') {
            local_6d58 = FUN_180112a50(local_6d20);
            uVar9 = FUN_18010f410(local_6d48);
            FUN_1800f6ca0(local_6b40,0x131,uVar9);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_6b40,&DAT_1808d1050);
          }
          pcVar19 = (char *)(**(longlong **)(param_2 + 8) + uVar13 * 0x10);
          switch(*pcVar19) {
          case '\0':
            uVar14 = 0;
            break;
          case '\x01':
            uVar14 = *(ulonglong *)(*(longlong *)(pcVar19 + 8) + 8);
            break;
          case '\x02':
            uVar14 = (*(longlong **)(pcVar19 + 8))[1] - **(longlong **)(pcVar19 + 8) >> 4;
            break;
          default:
            uVar14 = 1;
          }
          if (0x1d < uVar14) {
            uVar14 = 0x1d;
          }
          if (uVar14 <= local_6d28) break;
          puVar18 = (undefined1 *)((uVar13 * 0x1d + local_6d28) * 0x9c + 8 + param_1);
          local_6d18 = puVar18;
          if (*pcVar19 != '\x02') {
            local_6d58 = FUN_180112a50(pcVar19);
            uVar9 = FUN_18010f410(local_6d48);
            FUN_1800f6ca0(local_6b78,0x131,uVar9);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_6b78,&DAT_1808d1050);
          }
          pcVar17 = (char *)(**(longlong **)(pcVar19 + 8) + local_6d28 * 0x10);
          if (*pcVar17 == '\x01') {
            if (local_6d28 == 0x1b) {
              auStack_98 = auVar30._0_16_;
              local_a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar23[0xf] = 0;
              auVar23._0_15_ = local_a8._1_15_;
              local_a8 = auVar23 << 8;
              local_6d60 = uVar20 | 1;
              auVar24 = ZEXT1664(auVar24._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar28 = ZEXT1664(auVar28._0_16_);
              auVar30 = ZEXT1664(auStack_98);
              plVar10 = (longlong *)FUN_180175fb0(pcVar17,local_6d48,pcVar19,local_a8);
              uVar20 = 3;
              local_6d60 = 3;
              plVar1 = plVar10 + 2;
              if (0xf < (ulonglong)plVar10[3]) {
                plVar10 = (longlong *)*plVar10;
              }
              if (((*plVar1 == 9) && (*plVar10 == 0x614220726f6d7241)) && ((char)plVar10[1] == 'r'))
              goto LAB_1805236ef;
              bVar2 = true;
            }
            else {
LAB_1805236ef:
              bVar2 = false;
            }
            if ((uVar20 & 2) != 0) {
              uVar20 = uVar20 & 0xfffffffd;
              auVar24 = ZEXT1664(auVar24._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar28 = ZEXT1664(auVar28._0_16_);
              auVar30 = ZEXT1664(auVar30._0_16_);
              local_6d60 = uVar20;
              FUN_18015c010(local_6d48);
            }
            if ((uVar20 & 1) != 0) {
              uVar20 = uVar20 & 0xfffffffe;
              auVar24 = ZEXT1664(auVar24._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar28 = ZEXT1664(auVar28._0_16_);
              auVar30 = ZEXT1664(auVar30._0_16_);
              local_6d60 = uVar20;
              FUN_18015c010(local_a8);
            }
            if (!bVar2) {
              local_6d78 = 1.4013e-45;
              local_6d70[0] = 0.0;
              local_6d74 = 0.0;
              auVar24 = ZEXT1664(auVar24._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar28 = ZEXT1664(auVar28._0_16_);
              auVar30 = ZEXT1664(auVar30._0_16_);
              local_6d74 = (float)FUN_1800e63a0(pcVar17,&DAT_18086639c,&local_6d74);
              pfVar15 = local_6d70;
              if (-1 < (int)local_6d74) {
                pfVar15 = &local_6d74;
              }
              pfVar12 = &local_6d78;
              if ((int)local_6d74 < 2) {
                pfVar12 = pfVar15;
              }
              *(float *)(puVar18 + 8) = *pfVar12;
              if (*pcVar17 != '\x01') {
                local_6d68 = FUN_180112a50(pcVar17);
                uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                FUN_1800f6ca0(local_6bb0,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_6bb0,&DAT_1808d1050);
              }
              local_a8 = ZEXT816(0);
              auStack_98 = ZEXT816(0);
              auVar24 = ZEXT1664(auVar24._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar28 = ZEXT1664(auVar28._0_16_);
              auVar30 = ZEXT1664(auVar30._0_16_);
              FUN_1800e6b50(pcVar17,local_a8,&DAT_180867794);
              uVar9 = FUN_1800f3e20(pcVar17,local_6d48);
              cVar4 = FUN_1800e6ca0(local_a8,uVar9);
              if (cVar4 == '\0') {
                uVar9 = FUN_1800f34a0(local_a8);
                uVar5 = FUN_1800e6720(uVar9);
              }
              else {
                uVar5 = *puVar18;
              }
              *puVar18 = uVar5;
              local_6d74 = 4.2039e-45;
              local_6d70[0] = 0.0;
              local_6d78 = (float)(uint)(byte)puVar18[1];
              local_6d78 = (float)FUN_1800e63a0(pcVar17,&DAT_18086777c,&local_6d78);
              pfVar15 = local_6d70;
              if (-1 < (int)local_6d78) {
                pfVar15 = &local_6d78;
              }
              pfVar12 = &local_6d74;
              if ((int)local_6d78 < 4) {
                pfVar12 = pfVar15;
              }
              puVar18[1] = *(undefined1 *)pfVar12;
              uVar21 = FUN_1800e9950(pcVar17,"order",puVar18 + 4);
              *(undefined4 *)(puVar18 + 4) = uVar21;
              sVar6 = thunk_FUN_180624430();
              if (0 < sVar6) {
                *(undefined4 *)(puVar18 + 4) = 0;
              }
              uVar5 = FUN_1805503a0(pcVar17,"background",puVar18 + 0x1c);
              puVar18[0x1c] = uVar5;
              uVar5 = FUN_1805503a0(pcVar17,"shadow",puVar18 + 0x1d);
              puVar18[0x1d] = uVar5;
              pfVar15 = (float *)(puVar18 + 0x20);
              fVar22 = (float)FUN_1800e9950(pcVar17,"scale",pfVar15);
              *pfVar15 = fVar22;
              iVar7 = (int)uVar3;
              if ((iVar7 == 1) && (sVar6 = thunk_FUN_180624430(), sVar6 < 1)) {
                local_6d70[0] = auVar24._0_4_;
                local_6d78 = auVar26._0_4_;
                pfVar12 = &local_6d78;
                if (auVar26._0_4_ <= fVar22) {
                  pfVar12 = pfVar15;
                }
                pfVar11 = local_6d70;
                if (fVar22 <= auVar24._0_4_) {
                  pfVar11 = pfVar12;
                }
                fVar22 = *pfVar11;
              }
              else {
                fVar22 = auVar28._0_4_;
              }
              *pfVar15 = fVar22;
              uVar5 = FUN_1805503a0(pcVar17,"outline",puVar18 + 0x24);
              puVar18[0x24] = uVar5;
              local_6d74 = 2.8026e-45;
              local_6d70[0] = 0.0;
              local_6d78 = (float)(uint)(byte)puVar18[0x38];
              local_6d78 = (float)FUN_1800e63a0(pcVar17,"text_style",&local_6d78);
              pfVar15 = local_6d70;
              if (-1 < (int)local_6d78) {
                pfVar15 = &local_6d78;
              }
              pfVar12 = &local_6d74;
              if ((int)local_6d78 < 3) {
                pfVar12 = pfVar15;
              }
              puVar18[0x38] = *(undefined1 *)pfVar12;
              local_6d74 = 2.8026e-45;
              local_6d78 = 0.0;
              if (*pcVar17 != '\x01') {
                local_6d68 = FUN_180112a50(pcVar17);
                uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                FUN_1800f6ca0(local_6be8,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_6be8,&DAT_1808d1050);
              }
              local_a8 = ZEXT816(0);
              auStack_98 = ZEXT816(0);
              auVar24 = ZEXT1664(auVar24._0_16_);
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar28 = ZEXT1664(auVar28._0_16_);
              auVar30 = ZEXT1664(auVar30._0_16_);
              FUN_1800e6b50(pcVar17,local_a8,&DAT_180867824);
              uVar9 = FUN_1800f3e20(pcVar17,local_6d48);
              cVar4 = FUN_1800e6ca0(local_a8,uVar9);
              auVar29 = auVar30._0_16_;
              auVar27 = auVar28._0_16_;
              auVar25 = auVar26._0_16_;
              auVar23 = auVar24._0_16_;
              if (cVar4 == '\0') {
                uVar9 = FUN_1800f34a0(local_a8);
                local_6d70[0] = (float)FUN_1800e62a0(uVar9);
                auVar29 = auVar30._0_16_;
                auVar27 = auVar28._0_16_;
                auVar25 = auVar26._0_16_;
                auVar23 = auVar24._0_16_;
              }
              else {
                local_6d70[0] = *(float *)(puVar18 + 0x3c);
              }
              pfVar15 = &local_6d78;
              if (-1 < (int)local_6d70[0]) {
                pfVar15 = local_6d70;
              }
              pfVar12 = &local_6d74;
              if ((int)local_6d70[0] < 3) {
                pfVar12 = pfVar15;
              }
              *(float *)(puVar18 + 0x3c) = *pfVar12;
              local_6d74 = 2.8026e-45;
              local_6d78 = 0.0;
              uVar8 = (uint)(byte)puVar18[0x40];
              if (*pcVar17 != '\x01') {
                local_6d68 = FUN_180112a50(pcVar17);
                uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                FUN_1800f6ca0(local_6c20,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_6c20,&DAT_1808d1050);
              }
              local_a8 = ZEXT816(0);
              auStack_98 = ZEXT816(0);
              auVar24 = ZEXT1664(auVar23);
              auVar26 = ZEXT1664(auVar25);
              auVar28 = ZEXT1664(auVar27);
              auVar30 = ZEXT1664(auVar29);
              FUN_1800e6b50(pcVar17,local_a8,"bar_style");
              uVar9 = FUN_1800f3e20(pcVar17,local_6d48);
              cVar4 = FUN_1800e6ca0(local_a8,uVar9);
              auVar29 = auVar30._0_16_;
              auVar27 = auVar28._0_16_;
              auVar25 = auVar26._0_16_;
              auVar23 = auVar24._0_16_;
              if (cVar4 == '\0') {
                uVar9 = FUN_1800f34a0(local_a8);
                uVar8 = FUN_1800e62a0(uVar9);
                auVar29 = auVar30._0_16_;
                auVar27 = auVar28._0_16_;
                auVar25 = auVar26._0_16_;
                auVar23 = auVar24._0_16_;
              }
              local_6d70[0] = (float)uVar8;
              pfVar15 = &local_6d78;
              if (-1 < (int)uVar8) {
                pfVar15 = local_6d70;
              }
              pfVar12 = &local_6d74;
              if ((int)uVar8 < 3) {
                pfVar12 = pfVar15;
              }
              puVar18[0x40] = *(undefined1 *)pfVar12;
              if (*pcVar17 != '\x01') {
                local_6d68 = FUN_180112a50(pcVar17);
                uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                FUN_1800f6ca0(local_6c58,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_6c58,&DAT_1808d1050);
              }
              local_a8 = ZEXT816(0);
              auStack_98 = ZEXT816(0);
              auVar24 = ZEXT1664(auVar23);
              auVar26 = ZEXT1664(auVar25);
              auVar28 = ZEXT1664(auVar27);
              auVar30 = ZEXT1664(auVar29);
              FUN_1800e6b50(pcVar17,local_a8,&DAT_18086780c);
              uVar9 = FUN_1800f3e20(pcVar17,local_6d48);
              cVar4 = FUN_1800e6ca0(local_a8,uVar9);
              if (cVar4 == '\0') {
                uVar9 = FUN_1800f34a0(local_a8);
                uVar5 = FUN_1800e6720(uVar9);
              }
              else {
                uVar5 = puVar18[0x84];
              }
              puVar18[0x84] = uVar5;
              uVar5 = FUN_1805503a0(pcVar17,"ammo_count",puVar18 + 0x85);
              puVar18[0x85] = uVar5;
              uVar5 = FUN_1805503a0(pcVar17,"avatar",puVar18 + 0x98);
              puVar18[0x98] = uVar5;
              uVar9 = FUN_1805242e0(extraout_XMM0_Qa,pcVar17,"color",puVar18 + 0xc);
              uVar9 = FUN_1805242e0(uVar9,pcVar17,"low_color",puVar18 + 0x44);
              uVar9 = FUN_1805242e0(uVar9,pcVar17,"outline_color",puVar18 + 0x28);
              FUN_1805242e0(uVar9,pcVar17,"pin_color",puVar18 + 0x88);
              if ((uVar3 == 3) && (cVar4 = FUN_1800e6540(pcVar17,"health_number"), cVar4 != '\0')) {
                local_a8 = (undefined1  [16])0x0;
                auStack_98 = (undefined1  [16])0x0;
                FUN_18015ba30(local_a8,"health_number",0xd);
                pcVar19 = (char *)FUN_180113610(pcVar17,local_a8);
                FUN_18015c010(local_a8);
                if (*pcVar19 == '\x01') {
                  local_a8 = (undefined1  [16])0x0;
                  auStack_98 = (undefined1  [16])0x0;
                  FUN_18015ba30(local_a8,"health_number",0xd);
                  pcVar19 = (char *)FUN_180113610(pcVar17,local_a8);
                  FUN_18015c010(local_a8);
                  uVar5 = FUN_1805503a0(pcVar19,"enabled",puVar18 + 0x54);
                  puVar18[0x54] = uVar5;
                  local_6d78 = 0.0;
                  uVar8 = (uint)(byte)puVar18[0x55];
                  local_6d74 = (float)iVar7;
                  if (*pcVar19 != '\x01') {
                    local_6d68 = FUN_180112a50(pcVar19);
                    uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                    FUN_1800f6ca0(local_6c90,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_6c90,&DAT_1808d1050);
                  }
                  local_a8 = ZEXT816(0);
                  auStack_98 = ZEXT816(0);
                  auVar24 = ZEXT1664(auVar24._0_16_);
                  auVar26 = ZEXT1664(auVar26._0_16_);
                  auVar28 = ZEXT1664(auVar28._0_16_);
                  auVar30 = ZEXT1664(auVar30._0_16_);
                  FUN_1800e6b50(pcVar19,local_a8,"position");
                  uVar9 = FUN_1800f3e20(pcVar19,local_6d48);
                  cVar4 = FUN_1800e6ca0(local_a8,uVar9);
                  auVar29 = auVar30._0_16_;
                  auVar27 = auVar28._0_16_;
                  auVar25 = auVar26._0_16_;
                  auVar23 = auVar24._0_16_;
                  if (cVar4 == '\0') {
                    uVar9 = FUN_1800f34a0(local_a8);
                    uVar8 = FUN_1800e62a0(uVar9);
                    auVar29 = auVar30._0_16_;
                    auVar27 = auVar28._0_16_;
                    auVar25 = auVar26._0_16_;
                    auVar23 = auVar24._0_16_;
                  }
                  local_6d70[0] = (float)uVar8;
                  pfVar15 = &local_6d78;
                  if (-1 < (int)uVar8) {
                    pfVar15 = local_6d70;
                  }
                  pfVar12 = &local_6d74;
                  if ((int)uVar8 < 4) {
                    pfVar12 = pfVar15;
                  }
                  puVar18[0x55] = *(undefined1 *)pfVar12;
                  if (*pcVar19 != '\x01') {
                    local_6d68 = FUN_180112a50(pcVar19);
                    uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                    FUN_1800f6ca0(local_6cc8,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_6cc8,&DAT_1808d1050);
                  }
                  local_a8 = ZEXT816(0);
                  auStack_98 = ZEXT816(0);
                  auVar24 = ZEXT1664(auVar23);
                  auVar26 = ZEXT1664(auVar25);
                  auVar28 = ZEXT1664(auVar27);
                  auVar30 = ZEXT1664(auVar29);
                  FUN_1800e6b50(pcVar19,local_a8,&DAT_1806bd190);
                  uVar9 = FUN_1800f3e20(pcVar19,local_6d48);
                  cVar4 = FUN_1800e6ca0(local_a8,uVar9);
                  if (cVar4 == '\0') {
                    uVar9 = FUN_1800f34a0(local_a8);
                    uVar13 = FUN_1800e6880(uVar9);
                  }
                  else {
                    uVar13 = (ulonglong)*(uint *)(puVar18 + 0x7c);
                  }
                  uVar21 = FUN_18029b6b0(uVar13);
                  *(undefined4 *)(puVar18 + 0x7c) = uVar21;
                  if (*pcVar19 != '\x01') {
                    local_6d68 = FUN_180112a50(pcVar19);
                    uVar9 = FUN_1800f6bd0(local_6d48,"cannot use value() with ",&local_6d68);
                    FUN_1800f6ca0(local_6d00,0x132,uVar9);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_6d00,&DAT_1808d1050);
                  }
                  local_a8 = ZEXT816(0);
                  auStack_98 = ZEXT816(0);
                  auVar24 = ZEXT1664(auVar24._0_16_);
                  auVar26 = ZEXT1664(auVar26._0_16_);
                  auVar28 = ZEXT1664(auVar28._0_16_);
                  auVar30 = ZEXT1664(auVar30._0_16_);
                  FUN_1800e6b50(pcVar19,local_a8,&DAT_1806bee68);
                  uVar9 = FUN_1800f3e20(pcVar19,local_6d48);
                  cVar4 = FUN_1800e6ca0(local_a8,uVar9);
                  if (cVar4 == '\0') {
                    uVar9 = FUN_1800f34a0(local_a8);
                    uVar13 = FUN_1800e6880(uVar9);
                  }
                  else {
                    uVar13 = (ulonglong)*(uint *)(puVar18 + 0x80);
                  }
                  uVar21 = FUN_18029b730(uVar13);
                  *(undefined4 *)(puVar18 + 0x80) = uVar21;
                  uVar5 = FUN_1805503a0(pcVar19,"outline",puVar18 + 0x68);
                  puVar18[0x68] = uVar5;
                  uVar9 = FUN_1805242e0(extraout_XMM0_Qa_00,pcVar19,"color",puVar18 + 0x58);
                  FUN_1805242e0(uVar9,pcVar19,"outline_color",puVar18 + 0x6c);
                }
              }
              uVar13 = local_6d50;
            }
            else {
              uVar13 = local_6d50;
            }
          }
          local_6d28 = uVar3 + 1;
          param_1 = local_6d68;
        }
      }
      local_6d50 = uVar13 + 1;
    }
    puVar16 = local_6d08;
  }
  else {
    puVar16 = &DAT_1808e6940;
  }
  FUN_1805f68fc(puVar16);
}



