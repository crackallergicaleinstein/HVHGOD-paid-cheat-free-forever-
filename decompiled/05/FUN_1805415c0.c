// FUN_1805415c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805415c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805415c0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  size_t _Size;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  ULONGLONG UVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  HINSTANCE pHVar15;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  LPCWSTR ***lpFile;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auStackY_1d8 [32];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  undefined1 local_110;
  uint7 uStack_10f;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int local_b4;
  undefined1 local_b0 [16];
  undefined8 *local_a0;
  LPCWSTR ***local_98 [2];
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStackY_1d8;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if ((DAT_180cd7050 & 1) == 0) {
    DAT_180cd7050 = DAT_180cd7050 | 1;
    atexit(FUN_180663f60);
  }
  if ((DAT_180cd7050 & 2) == 0) {
    DAT_180cd7050 = DAT_180cd7050 | 2;
    atexit(FUN_180663f50);
  }
  UVar12 = GetTickCount64();
  auVar26 = ZEXT864(0);
  if ((*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') || (DAT_180c7e148 <= UVar12)
     ) {
    ppuVar13 = (undefined8 **)FUN_18036d000(DAT_180bb8ae8,local_98);
    if (ppuVar13 != &DAT_180c7e0f8) {
      FUN_1801b3410();
      DAT_180c7e0f8 = *ppuVar13;
      DAT_180c7e100 = ppuVar13[1];
      _DAT_180c7e108 = ppuVar13[2];
      *ppuVar13 = (undefined8 *)0x0;
      ppuVar13[1] = (undefined8 *)0x0;
      ppuVar13[2] = (undefined8 *)0x0;
    }
    FUN_1801b3410(local_98);
    puVar16 = DAT_180c7e138;
    puVar18 = DAT_180c7e130;
    if (DAT_180c7e130 != DAT_180c7e138) {
      do {
        FUN_18015c010(puVar18);
        puVar18 = puVar18 + 4;
      } while (puVar18 != puVar16);
      DAT_180c7e138 = DAT_180c7e130;
    }
    puVar16 = DAT_180c7e100;
    uVar8 = DAT_180c62ca8;
    auVar21 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
    auVar21 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar21);
    auVar24 = ZEXT1664(auVar21);
    if (DAT_180c7e0f8 != DAT_180c7e100) {
      uVar19 = 0;
      uVar20 = 0xf;
      auVar22 = ZEXT464(0x431b0000);
      puVar18 = DAT_180c7e0f8;
      do {
        lVar3 = puVar18[2];
        if ((ulonglong)puVar18[3] < 0x10) {
          puVar14 = puVar18;
        }
        else {
          puVar14 = (undefined8 *)*puVar18;
        }
        local_168._0_8_ = (undefined8 *)(lVar3 + (longlong)puVar14);
        FUN_1804ea040(local_138,uVar8,auVar24._0_8_,DAT_180b0a41c * auVar22._0_4_);
        uVar9 = local_168._0_8_;
        if ((undefined8 *)local_168._0_8_ == (undefined8 *)(lVar3 + (longlong)puVar14)) {
          puVar14 = (undefined8 *)FUN_18015b360(&local_130);
          auVar25 = auVar26._0_16_;
          auVar23 = auVar24._0_16_;
          auVar21 = auVar22._0_16_;
          bVar7 = true;
        }
        else {
          puVar14 = puVar18;
          if (0xf < (ulonglong)puVar18[3]) {
            puVar14 = (undefined8 *)*puVar18;
          }
          local_168 = (undefined1  [16])0x0;
          local_158 = (undefined1  [16])0x0;
          if (puVar14 == (undefined8 *)uVar9) {
            local_158._8_8_ = uVar20;
            local_158._0_8_ = uVar19;
            local_168._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar21[0xf] = 0;
            auVar21._0_15_ = local_168._1_15_;
            local_168 = auVar21 << 8;
          }
          else {
            FUN_18015ba30(local_168,0,uVar9 - (longlong)puVar14);
          }
          puVar14 = (undefined8 *)FUN_18015b2a0(local_168,&DAT_1807d3edc,3);
          auVar25 = auVar26._0_16_;
          auVar23 = auVar24._0_16_;
          auVar21 = auVar22._0_16_;
          local_f8 = *puVar14;
          uStack_f0 = puVar14[1];
          uStack_e8 = puVar14[2];
          uStack_e0 = puVar14[3];
          *(undefined1 *)puVar14 = 0;
          puVar14[2] = 0;
          puVar14[3] = 0xf;
          puVar14 = &local_f8;
          bVar6 = true;
          bVar5 = true;
        }
        if (DAT_180c7e138 == DAT_180c7e140) {
          auVar22 = ZEXT1664(auVar21);
          auVar24 = ZEXT1664(auVar23);
          auVar26 = ZEXT1664(auVar25);
          FUN_1802117e0(&DAT_180c7e130,DAT_180c7e138);
        }
        else {
          auVar22 = ZEXT1664(auVar21);
          auVar24 = ZEXT1664(auVar23);
          auVar26 = ZEXT1664(auVar25);
          FUN_18015b360(DAT_180c7e138,puVar14);
          DAT_180c7e138 = DAT_180c7e138 + 4;
        }
        if (bVar5) {
          bVar5 = false;
          FUN_18015c010(&local_f8);
        }
        if (bVar6) {
          bVar6 = false;
          FUN_18015c010(local_168);
        }
        if (bVar7) {
          bVar7 = false;
          FUN_18015c010(&local_130);
        }
        puVar18 = puVar18 + 8;
      } while (puVar18 != puVar16);
    }
    DAT_180c7e148 = UVar12 + 1000;
    if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') {
      DAT_180c7e129 = '\0';
    }
  }
  local_148 = (undefined1  [16])0x0;
  local_148._8_8_ = FUN_180113860(&DAT_180cc8e68);
  local_148._0_8_ = DAT_180cc8e60;
  if (local_148._8_8_ != 0) {
    LOCK();
    *(int *)(local_148._8_8_ + 8) = *(int *)(local_148._8_8_ + 8) + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar4 = (byte)DAT_180cc8e68;
  DAT_180cc8e68 = local_148._8_8_;
  if ((bVar4 & 3) == 2) {
    FUN_1805fa36c(&DAT_180cc8e68);
  }
  puVar14 = DAT_180c7e100;
  puVar18 = DAT_180c7e0f8;
  uVar8 = local_148._0_8_;
  for (puVar16 = DAT_180c7e0f8; puVar16 != puVar14; puVar16 = puVar16 + 8) {
    if ((undefined8 *)uVar8 != (undefined8 *)0x0) {
      _Buf2 = (undefined8 *)uVar8;
      if (0xf < *(ulonglong *)(uVar8 + 0x18)) {
        _Buf2 = *(undefined8 **)uVar8;
      }
      _Size = puVar16[6];
      _Buf1 = puVar16 + 4;
      if (0xf < (ulonglong)puVar16[7]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size == *(size_t *)(uVar8 + 0x10)) &&
         ((_Size == 0 || (iVar11 = memcmp(_Buf1,_Buf2,_Size), iVar11 == 0)))) break;
    }
  }
  if (puVar16 == puVar14) {
    local_b4 = 0;
  }
  else {
    local_b4 = (int)((longlong)puVar16 - (longlong)puVar18 >> 6) + 1;
  }
  if (((undefined8 *)uVar8 == (undefined8 *)0x0) || (local_b4 != 0)) {
    pcVar17 = "Choose a Skybox";
    if (puVar18 == puVar14) {
      pcVar17 = "No Skyboxes Found";
    }
  }
  else {
    pcVar17 = "File Not Found";
  }
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined8 *)0x0;
  local_b0._0_8_ = FUN_18015bca0(8);
  local_a0 = (undefined8 *)(local_b0._0_8_ + 8);
  *(char **)local_b0._0_8_ = pcVar17;
  puVar18 = DAT_180c7e138;
  local_b0._8_8_ = local_a0;
  for (puVar16 = DAT_180c7e130; puVar16 != puVar18; puVar16 = puVar16 + 4) {
    puVar14 = puVar16;
    if (0xf < (ulonglong)puVar16[3]) {
      puVar14 = (undefined8 *)*puVar16;
    }
    local_168._0_8_ = puVar14;
    FUN_1801543a0(local_b0,local_168);
  }
  FUN_1805302b0(
               "Add compiled CS2 sky textures (.vtex_c) to the Skyboxes folder. New files appear automatically."
               );
  FUN_180488c60();
  local_130 = 0;
  uStack_128 = 0;
  auStack_120 = ZEXT816(0);
  local_110 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (ulonglong)uStack_10f << 8;
  uStack_d0 = 0;
  auVar21 = vunpcklps_avx(auVar26._0_16_,auVar26._0_16_);
  local_c8 = auVar21._0_8_;
  local_168._8_8_ = (longlong)(local_b0._8_8_ - local_b0._0_8_) >> 3;
  local_168._0_8_ = local_b0._0_8_;
  cVar10 = FUN_18048d220("Skybox File",&local_b4,local_168);
  if ((cVar10 != '\0') && (0 < local_b4)) {
    local_168._0_8_ = DAT_180c7e0f8 + (longlong)local_b4 * 8 + -4;
    if (0xf < (ulonglong)DAT_180c7e0f8[(longlong)local_b4 * 8 + -1]) {
      local_168._0_8_ = DAT_180c7e0f8[(longlong)local_b4 * 8 + -4];
    }
    local_168._8_8_ = DAT_180c7e0f8[(longlong)local_b4 * 8 + -2];
    FUN_1800d3530(&DAT_180cc8e50,local_168);
  }
  cVar10 = FUN_18048b0e0("Open Skyboxes Folder",&DAT_180829a44,1);
  if (cVar10 == '\0') goto LAB_180541bd4;
  FUN_18036be20();
  if (local_88 == 0) {
LAB_180541bc3:
    cVar10 = '\x01';
  }
  else {
    lpFile = (LPCWSTR ***)local_98;
    if (7 < local_80) {
      lpFile = local_98[0];
    }
    pHVar15 = ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    if ((longlong)pHVar15 < 0x21) goto LAB_180541bc3;
    cVar10 = '\0';
  }
  FUN_18015b930(local_98);
  DAT_180c7e129 = cVar10;
LAB_180541bd4:
  FUN_180488f10();
  if (DAT_180c7e129 != '\0') {
    FUN_1805302b0("Couldn\'t open the Skyboxes folder.");
  }
  FUN_1800f0160(local_b0);
  uVar8 = local_148._8_8_;
  if ((longlong *)local_148._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_148._8_8_ + 8);
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (*(code *)**(undefined8 **)local_148._8_8_)(local_148._8_8_);
      LOCK();
      piVar2 = (int *)(uVar8 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*(longlong *)uVar8 + 8))(uVar8);
      }
    }
  }
}



