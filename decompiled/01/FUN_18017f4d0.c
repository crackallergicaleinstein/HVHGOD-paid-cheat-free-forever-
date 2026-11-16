// FUN_18017f4d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017f4d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017f4d0(undefined1 (*param_1) [16],char *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char *pcVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  char *pcVar15;
  longlong *plVar16;
  longlong *plVar17;
  char **ppcVar18;
  longlong *plVar19;
  char *pcVar20;
  char **ppcVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  bool bVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined4 local_2c0;
  char *local_2b8;
  char *local_2b0;
  char *local_2a8 [2];
  undefined1 local_298 [16];
  undefined1 auStack_288 [16];
  char *local_278;
  uint local_270;
  undefined1 (*local_268) [16];
  undefined1 local_258 [16];
  undefined1 auStack_248 [16];
  undefined1 local_238 [16];
  undefined1 auStack_228 [16];
  char *local_218;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [56];
  undefined1 local_170 [56];
  undefined1 local_138 [56];
  undefined1 local_100 [56];
  undefined1 local_c8 [56];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined1 local_70 [16];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  iVar12 = 0;
  bVar24 = false;
  local_270 = 0;
  local_268 = param_1;
  if (*param_2 == '\x01') {
    local_70 = ZEXT816(0);
    auStack_60 = ZEXT816(0);
    FUN_1800e6b50(param_2,local_70,"version");
    uVar13 = FUN_1800f3e20(param_2,local_1c8);
    cVar9 = FUN_1800e6ca0(local_70,uVar13);
    if (cVar9 == '\0') {
      uVar13 = FUN_1800f34a0(local_70);
      iVar10 = FUN_1800e62a0(uVar13);
      if (iVar10 == 1) {
        local_2c0 = 0;
        lVar14 = FUN_1800f4710(param_2,local_90,0xffffffff);
        bVar24 = true;
        if (*(ulonglong *)(lVar14 + 0x10) < 0x18001) {
          bVar2 = false;
          goto LAB_18017f5c5;
        }
      }
    }
  }
  bVar2 = true;
LAB_18017f5c5:
  if (bVar24) {
    FUN_18015c010(local_90);
  }
  if (bVar2) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
  }
  else {
    pcVar15 = (char *)FUN_1800e78e0(param_2,"skins");
    local_2b8 = pcVar15;
    local_2b0 = (char *)FUN_1800e78e0(param_2,"agents");
    if ((*pcVar15 == '\x01') && (*local_2b0 == '\x01')) {
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_298._8_8_ = 0x15;
        local_298._0_8_ = "tier0.dll:g_pMemAlloc";
        DAT_180c7df28 = (undefined8 *)FUN_180451750(local_298);
      }
      plVar23 = (longlong *)
                (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x170);
      local_298._0_8_ = plVar23;
      if (plVar23 == (longlong *)0x0) {
        plVar23 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar23 + 1) = 1;
        *(undefined4 *)((longlong)plVar23 + 0xc) = 1;
        *plVar23 = (longlong)std::_Ref_count_obj2<hvhgod::sync::cosmetic_profile>::vftable;
        FUN_18063ab10(plVar23 + 2,0,0x160);
        FUN_1801b9050(plVar23 + 2);
      }
      uVar25 = 4;
      plVar19 = plVar23 + 2;
      local_1c8._8_8_ = plVar23;
      local_1c8._0_8_ = plVar19;
      local_50 = 0;
      local_2a8[0] = (char *)&local_50;
      cVar9 = FUN_180180430(local_2a8,pcVar15,plVar19);
      if (cVar9 == '\0') {
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)*param_1 = 0;
        *(undefined8 *)(*param_1 + 8) = 0;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar23 + 1;
          lVar14 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar23 + 8))(plVar23);
            }
          }
        }
      }
      else {
        plVar17 = plVar23 + 10;
        if (plVar17 != plVar19) {
          local_298._0_8_ = plVar17;
          *(int *)plVar17 = (int)*plVar19;
          FUN_1801b6bf0(plVar23 + 0xb,*(undefined8 *)plVar23[3]);
          uVar13 = FUN_180151090(plVar17,plVar23[0xc]);
          FUN_180150ee0(plVar17,uVar13);
        }
        pcVar15 = local_2b8;
        cVar9 = FUN_1800e6540(local_2b8,"_teams");
        if (cVar9 != '\0') {
          local_298 = (undefined1  [16])0x0;
          auStack_288 = (undefined1  [16])0x0;
          FUN_18015ba30(local_298,"_teams",6);
          pcVar15 = (char *)FUN_180113610(pcVar15,local_298);
          local_278 = pcVar15;
          FUN_18015c010(local_298);
          if (*pcVar15 != '\x01') {
            *param_1 = (undefined1  [16])0x0;
            *(undefined8 *)*param_1 = 0;
            *(undefined8 *)(*param_1 + 8) = 0;
            if (plVar23 == (longlong *)0x0) {
            }
            LOCK();
            plVar19 = plVar23 + 1;
            lVar14 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar14 != 1) {
            }
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar23 + 8))(plVar23);
            }
          }
          cVar9 = FUN_1800e6540(pcVar15,&DAT_1806bdfcc);
          if (cVar9 != '\0') {
            local_298 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            FUN_18015ba30(local_298,&DAT_1806bdfcc,1);
            local_2b8 = (char *)FUN_180113610(pcVar15,local_298);
            FUN_18015c010(local_298);
            cVar9 = FUN_180180430(local_2a8,local_2b8,plVar23 + 2);
            if (cVar9 == '\0') {
              *param_1 = (undefined1  [16])0x0;
              *(undefined8 *)*param_1 = 0;
              *(undefined8 *)(*param_1 + 8) = 0;
              if (plVar23 == (longlong *)0x0) {
              }
              LOCK();
              plVar19 = plVar23 + 1;
              lVar14 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar14 != 1) {
              }
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar23 + 8))(plVar23);
              }
            }
          }
          if ((*pcVar15 == '\x01') &&
             (plVar19 = *(longlong **)(pcVar15 + 8),
             plVar16 = (longlong *)FUN_1800f6de0(plVar19,local_298,&DAT_1806be004),
             *plVar16 != *plVar19)) {
            local_298 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            FUN_18015ba30(local_298,&DAT_1806be004,2);
            uVar13 = FUN_180113610(local_278,local_298);
            FUN_18015c010(local_298);
            cVar9 = FUN_180180430(local_2a8,uVar13,plVar17);
            if (cVar9 == '\0') {
              *param_1 = (undefined1  [16])0x0;
              *(undefined8 *)*param_1 = 0;
              *(undefined8 *)(*param_1 + 8) = 0;
              if (plVar23 == (longlong *)0x0) {
              }
              LOCK();
              plVar19 = plVar23 + 1;
              lVar14 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar14 != 1) {
              }
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar23 + 8))(plVar23);
              }
            }
          }
        }
        iVar10 = 0;
        local_278 = (char *)((ulonglong)local_278 & 0xffffffff00000000);
        auVar27 = ZEXT1664(_DAT_18086d450);
        pcVar15 = local_2b0;
        while (iVar10 < 2) {
          local_2b8 = "t";
          if (iVar10 != 0) {
            local_2b8 = "ct";
          }
          local_2a8[0] = local_2b8;
          if (*pcVar15 != '\x01') {
            uVar13 = FUN_180112a50(pcVar15);
            local_298._0_8_ = uVar13;
            uVar13 = FUN_1800f6bd0(local_1e8,"cannot use value() with ",local_298);
            FUN_1800f6ca0(local_100,0x132,uVar13);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_100,&DAT_1808d1050);
          }
          local_90 = ZEXT816(0);
          auStack_80 = ZEXT816(0);
          auVar27 = ZEXT1664(auVar27._0_16_);
          FUN_1800ea030(pcVar15,local_90,local_2a8);
          uVar13 = FUN_1800f3e20(pcVar15,local_298);
          cVar9 = FUN_1800e6ca0(local_90,uVar13);
          if (cVar9 == '\0') {
            uVar13 = FUN_1800f34a0(local_90);
            uVar11 = FUN_1800e62a0(uVar13);
            if (0x7fff < uVar11) {
              *param_1 = (undefined1  [16])0x0;
              *(undefined8 *)*param_1 = 0;
              *(undefined8 *)(*param_1 + 8) = 0;
              if (plVar23 == (longlong *)0x0) {
              }
              LOCK();
              plVar19 = plVar23 + 1;
              lVar14 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar14 != 1) {
              }
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar23 + 8))(plVar23);
              }
            }
          }
          else {
            uVar11 = 0;
          }
          lVar14 = (longlong)iVar10;
          *(short *)((longlong)plVar23 + lVar14 * 2 + 0x90) = (short)uVar11;
          cVar9 = FUN_1800e6540(pcVar15,"custom_agents");
          if (cVar9 != '\0') {
            local_90 = (undefined1  [16])0x0;
            auStack_80 = (undefined1  [16])0x0;
            FUN_18015ba30(local_90,"custom_agents",0xd);
            pcVar15 = (char *)FUN_180113610(pcVar15,local_90);
            FUN_18015c010(local_90);
            auStack_288 = auVar27._0_16_;
            local_298._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar26[0xf] = 0;
            auVar26._0_15_ = local_298._1_15_;
            local_298 = auVar26 << 8;
            if (*pcVar15 != '\x01') {
              local_2b8 = (char *)FUN_180112a50(pcVar15);
              uVar13 = FUN_1800f6bd0(local_1e8,"cannot use value() with ",&local_2b8);
              FUN_1800f6ca0(local_1a8,0x132,uVar13);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_1a8,&DAT_1808d1050);
            }
            local_90 = ZEXT816(0);
            auStack_80 = ZEXT816(0);
            auVar27 = ZEXT1664(auStack_288);
            FUN_1800ea030(pcVar15,local_90,local_2a8);
            uVar13 = FUN_1800f3e20(pcVar15,local_1e8);
            cVar9 = FUN_1800e6ca0(local_90,uVar13);
            auVar26 = auVar27._0_16_;
            if (cVar9 == '\0') {
              uVar13 = FUN_1800f34a0(local_90);
              FUN_1800e69c0(uVar13,&local_208);
              auVar26 = auVar27._0_16_;
            }
            else {
              local_208 = local_298._0_8_;
              uStack_200 = local_298._8_8_;
              uStack_1f8 = auStack_288._0_8_;
              uStack_1f0 = auStack_288._8_8_;
              auVar3[0xf] = 0;
              auVar3._0_15_ = local_298._1_15_;
              local_298 = auVar3 << 8;
              auStack_288 = auVar26;
            }
            uVar25 = uVar25 | 8;
            puVar22 = (ulonglong *)(plVar23 + lVar14 * 4 + 0x13);
            if (puVar22 != &local_208) {
              auVar27 = ZEXT1664(auVar26);
              FUN_18015c010(puVar22);
              auVar26 = auVar27._0_16_;
              *puVar22 = local_208;
              puVar22[1] = uStack_200;
              puVar22[2] = uStack_1f8;
              puVar22[3] = uStack_1f0;
              uStack_1f8 = 0;
              uStack_1f0 = 0xf;
              local_208 = local_208 & 0xffffffffffffff00;
            }
            auVar27 = ZEXT1664(auVar26);
            FUN_18015c010(&local_208);
            FUN_18015c010(local_298);
            pcVar15 = local_2b0;
          }
          local_298._0_8_ = plVar23 + lVar14 * 4 + 0x15;
          if (0x200 < (ulonglong)plVar23[lVar14 * 4 + 0x15]) {
LAB_1801800cf:
            *param_1 = (undefined1  [16])0x0;
            *(undefined8 *)*param_1 = 0;
            *(undefined8 *)(*param_1 + 8) = 0;
            if (plVar23 == (longlong *)0x0) {
            }
            LOCK();
            plVar19 = plVar23 + 1;
            lVar14 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar14 != 1) {
            }
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar23 + 8))(plVar23);
            }
          }
          plVar19 = plVar23 + lVar14 * 4 + 0x13;
          if (0xf < (ulonglong)plVar19[3]) {
            plVar19 = (longlong *)*plVar19;
          }
          local_2c8 = 3;
          lVar14 = FUN_18010fae0(plVar19);
          if (lVar14 != -1) goto LAB_1801800cf;
          cVar9 = FUN_1800e6540(pcVar15,"bundles");
          if (cVar9 != '\0') {
            local_90 = (undefined1  [16])0x0;
            auStack_80 = (undefined1  [16])0x0;
            FUN_18015ba30(local_90,"bundles",7);
            pcVar15 = (char *)FUN_180113610(pcVar15,local_90);
            FUN_18015c010(local_90);
            if (*pcVar15 == '\x01') {
              pcVar15 = (char *)**(undefined8 **)(pcVar15 + 8);
              pcVar20 = *(char **)(pcVar15 + 8);
              cVar9 = pcVar20[0x19];
              local_2a8[0] = pcVar15;
              pcVar8 = local_2b8;
              while (local_2b8 = pcVar8, cVar9 == '\0') {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
                cVar9 = FUN_180156e70(pcVar20 + 0x20,pcVar8);
                if (cVar9 < '\0') {
                  pcVar20 = pcVar20 + 0x10;
                }
                else {
                  pcVar15 = pcVar20;
                }
                pcVar20 = *(char **)pcVar20;
                pcVar8 = local_2b8;
                cVar9 = pcVar20[0x19];
              }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
              if (((pcVar15[0x19] == '\0') &&
                  (cVar9 = FUN_180156e70(pcVar15 + 0x20,pcVar8), cVar9 < '\x01')) &&
                 (pcVar15 != local_2a8[0])) {
                local_70 = (undefined1  [16])0x0;
                auStack_60 = (undefined1  [16])0x0;
                FUN_18015ba30(local_70,"bundles",7);
                uVar13 = FUN_180113610(local_2b0,local_70);
                FUN_18015c010(local_70);
                local_90 = (undefined1  [16])0x0;
                auStack_80 = (undefined1  [16])0x0;
                lVar14 = -1;
                do {
                  lVar14 = lVar14 + 1;
                } while (pcVar8[lVar14] != '\0');
                FUN_18015ba30(local_90,pcVar8);
                uVar13 = FUN_180113610(uVar13,local_90);
                FUN_18015c010(local_90);
                plVar19 = plVar23 + (longlong)(int)local_278 * 9 + 0x1b;
                pcVar15 = (char *)FUN_1800e78e0(uVar13,"sha256");
                auStack_248 = auVar27._0_16_;
                local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar4[0xf] = 0;
                auVar4._0_15_ = local_258._1_15_;
                local_258 = auVar4 << 8;
                local_270 = uVar25 | 0x20;
                if (*pcVar15 != '\x03') {
                  local_2b8 = (char *)FUN_180112a50(pcVar15);
                  uVar13 = FUN_1800f6bd0(local_1e8,"type must be string, but is ",&local_2b8);
                  FUN_1800f6ca0(local_170,0x12e,uVar13);
                    /* WARNING: Subroutine does not return */
                  FUN_180606630(local_170,&DAT_1808d1050);
                }
                plVar17 = *(longlong **)(pcVar15 + 8);
                if ((longlong *)local_258 != plVar17) {
                  plVar16 = plVar17 + 2;
                  if (0xf < (ulonglong)plVar17[3]) {
                    plVar17 = (longlong *)*plVar17;
                  }
                  FUN_180113930(local_258,plVar17,*plVar16);
                }
                pcVar15 = (char *)FUN_1800e78e0(uVar13,"model");
                auStack_228 = auVar27._0_16_;
                local_238._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar5[0xf] = 0;
                auVar5._0_15_ = local_238._1_15_;
                local_238 = auVar5 << 8;
                local_270 = uVar25 | 0x90;
                if (*pcVar15 != '\x03') {
                  local_2b8 = (char *)FUN_180112a50(pcVar15);
                  uVar13 = FUN_1800f6bd0(local_1e8,"type must be string, but is ",&local_2b8);
                  FUN_1800f6ca0(local_138,0x12e,uVar13);
                    /* WARNING: Subroutine does not return */
                  FUN_180606630(local_138,&DAT_1808d1050);
                }
                plVar17 = *(longlong **)(pcVar15 + 8);
                if ((longlong *)local_238 != plVar17) {
                  plVar16 = plVar17 + 2;
                  if (0xf < (ulonglong)plVar17[3]) {
                    plVar17 = (longlong *)*plVar17;
                  }
                  FUN_180113930(local_238,plVar17,*plVar16);
                }
                uVar25 = uVar25 | 0x50;
                uVar13 = FUN_1800e78e0(uVar13,"bytes");
                local_2b8 = (char *)FUN_1800ea2a0(uVar13);
                auVar26 = auVar27._0_16_;
                local_218 = local_2b8;
                if (plVar19 != (longlong *)local_258) {
                  FUN_18015c010(plVar19);
                  *plVar19 = local_258._0_8_;
                  plVar19[1] = local_258._8_8_;
                  plVar19[2] = auStack_248._0_8_;
                  plVar19[3] = auStack_248._8_8_;
                  auVar26 = auVar27._0_16_;
                  auVar6[0xf] = 0;
                  auVar6._0_15_ = local_258._1_15_;
                  local_258 = auVar6 << 8;
                  auStack_248 = auVar26;
                }
                plVar17 = plVar19 + 4;
                if (plVar17 != (longlong *)local_238) {
                  auVar27 = ZEXT1664(auVar26);
                  FUN_18015c010(plVar17);
                  *plVar17 = local_238._0_8_;
                  plVar19[5] = local_238._8_8_;
                  plVar19[6] = auStack_228._0_8_;
                  plVar19[7] = auStack_228._8_8_;
                  auVar26 = auVar27._0_16_;
                  auVar7[0xf] = 0;
                  auVar7._0_15_ = local_238._1_15_;
                  local_238 = auVar7 << 8;
                  auStack_228 = auVar26;
                }
                plVar19[8] = (longlong)local_2b8;
                auVar27 = ZEXT1664(auVar26);
                FUN_18015c010(local_238);
                FUN_18015c010(local_258);
                if ((*(longlong *)local_298._0_8_ == 0) ||
                   (cVar9 = FUN_18017f370(plVar19), cVar9 == '\0')) {
                  *param_1 = (undefined1  [16])0x0;
                  *(undefined8 *)*param_1 = 0;
                  *(undefined8 *)(*param_1 + 8) = 0;
                  if (plVar23 == (longlong *)0x0) {
                  }
                  LOCK();
                  plVar19 = plVar23 + 1;
                  lVar14 = *plVar19;
                  *(int *)plVar19 = (int)*plVar19 + -1;
                  UNLOCK();
                  if ((int)lVar14 != 1) {
                  }
                  (**(code **)*plVar23)(plVar23);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar23 + 0xc);
                  iVar12 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar23 + 8))(plVar23);
                  }
                }
              }
            }
            pcVar15 = local_2b0;
          }
          iVar10 = (int)local_278 + 1;
          local_278 = (char *)CONCAT44(local_278._4_4_,iVar10);
        }
        if ((*pcVar15 == '\x01') &&
           (plVar19 = *(longlong **)(pcVar15 + 8),
           plVar17 = (longlong *)FUN_1800f9570(plVar19,local_298), *plVar17 != *plVar19)) {
          local_2a8[0] = (char *)CONCAT44(local_2a8[0]._4_4_,1);
          local_278 = (char *)((ulonglong)local_278 & 0xffffffff00000000);
          local_70 = (undefined1  [16])0x0;
          auStack_60 = (undefined1  [16])0x0;
          FUN_18015ba30(local_70,"custom_model_options",0x14);
          pcVar15 = (char *)FUN_180113610(local_2b0,local_70);
          FUN_18015c010(local_70);
          if (*pcVar15 != '\x01') {
            uVar13 = FUN_180112a50(pcVar15);
            local_298._0_8_ = uVar13;
            uVar13 = FUN_1800f6bd0(local_1e8,"cannot use value() with ",local_298);
            FUN_1800f6ca0(local_c8,0x132,uVar13);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_c8,&DAT_1808d1050);
          }
          local_70 = ZEXT816(0);
          auStack_60 = ZEXT816(0);
          FUN_1800e6b50(pcVar15,local_70,"cloth_motion");
          uVar13 = FUN_1800f3e20(pcVar15,local_1e8);
          cVar9 = FUN_1800e6ca0(local_70,uVar13);
          if (cVar9 == '\0') {
            uVar13 = FUN_1800f34a0(local_70);
            iVar12 = FUN_1800e62a0(uVar13);
          }
          local_2b0 = (char *)CONCAT44(local_2b0._4_4_,iVar12);
          ppcVar21 = &local_278;
          if (-1 < iVar12) {
            ppcVar21 = &local_2b0;
          }
          ppcVar18 = local_2a8;
          if (iVar12 < 2) {
            ppcVar18 = ppcVar21;
          }
          *(undefined4 *)(plVar23 + 0x2d) = *(undefined4 *)ppcVar18;
        }
        *(longlong **)*param_1 = plVar23 + 2;
        *(longlong **)(*param_1 + 8) = plVar23;
      }
    }
    else {
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(*param_1 + 8) = 0;
    }
  }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



