// FUN_18045d080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045d080 */

void FUN_18045d080(undefined8 param_1,longlong param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 (*pauVar7) [16];
  undefined *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auVar27 [64];
  undefined8 in_stack_fffffffffffffee8;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 uVar31;
  undefined8 uVar30;
  undefined4 uVar32;
  float local_f8;
  float local_f4;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  
  fVar24 = 0.5;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 180.0 + 0.5)),1);
  local_f8 = DAT_180b0a41c * 5.0;
  local_c8 = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x30) + DAT_180b0a41c;
  local_c4 = param_3 - DAT_180b0a41c * 20.0;
  fVar18 = *(float *)(DAT_180bb8ae8 + 0x30);
  if (fVar18 - DAT_180b0a41c * 6.0 < local_c8 + auVar3._0_4_) {
    fVar18 = *(float *)(param_2 + 0x28) - auVar3._0_4_;
    local_c8 = fVar18 - DAT_180b0a41c;
  }
  uVar23 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffee8 >> 0x20),DAT_180b0a41c * 8.0);
  local_f4 = local_f8;
  cVar6 = FUN_1804a8290(fVar18,&local_c8,auVar3._0_8_,&local_f8,uVar23);
  lVar15 = DAT_180bb8ae8;
  uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
  if (cVar6 == '\0') {
    return;
  }
  lVar17 = (longlong)DAT_1808e4e34 * 0x68 + *DAT_180c62c58;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar2 = *(longlong **)(lVar15 + 0x14d0);
  lVar15 = plVar2[0x59];
  FUN_1804c2920();
  auVar27 = ZEXT464(0x41a66666);
  pauVar7 = (undefined1 (*) [16])FUN_18045c410(&local_e0,"##key",DAT_180bbecd9,auVar27._0_8_);
  lVar16 = DAT_180bb8ae8;
  uVar32 = DAT_1808da478;
  auVar3 = *pauVar7;
  auVar21 = ZEXT1664(auVar3);
  uVar23 = *(undefined8 *)pauVar7[1];
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar29 = *(undefined8 *)(*(longlong *)(lVar16 + 0x14d0) + 0x2c8);
  local_f8 = DAT_180b0a41c * 13.5 + auVar3._0_4_;
  local_f4 = (float)uVar23;
  uVar25 = 0x41300000;
  uVar28 = CONCAT44(uVar19,0x41300000);
  local_d0 = uVar23;
  FUN_180463dc0(uVar29,&local_f8,DAT_180b0a438,&DAT_180829e08,uVar28);
  uVar30 = DAT_180c62ca8;
  uVar19 = (undefined4)((ulonglong)uVar28 >> 0x20);
  fVar18 = (float)FUN_180463350(DAT_180c62ca8,0x41533333);
  local_f4 = (float)uVar23 - fVar18 * fVar24;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 28.0 + auVar21._0_4_ + fVar24)),1)
  ;
  local_f8 = auVar3._0_4_;
  uVar31 = 0;
  FUN_180463450(uVar29,uVar30,0x41533333,&local_f8,CONCAT44(uVar19,uVar32),&DAT_18081ea38,0);
  auVar3 = vshufps_avx(auVar21._0_16_,auVar21._0_16_,0xaa);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar3._0_4_ - DAT_180b0a41c * 6.7) + fVar24)),1)
  ;
  auVar21 = ZEXT1664(auVar3);
  fVar26 = 0.0;
  fVar18 = 1.0;
  if ((local_d0._4_1_ == '\0') && (DAT_180bbecd9 == '\0')) {
    uVar32 = 0;
LAB_18045d349:
    uVar19 = uVar32;
    puVar8 = (undefined *)FUN_18045f3f0(*(undefined4 *)(lVar17 + 0x50));
  }
  else {
    uVar19 = 0x3f800000;
    uVar32 = 0x3f800000;
    if (DAT_180bbecd9 == '\0') goto LAB_18045d349;
    puVar8 = &DAT_1807d3edc;
  }
  uVar30 = CONCAT44(uVar31,uVar19);
  uVar29 = 0;
  FUN_18045c890(&local_f8,lVar15,auVar21._0_8_,uVar23,0,puVar8,uVar30);
  uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
  uVar19 = (undefined4)((ulonglong)uVar29 >> 0x20);
  if (local_d0._5_1_ == '\0') {
    if (DAT_180bbecd9 != '\0') {
      iVar13 = 0x200;
      do {
        if ((iVar13 != 0x290) && (5 < iVar13 - 0x295U)) {
          cVar6 = FUN_1804c3390(iVar13,0,0);
          uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
          uVar19 = (undefined4)((ulonglong)uVar29 >> 0x20);
          if (cVar6 != '\0') {
            if (iVar13 - 0x20aU < 2) {
              *(undefined4 *)(lVar17 + 0x50) = 0;
            }
            else if (iVar13 != 0x20e) {
              *(int *)(lVar17 + 0x50) = iVar13;
              *(undefined1 *)(lVar17 + 0x5d) = 0;
              goto LAB_18045d3ed;
            }
            *(undefined1 *)(lVar17 + 0x5d) = 0;
            goto LAB_18045d3ed;
          }
        }
        uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
        uVar19 = (undefined4)((ulonglong)uVar29 >> 0x20);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x29b);
      cVar6 = FUN_1804c3510(0,0,0);
      if (cVar6 != '\0') {
LAB_18045d3ed:
        DAT_180bbecd9 = '\0';
      }
    }
  }
  else {
    DAT_180bbecd9 = DAT_180bbecd9 == '\0';
  }
  uVar11 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  pcVar9 = "##mode_list";
  cVar6 = '#';
  uVar12 = uVar11;
  do {
    pcVar9 = pcVar9 + 1;
    if (((cVar6 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
      pcVar9 = pcVar9 + 2;
      uVar12 = uVar11;
    }
    else {
      uVar12 = crc32(uVar12,cVar6);
    }
    cVar6 = *pcVar9;
  } while (cVar6 != '\0');
  uVar12 = ~uVar12;
  if (*(uint *)(*plVar2 + 0x1534) == uVar12) {
    FUN_1804cf810(uVar12,0xb,"##mode_list");
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar12)) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  puVar10 = (undefined8 *)FUN_18045c410(&local_f8,"##mode",cVar6,auVar27._0_8_);
  local_e0 = *puVar10;
  uStack_d8 = puVar10[1];
  local_d0 = puVar10[2];
  FUN_18045c750(&local_e0,&DAT_180829dc4,&DAT_180829e20,DAT_1808da478,CONCAT44(uVar19,DAT_180b0a438)
               );
  fVar20 = auVar21._0_4_ - DAT_180b0a41c * 5.0;
  auVar22 = ZEXT464((uint)(float)local_d0);
  local_f4 = (float)local_d0;
  local_f8 = fVar20;
  FUN_180463dc0(lVar15,&local_f8,DAT_1808da478,&DAT_180829e00,uVar25);
  if ((local_d0._4_1_ == '\0') && (cVar6 == '\0')) {
    fVar18 = fVar26;
  }
  iVar13 = *(int *)(lVar17 + 0x54);
  if (iVar13 == 1) {
    pcVar9 = "Hold";
LAB_18045d5a1:
    puVar8 = &DAT_180829dc8;
  }
  else {
    if (iVar13 == 2) {
      pcVar9 = "Always";
    }
    else {
      pcVar9 = "Toggle";
      if (iVar13 == 1) goto LAB_18045d5a1;
      if (iVar13 != 2) {
        puVar8 = &DAT_180829dd4;
        goto LAB_18045d5a8;
      }
    }
    puVar8 = &DAT_180829dcc;
  }
LAB_18045d5a8:
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar20 - DAT_180b0a41c * 10.5) + fVar24)),1);
  FUN_18045c890(&local_f8,lVar15,auVar3._0_8_,auVar22._0_8_,puVar8,pcVar9,CONCAT44(uVar32,fVar18));
  if ((local_d0._5_1_ != '\0') && (cVar6 == '\0')) {
    FUN_1804c7740(uVar12,0);
  }
  cVar6 = FUN_1804a8ab0(uVar12,&local_f8,local_f0);
  uVar19 = (undefined4)((ulonglong)puVar8 >> 0x20);
  if (cVar6 != '\0') {
    iVar13 = 0;
    do {
      FUN_1804c2920(iVar13);
      if (iVar13 == 1) {
        pcVar9 = "Hold";
      }
      else if (iVar13 == 2) {
        pcVar9 = "Always";
      }
      else {
        pcVar9 = "Toggle";
      }
      cVar6 = FUN_1804a91a0(pcVar9,*(int *)(lVar17 + 0x54) == iVar13);
      if (cVar6 != '\0') {
        *(int *)(lVar17 + 0x54) = iVar13;
        *(undefined1 *)(lVar17 + 0x5d) = 0;
        FUN_1804c7bf0();
      }
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
      uVar19 = (undefined4)((ulonglong)puVar8 >> 0x20);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    FUN_1804aeac0();
  }
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.7 + fVar24)),1);
  local_f4 = auVar3._0_4_;
  local_f8 = fVar26;
  FUN_1804c6420(&local_f8,0xbf800000);
  puVar10 = (undefined8 *)FUN_18045c410(&local_f8,"##value",0,auVar27._0_8_);
  local_e0 = *puVar10;
  uStack_d8 = puVar10[1];
  local_d0 = puVar10[2];
  uVar23 = CONCAT44(uVar19,DAT_180b0a438);
  FUN_18045c750(&local_e0,&DAT_180829dbc,"Value",DAT_1808da478,uVar23);
  uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
  FUN_18045ccc0(lVar17,&local_e0);
  puVar10 = (undefined8 *)FUN_18045c410(&local_f8,"##visible",0,auVar27._0_8_);
  local_e0 = *puVar10;
  uStack_d8 = puVar10[1];
  local_d0 = puVar10[2];
  uVar23 = CONCAT44(uVar19,DAT_180b0a438);
  FUN_18045c750(&local_e0,&DAT_180829dc0,"Visible",DAT_1808da478,uVar23);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 19.656 + fVar24)),1);
  local_f8 = auVar21._0_4_ - auVar3._0_4_;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.129 + fVar24)),1);
  local_f4 = (float)local_d0 - auVar3._0_4_ * fVar24;
  uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),0x3f47ae14);
  FUN_1804aaf40("##visible_toggle",lVar17 + 0x5c,&local_f8,1,uVar23);
  uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
  FUN_18045cb80();
  puVar10 = (undefined8 *)FUN_18045c410(&local_f8,"##delete",0,auVar27._0_8_);
  local_e0 = *puVar10;
  uStack_d8 = puVar10[1];
  local_d0 = puVar10[2];
  FUN_18045c750(&local_e0,&DAT_180829a48,"Delete",DAT_180b0a430,CONCAT44(uVar19,DAT_180b0a430));
  iVar13 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar13 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar13 + -1;
  }
  plVar2 = DAT_180c62c58;
  if (local_d0._5_1_ != '\0') {
    lVar16 = (longlong)DAT_1808e4e34 * 0x68;
    lVar15 = *DAT_180c62c58 + lVar16;
    if (*(char *)(lVar15 + 0x5e) != '\0') {
      FUN_18045c1c0(lVar15,*(undefined4 *)(lVar15 + 0x60));
      *(undefined1 *)(lVar15 + 0x5e) = 0;
    }
    puVar14 = (undefined8 *)(*plVar2 + lVar16);
    puVar10 = (undefined8 *)plVar2[1];
    puVar5 = puVar14;
    while (puVar4 = puVar5 + 0xd, puVar4 != puVar10) {
      if (puVar14 != puVar4) {
        FUN_18015c010(puVar14);
        uVar23 = puVar5[0xe];
        uVar29 = puVar5[0xf];
        uVar30 = puVar5[0x10];
        *puVar14 = *puVar4;
        puVar14[1] = uVar23;
        puVar14[2] = uVar29;
        puVar14[3] = uVar30;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0xf;
        *(undefined1 *)puVar4 = 0;
      }
      puVar14[4] = puVar5[0x11];
      *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar5 + 0x12);
      *(undefined4 *)((longlong)puVar14 + 0x2c) = *(undefined4 *)((longlong)puVar5 + 0x94);
      *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(puVar5 + 0x13);
      *(undefined4 *)((longlong)puVar14 + 0x34) = *(undefined4 *)((longlong)puVar5 + 0x9c);
      puVar14[7] = puVar5[0x14];
      uVar23 = puVar5[0x16];
      puVar14[8] = puVar5[0x15];
      puVar14[9] = uVar23;
      *(undefined4 *)(puVar14 + 10) = *(undefined4 *)(puVar5 + 0x17);
      *(undefined4 *)((longlong)puVar14 + 0x54) = *(undefined4 *)((longlong)puVar5 + 0xbc);
      *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(puVar5 + 0x18);
      *(undefined1 *)((longlong)puVar14 + 0x5c) = *(undefined1 *)((longlong)puVar5 + 0xc4);
      *(undefined1 *)((longlong)puVar14 + 0x5d) = *(undefined1 *)((longlong)puVar5 + 0xc5);
      *(undefined1 *)((longlong)puVar14 + 0x5e) = *(undefined1 *)((longlong)puVar5 + 0xc6);
      *(undefined4 *)(puVar14 + 0xc) = *(undefined4 *)(puVar5 + 0x19);
      *(undefined4 *)((longlong)puVar14 + 100) = *(undefined4 *)((longlong)puVar5 + 0xcc);
      puVar14 = puVar14 + 0xd;
      puVar5 = puVar4;
    }
    FUN_18015c010(plVar2[1] + -0x68);
    plVar2[1] = plVar2[1] + -0x68;
    DAT_1808e4e34 = -1;
    DAT_180bbecd9 = '\0';
    FUN_1804c7bf0();
  }
  FUN_1804aeac0();
  return;
}



