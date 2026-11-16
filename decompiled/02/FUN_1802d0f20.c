// FUN_1802d0f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d0f20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d0f20(undefined8 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                  undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  ULONGLONG UVar15;
  longlong lVar16;
  longlong lVar17;
  char *pcVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auStack_958 [32];
  undefined1 (*local_938) [16];
  undefined8 **local_930;
  undefined1 local_928;
  uint local_924 [3];
  undefined1 local_918 [16];
  undefined1 local_908;
  undefined1 local_907;
  undefined1 local_906;
  undefined1 local_905;
  undefined1 local_904;
  undefined1 local_903;
  undefined1 local_902;
  undefined1 local_901;
  undefined1 local_900;
  undefined1 local_8ff;
  undefined1 local_8fe;
  undefined1 local_8fd;
  undefined1 local_8fc;
  undefined1 local_8fb;
  undefined1 local_8fa;
  undefined1 local_8f9;
  undefined1 local_8f8;
  undefined1 local_8f7;
  undefined1 local_8f6;
  undefined1 local_8f5;
  undefined1 local_8f4;
  undefined1 local_8f3;
  undefined1 local_8f2;
  undefined1 local_8f1;
  undefined1 local_8f0;
  undefined1 local_8ef;
  undefined1 local_8ee;
  undefined1 local_8ed;
  undefined1 local_8ec;
  undefined1 local_8eb;
  undefined1 local_8ea;
  undefined1 local_8e9;
  uint local_8e8;
  undefined1 (*local_8d8) [16];
  ulonglong local_8d0;
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [16];
  undefined1 local_8a8 [8];
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  longlong local_888;
  undefined1 local_878 [16];
  undefined8 local_868;
  undefined8 uStack_860;
  undefined1 local_858 [16];
  undefined8 local_848;
  undefined8 uStack_840;
  undefined1 local_838 [16];
  undefined8 local_828;
  undefined8 uStack_820;
  undefined1 local_818 [16];
  undefined8 local_808;
  undefined8 uStack_800;
  undefined1 local_7f8 [16];
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [64];
  undefined1 local_798 [48];
  undefined8 local_768;
  undefined8 uStack_760;
  undefined1 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined4 local_740;
  undefined4 local_73c;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_728;
  undefined1 local_724 [16];
  undefined8 local_714;
  undefined4 local_70c;
  undefined2 local_708;
  undefined1 local_706;
  undefined1 local_704 [16];
  undefined4 local_6f4;
  undefined1 local_6f0;
  undefined4 local_6ec;
  undefined8 *local_6e8;
  undefined1 (*local_6e0) [16];
  uint local_6d8 [2];
  undefined1 (*local_6d0 [2]) [16];
  ulonglong local_6c0;
  ulonglong local_6b8;
  undefined1 (*local_6b0 [2]) [16];
  ulonglong local_6a0;
  ulonglong local_698;
  undefined1 local_690 [8];
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 *local_668;
  undefined1 local_660 [1528];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_958;
  local_6e0 = param_5;
  local_924[0] = 0;
  local_928 = param_3 == 2;
  local_918._0_8_ = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_918._0_8_ = *param_2;
  }
  local_918._8_8_ = param_2[2];
  local_8e8 = param_3;
  local_6e8 = param_2;
  local_6d8[0] = param_3;
  FUN_1802c8310(local_6b0,local_918);
  local_938 = (undefined1 (*) [16])local_6b0;
  if (0xf < local_698) {
    local_938 = local_6b0[0];
  }
  FUN_18063ab10(&local_668,0,0x600);
  lVar20 = -1;
  FUN_18015ad60(&local_668,0x600,0xffffffffffffffff,"message=\"%s\"");
  local_938 = (undefined1 (*) [16])&PTR_180700558;
  if ((char)local_668 != '\0') {
    local_938 = (undefined1 (*) [16])&DAT_1806bcfc0;
  }
  local_930 = &local_668;
  uVar19 = 1;
  FUN_1800f6900(1);
  if (local_6d8[0] == 0) {
LAB_1802d10e0:
    cVar10 = DAT_180b0be78;
  }
  else if (local_6d8[0] == 1) {
    cVar10 = DAT_180b0bfb8;
  }
  else if (local_6d8[0] == 2) {
    cVar10 = DAT_180b0c088;
  }
  else {
    if (local_6d8[0] == 3) goto LAB_1802d10e0;
    if (local_6d8[0] != 4) goto LAB_1802d1acb;
    cVar10 = DAT_180b0c020;
  }
  if (cVar10 != '\0') {
    if (param_3 == 2) {
      pcVar18 = "Miss";
    }
    else if (local_6d8[0] == 4) {
      pcVar18 = "Buy";
    }
    else if (local_6d8[0] == 1) {
      pcVar18 = "Hurt";
    }
    else {
      pcVar18 = "Hit";
      if (local_6d8[0] == 3) {
        pcVar18 = "Mismatch";
      }
    }
    local_918._0_8_ = local_6d8;
    local_8d8 = (undefined1 (*) [16])local_6b0;
    if (0xf < local_698) {
      local_8d8 = local_6b0[0];
    }
    local_8d0 = local_6a0;
    FUN_1802d1b70(local_918,local_6d0,&local_8d8);
    uVar9 = local_6c0;
    local_908 = DAT_180b0b320;
    local_907 = DAT_180b0b321;
    local_906 = DAT_180b0b322;
    local_905 = 0xff;
    local_904 = DAT_180b0b324;
    local_903 = DAT_180b0b325;
    local_902 = DAT_180b0b326;
    local_901 = 0xff;
    local_900 = DAT_180b0b328;
    local_8ff = DAT_180b0b329;
    local_8fe = DAT_180b0b32a;
    local_8fd = 0xff;
    local_8fc = (undefined1)DAT_180b0b32c;
    local_8fb = DAT_180b0b32c._1_1_;
    local_8fa = DAT_180b0b32c._2_1_;
    local_8f9 = 0xff;
    local_8f8 = (undefined1)DAT_180b0b330;
    local_8f7 = DAT_180b0b330._1_1_;
    local_8f6 = DAT_180b0b330._2_1_;
    local_8f5 = 0xff;
    local_8f4 = DAT_180b0b330._4_1_;
    local_8f3 = DAT_180b0b330._5_1_;
    local_8f2 = DAT_180b0b330._6_1_;
    local_8f1 = 0xff;
    local_8f0 = (undefined1)DAT_180b0b338;
    local_8ef = DAT_180b0b338._1_1_;
    local_8ee = DAT_180b0b338._2_1_;
    local_8ed = 0xff;
    local_8ec = (undefined1)DAT_180b0b3bc;
    local_8eb = DAT_180b0b3bc._1_1_;
    local_8ea = DAT_180b0b3bc._2_1_;
    local_8e9 = 0xff;
    if (DAT_180b0bee8 != '\0') {
      if (*(longlong *)param_5[1] == 0) {
        local_8c8 = (undefined1  [16])0x0;
        local_8b8 = (undefined1  [16])0x0;
        pauVar14 = (undefined1 (*) [16])local_6d0;
        if (0xf < local_6b8) {
          pauVar14 = local_6d0[0];
        }
        local_918._0_8_ = pauVar14;
        if (0x7fffffffffffffff < local_6c0) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (local_6c0 < 0x10) {
          local_8b8._8_8_ = 0xf;
          local_8b8._0_8_ = local_6c0;
          local_8c8 = *pauVar14;
        }
        else {
          uVar12 = local_6c0 | 0xf;
          uVar21 = 0x7fffffffffffffff;
          if ((uVar12 < 0x8000000000000000) && (uVar21 = uVar12, uVar12 < 0x16)) {
            uVar21 = 0x16;
          }
          uVar13 = FUN_18015bca0(uVar21 + 1);
          local_8c8._0_8_ = uVar13;
          local_8b8._8_8_ = uVar21;
          local_8b8._0_8_ = uVar9;
          FUN_18063aed0(uVar13,local_918._0_8_,uVar9 + 1);
        }
        pauVar14 = &local_8c8;
        param_3 = local_8e8;
      }
      else {
        local_8d8 = param_5;
        if (0xf < *(ulonglong *)(param_5[1] + 8)) {
          local_8d8 = *(undefined1 (**) [16])*param_5;
        }
        local_8d0 = *(longlong *)param_5[1];
        pauVar14 = (undefined1 (*) [16])FUN_1802c8310(local_8a8,&local_8d8);
        local_924[0] = 2;
        local_8d8 = pauVar14;
        if (0xf < *(ulonglong *)(pauVar14[1] + 8)) {
          local_8d8 = *(undefined1 (**) [16])*pauVar14;
        }
        local_8d0 = *(ulonglong *)pauVar14[1];
        pauVar14 = (undefined1 (*) [16])FUN_1802d1b70(local_918,local_690,&local_8d8);
        uVar19 = 6;
      }
      local_8d8 = pauVar14;
      if (0xf < *(ulonglong *)(pauVar14[1] + 8)) {
        local_8d8 = *(undefined1 (**) [16])*pauVar14;
      }
      local_8d0 = *(ulonglong *)pauVar14[1];
      local_918._8_8_ = -1;
      do {
        local_918._8_8_ = local_918._8_8_ + 1;
      } while (pcVar18[local_918._8_8_] != '\0');
      local_918._0_8_ = pcVar18;
      local_924[0] = uVar19;
      FUN_18044f7c0(local_918,&local_8d8,&local_908);
      if ((uVar19 & 4) != 0) {
        uVar19 = uVar19 & 0xfffffffb;
        FUN_18015c010(local_690);
      }
      if ((uVar19 & 2) != 0) {
        uVar19 = uVar19 & 0xfffffffd;
        FUN_18015c010(local_8a8);
      }
      if ((uVar19 & 1) != 0) {
        FUN_18015c010(local_8c8);
      }
    }
    if (DAT_180b0bf50 != '\0') {
      local_8d8 = (undefined1 (*) [16])local_6d0;
      if (0xf < local_6b8) {
        local_8d8 = local_6d0[0];
      }
      local_918._8_8_ = -1;
      do {
        local_918._8_8_ = local_918._8_8_ + 1;
      } while (pcVar18[local_918._8_8_] != '\0');
      local_8d0 = local_6c0;
      local_918._0_8_ = pcVar18;
      FUN_18044fd40(local_690,local_918,&local_8d8,&local_908);
      local_918._0_8_ = &DAT_1808e4ee0;
      iVar11 = FUN_1805f68d0(&DAT_1808e4ee0);
      if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e4f2c == 0x7fffffff) {
        DAT_1808e4f2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (0xf < DAT_180bbb188) {
        FUN_18015c010(*(undefined8 *)(DAT_180bbb170 + (DAT_180bbb178 - 1U & DAT_180bbb180) * 8));
        if (DAT_180bbb188 == 1) {
          DAT_180bbb180 = 0;
          DAT_180bbb188 = DAT_180bbb188 - 1;
        }
        else {
          DAT_180bbb180 = DAT_180bbb180 + 1;
          DAT_180bbb188 = DAT_180bbb188 - 1;
        }
      }
      uStack_8a0 = uStack_688;
      uStack_898 = uStack_680;
      uStack_890 = uStack_678;
      uStack_680 = 0;
      uStack_678 = 0xf;
      local_690[0] = 0;
      UVar15 = GetTickCount64();
      local_888 = UVar15 + 2000;
      FUN_1804505f0(extraout_XMM0_Qa,local_8a8);
      FUN_18015c010(local_8a8);
      FUN_1805f68fc(&DAT_1808e4ee0);
      FUN_18015c010(local_690);
    }
    lVar17 = DAT_180bb8958;
    if (DAT_180b0b340 != '\0') {
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      if (lVar17 == 0) {
        bVar3 = false;
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_918._8_8_;
        local_918 = auVar1 << 0x40;
        cVar10 = FUN_1804514f0(local_918,lVar17,8);
        if (cVar10 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      uVar13 = local_918._0_8_;
      lVar17 = FUN_18017ea70();
      if (*(int *)(lVar17 + 4) != 0) {
        *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
      }
      if ((bVar3) && (uVar13 != 0)) {
        local_868 = 0;
        uStack_860 = 0xf;
        local_878._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar4[0xf] = 0;
        auVar4._0_15_ = local_878._1_15_;
        local_878 = auVar4 << 8;
        local_848 = 0;
        uStack_840 = 0xf;
        local_858._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar5[0xf] = 0;
        auVar5._0_15_ = local_858._1_15_;
        local_858 = auVar5 << 8;
        local_828 = 0;
        uStack_820 = 0xf;
        local_838._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar6[0xf] = 0;
        auVar6._0_15_ = local_838._1_15_;
        local_838 = auVar6 << 8;
        local_808 = 0;
        uStack_800 = 0xf;
        local_818._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar7[0xf] = 0;
        auVar7._0_15_ = local_818._1_15_;
        local_818 = auVar7 << 8;
        local_7f8 = (undefined1  [16])0x0;
        local_7e8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_7f8,&DAT_1808005e8,3);
        FUN_1800e9bc0(local_7d8,2);
        FUN_1802e29c0(local_798);
        local_768 = 0xbf800000bf800000;
        uStack_760 = 0x41f0000000000000;
        local_758 = 0;
        local_750 = 0;
        local_748 = 0;
        auVar2._12_4_ = 0;
        auVar2._0_12_ = ZEXT812(0);
        local_724 = auVar2 << 0x20;
        auVar23 = ZEXT1264(ZEXT812(0)) << 0x20;
        local_740 = 0;
        local_73c = 0;
        local_738 = 0;
        uStack_730 = 0x4348000000000000;
        local_728 = 0x41a00000;
        local_714 = 0x10000000000;
        local_70c = 0;
        local_708 = 0;
        local_706 = 0;
        local_704._0_12_ = ZEXT812(0);
        local_704._12_4_ = 0x43480000;
        local_6f4 = 0x41a00000;
        local_6f0 = 0;
        local_6ec = 0;
        pauVar14 = (undefined1 (*) [16])local_6d0;
        if (0xf < local_6b8) {
          pauVar14 = local_6d0[0];
        }
        FUN_180113930(local_818,pauVar14,local_6c0);
        lVar17 = FUN_18017ea70();
        *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
        lVar17 = uVar13 + 0x30;
        if (lVar17 == 0) {
          auVar24 = ZEXT464(local_8e8);
          uVar19 = 0;
        }
        else {
          local_924[0] = auVar23._0_4_;
          cVar10 = FUN_1804514f0(local_924,lVar17,4);
          if (cVar10 == '\0') {
            uVar19 = 0;
            auVar24 = ZEXT464(local_8e8);
          }
          else {
            auVar24 = ZEXT464(local_924[0]);
            uVar19 = 1;
          }
        }
        lVar17 = FUN_18017ea70();
        if (*(int *)(lVar17 + 4) != 0) {
          *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
        }
        auVar1 = vpcmpeqd_avx(ZEXT416(uVar19),SUB6416(ZEXT464(0),0));
        auVar1 = vblendvps_avx(auVar24._0_16_,auVar23._0_16_,auVar1);
        local_740 = auVar1._0_4_;
        auVar1 = vpcmpeqd_avx(ZEXT416(param_3),SUB6416(ZEXT464(2),0));
        auVar1 = vblendvps_avx(ZEXT416(DAT_180b0bee0),ZEXT416(DAT_180b0c0f0),auVar1);
        local_73c = auVar1._0_4_;
        local_6f0 = local_928;
        do {
          lVar20 = lVar20 + 1;
        } while (pcVar18[lVar20] != '\0');
        FUN_180113930(local_7f8,pcVar18,lVar20);
        local_728 = 0x41800000;
        uVar22 = auVar23._0_4_;
        local_738 = CONCAT44(uVar22,0xc3160000);
        uStack_730 = CONCAT44(0x43340000,uVar22);
        uVar8 = local_724._8_4_;
        local_724._4_4_ = 0x3f800000;
        local_724._0_4_ = uVar8;
        local_724._12_4_ = 0x3e19999a;
        local_714._0_6_ = CONCAT24(2,uVar22);
        local_70c = 0x3f800000;
        local_918 = ZEXT816(0x180cc9b08);
        iVar11 = FUN_1805f68d0(&DAT_180cc9b08);
        lVar20 = DAT_180cc99e0;
        lVar17 = DAT_180cc99d8;
        if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180cc9b54 == 0x7fffffff) {
          DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_918[8] = 1;
        if (DAT_180cc99e0 == DAT_180cc99e8) {
          FUN_1802ea800(&DAT_180cc99d8,DAT_180cc99d8,local_878);
        }
        else if (DAT_180cc99d8 == DAT_180cc99e0) {
          FUN_1802ec470(DAT_180cc99e0,local_878);
          DAT_180cc99e0 = DAT_180cc99e0 + 400;
        }
        else {
          local_668 = &DAT_180cc99d8;
          FUN_1802ec470(local_660,local_878);
          lVar16 = lVar20 + -400;
          FUN_1802ec470(lVar20,lVar16);
          DAT_180cc99e0 = DAT_180cc99e0 + 400;
          while (lVar16 != lVar17) {
            lVar16 = lVar16 + -400;
            lVar20 = lVar20 + -400;
            FUN_1802e8910(lVar20,lVar16);
          }
          FUN_1802e8910(lVar17,local_660);
          FUN_1801bc3d0(local_660);
        }
        lVar20 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(DAT_180cc99e0 - DAT_180cc99d8),8) +
                 (DAT_180cc99e0 - DAT_180cc99d8);
        if (8 < (ulonglong)((lVar20 >> 8) - (lVar20 >> 0x3f))) {
          FUN_1801bc3d0(DAT_180cc99e0 + -400);
          DAT_180cc99e0 = DAT_180cc99e0 + -400;
        }
        FUN_1805f68fc(&DAT_180cc9b08);
        _eh_vector_destructor_iterator_(local_798,0x18,2,thunk_FUN_1801b3620);
        _eh_vector_destructor_iterator_(local_7d8,0x20,2,thunk_FUN_18015c010);
        FUN_18015c010(local_7f8);
        FUN_18015c010(local_818);
        FUN_18015c010(local_838);
        FUN_18015c010(local_858);
        FUN_18015c010(local_878);
      }
    }
    FUN_18015c010(local_6d0);
  }
LAB_1802d1acb:
  FUN_18015c010(local_6b0);
  FUN_18015c010(param_2);
  FUN_18015c010(param_5);
}



