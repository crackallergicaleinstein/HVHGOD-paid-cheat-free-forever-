// FUN_18017e100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017e100 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18017e100(undefined8 *param_1,char *param_2,int param_3,undefined8 *param_4,
                  ulonglong param_5,char param_6,undefined8 param_7,longlong param_8,
                  longlong param_9)

{
  longlong *plVar1;
  size_t *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined1 auVar12 [16];
  byte *pbVar13;
  undefined8 *puVar14;
  char cVar15;
  int iVar16;
  undefined8 uVar17;
  char *pcVar18;
  longlong lVar19;
  int *piVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 **ppuVar23;
  byte *pbVar24;
  undefined8 *_Buf1;
  ulonglong uVar25;
  undefined8 *******_Buf2;
  undefined1 **ppuVar26;
  longlong *plVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  undefined1 auStack_318 [32];
  undefined1 *local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [16];
  size_t local_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [16];
  size_t local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 local_288 [56];
  undefined1 local_250 [56];
  undefined1 local_218 [64];
  char local_1d8 [256];
  undefined1 *local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *******local_68;
  undefined8 uStack_60;
  size_t sStack_58;
  ulonglong uStack_50;
  undefined1 local_48 [20];
  char local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_318;
  uVar31 = 0;
  local_2f0 = (undefined1 *)((ulonglong)local_2f0 & 0xffffffff00000000);
  if (*param_2 == '\x01') {
    uVar17 = FUN_1800e78e0(param_2,"processId");
    iVar16 = FUN_1800e9850(uVar17);
    if (iVar16 == param_3) {
      pcVar18 = (char *)FUN_1800e78e0(param_2,"requestId");
      local_2b8 = 0;
      uStack_2b0 = 0xf;
      local_2c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_2c8._1_15_;
      local_2c8 = auVar9 << 8;
      local_2f0._0_4_ = 0x40;
      if (*pcVar18 != '\x03') {
        local_2f8 = (undefined1 *)FUN_180112a50(pcVar18);
        uVar17 = FUN_1800f6bd0(&local_2a8,"type must be string, but is ",&local_2f8);
        FUN_1800f6ca0(local_288,0x12e,uVar17);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_288,&DAT_1808d1050);
      }
      plVar27 = *(longlong **)(pcVar18 + 8);
      if ((longlong *)local_2c8 != plVar27) {
        plVar1 = plVar27 + 2;
        if (0xf < (ulonglong)plVar27[3]) {
          plVar27 = (longlong *)*plVar27;
        }
        FUN_180113930(local_2c8,plVar27,*plVar1);
      }
      uVar31 = 0x21;
      local_2f0 = (undefined1 *)CONCAT44(local_2f0._4_4_,0x21);
      psVar2 = param_4 + 2;
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      puVar22 = local_2c8;
      if (0xf < uStack_2b0) {
        puVar22 = (undefined1 *)local_2c8._0_8_;
      }
      if ((local_2b8 == *psVar2) &&
         ((local_2b8 == 0 || (iVar16 = memcmp(puVar22,param_4,local_2b8), iVar16 == 0)))) {
        pcVar18 = local_34 + 1;
        do {
          pcVar18 = pcVar18 + -1;
          uVar25 = param_5 / 10;
          *pcVar18 = (char)param_5 + (char)uVar25 * -10 + '0';
          param_5 = uVar25;
        } while (uVar25 != 0);
        FUN_18015bdb0(&local_68,pcVar18,local_34 + 1);
        local_2f0._0_4_ = 0x623;
        pcVar18 = (char *)FUN_1800e78e0(param_2,"steamId");
        local_2d8 = 0;
        uStack_2d0 = 0xf;
        local_2e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar10[0xf] = 0;
        auVar10._0_15_ = local_2e8._1_15_;
        local_2e8 = auVar10 << 8;
        local_2f0._0_4_ = 0x723;
        if (*pcVar18 != '\x03') {
          local_2f8 = (undefined1 *)FUN_180112a50(pcVar18);
          uVar17 = FUN_1800f6bd0(&local_2a8,"type must be string, but is ",&local_2f8);
          FUN_1800f6ca0(local_250,0x12e,uVar17);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_250,&DAT_1808d1050);
        }
        plVar27 = *(longlong **)(pcVar18 + 8);
        if ((longlong *)local_2e8 != plVar27) {
          plVar1 = plVar27 + 2;
          if (0xf < (ulonglong)plVar27[3]) {
            plVar27 = (longlong *)*plVar27;
          }
          FUN_180113930(local_2e8,plVar27,*plVar1);
        }
        uVar31 = 0x6a7;
        local_2f0 = (undefined1 *)CONCAT44(local_2f0._4_4_,0x6a7);
        _Buf2 = &local_68;
        if (0xf < uStack_50) {
          _Buf2 = local_68;
        }
        puVar22 = local_2e8;
        if (0xf < uStack_2d0) {
          puVar22 = (undefined1 *)local_2e8._0_8_;
        }
        if ((local_2d8 == sStack_58) &&
           ((local_2d8 == 0 || (iVar16 = memcmp(puVar22,_Buf2,local_2d8), iVar16 == 0)))) {
          pcVar18 = (char *)FUN_1800e78e0(param_2,"enabled");
          if (*pcVar18 != '\x04') {
            local_2f8 = (undefined1 *)FUN_180112a50();
            uVar17 = FUN_180156f00(&local_2a8);
            FUN_1800f6ca0(local_218,0x12e,uVar17);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_218,&DAT_1808d1050);
          }
          if ((pcVar18[8] == param_6) &&
             (pcVar18 = (char *)FUN_1800e78e0(param_2,"peers"), *pcVar18 == '\x02')) {
            uVar17 = FUN_1800e78e0(param_2,"peers");
            uVar25 = FUN_1800f3d40(uVar17);
            if (uVar25 < 0x81) {
              bVar11 = false;
              goto LAB_18017e3a4;
            }
          }
        }
      }
    }
  }
  bVar11 = true;
LAB_18017e3a4:
  if ((uVar31 & 4) != 0) {
    uVar31 = uVar31 & 0xfffffffb;
    FUN_18015c010(local_2e8);
  }
  if ((uVar31 & 2) != 0) {
    uVar31 = uVar31 & 0xfffffffd;
    FUN_18015c010(&local_68);
  }
  if ((uVar31 & 1) != 0) {
    uVar31 = uVar31 & 0xfffffffe;
    FUN_18015c010(local_2c8);
  }
  if (!bVar11) {
    local_d8 = (undefined1 *)0x3a98;
    local_2f8 = (undefined1 *)0x0;
    uVar17 = FUN_1801a52c0(param_2);
    lVar19 = FUN_1800e6630(uVar17);
    local_2f0 = (undefined1 *)(lVar19 - param_9);
    ppuVar26 = &local_2f8;
    if (-1 < (longlong)local_2f0) {
      ppuVar26 = (undefined1 **)&local_2f0;
    }
    ppuVar23 = &local_d8;
    if ((longlong)local_2f0 < 0x3a99) {
      ppuVar23 = ppuVar26;
    }
    puVar22 = *ppuVar23;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_1801abd10(&local_a8);
    if (puVar22 != (undefined1 *)0x0) {
      uVar17 = FUN_1800e78e0(param_2,"peers");
      local_68 = (undefined8 *******)0x0;
      uStack_60 = 0;
      sStack_58 = 0;
      uStack_50 = 0;
      FUN_1800f3f60(uVar17,&local_68);
      local_2a8 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      FUN_1800f3e20(uVar17,&local_2a8);
      while (cVar15 = FUN_1800e6ca0(&local_68,&local_2a8), cVar15 == '\0') {
        pcVar18 = (char *)FUN_1800f3560(&local_68);
        if (*pcVar18 != '\x03') {
          FUN_18017e9a0(&local_a8);
        }
        local_c0 = 0;
        local_b8 = 0xf;
        local_d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar12[0xf] = 0;
        auVar12._0_15_ = local_d0._1_15_;
        local_d0 = auVar12 << 8;
        local_2f0 = (undefined1 *)(CONCAT44(local_2f0._4_4_,uVar31) | 0x10);
        plVar27 = *(longlong **)(pcVar18 + 8);
        if ((longlong *)local_d0 != plVar27) {
          plVar1 = plVar27 + 2;
          if (0xf < (ulonglong)plVar27[3]) {
            plVar27 = (longlong *)*plVar27;
          }
          FUN_180113930(local_d0,plVar27,*plVar1);
        }
        uVar25 = local_b8;
        uVar31 = uVar31 | 8;
        if (local_c0 != 0x11) {
LAB_18017e742:
          FUN_18015c010(local_d0);
          FUN_18017e9a0(&local_a8);
        }
        uVar17 = local_d0._0_8_;
        pbVar28 = local_d0;
        if (0xf < local_b8) {
          pbVar28 = (byte *)local_d0._0_8_;
        }
        iVar16 = *(int *)pbVar28 + -0x36353637;
        if ((iVar16 == 0) && (iVar16 = *(ushort *)(pbVar28 + 4) - 0x3131, iVar16 == 0)) {
          iVar16 = pbVar28[6] - 0x39;
        }
        if (iVar16 != 0) goto LAB_18017e742;
        pbVar28 = local_d0;
        if (0xf < local_b8) {
          pbVar28 = (byte *)local_d0._0_8_;
        }
        FUN_18063ab10(local_1d8,0,0x100);
        puVar14 = DAT_180bbe8f8;
        pbVar24 = &DAT_1807bfef8;
        do {
          local_1d8[*pbVar24] = '\x01';
          pbVar24 = pbVar24 + 1;
          pbVar13 = pbVar28;
        } while (pbVar24 != &DAT_1807bff02);
        for (; pbVar13 < pbVar28 + 0x11; pbVar13 = pbVar13 + 1) {
          if (local_1d8[*pbVar13] == '\0') {
            if ((longlong)pbVar13 - (longlong)pbVar28 != -1) goto LAB_18017e742;
            break;
          }
        }
        puVar29 = DAT_180bbe8f0;
        if (DAT_180bbe8f0 != DAT_180bbe8f8) {
          do {
            pbVar28 = local_d0;
            if (0xf < uVar25) {
              pbVar28 = (byte *)uVar17;
            }
            _Buf1 = puVar29;
            if (0xf < (ulonglong)puVar29[3]) {
              _Buf1 = (undefined8 *)*puVar29;
            }
          } while (((puVar29[2] != 0x11) || (iVar16 = memcmp(_Buf1,pbVar28,0x11), iVar16 != 0)) &&
                  (puVar29 = puVar29 + 4, puVar29 != puVar14));
          if (puVar29 != puVar14) {
            piVar20 = (int *)FUN_18060fe00();
            puVar30 = local_d0;
            if (0xf < local_b8) {
              puVar30 = (undefined1 *)local_d0._0_8_;
            }
            *piVar20 = 0;
            puVar21 = (undefined1 *)FUN_18060fb58(puVar30,&local_d8,10);
            if (puVar30 == local_d8) {
              FUN_1805fa894("invalid stoull argument");
LAB_18017e97a:
                    /* WARNING: Subroutine does not return */
              FUN_1805fa8dc("stoull argument out of range");
            }
            if (*piVar20 == 0x22) goto LAB_18017e97a;
            local_2f8 = puVar21;
            FUN_1801b1240(&local_a8,local_48,&local_2f8);
          }
        }
        FUN_18015c010(local_d0);
        FUN_1800f33e0(&local_68);
      }
    }
    if (param_1 != &local_a8) {
      FUN_1801acd50(param_1);
      *(undefined4 *)param_1 = (undefined4)local_a8;
      uVar17 = param_1[1];
      param_1[1] = uStack_a0;
      uVar3 = param_1[2];
      param_1[2] = uStack_98;
      uVar4 = param_1[3];
      param_1[3] = uStack_90;
      uVar5 = param_1[4];
      param_1[4] = local_88;
      uVar6 = param_1[5];
      param_1[5] = uStack_80;
      uVar7 = param_1[6];
      param_1[6] = uStack_78;
      uVar8 = param_1[7];
      param_1[7] = uStack_70;
      uStack_a0 = uVar17;
      uStack_98 = uVar3;
      uStack_90 = uVar4;
      local_88 = uVar5;
      uStack_80 = uVar6;
      uStack_78 = uVar7;
      uStack_70 = uVar8;
    }
    param_1[8] = puVar22 + param_8;
    FUN_18017e9a0(&local_a8);
  }
}



