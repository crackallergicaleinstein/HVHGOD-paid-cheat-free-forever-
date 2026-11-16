// FUN_18021f400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021f400 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021f400(void)

{
  ushort *puVar1;
  byte *pbVar2;
  short sVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  uint *puVar9;
  char cVar10;
  ushort uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  ushort *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  undefined4 *puVar21;
  ushort *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  uint *puVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  short *psVar30;
  ushort uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auStack_a18 [32];
  undefined **local_9f8;
  longlong *local_9f0;
  undefined8 local_9e8;
  char local_9e0;
  undefined4 *local_9d8 [2];
  ushort local_9c8 [4];
  undefined4 local_9c0;
  undefined4 local_9bc;
  undefined4 local_9b8;
  undefined1 local_9b4;
  undefined4 local_9b0;
  undefined1 local_9a8 [16];
  undefined1 local_998 [16];
  undefined1 local_988;
  undefined8 local_984;
  undefined4 local_97c;
  longlong local_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined1 local_958 [16];
  undefined8 uStack_948;
  longlong lStack_940;
  undefined1 local_938 [16];
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  longlong lStack_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined4 local_8f0;
  undefined8 local_8ec;
  uint local_8e4;
  uint local_8e0;
  uint local_8dc;
  undefined1 local_8d8;
  undefined4 local_8d4;
  uint local_8d0;
  uint local_8cc;
  undefined8 local_8c8;
  undefined2 local_8c0;
  undefined1 local_8be;
  undefined4 *local_8b8;
  ULONGLONG local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined4 local_868;
  undefined1 local_864 [12];
  undefined1 local_858 [16];
  ushort *local_848;
  undefined8 *local_838;
  undefined1 *puStack_830;
  short local_828 [4];
  ulonglong local_820 [7];
  undefined1 local_7e8 [64];
  short local_7a8 [4];
  undefined1 local_7a0 [24];
  undefined1 local_788 [216];
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined1 local_6a0;
  undefined1 local_69f;
  undefined1 local_69e;
  char local_698;
  longlong local_688;
  longlong local_680;
  undefined2 local_678;
  undefined1 local_670 [8];
  undefined1 local_668 [16];
  undefined1 local_658 [200];
  uint local_590;
  undefined4 local_58c;
  undefined8 local_588;
  undefined4 local_580;
  undefined4 local_57c;
  undefined1 local_578;
  undefined1 local_577;
  longlong local_570;
  undefined1 local_568;
  char local_560;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_a18;
  if (DAT_180cca116 != '\0') {
    FUN_180223720();
    LOCK();
    UNLOCK();
    DAT_180cca117 = 1;
  }
  local_8b0 = GetTickCount64();
  if (local_8b0 < DAT_180cca118) {
  }
  DAT_180cca118 = local_8b0 + 100;
  local_8b8 = (undefined4 *)&DAT_180cc9e50;
  cVar10 = FUN_180219d30();
  lVar13 = DAT_180cca0d0;
  if (cVar10 == '\0') {
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  iVar34 = 0;
  if (lVar13 + 0x528d0 == 0) {
    bVar36 = false;
    puVar19 = local_9d8[0];
  }
  else {
    local_9e8 = (undefined4 *)0x0;
    cVar10 = FUN_1804514f0(&local_9e8,lVar13 + 0x528d0,8);
    if (cVar10 == '\0') {
      bVar36 = false;
      puVar19 = local_9d8[0];
    }
    else {
      bVar36 = true;
      puVar19 = local_9e8;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if (((!bVar36) || (puVar19 == (undefined4 *)0x0)) ||
     ((DAT_180cca0d8 != (undefined4 *)0x0 && (puVar19 != DAT_180cca0d8)))) goto LAB_180221872;
  DAT_180cca0d8 = puVar19;
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (puVar19 + 0x1a == (undefined4 *)0x0) {
    bVar36 = false;
    puVar19 = local_9d8[0];
  }
  else {
    local_9e8 = (undefined4 *)0x0;
    cVar10 = FUN_1804514f0(&local_9e8,puVar19 + 0x1a,8);
    if (cVar10 == '\0') {
      bVar36 = false;
      puVar19 = local_9d8[0];
    }
    else {
      bVar36 = true;
      puVar19 = local_9e8;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if (bVar36) {
    puVar27 = puVar19 + 4;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (puVar27 != (undefined4 *)0x0) goto LAB_18021f5c3;
    bVar36 = false;
  }
  else {
    puVar19 = (undefined4 *)0x0;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    puVar27 = (undefined4 *)0x10;
LAB_18021f5c3:
    local_9e8 = (undefined4 *)((ulonglong)local_9e8 & 0xffffffff00000000);
    cVar10 = FUN_1804514f0(&local_9e8,puVar27,4);
    if (cVar10 == '\0') {
      bVar36 = false;
    }
    else {
      bVar36 = true;
    }
  }
  uVar25 = (uint)local_9e8;
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  uVar32 = 0xffffffff;
  if (bVar36) {
    uVar32 = uVar25;
  }
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (puVar19 + 6 == (undefined4 *)0x0) {
    bVar36 = false;
    puVar19 = local_9d8[0];
  }
  else {
    local_9e8 = (undefined4 *)0x0;
    cVar10 = FUN_1804514f0(&local_9e8,puVar19 + 6,8);
    if (cVar10 == '\0') {
      bVar36 = false;
      puVar19 = local_9d8[0];
    }
    else {
      bVar36 = true;
      puVar19 = local_9e8;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  local_9d8[0] = (undefined4 *)0x0;
  if (bVar36) {
    local_9d8[0] = puVar19;
  }
  if ((uVar32 < 0x101) &&
     (((uVar32 == 0 || (local_9d8[0] != (undefined4 *)0x0)) && (0 < (int)uVar32)))) {
    iVar35 = 0;
    puVar19 = local_8b8;
    iVar33 = (uint)local_9e8;
LAB_18021f6a0:
    puVar27 = (undefined4 *)0x0;
    puVar20 = (undefined *)((longlong)local_9d8[0] + (longlong)iVar35);
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    bVar36 = false;
    if (puVar20 != (undefined *)0x0) {
      local_9e8 = (undefined4 *)0x0;
      cVar10 = FUN_1804514f0(&local_9e8,puVar20,8);
      if (cVar10 == '\0') {
        bVar36 = false;
      }
      else {
        bVar36 = true;
        puVar19 = local_9e8;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if (bVar36) {
      puVar21 = puVar19 + 0x1e;
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      puVar27 = puVar19;
      if (puVar21 != (undefined4 *)0x0) goto LAB_18021f712;
      bVar36 = false;
    }
    else {
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      puVar21 = (undefined4 *)0x78;
LAB_18021f712:
      local_9e8 = (undefined4 *)((ulonglong)local_9e8 & 0xffffffff00000000);
      cVar10 = FUN_1804514f0(&local_9e8,puVar21,4);
      if (cVar10 == '\0') {
        bVar36 = false;
      }
      else {
        bVar36 = true;
        iVar33 = (uint)local_9e8;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if ((!bVar36) || (iVar33 != 1)) {
      iVar34 = iVar34 + 1;
      iVar35 = iVar35 + 8;
      if ((int)uVar32 <= iVar34) goto LAB_180221872;
      goto LAB_18021f6a0;
    }
    if ((puVar27 == (undefined4 *)0x0) ||
       ((DAT_180cca0e0 != (undefined4 *)0x0 && (DAT_180cca0e0 != puVar27)))) goto LAB_180221872;
    local_8a8 = 0x5500000040;
    uStack_8a0 = 0x8300000048;
    uStack_898 = 0x30000000ec;
    uStack_890 = 0x6300000049;
    local_888 = CONCAT44(local_888._4_4_,0xe8);
    uVar14 = FUN_1802196a0(DAT_180cca0d8,8);
    local_838 = &local_8a8;
    puStack_830 = (undefined1 *)((longlong)&local_888 + 4);
    cVar10 = FUN_1802197b0(uVar14,&local_838);
    if (cVar10 == '\0') goto LAB_180221872;
    local_8a8 = 0x5500000040;
    uStack_8a0 = 0x4100000057;
    uStack_898 = 0x4100000054;
    uStack_890 = 0x4100000056;
    local_888 = 0x4800000057;
    uStack_880 = 0xec00000083;
    uStack_878 = 0x4c00000030;
    uStack_870 = 0x6100000063;
    local_868 = 8;
    uVar14 = FUN_1802196a0(puVar27,1);
    local_838 = &local_8a8;
    puStack_830 = local_864;
    cVar10 = FUN_1802197b0(uVar14,&local_838);
    puVar19 = DAT_180cca0d8;
    if (cVar10 == '\0') goto LAB_180221872;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (puVar19 + 4 == (undefined4 *)0x0) {
      iVar34 = (int)local_9d8[0];
      bVar36 = false;
    }
    else {
      local_9e8 = (undefined4 *)0x0;
      cVar10 = FUN_1804514f0(&local_9e8,puVar19 + 4,8);
      if (cVar10 == '\0') {
        bVar36 = false;
        iVar34 = (int)local_9d8[0];
      }
      else {
        iVar34 = (int)local_9e8;
        bVar36 = true;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    iVar33 = 0;
    if (bVar36) {
      iVar33 = iVar34;
    }
    if ((iVar33 == 0) || ((DAT_180cca110 != 0 && (iVar33 != DAT_180cca110)))) goto LAB_180221872;
    local_858 = (undefined1  [16])0x0;
    local_848 = (ushort *)0x0;
    DAT_180cca0e0 = puVar27;
    DAT_180cca110 = iVar33;
    iVar34 = FUN_1805f68d0(&DAT_180cc9e50);
    puVar15 = local_848;
    puVar22 = DAT_180cc9ea0;
    if (iVar34 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180cc9e9c == 0x7fffffff) {
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    uVar14 = local_858._8_8_;
    DAT_180cc9ea0 = (ushort *)local_858._0_8_;
    local_858._0_8_ = puVar22;
    local_858._8_8_ = DAT_180cc9ea8;
    DAT_180cc9ea8 = (ushort *)uVar14;
    local_848 = DAT_180cc9eb0;
    DAT_180cc9eb0 = puVar15;
    FUN_1805f68fc(&DAT_180cc9e50);
    local_838 = DAT_180cc8070;
    puStack_830 = (undefined1 *)DAT_180cc8148;
    iVar34 = memcmp(&local_838,&DAT_180cca0c0,0x10);
    local_9e0 = iVar34 == 0;
    if (!(bool)local_9e0) {
      FUN_18063ab10(&local_688,0,0x600);
      local_9f8 = (undefined **)((longlong)(local_858._8_8_ - local_858._0_8_) / 0x110);
      FUN_18015ad60(&local_688,0x600,0xffffffffffffffff,
                    "discarded_requests=%zu selection_source=current_config");
      local_9f8 = &PTR_180700558;
      if ((char)local_688 != '\0') {
        local_9f8 = (undefined **)&DAT_1806bcfc0;
      }
      local_9f0 = &local_688;
      FUN_1800f6900(1);
      uVar14 = local_858._8_8_;
      puVar22 = (ushort *)local_858._0_8_;
      if (local_858._0_8_ != local_858._8_8_) {
        do {
          FUN_18015c010(puVar22 + 0x10);
          puVar22 = puVar22 + 0x88;
        } while (puVar22 != (ushort *)uVar14);
        local_858._8_8_ = local_858._0_8_;
      }
    }
    FUN_180218c10(&DAT_180cc8068,local_828,2);
    FUN_180218c10(&DAT_180cc8068,local_7e8,3);
    uVar25 = 2;
    local_9e8 = (undefined4 *)CONCAT44(local_9e8._4_4_,2);
    auVar43 = ZEXT1664(_DAT_18086d370);
    auVar45 = ZEXT1664(_DAT_18086d3c0);
    auVar47 = ZEXT1664(_DAT_18086d450);
    auVar49 = ZEXT464(0x3c23d70a);
    auVar38 = ZEXT864(0);
    auVar41 = ZEXT464(0x3f800000);
    puVar22 = (ushort *)local_858._8_8_;
    do {
      lVar13 = (ulonglong)uVar25 - 2;
      local_9d8[0] = &DAT_180cca038 + lVar13 * 0x10;
      plVar23 = (longlong *)(&DAT_180cca040)[lVar13 * 8];
      plVar24 = (longlong *)*plVar23;
      if (plVar24 != plVar23) {
        do {
          uVar16 = (((ulonglong)*(byte *)(plVar24 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar24 + 0x11)) * 0x100000001b3 &
                   local_820[lVar13 * 8 + 5];
          uVar17 = *(ulonglong *)(local_820[lVar13 * 8 + 2] + 8 + uVar16 * 0x10);
          if (uVar17 == local_820[lVar13 * 8]) {
LAB_18021fbf4:
            if ((ushort *)local_858._0_8_ != puVar22) {
              puVar15 = (ushort *)local_858._0_8_;
              do {
                if ((*puVar15 == *(ushort *)(plVar24 + 2)) &&
                   (((*(uint *)(puVar15 + 0x7c) == 0 || (*(uint *)(puVar15 + 0x7c) == uVar25)) &&
                    ((byte)puVar15[0x84] != 0)))) goto LAB_18021fe71;
                puVar15 = puVar15 + 0x88;
              } while (puVar15 != puVar22);
            }
            local_9c8[0] = *(ushort *)(plVar24 + 2);
            local_9c0 = 0;
            local_9bc = auVar49._0_4_;
            local_9b8 = 0;
            local_9b4 = 0;
            local_9b0 = 0;
            local_998 = auVar47._0_16_;
            local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar37[0xf] = 0;
            auVar37._0_15_ = local_9a8._1_15_;
            local_9a8 = auVar37 << 8;
            local_988 = 0;
            local_984 = 0xffffffffffffffff;
            local_97c = 0xffffffff;
            local_8e4 = auVar38._0_4_;
            local_978 = (ulonglong)local_8e4 << 0x20;
            uVar39 = auVar41._0_4_;
            uStack_970 = CONCAT44(local_8e4,uVar39);
            uStack_968 = CONCAT44(local_8e4,local_8e4);
            uStack_960 = 0xffffffff;
            local_958 = auVar45._0_16_;
            uStack_948 = CONCAT44(0xffffffff,local_8e4);
            lStack_940 = (ulonglong)local_8e4 << 0x20;
            local_938 = auVar43._0_16_;
            uStack_928 = 0xffffffff;
            uStack_920 = CONCAT44(uVar39,local_8e4);
            local_918 = CONCAT44(local_8e4,local_8e4);
            uStack_910 = CONCAT44(0xffffffff,local_8e4);
            lStack_908 = (ulonglong)local_8e4 << 0x20;
            uStack_900 = CONCAT44(local_8e4,uVar39);
            local_8f8 = CONCAT44(local_8e4,local_8e4);
            local_8f0 = 0xffffffff;
            local_8ec = 0;
            local_8d8 = 0;
            local_8d4 = 0;
            local_8cc = 0xffffffff;
            local_8c8 = 0;
            local_8c0 = 1;
            local_8be = 0;
            local_8e0 = local_8e4;
            local_8dc = local_8e4;
            local_8d0 = uVar25;
            if (puVar22 == local_848) {
              auVar38 = ZEXT1664(auVar38._0_16_);
              auVar41 = ZEXT1664(auVar41._0_16_);
              auVar43 = ZEXT1664(local_938);
              auVar45 = ZEXT1664(local_958);
              auVar47 = ZEXT1664(local_998);
              auVar49 = ZEXT1664(auVar49._0_16_);
              FUN_1802318f0(local_858,puVar22,local_9c8);
            }
            else {
              auVar38 = ZEXT1664(auVar38._0_16_);
              auVar41 = ZEXT1664(auVar41._0_16_);
              auVar43 = ZEXT1664(local_938);
              auVar45 = ZEXT1664(local_958);
              auVar47 = ZEXT1664(local_998);
              auVar49 = ZEXT1664(auVar49._0_16_);
              FUN_1802329a0(puVar22,local_9c8);
              local_858._8_8_ = local_858._8_8_ + 0x110;
            }
            FUN_18015c010(local_9a8);
            puVar22 = (ushort *)local_858._8_8_;
          }
          else {
            sVar3 = *(short *)(uVar17 + 0x10);
            while ((short)plVar24[2] != sVar3) {
              if (uVar17 == *(ulonglong *)(local_820[lVar13 * 8 + 2] + uVar16 * 0x10))
              goto LAB_18021fbf4;
              uVar17 = *(ulonglong *)(uVar17 + 8);
              sVar3 = *(short *)(uVar17 + 0x10);
            }
          }
LAB_18021fe71:
          plVar24 = (longlong *)*plVar24;
        } while (plVar24 != plVar23);
      }
      puVar5 = (undefined8 *)local_820[lVar13 * 8];
      puVar6 = (undefined8 *)*puVar5;
      uVar31 = DAT_180cc8150;
      uVar8 = DAT_180cc8152;
      cVar10 = local_9e0;
      while( true ) {
        DAT_180cc8150 = uVar31;
        DAT_180cc8152 = uVar8;
        local_9e0 = cVar10;
        if (puVar6 == puVar5) break;
        if (cVar10 == '\0') {
LAB_18021ff28:
          if ((ushort *)local_858._0_8_ != puVar22) {
            uVar31 = *(ushort *)(puVar6 + 2);
            puVar15 = (ushort *)(local_858._0_8_ + 0x108);
            do {
              if ((((puVar15[-0x84] == uVar31) &&
                   ((*(int *)(puVar15 + -8) == 0 || (*(int *)(puVar15 + -8) == (uint)local_9e8))))
                  && ((byte)*puVar15 == 0)) &&
                 (cVar10 = FUN_1801d8910(puVar15 + -0x80,puVar6 + 3), cVar10 != '\0')) {
                uVar25 = (uint)local_9e8;
                goto LAB_18022003f;
              }
              puVar1 = puVar15 + 4;
              puVar15 = puVar15 + 0x88;
            } while (puVar1 != puVar22);
          }
          local_688 = CONCAT62(local_688._2_6_,*(undefined2 *)(puVar6 + 2));
          FUN_18019f170(&local_680,puVar6 + 3);
          uVar25 = (uint)local_9e8;
          local_590 = (uint)local_9e8;
          local_58c = 0xffffffff;
          local_588 = 0;
          local_580 = local_580 & 0xff000000;
          if ((ushort *)local_858._8_8_ == local_848) {
            FUN_1802318f0(local_858,local_858._8_8_,&local_688);
          }
          else {
            FUN_1802329a0(local_858._8_8_,&local_688);
            local_858._8_8_ = local_858._8_8_ + 0x110;
          }
          FUN_18015c010(local_668);
          puVar22 = (ushort *)local_858._8_8_;
        }
        else {
          uVar17 = (((ulonglong)*(byte *)(puVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar6 + 0x11)) * 0x100000001b3 &
                   *(ulonglong *)(local_9d8[0] + 0xc);
          lVar13 = *(longlong *)(*(longlong *)(local_9d8[0] + 6) + 8 + uVar17 * 0x10);
          if (lVar13 == *(longlong *)(local_9d8[0] + 2)) goto LAB_18021ff28;
          sVar3 = *(short *)(lVar13 + 0x10);
          while (*(short *)(puVar6 + 2) != sVar3) {
            if (lVar13 == *(longlong *)(*(longlong *)(local_9d8[0] + 6) + uVar17 * 0x10))
            goto LAB_18021ff28;
            lVar13 = *(longlong *)(lVar13 + 8);
            sVar3 = *(short *)(lVar13 + 0x10);
          }
          uVar14 = FUN_18022fd30(local_9d8[0],puVar6 + 2);
          cVar10 = FUN_1801d8910(uVar14,puVar6 + 3);
          puVar22 = (ushort *)local_858._8_8_;
          if (cVar10 == '\0') goto LAB_18021ff28;
        }
LAB_18022003f:
        puVar6 = (undefined8 *)*puVar6;
        uVar31 = DAT_180cc8150;
        uVar8 = DAT_180cc8152;
        cVar10 = local_9e0;
      }
      uVar17 = 0;
      uVar25 = uVar25 + 1;
      local_9e8._4_4_ = (undefined4)((ulonglong)local_9e8 >> 0x20);
      local_9e8 = (undefined4 *)CONCAT44(local_9e8._4_4_,uVar25);
    } while ((int)uVar25 < 4);
    local_9e8 = (undefined4 *)CONCAT62(local_9e8._2_6_,uVar31);
    if ((uVar31 != 0) && ((cVar10 == '\0' || (uVar31 != DAT_180cca0b8)))) {
      local_9c0 = 0;
      local_9bc = auVar49._0_4_;
      local_9b8 = 0;
      local_9b4 = 0;
      local_9b0 = 0;
      local_998 = auVar47._0_16_;
      local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar40[0xf] = 0;
      auVar40._0_15_ = local_9a8._1_15_;
      local_9a8 = auVar40 << 8;
      local_988 = 0;
      local_984 = 0xffffffffffffffff;
      local_97c = 0xffffffff;
      local_8e4 = auVar38._0_4_;
      local_978 = (ulonglong)local_8e4 << 0x20;
      uVar39 = auVar41._0_4_;
      uStack_970 = CONCAT44(local_8e4,uVar39);
      uStack_968 = CONCAT44(local_8e4,local_8e4);
      uStack_960 = 0xffffffff;
      local_958 = auVar45._0_16_;
      uStack_948 = CONCAT44(0xffffffff,local_8e4);
      lStack_940 = (ulonglong)local_8e4 << 0x20;
      local_938 = auVar43._0_16_;
      uStack_928 = 0xffffffff;
      uStack_920 = CONCAT44(uVar39,local_8e4);
      local_918 = CONCAT44(local_8e4,local_8e4);
      uStack_910 = CONCAT44(0xffffffff,local_8e4);
      lStack_908 = (ulonglong)local_8e4 << 0x20;
      uStack_900 = CONCAT44(local_8e4,uVar39);
      local_8f8 = CONCAT44(local_8e4,local_8e4);
      local_8f0 = 0xffffffff;
      local_8ec = 0;
      local_8d8 = 0;
      local_8d4 = 0;
      local_8d0 = 3;
      local_8cc = 0xffffffff;
      local_8c8 = 0;
      local_8c0 = 0;
      local_8be = 0;
      local_9c8[0] = uVar31;
      local_8e0 = local_8e4;
      local_8dc = local_8e4;
      if (puVar22 == local_848) {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802318f0(local_858,puVar22);
      }
      else {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802329a0(puVar22,local_9c8);
        local_858._8_8_ = local_858._8_8_ + 0x110;
      }
      FUN_18015c010(local_9a8);
      puVar22 = (ushort *)local_858._8_8_;
    }
    if ((uVar8 != 0) && ((cVar10 == '\0' || (uVar8 != DAT_180cca0ba)))) {
      local_9c0 = 0;
      local_9bc = auVar49._0_4_;
      local_9b8 = 0;
      local_9b4 = 0;
      local_9b0 = 0;
      local_998 = auVar47._0_16_;
      local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar42[0xf] = 0;
      auVar42._0_15_ = local_9a8._1_15_;
      local_9a8 = auVar42 << 8;
      local_988 = 0;
      local_984 = 0xffffffffffffffff;
      local_97c = 0xffffffff;
      local_8e4 = auVar38._0_4_;
      local_978 = (ulonglong)local_8e4 << 0x20;
      uVar39 = auVar41._0_4_;
      uStack_970 = CONCAT44(local_8e4,uVar39);
      uStack_968 = CONCAT44(local_8e4,local_8e4);
      uStack_960 = 0xffffffff;
      local_958 = auVar45._0_16_;
      uStack_948 = CONCAT44(0xffffffff,local_8e4);
      lStack_940 = (ulonglong)local_8e4 << 0x20;
      local_938 = auVar43._0_16_;
      uStack_928 = 0xffffffff;
      uStack_920 = CONCAT44(uVar39,local_8e4);
      local_918 = CONCAT44(local_8e4,local_8e4);
      uStack_910 = CONCAT44(0xffffffff,local_8e4);
      lStack_908 = (ulonglong)local_8e4 << 0x20;
      uStack_900 = CONCAT44(local_8e4,uVar39);
      local_8f8 = CONCAT44(local_8e4,local_8e4);
      local_8f0 = 0xffffffff;
      local_8ec = 0;
      local_8d8 = 0;
      local_8d4 = 0;
      local_8d0 = 2;
      local_8cc = 0xffffffff;
      local_8c8 = 0;
      local_8c0 = 0;
      local_8be = 0;
      local_9c8[0] = uVar8;
      local_8e0 = local_8e4;
      local_8dc = local_8e4;
      if (puVar22 == local_848) {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802318f0(local_858,puVar22);
      }
      else {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802329a0(puVar22,local_9c8);
        local_858._8_8_ = local_858._8_8_ + 0x110;
      }
      FUN_18015c010(local_9a8);
      puVar22 = (ushort *)local_858._8_8_;
    }
    if ((uVar31 == 0) && (DAT_180cca0b8 != 0)) {
      local_9c8[0] = DAT_180cca0b8;
      local_9c0 = 0;
      local_9bc = auVar49._0_4_;
      local_9b8 = 0;
      local_9b4 = 0;
      local_9b0 = 0;
      local_998 = auVar47._0_16_;
      local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar44[0xf] = 0;
      auVar44._0_15_ = local_9a8._1_15_;
      local_9a8 = auVar44 << 8;
      local_984 = 0xffffffffffffffff;
      local_97c = 0xffffffff;
      local_8e4 = auVar38._0_4_;
      local_978 = (ulonglong)local_8e4 << 0x20;
      uVar39 = auVar41._0_4_;
      uStack_970 = CONCAT44(local_8e4,uVar39);
      uStack_968 = CONCAT44(local_8e4,local_8e4);
      uStack_960 = 0xffffffff;
      local_958 = auVar45._0_16_;
      uStack_948 = CONCAT44(0xffffffff,local_8e4);
      lStack_940 = (ulonglong)local_8e4 << 0x20;
      local_938 = auVar43._0_16_;
      uStack_928 = 0xffffffff;
      uStack_920 = CONCAT44(uVar39,local_8e4);
      local_918 = CONCAT44(local_8e4,local_8e4);
      uStack_910 = CONCAT44(0xffffffff,local_8e4);
      lStack_908 = (ulonglong)local_8e4 << 0x20;
      uStack_900 = CONCAT44(local_8e4,uVar39);
      local_8f8 = CONCAT44(local_8e4,local_8e4);
      local_8f0 = 0xffffffff;
      local_8ec = 0;
      local_8d8 = 0;
      local_8d4 = 0;
      local_8d0 = 3;
      local_8cc = 0xffffffff;
      local_8c8 = 0;
      local_8c0 = 1;
      local_8be = 0;
      local_988 = local_9b4;
      local_8e0 = local_8e4;
      local_8dc = local_8e4;
      if (puVar22 == local_848) {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802318f0(local_858,puVar22);
      }
      else {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802329a0(puVar22,local_9c8);
        local_858._8_8_ = local_858._8_8_ + 0x110;
      }
      FUN_18015c010(local_9a8);
      puVar22 = (ushort *)local_858._8_8_;
    }
    if ((uVar8 == 0) && (DAT_180cca0ba != 0)) {
      local_9c8[0] = DAT_180cca0ba;
      local_9c0 = 0;
      local_9bc = auVar49._0_4_;
      local_9b8 = 0;
      local_9b4 = 0;
      local_9b0 = 0;
      local_998 = auVar47._0_16_;
      local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar46[0xf] = 0;
      auVar46._0_15_ = local_9a8._1_15_;
      local_9a8 = auVar46 << 8;
      local_984 = 0xffffffffffffffff;
      local_97c = 0xffffffff;
      local_8e4 = auVar38._0_4_;
      local_978 = (ulonglong)local_8e4 << 0x20;
      uVar39 = auVar41._0_4_;
      uStack_970 = CONCAT44(local_8e4,uVar39);
      uStack_968 = CONCAT44(local_8e4,local_8e4);
      uStack_960 = 0xffffffff;
      local_958 = auVar45._0_16_;
      uStack_948 = CONCAT44(0xffffffff,local_8e4);
      lStack_940 = (ulonglong)local_8e4 << 0x20;
      local_938 = auVar43._0_16_;
      uStack_928 = 0xffffffff;
      uStack_920 = CONCAT44(uVar39,local_8e4);
      local_918 = CONCAT44(local_8e4,local_8e4);
      uStack_910 = CONCAT44(0xffffffff,local_8e4);
      lStack_908 = (ulonglong)local_8e4 << 0x20;
      uStack_900 = CONCAT44(local_8e4,uVar39);
      local_8f8 = CONCAT44(local_8e4,local_8e4);
      local_8f0 = 0xffffffff;
      local_8ec = 0;
      local_8d8 = 0;
      local_8d4 = 0;
      local_8d0 = 2;
      local_8cc = 0xffffffff;
      local_8c8 = 0;
      local_8c0 = 1;
      local_8be = 0;
      local_988 = local_9b4;
      local_8e0 = local_8e4;
      local_8dc = local_8e4;
      if (puVar22 == local_848) {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802318f0(local_858,puVar22);
      }
      else {
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar43 = ZEXT1664(local_938);
        auVar45 = ZEXT1664(local_958);
        auVar47 = ZEXT1664(local_998);
        auVar49 = ZEXT1664(auVar49._0_16_);
        FUN_1802329a0(puVar22,local_9c8);
        local_858._8_8_ = local_858._8_8_ + 0x110;
      }
      FUN_18015c010(local_9a8);
      puVar22 = (ushort *)local_858._8_8_;
    }
    puVar9 = DAT_180cca028;
    if (cVar10 == '\0') {
      if (DAT_180cca020 != DAT_180cca028) {
        local_8b8 = (undefined4 *)&DAT_180cc9e50;
        puVar19 = (undefined4 *)&DAT_180cc9e50;
        puVar26 = DAT_180cca020;
        do {
          uVar25 = *puVar26;
          if (((uVar25 == 2) || (uVar25 == 3)) && (puVar26[1] < 0x3a)) {
            puVar20 = (undefined *)
                      ((longlong)DAT_180cca0d8 +
                      (longlong)(int)((uVar25 * 0x3a + puVar26[1]) * 0x10) + 0x90);
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            bVar36 = false;
            if (puVar20 != (undefined *)0x0) {
              local_9d8[0] = (undefined4 *)0x0;
              cVar10 = FUN_1804514f0(local_9d8,puVar20);
              if (cVar10 == '\0') {
                bVar36 = false;
              }
              else {
                bVar36 = true;
                puVar19 = local_9d8[0];
              }
            }
          }
          else {
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            bVar36 = false;
          }
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          puVar27 = (undefined4 *)0x0;
          if (bVar36) {
            puVar27 = puVar19;
          }
          local_560 = '\0';
          iVar34 = FUN_1805f68d0(&DAT_180cc9e50);
          if (iVar34 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180cc9e9c == 0x7fffffff) {
            DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          plVar23 = DAT_180cca000;
          if (DAT_180cca000 != DAT_180cca008) {
            do {
              if ((undefined4 *)*plVar23 == puVar27) break;
              plVar23 = plVar23 + 0x25;
            } while (plVar23 != DAT_180cca008);
            if (plVar23 != DAT_180cca008) {
              if (local_560 == '\0') {
                FUN_180232880(&local_688,plVar23);
                local_560 = '\x01';
              }
              else {
                local_688 = *plVar23;
                local_680 = plVar23[1];
                local_678 = *(ushort *)(plVar23 + 2);
                FUN_18017edf0(local_670,plVar23 + 3);
                local_580 = *(uint *)(plVar23 + 0x21);
                local_57c = *(undefined4 *)((longlong)plVar23 + 0x10c);
                local_578 = (undefined1)plVar23[0x22];
                local_577 = *(undefined1 *)((longlong)plVar23 + 0x111);
                local_570 = plVar23[0x23];
                local_568 = (undefined1)plVar23[0x24];
              }
            }
          }
          FUN_1805f68fc(&DAT_180cc9e50);
          auVar42 = auVar43._0_16_;
          auVar44 = auVar45._0_16_;
          auVar40 = auVar41._0_16_;
          auVar37 = auVar38._0_16_;
          auVar46 = auVar47._0_16_;
          auVar48 = auVar49._0_16_;
          if (local_560 != '\0') {
            uVar16 = (((ulonglong)(byte)local_678 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)(local_678 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
            lVar13 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar16 * 0x10);
            if (lVar13 == DAT_180cc9c90) {
LAB_180220c81:
              lVar13 = 0;
            }
            else {
              uVar31 = *(ushort *)(lVar13 + 0x10);
              while (local_678 != uVar31) {
                if (lVar13 == *(longlong *)(DAT_180cc9ca0 + uVar16 * 0x10)) goto LAB_180220c81;
                lVar13 = *(longlong *)(lVar13 + 8);
                uVar31 = *(ushort *)(lVar13 + 0x10);
              }
            }
            lVar12 = DAT_180cc9c90;
            if (lVar13 != 0) {
              lVar12 = lVar13;
            }
            if ((lVar12 != DAT_180cc9c90) &&
               (lVar13 = *(longlong *)(lVar12 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar13 != 0)) {
              lVar12 = (longlong)(int)*puVar26 + -2;
              if (*(char *)(lVar13 + 0xb0) == '\x03') {
                uVar31 = (ushort)local_9e8;
                if (*puVar26 == 2) {
                  uVar31 = uVar8;
                }
                if (local_678 != uVar31) goto LAB_180220d6f;
              }
              else {
                uVar28 = (((ulonglong)(byte)local_678 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)local_678._1_1_) * 0x100000001b3 & local_820[lVar12 * 8 + 5];
                uVar16 = *(ulonglong *)(local_820[lVar12 * 8 + 2] + 8 + uVar28 * 0x10);
                if (uVar16 != local_820[lVar12 * 8]) {
                  uVar31 = *(ushort *)(uVar16 + 0x10);
                  while (local_678 != uVar31) {
                    if (uVar16 == *(ulonglong *)(local_820[lVar12 * 8 + 2] + uVar28 * 0x10))
                    goto LAB_180220d6f;
                    uVar16 = *(ulonglong *)(uVar16 + 8);
                    uVar31 = *(ushort *)(uVar16 + 0x10);
                  }
                  uVar14 = FUN_18022fd30(local_828 + lVar12 * 0x20,&local_678);
                  cVar10 = FUN_1801d8910(uVar14,local_670);
                  auVar42 = auVar43._0_16_;
                  auVar44 = auVar45._0_16_;
                  auVar40 = auVar41._0_16_;
                  auVar37 = auVar38._0_16_;
                  auVar46 = auVar47._0_16_;
                  auVar48 = auVar49._0_16_;
                  if (cVar10 != '\0') goto LAB_180220faf;
                }
LAB_180220d6f:
                local_9c0 = 0;
                local_9bc = auVar48._0_4_;
                local_9b8 = 0;
                local_9b4 = 0;
                local_9b0 = 0;
                local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar7[0xf] = 0;
                auVar7._0_15_ = local_9a8._1_15_;
                local_9a8 = auVar7 << 8;
                local_988 = 0;
                local_984 = 0xffffffffffffffff;
                local_97c = 0xffffffff;
                local_8e4 = auVar37._0_4_;
                local_978 = (ulonglong)local_8e4 << 0x20;
                uVar39 = auVar40._0_4_;
                uStack_970 = CONCAT44(local_8e4,uVar39);
                uStack_968 = CONCAT44(local_8e4,local_8e4);
                uStack_960 = 0xffffffff;
                uStack_948 = CONCAT44(0xffffffff,local_8e4);
                lStack_940 = (ulonglong)local_8e4 << 0x20;
                uStack_928 = 0xffffffff;
                uStack_920 = CONCAT44(uVar39,local_8e4);
                local_918 = CONCAT44(local_8e4,local_8e4);
                uStack_910 = CONCAT44(0xffffffff,local_8e4);
                lStack_908 = (ulonglong)local_8e4 << 0x20;
                uStack_900 = CONCAT44(local_8e4,uVar39);
                local_8f8 = CONCAT44(local_8e4,local_8e4);
                local_8f0 = 0xffffffff;
                local_8ec = 0;
                local_8d8 = 0;
                local_8d4 = 0;
                local_8d0 = *puVar26;
                local_8cc = puVar26[1];
                local_8c8 = 0;
                local_8c0 = 1;
                local_8be = 0;
                local_9c8[0] = local_678;
                local_998 = auVar46;
                local_958 = auVar44;
                local_938 = auVar42;
                local_8e0 = local_8e4;
                local_8dc = local_8e4;
                if ((ushort *)local_858._8_8_ == local_848) {
                  auVar38 = ZEXT1664(auVar37);
                  auVar41 = ZEXT1664(auVar40);
                  auVar43 = ZEXT1664(auVar42);
                  auVar45 = ZEXT1664(auVar44);
                  auVar47 = ZEXT1664(auVar46);
                  auVar49 = ZEXT1664(auVar48);
                  FUN_1802318f0(local_858,local_858._8_8_);
                }
                else {
                  auVar38 = ZEXT1664(auVar37);
                  auVar41 = ZEXT1664(auVar40);
                  auVar43 = ZEXT1664(auVar42);
                  auVar45 = ZEXT1664(auVar44);
                  auVar47 = ZEXT1664(auVar46);
                  auVar49 = ZEXT1664(auVar48);
                  FUN_1802329a0(local_858._8_8_,local_9c8);
                  local_858._8_8_ = local_858._8_8_ + 0x110;
                }
                FUN_18015c010(local_9a8);
              }
LAB_180220faf:
              if (local_560 == '\0') goto LAB_180220fc8;
            }
            FUN_18015c010(local_658);
          }
LAB_180220fc8:
          puVar26 = puVar26 + 6;
        } while (puVar26 != puVar9);
        puVar22 = (ushort *)local_858._8_8_;
      }
      uVar31 = (ushort)local_9e8;
    }
    uVar16 = 0;
    if (((longlong)puVar22 - local_858._0_8_) / 0x110 != 0) {
      lVar13 = 0;
      do {
        uVar14 = local_858._0_8_;
        if ((*(int *)(local_858._0_8_ + lVar13 + 0xf8) == 0) &&
           (*(byte *)(local_858._0_8_ + lVar13 + 0x10a) == 0)) {
          local_688 = CONCAT62(local_688._2_6_,*(undefined2 *)(local_858._0_8_ + lVar13));
          FUN_18019f170(&local_680,(byte *)(local_858._0_8_ + lVar13 + 8));
          uVar25 = local_580;
          local_58c = *(undefined4 *)(uVar14 + lVar13 + 0xfc);
          local_588 = *(undefined8 *)(uVar14 + lVar13 + 0x100);
          local_580._3_1_ = SUB41(uVar25,3);
          local_580._0_3_ =
               CONCAT12(*(byte *)(uVar14 + lVar13 + 0x10a),
                        CONCAT11(*(byte *)(uVar14 + lVar13 + 0x109),
                                 *(byte *)(uVar14 + lVar13 + 0x108)));
          pbVar2 = (byte *)(local_858._0_8_ + lVar13 + 0xf8);
          pbVar2[0] = 2;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          local_590 = 3;
          if ((ushort *)local_858._8_8_ == local_848) {
            FUN_180231ad0(local_858,local_858._8_8_);
          }
          else {
            FUN_180221a30(local_858._8_8_,&local_688);
            local_858._8_8_ = local_858._8_8_ + 0x110;
          }
          FUN_18015c010(local_668);
          puVar22 = (ushort *)local_858._8_8_;
        }
        uVar16 = uVar16 + 1;
        lVar13 = lVar13 + 0x110;
      } while (uVar16 < (ulonglong)(((longlong)puVar22 - local_858._0_8_) / 0x110));
      uVar31 = (ushort)local_9e8;
    }
    uVar16 = 0;
    for (puVar15 = (ushort *)local_858._0_8_; puVar15 != puVar22; puVar15 = puVar15 + 0x88) {
      if ((byte)puVar15[0x85] == 0) {
        iVar34 = *(int *)(puVar15 + 0x7c);
        if ((iVar34 == 2) || (iVar34 == 3)) {
          uVar4 = *puVar15;
          uVar28 = DAT_180cc9cb8 &
                   (((ulonglong)uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)(uVar4 >> 8)) * 0x100000001b3;
          lVar13 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar28 * 0x10);
          if ((byte)puVar15[0x84] == 0) {
            if (lVar13 == DAT_180cc9c90) {
LAB_1802213d5:
              lVar13 = 0;
            }
            else {
              uVar11 = *(ushort *)(lVar13 + 0x10);
              while (uVar4 != uVar11) {
                if (lVar13 == *(longlong *)(DAT_180cc9ca0 + uVar28 * 0x10)) goto LAB_1802213d5;
                lVar13 = *(longlong *)(lVar13 + 8);
                uVar11 = *(ushort *)(lVar13 + 0x10);
              }
            }
            lVar12 = DAT_180cc9c90;
            if (lVar13 != 0) {
              lVar12 = lVar13;
            }
            if ((lVar12 != DAT_180cc9c90) &&
               (lVar13 = *(longlong *)(lVar12 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar13 != 0)) {
              if (*(char *)(lVar13 + 0xb0) == '\x03') {
                uVar11 = uVar8;
                if (iVar34 == 3) {
                  uVar11 = uVar31;
                }
                if (uVar4 == uVar11) goto LAB_1802214bf;
              }
              else {
                lVar13 = (longlong)iVar34 + -2;
                uVar29 = (((ulonglong)(byte)*puVar15 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)puVar15 + 1)) * 0x100000001b3 &
                         local_820[lVar13 * 8 + 5];
                uVar28 = *(ulonglong *)(local_820[lVar13 * 8 + 2] + 8 + uVar29 * 0x10);
                if (uVar28 == local_820[lVar13 * 8]) {
LAB_180221492:
                  uVar28 = 0;
                }
                else {
                  uVar11 = *(ushort *)(uVar28 + 0x10);
                  while (uVar4 != uVar11) {
                    if (uVar28 == *(ulonglong *)(local_820[lVar13 * 8 + 2] + uVar29 * 0x10))
                    goto LAB_180221492;
                    uVar28 = *(ulonglong *)(uVar28 + 8);
                    uVar11 = *(ushort *)(uVar28 + 0x10);
                  }
                }
                uVar29 = local_820[lVar13 * 8];
                if (uVar28 != 0) {
                  uVar29 = uVar28;
                }
                if ((uVar29 != local_820[lVar13 * 8]) &&
                   (cVar10 = FUN_1801d8910(uVar29 + 0x18), cVar10 != '\0')) goto LAB_1802214bf;
              }
            }
          }
          else {
            if (lVar13 == DAT_180cc9c90) {
LAB_1802212d8:
              lVar13 = 0;
            }
            else {
              uVar11 = *(ushort *)(lVar13 + 0x10);
              while (uVar4 != uVar11) {
                if (lVar13 == *(longlong *)(DAT_180cc9ca0 + uVar28 * 0x10)) goto LAB_1802212d8;
                lVar13 = *(longlong *)(lVar13 + 8);
                uVar11 = *(ushort *)(lVar13 + 0x10);
              }
            }
            lVar12 = DAT_180cc9c90;
            if (lVar13 != 0) {
              lVar12 = lVar13;
            }
            if ((lVar12 != DAT_180cc9c90) &&
               (lVar13 = *(longlong *)(lVar12 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar13 != 0)) {
              if ((iVar34 == 2) || (iVar34 == 3)) {
                if (*(char *)(lVar13 + 0xb0) == '\x03') {
                  uVar11 = uVar31;
                  if (iVar34 == 2) {
                    uVar11 = uVar8;
                  }
                  bVar36 = uVar4 == uVar11;
                }
                else {
                  lVar13 = (longlong)iVar34 + -2;
                  uVar29 = (((ulonglong)(byte)*puVar15 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           (ulonglong)*(byte *)((longlong)puVar15 + 1)) * 0x100000001b3 &
                           local_820[lVar13 * 8 + 5];
                  uVar28 = *(ulonglong *)(local_820[lVar13 * 8 + 2] + 8 + uVar29 * 0x10);
                  if (uVar28 == local_820[lVar13 * 8]) {
LAB_180221398:
                    uVar28 = 0;
                  }
                  else {
                    uVar11 = *(ushort *)(uVar28 + 0x10);
                    while (uVar4 != uVar11) {
                      if (uVar28 == *(ulonglong *)(local_820[lVar13 * 8 + 2] + uVar29 * 0x10))
                      goto LAB_180221398;
                      uVar28 = *(ulonglong *)(uVar28 + 8);
                      uVar11 = *(ushort *)(uVar28 + 0x10);
                    }
                  }
                  bVar36 = uVar28 != 0;
                }
                if (bVar36) goto LAB_180221572;
              }
LAB_1802214bf:
              cVar10 = FUN_18021bde0(&DAT_180cc9e50);
              if (cVar10 == '\0') {
                local_8b8 = (undefined4 *)&DAT_180cc9e50;
                iVar34 = FUN_1805f68d0(&DAT_180cc9e50);
                if (iVar34 != 0) {
LAB_18022194a:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_180cc9e9c == 0x7fffffff) {
LAB_180221935:
                  DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((ulonglong)(((longlong)DAT_180cc9ea8 - (longlong)DAT_180cc9ea0) / 0x110) < 0x80)
                {
                  if (DAT_180cc9ea8 == DAT_180cc9eb0) {
                    FUN_180231ad0(&DAT_180cc9ea0);
                  }
                  else {
                    FUN_180221a30(DAT_180cc9ea8);
                    DAT_180cc9ea8 = (ushort *)((longlong)DAT_180cc9ea8 + 0x110);
                  }
                }
                goto LAB_18022156a;
              }
            }
          }
        }
      }
      else {
        uVar28 = uVar16 + 1;
        if (uVar16 < 2) {
          cVar10 = FUN_18021bde0(&DAT_180cc9e50);
          uVar16 = uVar28;
          if (cVar10 != '\0') goto LAB_180221572;
        }
        local_8b8 = (undefined4 *)&DAT_180cc9e50;
        iVar34 = FUN_1805f68d0(&DAT_180cc9e50);
        if (iVar34 != 0) goto LAB_18022194a;
        if (DAT_180cc9e9c == 0x7fffffff) goto LAB_180221935;
        uVar16 = uVar28;
        if ((ulonglong)(((longlong)DAT_180cc9ea8 - (longlong)DAT_180cc9ea0) / 0x110) < 0x80) {
          if (DAT_180cc9ea8 == DAT_180cc9eb0) {
            FUN_180231ad0(&DAT_180cc9ea0);
          }
          else {
            FUN_180221a30(DAT_180cc9ea8);
            DAT_180cc9ea8 = (ushort *)((longlong)DAT_180cc9ea8 + 0x110);
          }
        }
LAB_18022156a:
        FUN_1805f68fc(&DAT_180cc9e50);
      }
LAB_180221572:
    }
    local_698 = '\0';
    local_8b8 = (undefined4 *)&DAT_180cc9e50;
    iVar34 = FUN_1805f68d0(&DAT_180cc9e50);
    plVar23 = DAT_180cca008;
    lVar13 = DAT_180cc9fc8;
    sVar3 = DAT_180cc9eb8;
    if (iVar34 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180cc9e9c == 0x7fffffff) {
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (((local_8b0 < DAT_180cc9fd0) && (DAT_180cc9fd8 + 0xa0U <= local_8b0)) &&
       (DAT_180cc9eb8 != 0)) {
      plVar24 = DAT_180cca000;
      if (DAT_180cca000 != DAT_180cca008) {
        do {
          if (((*plVar24 == lVar13) && ((char)plVar24[0x22] != '\0')) &&
             ((*(char *)((longlong)plVar24 + 0x111) == '\0' &&
              (((short)plVar24[2] == sVar3 && (cVar10 = FUN_1801d8910(plVar24 + 3), cVar10 != '\0'))
              )))) break;
          plVar24 = plVar24 + 0x25;
        } while (plVar24 != plVar23);
        if (plVar24 != plVar23) goto LAB_1802216f4;
      }
      if (local_698 == '\0') {
        FUN_180221a30(local_7a8);
        local_698 = '\x01';
      }
      else {
        local_7a8[0] = sVar3;
        FUN_18017edf0(local_7a0);
        local_6b0 = DAT_180cc9fb0;
        local_6ac = DAT_180cc9fb4;
        local_6a8 = DAT_180cc9fb8;
        local_6a0 = DAT_180cc9fc0;
        local_69f = DAT_180cc9fc1;
        local_69e = DAT_180cc9fc2;
      }
    }
LAB_1802216f4:
    FUN_1805f68fc(&DAT_180cc9e50);
    if (local_698 != '\0') {
      FUN_18021bde0(&DAT_180cc9e50);
    }
    DAT_180c64054 = 0;
    psVar30 = local_828;
    do {
      for (puVar5 = (undefined8 *)**(undefined8 **)(psVar30 + 4);
          puVar5 != *(undefined8 **)(psVar30 + 4); puVar5 = (undefined8 *)*puVar5) {
        if ((*(char *)(puVar5 + 10) == '\0') && (*(int *)(puVar5 + 0xb) < 0)) {
          bVar18 = 0;
        }
        else {
          bVar18 = 1;
        }
        DAT_180c64054 = DAT_180c64054 | bVar18;
      }
      psVar30 = psVar30 + 0x20;
    } while (psVar30 != local_7a8);
    do {
      puVar19 = (undefined4 *)((longlong)&DAT_180cca038 + uVar17);
      if (puVar19 != (undefined4 *)((longlong)local_828 + uVar17)) {
        *(undefined4 *)((longlong)&DAT_180cca038 + uVar17) =
             *(undefined4 *)((longlong)local_828 + uVar17);
        local_8b8 = puVar19;
        FUN_1801b6bf0((longlong)&DAT_180cca040 + uVar17,
                      **(undefined8 **)((longlong)local_820 + uVar17),
                      *(undefined8 **)((longlong)local_820 + uVar17));
        uVar14 = FUN_180151090(puVar19,*(undefined8 *)((longlong)&DAT_180cca048 + uVar17));
        FUN_180150ee0(puVar19,uVar14);
      }
      uVar17 = uVar17 + 0x40;
    } while (uVar17 < 0x80);
    _DAT_180cca0c0 = local_838;
    uRam0000000180cca0c8 = puStack_830;
    DAT_180cca0b8 = uVar31;
    DAT_180cca0ba = uVar8;
    FUN_18021dac0(local_838,local_858._0_8_ != local_858._8_8_);
    FUN_18021e670(&DAT_180cc9e50,0);
    if (local_698 != '\0') {
      FUN_18015c010(local_788);
    }
    _eh_vector_destructor_iterator_(local_828,0x40,2,thunk_FUN_1800cf8e0);
    FUN_1801abc40(local_858);
  }
LAB_180221872:
  FUN_180221960(&local_8b8);
                    /* WARNING: Read-only address (ram,0x00018086d370) is written */
                    /* WARNING: Read-only address (ram,0x00018086d3c0) is written */
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



