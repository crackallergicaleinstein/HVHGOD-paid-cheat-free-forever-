// FUN_18053be30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053be30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053be30(undefined8 *param_1,undefined4 param_2,byte param_3)

{
  longlong lVar1;
  size_t sVar2;
  size_t _Size;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  undefined1 (*pauVar7) [16];
  undefined8 *_Buf2;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  char *pcVar13;
  int **ppiVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined4 local_res10 [6];
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined1 (*local_1b0) [16];
  undefined1 (*local_1a8) [16];
  undefined1 (*local_1a0) [16];
  undefined1 (**local_198) [16];
  undefined4 local_188;
  uint local_178;
  undefined8 *local_170;
  undefined1 (*local_168) [16];
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 (*local_128) [16];
  undefined8 local_120;
  undefined8 *local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  int *local_e8;
  undefined1 *puStack_e0;
  longlong *plStack_d8;
  undefined1 *puStack_d0;
  undefined8 *local_c8;
  undefined4 *local_c0;
  int local_b8 [2];
  undefined1 local_b0 [16];
  undefined8 *local_a0;
  undefined1 local_98 [16];
  undefined8 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_178 = 0;
  local_res10[0] = param_2;
  local_118 = param_1;
  if ((DAT_180cd7048 & 1) == 0) {
    DAT_180cd7048 = DAT_180cd7048 | 1;
    atexit(FUN_180663f00);
  }
  lVar16 = (ulonglong)param_3 * 0x40;
  plVar17 = (longlong *)(&DAT_180c7e150 + lVar16);
  local_170 = (undefined8 *)GetTickCount64();
  if ((*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') ||
     (*(undefined8 **)(&DAT_180c7e180 + lVar16) <= local_170)) {
    FUN_1802c6c70(local_160);
    uVar12 = 0x10;
    local_178 = 0x10;
    if (plVar17 != (longlong *)local_160) {
      FUN_180111b90(plVar17);
      *plVar17 = local_160._0_8_;
      *(undefined8 *)(&DAT_180c7e158 + lVar16) = local_160._8_8_;
      *(undefined8 *)(&DAT_180c7e160 + lVar16) = local_150;
      local_160 = (undefined1  [16])0x0;
      local_150 = 0;
    }
    FUN_180111b90(local_160);
    lVar1 = *(longlong *)(&DAT_180c7e170 + lVar16);
    lVar8 = *(longlong *)(&DAT_180c7e168 + lVar16);
    if (lVar8 != lVar1) {
      do {
        FUN_18015c010(lVar8);
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != lVar1);
      *(undefined8 *)(&DAT_180c7e170 + lVar16) = *(undefined8 *)(&DAT_180c7e168 + lVar16);
    }
    local_120 = DAT_180c62ca8;
    auVar20 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
    auVar20 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar20);
    auVar25 = ZEXT1664(auVar20);
    pauVar9 = (undefined1 (*) [16])*plVar17;
    pauVar15 = *(undefined1 (**) [16])(&DAT_180c7e158 + lVar16);
    local_128 = pauVar15;
    if (pauVar9 != pauVar15) {
      uVar18 = 0;
      uVar19 = 0xf;
      auVar21 = ZEXT464(0x43280000);
      auVar23 = ZEXT864(0);
      do {
        if (*(ulonglong *)(pauVar9[1] + 8) < 0x10) {
          local_1b0 = pauVar9;
          pauVar7 = pauVar9;
        }
        else {
          local_1b0 = *(undefined1 (**) [16])*pauVar9;
          pauVar7 = *(undefined1 (**) [16])*pauVar9;
        }
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + *(longlong *)pauVar9[1]);
        local_188 = 0;
        local_198 = &local_168;
        local_1b8 = auVar23._0_4_;
        local_1a8 = pauVar7;
        local_1a0 = pauVar7;
        local_168 = pauVar7;
        FUN_1804ea040(local_110,local_120,auVar25._0_8_,DAT_180b0a41c * auVar21._0_4_);
        auVar24 = auVar25._0_16_;
        auVar22 = auVar23._0_16_;
        auVar20 = auVar21._0_16_;
        if (local_168 == pauVar7) {
          local_148 = (undefined1  [16])0x0;
          local_138 = (undefined1  [16])0x0;
          uVar10 = *(ulonglong *)pauVar9[1];
          pauVar15 = pauVar9;
          if (0xf < *(ulonglong *)(pauVar9[1] + 8)) {
            pauVar15 = *(undefined1 (**) [16])*pauVar9;
          }
          if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (uVar10 < 0x10) {
            local_138._8_8_ = 0xf;
            local_138._0_8_ = uVar10;
            local_148 = *pauVar15;
          }
          else {
            uVar11 = uVar10 | 0xf;
            if (uVar11 < 0x8000000000000000) {
              if (uVar11 < 0x16) {
                uVar11 = 0x16;
              }
            }
            else {
              uVar11 = 0x7fffffffffffffff;
            }
            uVar4 = FUN_18015bca0(uVar11 + 1);
            local_148._0_8_ = uVar4;
            local_138._8_8_ = uVar11;
            local_138._0_8_ = uVar10;
            FUN_18063aed0(uVar4,pauVar15,uVar10 + 1);
            auVar24 = auVar25._0_16_;
            auVar22 = auVar23._0_16_;
            auVar20 = auVar21._0_16_;
          }
          ppiVar14 = (int **)local_148;
          uVar12 = uVar12 | 1;
          pauVar15 = local_128;
        }
        else {
          pauVar7 = pauVar9;
          if (0xf < *(ulonglong *)(pauVar9[1] + 8)) {
            pauVar7 = *(undefined1 (**) [16])*pauVar9;
          }
          local_108 = (undefined1  [16])0x0;
          local_f8 = (undefined1  [16])0x0;
          if (pauVar7 == local_168) {
            local_f8._8_8_ = uVar19;
            local_f8._0_8_ = uVar18;
            local_108._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar20[0xf] = 0;
            auVar20._0_15_ = local_108._1_15_;
            local_108 = auVar20 << 8;
          }
          else {
            FUN_18015ba30(local_108,0,(longlong)local_168 - (longlong)pauVar7);
          }
          local_178 = uVar12 | 2;
          puVar5 = (undefined8 *)FUN_18015b2a0(local_108,&DAT_1807d3edc,3);
          auVar24 = auVar25._0_16_;
          auVar22 = auVar23._0_16_;
          auVar20 = auVar21._0_16_;
          local_e8 = (int *)*puVar5;
          puStack_e0 = (undefined1 *)puVar5[1];
          plStack_d8 = (longlong *)puVar5[2];
          puStack_d0 = (undefined1 *)puVar5[3];
          *(undefined1 *)puVar5 = 0;
          puVar5[2] = 0;
          puVar5[3] = 0xf;
          ppiVar14 = &local_e8;
          uVar12 = uVar12 | 0xe;
        }
        lVar1 = *(longlong *)(&DAT_180c7e170 + lVar16);
        local_178 = uVar12;
        if (lVar1 == *(longlong *)(&DAT_180c7e178 + lVar16)) {
          auVar21 = ZEXT1664(auVar20);
          auVar23 = ZEXT1664(auVar22);
          auVar25 = ZEXT1664(auVar24);
          FUN_1802117e0(&DAT_180c7e168 + lVar16,lVar1);
        }
        else {
          auVar21 = ZEXT1664(auVar20);
          auVar23 = ZEXT1664(auVar22);
          auVar25 = ZEXT1664(auVar24);
          FUN_18015b360(lVar1,ppiVar14);
          *(longlong *)(&DAT_180c7e170 + lVar16) = *(longlong *)(&DAT_180c7e170 + lVar16) + 0x20;
        }
        if ((uVar12 & 4) != 0) {
          uVar12 = uVar12 & 0xfffffffb;
          local_178 = uVar12;
          FUN_18015c010(&local_e8);
        }
        if ((uVar12 & 2) != 0) {
          uVar12 = uVar12 & 0xfffffffd;
          local_178 = uVar12;
          FUN_18015c010(local_108);
        }
        if ((uVar12 & 1) != 0) {
          uVar12 = uVar12 & 0xfffffffe;
          local_178 = uVar12;
          FUN_18015c010(local_148);
        }
        pauVar9 = pauVar9 + 2;
      } while (pauVar9 != pauVar15);
      param_1 = local_118;
    }
    *(undefined8 **)(&DAT_180c7e180 + lVar16) = local_170 + 0x7d;
    if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') {
      (&DAT_180c7e188)[lVar16] = 0;
    }
  }
  puVar5 = *(undefined8 **)(&DAT_180c7e158 + lVar16);
  puVar6 = (undefined8 *)*plVar17;
  if (puVar6 != puVar5) {
    uVar10 = param_1[3];
    sVar2 = param_1[2];
    do {
      _Buf2 = param_1;
      if (0xf < uVar10) {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar6[2];
      _Buf1 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        _Buf1 = (undefined8 *)*puVar6;
      }
    } while (((_Size != sVar2) || ((_Size != 0 && (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 != 0))))
            && (puVar6 = puVar6 + 4, puVar6 != puVar5));
    if (puVar6 != puVar5) {
      local_b8[0] = (int)((longlong)puVar6 - *plVar17 >> 5) + 1;
      goto LAB_18053c27f;
    }
  }
  local_b8[0] = 0;
LAB_18053c27f:
  if ((param_1[2] == 0) || (puVar6 != puVar5)) {
    pcVar13 = "Choose a WAV File";
    if ((undefined8 *)*plVar17 == puVar5) {
      pcVar13 = "No WAV Files Found";
    }
  }
  else {
    pcVar13 = "File Not Found";
  }
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined8 *)0x0;
  local_b0._0_8_ = FUN_18015bca0(8);
  local_a0 = (undefined8 *)(local_b0._0_8_ + 8);
  *(char **)local_b0._0_8_ = pcVar13;
  puVar5 = *(undefined8 **)(&DAT_180c7e170 + lVar16);
  puVar6 = *(undefined8 **)(&DAT_180c7e168 + lVar16);
  local_b0._8_8_ = local_a0;
  if (puVar6 != puVar5) {
    do {
      local_170 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        local_170 = (undefined8 *)*puVar6;
      }
      FUN_1801543a0(local_b0,&local_170);
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar5);
  }
  uVar10 = (longlong)(local_b0._8_8_ - local_b0._0_8_) >> 3;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined8 *)0x0;
  if (uVar10 != 0) {
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    puVar6 = (undefined8 *)FUN_18015bca0(uVar10 * 8);
    local_98._0_8_ = puVar6;
    puVar5 = puVar6 + uVar10;
    local_170 = (undefined8 *)0x0;
    local_88 = puVar5;
    iVar3 = memcmp(&PTR_DAT_18086c048,&local_170,8);
    if (iVar3 == 0) {
      FUN_18063ab10(puVar6,0,uVar10 * 8);
    }
    else {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar6 = &DAT_18085d58c;
        puVar6 = puVar6 + 1;
      }
    }
    local_98._8_8_ = puVar5;
  }
  FUN_1805302b0("Add .wav files to the CS2 Runtime Sounds folder. New files appear automatically.");
  local_e8 = local_b8;
  puStack_e0 = local_b0;
  puStack_d0 = local_98;
  local_c0 = local_res10;
  plStack_d8 = plVar17;
  local_c8 = param_1;
  FUN_180488c60();
  FUN_18053c470(&local_e8);
  FUN_180488f10();
  if ((&DAT_180c7e188)[lVar16] != '\0') {
    FUN_1805302b0("Couldn\'t open the Sounds folder.");
  }
  FUN_1800f0160(local_98);
  FUN_1800f0160(local_b0);
}



