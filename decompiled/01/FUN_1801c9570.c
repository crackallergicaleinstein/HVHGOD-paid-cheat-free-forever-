// FUN_1801c9570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c9570 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801c9570(longlong param_1,char param_2)

{
  byte bVar1;
  float *pfVar2;
  size_t _Size;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  void *_Buf1;
  bool bVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  byte *pbVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  longlong *plVar27;
  HMODULE pHVar28;
  ulonglong uVar29;
  undefined8 *****pppppuVar30;
  undefined8 *_Buf1_00;
  undefined8 uVar31;
  void *pvVar32;
  void **ppvVar33;
  undefined1 *puVar34;
  byte *pbVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  byte *pbVar38;
  void **ppvVar39;
  byte *pbVar40;
  char *pcVar41;
  ulonglong uVar42;
  byte *pbVar43;
  byte *pbVar44;
  char **ppcVar45;
  uint uVar46;
  size_t sVar47;
  bool bVar48;
  undefined1 auVar50 [12];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auStack_aa8 [32];
  void **local_a88;
  void **local_a80;
  byte *local_a78;
  byte *local_a70;
  undefined8 local_a68;
  uint local_a60;
  longlong local_a58;
  byte local_a48;
  char local_a47;
  uint local_a44;
  void **local_a38;
  longlong lStack_a30;
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  byte *local_9f8;
  byte *local_9e8;
  byte *pbStack_9e0;
  byte *local_9d8;
  byte *pbStack_9d0;
  longlong local_9c8;
  undefined1 local_9c0 [16];
  undefined1 local_9b0 [16];
  undefined8 local_9a0;
  undefined1 local_998 [16];
  undefined1 auStack_988 [16];
  undefined1 local_978 [16];
  undefined1 local_968 [16];
  byte *local_958;
  byte *pbStack_950;
  undefined1 local_948 [16];
  byte *pbStack_938;
  undefined8 uStack_930;
  undefined1 local_928 [16];
  undefined8 uStack_918;
  ulonglong uStack_910;
  undefined1 local_908 [16];
  byte *pbStack_8f8;
  undefined8 uStack_8f0;
  ulonglong local_8e8;
  undefined1 local_8e0;
  undefined1 local_8d8 [16];
  byte *local_8c8;
  ulonglong local_8c0;
  byte *local_8b8 [4];
  undefined8 *****local_898 [2];
  longlong local_888;
  ulonglong local_880;
  char *local_878 [3];
  char *local_860;
  void *local_858;
  longlong local_850;
  void **local_848;
  longlong lStack_840;
  void **local_838;
  longlong lStack_830;
  void **local_828;
  longlong lStack_820;
  void *local_818;
  longlong local_810;
  void **local_808;
  longlong lStack_800;
  void *local_7f8;
  longlong local_7f0;
  byte *local_7e8;
  longlong local_7e0;
  byte *local_7d8;
  longlong local_7d0;
  byte *local_7c8;
  longlong local_7c0;
  void **local_7b8;
  longlong lStack_7b0;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_aa8;
  auVar54._12_4_ = 0;
  auVar54._0_12_ = local_a18._4_12_;
  local_a18 = auVar54 << 0x20;
  local_a47 = param_2;
  local_9c8 = param_1;
  FUN_180165920(local_898,2,L"offsets.bridge");
  if (local_888 == 0) {
    FUN_18063ab10(&local_858,0,0x800);
    FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                  "[OFFSETS] LOCALAPPDATA is unavailable; dynamic manifest cannot load");
    FUN_1800a9e50(3,&local_858);
    goto LAB_1801cb1d2;
  }
  local_8c8 = (byte *)0x0;
  local_8c0 = 0xf;
  local_8d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar8[0xf] = 0;
  auVar8._0_15_ = local_8d8._1_15_;
  local_8d8 = auVar8 << 8;
  local_9a0 = FUN_18003af60(local_8d8);
  if (local_8c8 != (byte *)0x0) {
    local_9d8 = (byte *)0x1807c6158;
    pbStack_9d0 = (byte *)0x7;
    cVar18 = FUN_180010b80(&local_9d8,local_8d8);
    pbVar22 = local_8c8;
    if (cVar18 == '\0') {
      FUN_18063ab10(&local_858,0,0x800);
      pcVar41 = "[OFFSETS] Rejected offset table without a valid signature-derived feature key";
    }
    else {
      pbVar44 = local_8d8;
      if (0xf < local_8c0) {
        pbVar44 = (byte *)local_8d8._0_8_;
      }
      local_a88 = (void **)0xb;
      local_9f8 = pbVar44;
      lVar21 = FUN_180114410(pbVar44,local_8c8,0xffffffffffffffff,"\nsignature\t");
      if ((lVar21 == -1) || ((pbVar22 + -1)[(longlong)pbVar44] != 10)) {
LAB_1801cb17f:
        FUN_18063ab10(&local_858,0,0x800);
        pcVar41 = "[OFFSETS] Rejected missing or invalid API signature";
      }
      else {
        pbVar40 = (byte *)(lVar21 + 0xb);
        if (pbVar22 < pbVar40) {
LAB_1801cb21d:
                    /* WARNING: Subroutine does not return */
          FUN_18015ac40();
        }
        pbVar43 = (byte *)(lVar21 + 1);
        if (pbVar22 < (byte *)(lVar21 + 1)) {
          pbVar43 = pbVar22;
        }
        local_958 = pbVar40 + (longlong)pbVar44;
        pbStack_950 = pbVar22 + (-0xc - lVar21);
        if (pbVar22 + -(longlong)pbVar40 < pbVar22 + (-0xc - lVar21)) {
          pbStack_950 = pbVar22 + -(longlong)pbVar40;
        }
        local_9e8 = pbVar44;
        pbStack_9e0 = pbVar43;
        local_9d8 = pbVar44;
        pbStack_9d0 = pbVar43;
        cVar18 = FUN_180026a30(&local_9e8,&local_958);
        if (cVar18 == '\0') goto LAB_1801cb17f;
        local_958 = pbVar44;
        pbStack_950 = pbVar43;
        cVar18 = FUN_1801c7960(&local_958);
        if (cVar18 == '\0') {
          FUN_18063ab10(&local_858,0,0x800);
          pcVar41 = "[OFFSETS] Rejected invalid structure, duplicate, counter or address range";
          goto LAB_1801cb19a;
        }
        if (pbVar43 != (byte *)0x0) {
          pbVar22 = (byte *)thunk_FUN_1805f7e70(pbVar44,pbVar43 + (longlong)pbVar44,10);
          lVar21 = -1;
          if (pbVar22 != pbVar43 + (longlong)pbVar44) {
            lVar21 = (longlong)pbVar22 - (longlong)pbVar44;
          }
          if ((byte *)0x2 < pbVar43) {
            bVar48 = *pbVar44 < 0x76;
            if (((*pbVar44 == 0x76) && (bVar48 = pbVar44[1] < 0x31, pbVar44[1] == 0x31)) &&
               (bVar48 = pbVar44[2] < 9, pbVar44[2] == 9)) {
              uVar46 = 0;
            }
            else {
              uVar46 = -(uint)bVar48 | 1;
            }
            if ((uVar46 == 0) && (lVar21 != -1)) {
              pbVar22 = (byte *)(lVar21 + 1);
              if (pbVar43 < pbVar22) goto LAB_1801cb21d;
              uVar29 = 0xffffffffffffffff;
              if ((longlong)pbVar43 - (longlong)pbVar22 != 0xffffffffffffffff) {
                uVar29 = (longlong)pbVar43 - (longlong)pbVar22;
              }
              if ((uVar29 < 0x1b) ||
                 (iVar19 = memcmp(pbVar22 + (longlong)pbVar44,"HVHGOD-INTERNAL-OFFSETS-V1\n",0x1b),
                 iVar19 != 0)) goto LAB_1801cb162;
              if (DAT_180c7df28 == (undefined8 *)0x0) {
                local_958 = (byte *)0x180827288;
                pbStack_950 = (byte *)0x15;
                DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_958);
              }
              pbVar22 = (byte *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                          ((longlong *)*DAT_180c7df28,0x108);
              if (pbVar22 == (byte *)0x0) {
                pbVar22 = (byte *)0x0;
              }
              else {
                local_958 = pbVar22;
                FUN_18063ab10(pbVar22,0,0x108);
                pbVar22 = (byte *)FUN_1801cbb70(pbVar22);
              }
              local_a44 = 0x102;
              pbVar40 = (byte *)0x0;
              local_958 = pbVar22;
              if (pbVar43 != (byte *)0x0) {
                pbVar38 = (byte *)0x0;
                uVar31 = 0xf;
                auVar55 = ZEXT464(0x5f000000);
                do {
                  uVar29 = 0;
                  pbVar44 = pbVar44 + (longlong)pbVar40;
                  pbVar35 = local_9f8 + (longlong)pbVar43;
                  local_9e8 = (byte *)thunk_FUN_1805f7e70(pbVar44,pbVar35,10);
                  if (local_9e8 == pbVar35) {
                    local_9e8 = (byte *)0xffffffffffffffff;
LAB_1801c9948:
                    pbVar35 = pbVar43;
                  }
                  else {
                    local_9e8 = local_9e8 + -(longlong)local_9f8;
                    if (local_9e8 == (byte *)0xffffffffffffffff) goto LAB_1801c9948;
                    pbVar35 = local_9e8;
                  }
                  if (pbVar43 < pbVar40) {
LAB_1801cb229:
                    /* WARNING: Subroutine does not return */
                    FUN_18015ac40();
                  }
                  uVar42 = (longlong)pbVar35 - (longlong)pbVar40;
                  if ((ulonglong)((longlong)pbVar43 - (longlong)pbVar40) <
                      (ulonglong)((longlong)pbVar35 - (longlong)pbVar40)) {
                    uVar42 = (longlong)pbVar43 - (longlong)pbVar40;
                  }
                  if ((uVar42 != 0) && (pbVar44[uVar42 - 1] == 0xd)) {
                    uVar42 = uVar42 - 1;
                  }
                  local_858 = (void *)0x0;
                  local_850 = 0;
                  local_848 = (void **)0x0;
                  lStack_840 = 0;
                  local_838 = (void **)0x0;
                  lStack_830 = 0;
                  local_828 = (void **)0x0;
                  lStack_820 = 0;
                  local_818 = (void *)0x0;
                  local_810 = 0;
                  local_808 = (void **)0x0;
                  lStack_800 = 0;
                  local_7f8 = (void *)0x0;
                  local_7f0 = 0;
                  local_7e8 = (byte *)0x0;
                  local_7e0 = 0;
                  local_7d8 = (byte *)0x0;
                  local_7d0 = 0;
                  local_7c8 = (byte *)0x0;
                  local_7c0 = 0;
                  local_7b8 = (void **)0x0;
                  lStack_7b0 = 0;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = local_a18._8_8_;
                  local_a18 = auVar9 << 0x40;
                  local_a38 = &local_858;
                  do {
                    if ((uVar29 < uVar42) &&
                       (pbVar40 = (byte *)thunk_FUN_1805f7e70(pbVar44 + uVar29,pbVar44 + uVar42,9),
                       pbVar40 != pbVar44 + uVar42)) {
                      lVar21 = (longlong)pbVar40 - (longlong)pbVar44;
                      if (lVar21 == -1) goto LAB_1801c9a5d;
                      pvVar32 = (void *)(lVar21 - uVar29);
                    }
                    else {
                      lVar21 = -1;
LAB_1801c9a5d:
                      pvVar32 = (void *)0xffffffffffffffff;
                    }
                    if (uVar42 < uVar29) goto LAB_1801cb229;
                    *local_a38 = pbVar44 + uVar29;
                    _Buf1 = local_858;
                    if ((void *)(uVar42 - uVar29) < pvVar32) {
                      pvVar32 = (void *)(uVar42 - uVar29);
                    }
                    local_a38[1] = pvVar32;
                    lVar23 = local_850;
                    uVar36 = local_a18._0_8_ + 1;
                    local_a18._0_8_ = uVar36;
                    local_a38 = local_a38 + 2;
                  } while ((lVar21 != -1) && (uVar29 = lVar21 + 1, uVar36 < 0xb));
                  if (uVar36 != 0) {
                    if (((local_850 == 2) &&
                        (iVar19 = memcmp(local_858,&DAT_18070084c,2), iVar19 == 0)) && (10 < uVar36)
                       ) {
                      pbVar22[0x101] = 1;
                      uVar29 = 0;
                      if (lStack_840 != 0) {
                        ppvVar39 = (void **)((longlong)local_848 + lStack_840);
                        bVar48 = false;
                        ppvVar33 = local_848;
                        if (local_848 != ppvVar39) {
                          do {
                            bVar1 = (&DAT_1807c5b10)[*(byte *)ppvVar33];
                            if (9 < bVar1) break;
                            if ((uVar29 < 0x1999999999999999) ||
                               ((uVar29 == 0x1999999999999999 && ((ulonglong)bVar1 < 6)))) {
                              uVar29 = (ulonglong)bVar1 + uVar29 * 10;
                            }
                            else {
                              bVar48 = true;
                            }
                            ppvVar33 = (void **)((longlong)ppvVar33 + 1);
                          } while (ppvVar33 != ppvVar39);
                        }
                        if (((ppvVar33 == local_848) || (bVar48)) || (ppvVar33 != ppvVar39)) {
                          uVar29 = 0;
                        }
                      }
                      *(ulonglong *)(pbVar22 + 0xe0) = uVar29;
                      local_a38 = local_838;
                      lStack_a30 = lStack_830;
                      pbVar40 = (byte *)FUN_180166360(local_a18,&local_a38);
                      auVar54 = auVar55._0_16_;
                      pbVar44 = pbVar22 + 0x60;
                      if (pbVar44 != pbVar40) {
                        FUN_18015c010(pbVar44);
                        auVar54 = auVar55._0_16_;
                        uVar25 = *(undefined8 *)(pbVar40 + 8);
                        uVar3 = *(undefined8 *)(pbVar40 + 0x10);
                        uVar4 = *(undefined8 *)(pbVar40 + 0x18);
                        *(undefined8 *)pbVar44 = *(undefined8 *)pbVar40;
                        *(undefined8 *)(pbVar22 + 0x68) = uVar25;
                        *(undefined8 *)(pbVar22 + 0x70) = uVar3;
                        *(undefined8 *)(pbVar22 + 0x78) = uVar4;
                        pbVar40[0x10] = 0;
                        pbVar40[0x11] = 0;
                        pbVar40[0x12] = 0;
                        pbVar40[0x13] = 0;
                        pbVar40[0x14] = 0;
                        pbVar40[0x15] = 0;
                        pbVar40[0x16] = 0;
                        pbVar40[0x17] = 0;
                        pbVar40[0x18] = 0xf;
                        pbVar40[0x19] = 0;
                        pbVar40[0x1a] = 0;
                        pbVar40[0x1b] = 0;
                        pbVar40[0x1c] = 0;
                        pbVar40[0x1d] = 0;
                        pbVar40[0x1e] = 0;
                        pbVar40[0x1f] = 0;
                        *pbVar40 = 0;
                      }
                      auVar55 = ZEXT1664(auVar54);
                      FUN_18015c010(local_a18);
                      local_a38 = local_828;
                      lStack_a30 = lStack_820;
                      pbVar40 = (byte *)FUN_180166360(local_a18,&local_a38);
                      auVar54 = auVar55._0_16_;
                      pbVar44 = pbVar22 + 0x80;
                      if (pbVar44 != pbVar40) {
                        FUN_18015c010(pbVar44);
                        auVar54 = auVar55._0_16_;
                        uVar25 = *(undefined8 *)(pbVar40 + 8);
                        uVar3 = *(undefined8 *)(pbVar40 + 0x10);
                        uVar4 = *(undefined8 *)(pbVar40 + 0x18);
                        *(undefined8 *)pbVar44 = *(undefined8 *)pbVar40;
                        *(undefined8 *)(pbVar22 + 0x88) = uVar25;
                        *(undefined8 *)(pbVar22 + 0x90) = uVar3;
                        *(undefined8 *)(pbVar22 + 0x98) = uVar4;
                        pbVar40[0x10] = 0;
                        pbVar40[0x11] = 0;
                        pbVar40[0x12] = 0;
                        pbVar40[0x13] = 0;
                        pbVar40[0x14] = 0;
                        pbVar40[0x15] = 0;
                        pbVar40[0x16] = 0;
                        pbVar40[0x17] = 0;
                        pbVar40[0x18] = 0xf;
                        pbVar40[0x19] = 0;
                        pbVar40[0x1a] = 0;
                        pbVar40[0x1b] = 0;
                        pbVar40[0x1c] = 0;
                        pbVar40[0x1d] = 0;
                        pbVar40[0x1e] = 0;
                        pbVar40[0x1f] = 0;
                        *pbVar40 = 0;
                      }
                      auVar55 = ZEXT1664(auVar54);
                      FUN_18015c010(local_a18);
                      local_a38 = local_808;
                      lStack_a30 = lStack_800;
                      pbVar40 = (byte *)FUN_180166360(local_a18,&local_a38);
                      auVar54 = auVar55._0_16_;
                      pbVar44 = pbVar22 + 0xa0;
                      if (pbVar44 != pbVar40) {
                        FUN_18015c010(pbVar44);
                        auVar54 = auVar55._0_16_;
                        uVar25 = *(undefined8 *)(pbVar40 + 8);
                        uVar3 = *(undefined8 *)(pbVar40 + 0x10);
                        uVar4 = *(undefined8 *)(pbVar40 + 0x18);
                        *(undefined8 *)pbVar44 = *(undefined8 *)pbVar40;
                        *(undefined8 *)(pbVar22 + 0xa8) = uVar25;
                        *(undefined8 *)(pbVar22 + 0xb0) = uVar3;
                        *(undefined8 *)(pbVar22 + 0xb8) = uVar4;
                        pbVar40[0x10] = 0;
                        pbVar40[0x11] = 0;
                        pbVar40[0x12] = 0;
                        pbVar40[0x13] = 0;
                        pbVar40[0x14] = 0;
                        pbVar40[0x15] = 0;
                        pbVar40[0x16] = 0;
                        pbVar40[0x17] = 0;
                        pbVar40[0x18] = 0xf;
                        pbVar40[0x19] = 0;
                        pbVar40[0x1a] = 0;
                        pbVar40[0x1b] = 0;
                        pbVar40[0x1c] = 0;
                        pbVar40[0x1d] = 0;
                        pbVar40[0x1e] = 0;
                        pbVar40[0x1f] = 0;
                        *pbVar40 = 0;
                      }
                      auVar55 = ZEXT1664(auVar54);
                      FUN_18015c010(local_a18);
                      if (local_7f0 == 1) {
                        iVar19 = memcmp(local_7f8,&DAT_180700848,1);
                        bVar48 = iVar19 == 0;
                      }
                      else {
                        bVar48 = false;
                      }
                      pbVar22[0x100] = bVar48;
                      uVar29 = 0;
                      if (local_7e0 != 0) {
                        pbVar44 = local_7e8 + local_7e0;
                        bVar48 = false;
                        pbVar40 = local_7e8;
                        if (local_7e8 != pbVar44) {
                          do {
                            bVar1 = (&DAT_1807c5b10)[*pbVar40];
                            if (9 < bVar1) break;
                            if ((uVar29 < 0x1999999999999999) ||
                               ((uVar29 == 0x1999999999999999 && ((ulonglong)bVar1 < 6)))) {
                              uVar29 = (ulonglong)bVar1 + uVar29 * 10;
                            }
                            else {
                              bVar48 = true;
                            }
                            pbVar40 = pbVar40 + 1;
                          } while (pbVar40 != pbVar44);
                        }
                        if (((pbVar40 == local_7e8) || (bVar48)) || (pbVar40 != pbVar44)) {
                          uVar29 = 0;
                        }
                      }
                      *(ulonglong *)(pbVar22 + 0xe8) = uVar29;
                      uVar29 = 0;
                      if (local_7d0 != 0) {
                        bVar48 = false;
                        pbVar44 = local_7d8;
                        if (local_7d8 != local_7d8 + local_7d0) {
                          do {
                            bVar1 = (&DAT_1807c5b10)[*pbVar44];
                            if (9 < bVar1) break;
                            if ((uVar29 < 0x1999999999999999) ||
                               ((uVar29 == 0x1999999999999999 && (bVar1 < 6)))) {
                              uVar29 = (ulonglong)bVar1 + uVar29 * 10;
                            }
                            else {
                              bVar48 = true;
                            }
                            pbVar44 = pbVar44 + 1;
                          } while (pbVar44 != local_7d8 + local_7d0);
                        }
                        if (((pbVar44 == local_7d8) || (bVar48)) ||
                           (pbVar44 != local_7d8 + local_7d0)) {
                          uVar29 = 0;
                        }
                      }
                      *(ulonglong *)(pbVar22 + 0xf0) = uVar29;
                      uVar29 = 0;
                      if (local_7c0 != 0) {
                        bVar48 = false;
                        pbVar44 = local_7c8;
                        if (local_7c8 != local_7c8 + local_7c0) {
                          do {
                            bVar1 = (&DAT_1807c5b10)[*pbVar44];
                            if (9 < bVar1) break;
                            if ((uVar29 < 0x1999999999999999) ||
                               ((uVar29 == 0x1999999999999999 && ((ulonglong)bVar1 < 6)))) {
                              uVar29 = (ulonglong)bVar1 + uVar29 * 10;
                            }
                            else {
                              bVar48 = true;
                            }
                            pbVar44 = pbVar44 + 1;
                          } while (pbVar44 != local_7c8 + local_7c0);
                        }
                        if (((pbVar44 == local_7c8) || (bVar48)) ||
                           (pbVar44 != local_7c8 + local_7c0)) {
                          uVar29 = 0;
                        }
                      }
                      *(ulonglong *)(pbVar22 + 0xf8) = uVar29;
                      local_a38 = local_7b8;
                      lStack_a30 = lStack_7b0;
                      pbVar40 = (byte *)FUN_180166360(local_a18,&local_a38);
                      auVar54 = auVar55._0_16_;
                      pbVar44 = pbVar22 + 0xc0;
                      if (pbVar44 != pbVar40) {
                        FUN_18015c010(pbVar44);
                        auVar54 = auVar55._0_16_;
                        uVar25 = *(undefined8 *)(pbVar40 + 8);
                        uVar3 = *(undefined8 *)(pbVar40 + 0x10);
                        uVar4 = *(undefined8 *)(pbVar40 + 0x18);
                        *(undefined8 *)pbVar44 = *(undefined8 *)pbVar40;
                        *(undefined8 *)(pbVar22 + 200) = uVar25;
                        *(undefined8 *)(pbVar22 + 0xd0) = uVar3;
                        *(undefined8 *)(pbVar22 + 0xd8) = uVar4;
                        pbVar40[0x10] = 0;
                        pbVar40[0x11] = 0;
                        pbVar40[0x12] = 0;
                        pbVar40[0x13] = 0;
                        pbVar40[0x14] = 0;
                        pbVar40[0x15] = 0;
                        pbVar40[0x16] = 0;
                        pbVar40[0x17] = 0;
                        pbVar40[0x18] = 0xf;
                        pbVar40[0x19] = 0;
                        pbVar40[0x1a] = 0;
                        pbVar40[0x1b] = 0;
                        pbVar40[0x1c] = 0;
                        pbVar40[0x1d] = 0;
                        pbVar40[0x1e] = 0;
                        pbVar40[0x1f] = 0;
                        *pbVar40 = 0;
                      }
                      auVar55 = ZEXT1664(auVar54);
                      FUN_18015c010(local_a18);
                      pbVar44 = *(byte **)(pbVar22 + 0xe8);
                      if ((pbVar44 == (byte *)0x0) || ((byte *)0x186a0 < pbVar44)) {
                        FUN_18063ab10(&local_858,0,0x800);
                        local_a88 = (void **)pbVar44;
                        FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                      "[OFFSETS] Rejected unreasonable manifest entry count: %zu");
                        goto LAB_1801cb144;
                      }
                      pfVar2 = *(float **)pbVar22;
                      auVar50 = SUB1612(ZEXT816(0),4);
                      if ((longlong)pbVar44 < 0) {
                        auVar50 = (undefined1  [12])0x0;
                      }
                      auVar49._0_4_ = (float)pbVar44 / *pfVar2;
                      auVar49._4_12_ = auVar50;
                      auVar54 = vroundss_avx(ZEXT816(0),auVar49,2);
                      lVar21 = 0;
                      fVar51 = auVar54._0_4_;
                      fVar53 = auVar55._0_4_;
                      if ((fVar53 <= fVar51) && (fVar51 = fVar51 - fVar53, fVar51 < fVar53)) {
                        lVar21 = -0x8000000000000000;
                      }
                      auVar54 = vroundss_avx(ZEXT816(0),
                                             ZEXT416((uint)((float)*(ulonglong *)(pfVar2 + 4) /
                                                           *pfVar2)),2);
                      fVar52 = auVar54._0_4_;
                      lVar23 = 0;
                      if ((fVar53 <= fVar52) && (fVar52 = fVar52 - fVar53, fVar52 < fVar53)) {
                        lVar23 = -0x8000000000000000;
                      }
                      uVar29 = (longlong)fVar52 + lVar23;
                      if ((ulonglong)((longlong)fVar52 + lVar23) <
                          (ulonglong)((longlong)fVar51 + lVar21)) {
                        uVar29 = (longlong)fVar51 + lVar21;
                      }
                      if (*(ulonglong *)(pfVar2 + 0xe) < uVar29) {
                        FUN_1801b82c0(pfVar2);
                      }
                    }
                    else if ((lVar23 == 6) && (iVar19 = memcmp(_Buf1,"module",6), iVar19 == 0)) {
                      if (uVar36 < 3) goto LAB_1801ca1d0;
                      ppvVar39 = (void **)0x0;
                      if (lStack_830 != 0) {
                        bVar48 = false;
                        ppvVar33 = local_838;
                        if (local_838 != (void **)((longlong)local_838 + lStack_830)) {
                          do {
                            bVar1 = (&DAT_1807c5b10)[*(byte *)ppvVar33];
                            if (9 < bVar1) break;
                            if ((ppvVar39 < (void **)0x1999999999999999) ||
                               ((ppvVar39 == (void **)0x1999999999999999 && ((ulonglong)bVar1 < 6)))
                               ) {
                              ppvVar39 = (void **)((ulonglong)bVar1 + (longlong)ppvVar39 * 10);
                            }
                            else {
                              bVar48 = true;
                            }
                            ppvVar33 = (void **)((longlong)ppvVar33 + 1);
                          } while (ppvVar33 != (void **)((longlong)local_838 + lStack_830));
                        }
                        if (((ppvVar33 == local_838) || (bVar48)) ||
                           (ppvVar33 != (void **)((longlong)local_838 + lStack_830))) {
                          ppvVar39 = (void **)0x0;
                        }
                      }
                      local_a18._8_8_ = lStack_840;
                      local_a18._0_8_ = local_848;
                      local_a38 = ppvVar39;
                      puVar24 = (undefined8 *)FUN_180166360(local_8b8,local_a18);
                      auVar54 = auVar55._0_16_;
                      pauVar26 = *(undefined1 (**) [16])(pbVar22 + 0x10);
                      if (pauVar26 == *(undefined1 (**) [16])(pbVar22 + 0x18)) {
                        FUN_1801cc170(pbVar22 + 8,pauVar26,puVar24);
                        auVar54 = auVar55._0_16_;
                      }
                      else {
                        *pauVar26 = (undefined1  [16])0x0;
                        *(undefined8 *)pauVar26[1] = 0;
                        *(undefined8 *)(pauVar26[1] + 8) = 0;
                        uVar25 = puVar24[1];
                        uVar3 = puVar24[2];
                        uVar4 = puVar24[3];
                        *(undefined8 *)*pauVar26 = *puVar24;
                        *(undefined8 *)(*pauVar26 + 8) = uVar25;
                        *(undefined8 *)pauVar26[1] = uVar3;
                        *(undefined8 *)(pauVar26[1] + 8) = uVar4;
                        *(undefined1 *)puVar24 = 0;
                        puVar24[2] = 0;
                        puVar24[3] = 0xf;
                        *(void ***)pauVar26[2] = ppvVar39;
                        *(longlong *)(pbVar22 + 0x10) = *(longlong *)(pbVar22 + 0x10) + 0x28;
                      }
                      auVar55 = ZEXT1664(auVar54);
                      FUN_18015c010(local_8b8);
                    }
                    else if (((uVar36 == 3) && (lVar23 == 5)) &&
                            (iVar19 = memcmp(_Buf1,"build",5), iVar19 == 0)) {
                      local_a18 = (undefined1  [16])0x0;
                      local_a08 = (undefined1  [16])0x0;
                      FUN_18015ba30(local_a18,local_838,lStack_830);
                      local_a38 = local_848;
                      lStack_a30 = lStack_840;
                      uVar25 = FUN_180166360(local_8b8,&local_a38);
                      lVar21 = FUN_1801cb830(pbVar22 + 0x20,local_978,uVar25);
                      cVar18 = *(char *)(lVar21 + 8);
                      FUN_18015c010(local_8b8);
                      FUN_18015c010(local_a18);
                      if (cVar18 == '\0') goto LAB_1801cb157;
                    }
                    else {
LAB_1801ca1d0:
                      if (((lVar23 == 6) && (iVar19 = memcmp(_Buf1,"offset",6), iVar19 == 0)) &&
                         (5 < uVar36)) {
                        local_948._1_15_ = SUB1615((undefined1  [16])0x0,1);
                        auVar10[0xf] = 0;
                        auVar10._0_15_ = local_948._1_15_;
                        local_948 = auVar10 << 8;
                        uStack_918 = 0;
                        uStack_910 = 0xf;
                        local_928._1_15_ = SUB1615((undefined1  [16])0x0,1);
                        auVar11[0xf] = 0;
                        auVar11._0_15_ = local_928._1_15_;
                        local_928 = auVar11 << 8;
                        local_908._1_15_ = SUB1615((undefined1  [16])0x0,1);
                        auVar12[0xf] = 0;
                        auVar12._0_15_ = local_908._1_15_;
                        local_908 = auVar12 << 8;
                        local_8e8 = 0;
                        local_8e0 = 0;
                        local_a38 = local_848;
                        lStack_a30 = lStack_840;
                        pbStack_938 = pbVar38;
                        uStack_930 = uVar31;
                        pbStack_8f8 = pbVar38;
                        uStack_8f0 = uVar31;
                        pauVar26 = (undefined1 (*) [16])FUN_180166360(local_8b8,&local_a38);
                        auVar54 = auVar55._0_16_;
                        if (&local_948 != pauVar26) {
                          FUN_18015c010(local_948);
                          auVar54 = auVar55._0_16_;
                          local_948 = *pauVar26;
                          pbStack_938 = *(byte **)pauVar26[1];
                          uStack_930 = *(undefined8 *)(pauVar26[1] + 8);
                          *(undefined8 *)pauVar26[1] = 0;
                          *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                          (*pauVar26)[0] = 0;
                        }
                        auVar55 = ZEXT1664(auVar54);
                        FUN_18015c010(local_8b8);
                        local_a38 = local_838;
                        lStack_a30 = lStack_830;
                        pauVar26 = (undefined1 (*) [16])FUN_180166360(local_8b8,&local_a38);
                        auVar54 = auVar55._0_16_;
                        if (&local_928 != pauVar26) {
                          FUN_18015c010(local_928);
                          auVar54 = auVar55._0_16_;
                          local_928 = *pauVar26;
                          uStack_918 = *(undefined8 *)pauVar26[1];
                          uStack_910 = *(ulonglong *)(pauVar26[1] + 8);
                          *(undefined8 *)pauVar26[1] = 0;
                          *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                          (*pauVar26)[0] = 0;
                        }
                        auVar55 = ZEXT1664(auVar54);
                        FUN_18015c010(local_8b8);
                        uVar29 = 0;
                        if (lStack_820 != 0) {
                          bVar48 = false;
                          ppvVar39 = local_828;
                          bVar17 = false;
                          if (local_828 != (void **)((longlong)local_828 + lStack_820)) {
                            do {
                              bVar48 = bVar17;
                              bVar1 = (&DAT_1807c5b10)[*(byte *)ppvVar39];
                              if (9 < bVar1) break;
                              if ((uVar29 < 0x1999999999999999) ||
                                 ((uVar29 == 0x1999999999999999 && ((ulonglong)bVar1 < 6)))) {
                                uVar29 = (ulonglong)bVar1 + uVar29 * 10;
                              }
                              else {
                                bVar48 = true;
                              }
                              ppvVar39 = (void **)((longlong)ppvVar39 + 1);
                              bVar17 = bVar48;
                            } while (ppvVar39 != (void **)((longlong)local_828 + lStack_820));
                          }
                          if (((ppvVar39 == local_828) || (bVar48)) ||
                             (ppvVar39 != (void **)((longlong)local_828 + lStack_820))) {
                            uVar29 = 0;
                          }
                        }
                        local_8e8 = uVar29;
                        if (((local_810 != 8) ||
                            (iVar19 = memcmp(local_818,"resolved",8), iVar19 != 0)) ||
                           (local_8e0 = 1, uVar29 == 0)) {
                          local_8e0 = 0;
                        }
                        local_a38 = local_808;
                        lStack_a30 = lStack_800;
                        pauVar26 = (undefined1 (*) [16])FUN_180166360(local_8b8,&local_a38);
                        auVar54 = auVar55._0_16_;
                        if (&local_908 != pauVar26) {
                          FUN_18015c010(local_908);
                          auVar54 = auVar55._0_16_;
                          local_908 = *pauVar26;
                          pbStack_8f8 = *(byte **)pauVar26[1];
                          uStack_8f0 = *(undefined8 *)(pauVar26[1] + 8);
                          *(undefined8 *)pauVar26[1] = 0;
                          *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                          (*pauVar26)[0] = 0;
                        }
                        auVar55 = ZEXT1664(auVar54);
                        FUN_18015c010(local_8b8);
                        uVar25 = *(undefined8 *)pbVar22;
                        if (pbStack_938 == (byte *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          FUN_18015bb70();
                        }
                        local_a78 = (byte *)0x1;
                        local_a80 = (void **)&DAT_1807c47a0;
                        local_a88 = (void **)pbStack_938;
                        FUN_18015a9c0(&local_a38);
                        uVar46 = local_a44;
                        puVar34 = local_928;
                        if (0xf < uStack_910) {
                          puVar34 = (undefined1 *)local_928._0_8_;
                        }
                        pauVar26 = (undefined1 (*) [16])FUN_18015b2a0(&local_a38,puVar34,uStack_918)
                        ;
                        local_998 = *pauVar26;
                        auStack_988 = pauVar26[1];
                        (*pauVar26)[0] = 0;
                        *(undefined8 *)pauVar26[1] = 0;
                        *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                        local_a44 = uVar46 | 0xe00;
                        auVar55 = ZEXT1664(auVar55._0_16_);
                        FUN_18015c010(&local_a38);
                        pbVar44 = local_998;
                        if (0xf < (ulonglong)auStack_988._8_8_) {
                          pbVar44 = (byte *)local_998._0_8_;
                        }
                        pbVar43 = pbVar44 + auStack_988._0_8_;
                        pbVar40 = local_998;
                        if (0xf < (ulonglong)auStack_988._8_8_) {
                          pbVar40 = (byte *)local_998._0_8_;
                        }
                        if (pbVar40 != pbVar43) {
                          lVar21 = (longlong)pbVar44 - (longlong)pbVar40;
                          do {
                            iVar19 = tolower((uint)*pbVar40);
                            pbVar40[lVar21] = (byte)iVar19;
                            pbVar40 = pbVar40 + 1;
                          } while (pbVar40 != pbVar43);
                        }
                        plVar27 = (longlong *)FUN_1801cbd70(uVar25,local_9c0,local_998);
                        auVar54 = auVar55._0_16_;
                        lVar21 = *plVar27;
                        puVar24 = (undefined8 *)(lVar21 + 0x30);
                        if (puVar24 != (undefined8 *)local_948) {
                          FUN_18015c010(puVar24);
                          auVar54 = auVar55._0_16_;
                          *puVar24 = local_948._0_8_;
                          *(undefined8 *)(lVar21 + 0x38) = local_948._8_8_;
                          *(byte **)(lVar21 + 0x40) = pbStack_938;
                          *(undefined8 *)(lVar21 + 0x48) = uStack_930;
                          auVar13[0xf] = 0;
                          auVar13._0_15_ = local_948._1_15_;
                          local_948 = auVar13 << 8;
                          pbStack_938 = pbVar38;
                          uStack_930 = uVar31;
                        }
                        puVar24 = (undefined8 *)(lVar21 + 0x50);
                        if (puVar24 != (undefined8 *)local_928) {
                          auVar55 = ZEXT1664(auVar54);
                          FUN_18015c010(puVar24);
                          auVar54 = auVar55._0_16_;
                          *puVar24 = local_928._0_8_;
                          *(undefined8 *)(lVar21 + 0x58) = local_928._8_8_;
                          *(undefined8 *)(lVar21 + 0x60) = uStack_918;
                          *(ulonglong *)(lVar21 + 0x68) = uStack_910;
                          uStack_918 = 0;
                          uStack_910 = 0xf;
                          auVar14[0xf] = 0;
                          auVar14._0_15_ = local_928._1_15_;
                          local_928 = auVar14 << 8;
                        }
                        puVar24 = (undefined8 *)(lVar21 + 0x70);
                        if (puVar24 != (undefined8 *)local_908) {
                          auVar55 = ZEXT1664(auVar54);
                          FUN_18015c010(puVar24);
                          auVar54 = auVar55._0_16_;
                          *puVar24 = local_908._0_8_;
                          *(undefined8 *)(lVar21 + 0x78) = local_908._8_8_;
                          *(byte **)(lVar21 + 0x80) = pbStack_8f8;
                          *(undefined8 *)(lVar21 + 0x88) = uStack_8f0;
                          auVar15[0xf] = 0;
                          auVar15._0_15_ = local_908._1_15_;
                          local_908 = auVar15 << 8;
                          pbStack_8f8 = pbVar38;
                          uStack_8f0 = uVar31;
                        }
                        *(ulonglong *)(lVar21 + 0x90) = local_8e8;
                        *(undefined1 *)(lVar21 + 0x98) = local_8e0;
                        auVar55 = ZEXT1664(auVar54);
                        FUN_18015c010(local_998);
                        FUN_18015c010(local_908);
                        FUN_18015c010(local_928);
                        FUN_18015c010(local_948);
                      }
                    }
                  }
                  if ((local_9e8 == (byte *)0xffffffffffffffff) ||
                     (pbVar40 = local_9e8 + 1, pbStack_9d0 <= pbVar40)) break;
                  pbVar43 = pbStack_9d0;
                  pbVar44 = local_9f8;
                } while( true );
              }
              pppppuVar30 = local_898;
              if (7 < local_880) {
                pppppuVar30 = local_898[0];
              }
              iVar19 = FUN_1805fb620(pppppuVar30,local_8b8,0x21,0xffffffff);
              local_9f8 = (byte *)CONCAT44(local_9f8._4_4_,iVar19);
              pbVar44 = &DAT_8000000000000000;
              if (iVar19 == 0) {
                pbVar44 = local_8b8[0];
              }
              bVar1 = pbVar22[0x101];
              local_9e8 = pbVar44;
              if ((((bVar1 == 0) || (*(longlong *)pbVar22 == 0)) ||
                  (ppvVar39 = *(void ***)(*(longlong *)pbVar22 + 0x10), ppvVar39 == (void **)0x0))
                 || (ppvVar39 != *(void ***)(pbVar22 + 0xe8))) {
                lVar21 = *(longlong *)(pbVar22 + 0xe8);
                if (*(longlong *)pbVar22 == 0) {
                  ppvVar39 = (void **)0x0;
                }
                else {
                  ppvVar39 = *(void ***)(*(longlong *)pbVar22 + 0x10);
                }
                FUN_18063ab10(&local_858,0,0x800);
                local_a88 = (void **)CONCAT44(local_a88._4_4_,(uint)(bVar1 != 0));
                local_a80 = ppvVar39;
                local_a78 = (byte *)lVar21;
                FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                              "[OFFSETS] Rejected malformed manifest (header=%d parsed=%zu expected=%zu)"
                             );
LAB_1801cb144:
                FUN_1800a9e50(3,&local_858);
              }
              else {
                FUN_18063ab10(&local_858,0,0x800);
                local_a78 = (byte *)((*(longlong *)(pbVar22 + 0x10) - *(longlong *)(pbVar22 + 8)) /
                                    0x28);
                local_a88 = (void **)local_8c8;
                local_a80 = ppvVar39;
                FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                              "[OFFSETS] Parsed manifest payload bytes=%zu entries=%zu modules=%zu")
                ;
                FUN_1800a9e50(1,&local_858);
                pbVar40 = pbVar22 + 0x60;
                local_9d8 = pbVar40;
                if (0xf < *(ulonglong *)(pbVar22 + 0x78)) {
                  local_9d8 = *(byte **)pbVar40;
                }
                pbStack_9d0 = *(byte **)(pbVar22 + 0x70);
                cVar18 = FUN_18003b110(*(undefined8 *)(pbVar22 + 0xe0),&local_9d8);
                lVar21 = local_9c8;
                if (cVar18 == '\0') {
                  FUN_18063ab10(&local_858,0,0x800);
                  FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                "[OFFSETS] Bundle is not approved by the current authenticated session"
                               );
                  goto LAB_1801cb144;
                }
                AcquireSRWLockShared((PSRWLOCK)(local_9c8 + 0x50));
                if (((local_a47 == '\0') && (*(char *)(lVar21 + 0x99) != '\0')) &&
                   (sVar47 = *(size_t *)(pbVar22 + 0x70), sVar47 != 0)) {
                  puVar24 = (undefined8 *)(lVar21 + 0x60);
                  if (0xf < *(ulonglong *)(lVar21 + 0x78)) {
                    puVar24 = (undefined8 *)*puVar24;
                  }
                  if (0xf < *(ulonglong *)(pbVar22 + 0x78)) {
                    pbVar40 = *(byte **)pbVar40;
                  }
                  if (((sVar47 != *(size_t *)(lVar21 + 0x70)) ||
                      (iVar20 = memcmp(pbVar40,puVar24,sVar47), iVar20 != 0)) ||
                     (pbVar22[0x100] != *(byte *)(lVar21 + 0x9a))) goto LAB_1801ca876;
                  if (iVar19 == 0) {
                    *(byte **)(lVar21 + 0x90) = pbVar44;
                    *(undefined1 *)(lVar21 + 0x98) = 1;
                  }
                  *(undefined8 *)(lVar21 + 0x88) = local_9a0;
                  ReleaseSRWLockShared((PSRWLOCK)(lVar21 + 0x50));
                }
                else {
LAB_1801ca876:
                  ReleaseSRWLockShared((PSRWLOCK)(lVar21 + 0x50));
                  local_a48 = pbVar22[0x100];
                  local_878[0] = "client.dll";
                  local_878[1] = "engine2.dll";
                  local_878[2] = "schemasystem.dll";
                  ppcVar45 = local_878;
                  do {
                    pbVar44 = (byte *)*ppcVar45;
                    local_9c0 = (undefined1  [16])0x0;
                    local_9b0 = (undefined1  [16])0x0;
                    lVar21 = -1;
                    do {
                      lVar21 = lVar21 + 1;
                    } while (pbVar44[lVar21] != 0);
                    FUN_18015ba30(local_9c0,pbVar44);
                    puVar34 = local_9c0;
                    if (0xf < (ulonglong)local_9b0._8_8_) {
                      puVar34 = (undefined1 *)local_9c0._0_8_;
                    }
                    uVar42 = 0xcbf29ce484222325;
                    uVar29 = 0;
                    if (local_9b0._0_8_ != 0) {
                      do {
                        uVar42 = (uVar42 ^ (byte)puVar34[uVar29]) * 0x100000001b3;
                        uVar29 = uVar29 + 1;
                      } while (uVar29 < (ulonglong)local_9b0._0_8_);
                    }
                    lVar21 = FUN_180177b00(pbVar22 + 0x20,local_968,local_9c0,uVar42);
                    lVar21 = *(longlong *)(lVar21 + 8);
                    if (lVar21 == 0) {
                      lVar21 = *(longlong *)(pbVar22 + 0x28);
                    }
                    FUN_18015c010(local_9c0);
                    if (lVar21 == *(longlong *)(pbVar22 + 0x28)) {
                      uVar46 = local_a44;
LAB_1801ca9d3:
                      bVar48 = true;
                    }
                    else {
                      local_9c0 = (undefined1  [16])0x0;
                      local_9b0 = (undefined1  [16])0x0;
                      lVar23 = -1;
                      do {
                        lVar23 = lVar23 + 1;
                      } while (pbVar44[lVar23] != 0);
                      FUN_18015ba30(local_9c0,pbVar44);
                      uVar46 = local_a44 | 1;
                      local_a18._0_4_ = uVar46;
                      local_a44 = uVar46;
                      cVar18 = FUN_1801c9120(local_9c0,lVar21 + 0x30);
                      if (cVar18 == '\0') goto LAB_1801ca9d3;
                      bVar48 = false;
                    }
                    if ((uVar46 & 1) != 0) {
                      local_a44 = uVar46 & 0xfffffffe;
                      FUN_18015c010(local_9c0);
                    }
                    if (bVar48) {
                      FUN_18063ab10(&local_858,0,0x800);
                      local_a88 = (void **)pbVar44;
                      FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                    "[OFFSETS] Exact game build verification failed for %s");
                      FUN_1800a9e50(3,&local_858);
                      local_a48 = 0;
                    }
                    puVar24 = *(undefined8 **)(pbVar22 + 0x10);
                    puVar37 = *(undefined8 **)(pbVar22 + 8);
                    if (puVar37 != puVar24) {
                      sVar47 = 0xffffffffffffffff;
                      do {
                        sVar47 = sVar47 + 1;
                      } while (pbVar44[sVar47] != 0);
                      do {
                        _Size = puVar37[2];
                        _Buf1_00 = puVar37;
                        if (0xf < (ulonglong)puVar37[3]) {
                          _Buf1_00 = (undefined8 *)*puVar37;
                        }
                        if ((_Size == sVar47) &&
                           (((_Size == 0 || (iVar19 = memcmp(_Buf1_00,pbVar44,_Size), iVar19 == 0))
                            && (puVar37[4] != 0)))) goto LAB_1801caae5;
                        puVar37 = puVar37 + 5;
                      } while (puVar37 != puVar24);
                    }
                    FUN_18063ab10(&local_858,0,0x800);
                    local_a88 = (void **)pbVar44;
                    FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                  "[OFFSETS] Missing signed fingerprint for %s");
                    FUN_1800a9e50(3,&local_858);
                    local_a48 = 0;
LAB_1801caae5:
                    pbVar44 = local_9e8;
                    ppcVar45 = ppcVar45 + 1;
                  } while (ppcVar45 != local_878 + 3);
                  bVar1 = pbVar22[0x100];
                  pbVar40 = pbVar22 + 0xa0;
                  if (0xf < *(ulonglong *)(pbVar22 + 0xb8)) {
                    pbVar40 = *(byte **)pbVar40;
                  }
                  pbVar43 = pbVar22 + 0x80;
                  if (0xf < *(ulonglong *)(pbVar22 + 0x98)) {
                    pbVar43 = *(byte **)pbVar43;
                  }
                  pbVar38 = pbVar22 + 0x60;
                  if (0xf < *(ulonglong *)(pbVar22 + 0x78)) {
                    pbVar38 = *(byte **)pbVar38;
                  }
                  FUN_18063ab10(&local_858,0,0x800);
                  local_a68 = CONCAT44(local_a68._4_4_,(uint)(bVar1 != 0));
                  local_a88 = *(void ***)(pbVar22 + 0xe0);
                  local_a80 = (void **)pbVar38;
                  local_a78 = pbVar43;
                  local_a70 = pbVar40;
                  FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                "[OFFSETS] Manifest v%llu hash=%s captured=%s severity=%s API-compatible=%d"
                               );
                  FUN_1800a9e50(1,&local_858);
                  if (*(longlong *)(pbVar22 + 0xd0) != 0) {
                    ppvVar39 = (void **)(pbVar22 + 0xc0);
                    if (0xf < *(ulonglong *)(pbVar22 + 0xd8)) {
                      ppvVar39 = *ppvVar39;
                    }
                    FUN_18063ab10(&local_858,0,0x800);
                    local_a88 = ppvVar39;
                    FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,"[OFFSETS] Compatibility: %s")
                    ;
                    FUN_1800a9e50(2,&local_858);
                  }
                  local_a38 = *(void ***)(pbVar22 + 0x10);
                  ppvVar39 = *(void ***)(pbVar22 + 8);
                  if (ppvVar39 != local_a38) {
                    do {
                      ppvVar33 = ppvVar39;
                      if ((void *)0xf < ppvVar39[3]) {
                        ppvVar33 = *ppvVar39;
                      }
                      pHVar28 = GetModuleHandleA((LPCSTR)ppvVar33);
                      if (pHVar28 == (HMODULE)0x0) {
                        pbVar44 = ppvVar39[4];
LAB_1801cac8b:
                        ppvVar33 = ppvVar39;
                        if ((void *)0xf < ppvVar39[3]) {
                          ppvVar33 = *ppvVar39;
                        }
                        FUN_18063ab10(&local_858,0,0x800);
                        local_a88 = ppvVar33;
                        local_a80 = (void **)pbVar44;
                        FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                      "[OFFSET MODULE MISSING] %s expected=%zu");
                        uVar31 = 2;
LAB_1801cad38:
                        FUN_1800a9e50(uVar31);
                        cVar18 = FUN_1801c94a0(ppvVar39);
                        if (cVar18 != '\0') {
                          local_a48 = 0;
                        }
                      }
                      else {
                        if ((short)pHVar28->unused != 0x5a4d) {
                          pbVar44 = ppvVar39[4];
                          goto LAB_1801cac8b;
                        }
                        if (*(int *)((longlong)&pHVar28->unused + (longlong)pHVar28[0xf].unused) ==
                            0x4550) {
                          uVar46 = *(uint *)((longlong)&pHVar28[0x14].unused +
                                            (longlong)pHVar28[0xf].unused);
                        }
                        else {
                          uVar46 = 0;
                        }
                        pbVar40 = (byte *)(ulonglong)uVar46;
                        pbVar44 = ppvVar39[4];
                        if (uVar46 == 0) goto LAB_1801cac8b;
                        if (pbVar40 != pbVar44) {
                          ppvVar33 = ppvVar39;
                          if ((void *)0xf < ppvVar39[3]) {
                            ppvVar33 = *ppvVar39;
                          }
                          FUN_18063ab10(&local_858,0,0x800);
                          local_a88 = ppvVar33;
                          local_a80 = (void **)pbVar44;
                          local_a78 = pbVar40;
                          FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                        "[OFFSET MODULE MISMATCH] %s expected=%zu live=%zu");
                          uVar31 = 3;
                          goto LAB_1801cad38;
                        }
                        ppvVar33 = ppvVar39;
                        if ((void *)0xf < ppvVar39[3]) {
                          ppvVar33 = *ppvVar39;
                        }
                        FUN_18063ab10(&local_858,0,0x800);
                        local_a88 = ppvVar33;
                        local_a80 = (void **)pbVar40;
                        FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                      "[OFFSET MODULE LOADED] %s size=%zu");
                        FUN_1800a9e50(1);
                      }
                      ppvVar39 = ppvVar39 + 5;
                    } while (ppvVar39 != local_a38);
                    pbVar44 = local_9e8;
                  }
                  local_a38 = (void **)0x0;
                  lVar21 = 0;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = local_a18._8_8_;
                  local_a18 = auVar16 << 0x40;
                  puVar24 = *(undefined8 **)(*(longlong *)pbVar22 + 8);
                  ppvVar39 = local_a38;
                  for (puVar37 = (undefined8 *)*puVar24; local_a38 = ppvVar39, puVar37 != puVar24;
                      puVar37 = (undefined8 *)*puVar37) {
                    ppvVar33 = (void **)(puVar37 + 6);
                    if (*(char *)(puVar37 + 0x13) == '\0') {
                      local_a18._0_8_ = lVar21 + 1;
                      if (puVar37[0x10] == 0) {
                        pcVar41 = "unresolved";
                      }
                      else {
                        pcVar41 = (char *)(puVar37 + 0xe);
                        if (0xf < (ulonglong)puVar37[0x11]) {
                          pcVar41 = *(char **)pcVar41;
                        }
                      }
                      local_9e8 = (byte *)(puVar37 + 10);
                      if (0xf < (ulonglong)puVar37[0xd]) {
                        local_9e8 = *(byte **)local_9e8;
                      }
                      if (0xf < (ulonglong)puVar37[9]) {
                        ppvVar33 = (void **)puVar37[6];
                      }
                      FUN_18063ab10(&local_858,0,0x800);
                      local_a80 = (void **)local_9e8;
                      local_a88 = ppvVar33;
                      local_a78 = (byte *)pcVar41;
                      FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,"[OFFSET FAILED] %s/%s (%s)"
                                   );
                      FUN_1800a9e50(2);
                      lVar21 = local_a18._0_8_;
                    }
                    else {
                      local_a38 = (void **)((longlong)ppvVar39 + 1);
                    }
                    ppvVar39 = local_a38;
                  }
                  FUN_18063ab10(&local_858,0,0x800);
                  FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                "[OFFSETS] Committing validated manifest");
                  FUN_1800a9e50(1,&local_858);
                  lVar23 = local_9c8;
                  pbVar40 = *(byte **)(*(longlong *)pbVar22 + 0x10);
                  AcquireSRWLockExclusive((PSRWLOCK)(local_9c8 + 0x50));
                  pbVar22[0] = 0;
                  pbVar22[1] = 0;
                  pbVar22[2] = 0;
                  pbVar22[3] = 0;
                  pbVar22[4] = 0;
                  pbVar22[5] = 0;
                  pbVar22[6] = 0;
                  pbVar22[7] = 0;
                  lVar21 = *(longlong *)(lVar23 + 0x58);
                  *(undefined8 *)(lVar23 + 0x58) = *(undefined8 *)pbVar22;
                  if (lVar21 != 0) {
                    FUN_1801cc0f0();
                  }
                  pbVar43 = (byte *)(lVar23 + 0x60);
                  pbVar38 = pbVar22 + 0x60;
                  if (pbVar43 != pbVar38) {
                    uVar31 = *(undefined8 *)pbVar43;
                    uVar25 = *(undefined8 *)(lVar23 + 0x68);
                    uVar3 = *(undefined8 *)(lVar23 + 0x70);
                    uVar4 = *(undefined8 *)(lVar23 + 0x78);
                    uVar5 = *(undefined8 *)(pbVar22 + 0x68);
                    uVar6 = *(undefined8 *)(pbVar22 + 0x70);
                    uVar7 = *(undefined8 *)(pbVar22 + 0x78);
                    *(undefined8 *)pbVar43 = *(undefined8 *)pbVar38;
                    *(undefined8 *)(lVar23 + 0x68) = uVar5;
                    *(undefined8 *)(lVar23 + 0x70) = uVar6;
                    *(undefined8 *)(lVar23 + 0x78) = uVar7;
                    *(undefined8 *)pbVar38 = uVar31;
                    *(undefined8 *)(pbVar22 + 0x68) = uVar25;
                    *(undefined8 *)(pbVar22 + 0x70) = uVar3;
                    *(undefined8 *)(pbVar22 + 0x78) = uVar4;
                  }
                  *(undefined8 *)(lVar23 + 0x80) = *(undefined8 *)(pbVar22 + 0xe0);
                  *(undefined8 *)(lVar23 + 0x88) = local_9a0;
                  *(byte *)(lVar23 + 0x9a) = pbVar22[0x100];
                  *(byte *)(lVar23 + 0x99) = local_a48;
                  LOCK();
                  plVar27 = (longlong *)(lVar23 + 0xa0);
                  lVar21 = *plVar27;
                  *plVar27 = *plVar27 + 1;
                  UNLOCK();
                  ReleaseSRWLockExclusive((PSRWLOCK)(lVar23 + 0x50));
                  if ((int)local_9f8 == 0) {
                    *(byte **)(lVar23 + 0x90) = pbVar44;
                    *(undefined1 *)(lVar23 + 0x98) = 1;
                  }
                  FUN_18063ab10(&local_858,0,0x800);
                  bVar1 = local_a48;
                  local_a58 = lVar21 + 1;
                  local_a60 = (uint)(local_a48 != 0);
                  local_a68 = *(undefined8 *)(pbVar22 + 0xf8);
                  local_a70 = *(byte **)(pbVar22 + 0xf0);
                  local_a78 = (byte *)local_a18._0_8_;
                  local_a88 = (void **)pbVar40;
                  local_a80 = ppvVar39;
                  FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                "[OFFSETS] Parsed all %zu entries: %zu loaded, %zu failed (report %zu/%zu); active=%d generation=%llu"
                               );
                  FUN_1800a9e50(1,&local_858);
                  if (bVar1 == 0) {
                    FUN_18063ab10(&local_858,0,0x800);
                    FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                  "[OFFSETS] Manifest is not compatible with this engine build; initialization is blocked"
                                 );
                    FUN_1800a9e50(4,&local_858);
                  }
                  else if (local_a47 != '\0') {
                    FUN_18063ab10(&local_858,0,0x800);
                    FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,
                                  "[OFFSETS] Complete dynamic manifest activated before feature initialization"
                                 );
                    FUN_1800a9e50(1,&local_858);
                  }
                }
              }
LAB_1801cb157:
              FUN_1801cbab0(&local_958);
              goto LAB_1801cb1c5;
            }
          }
        }
LAB_1801cb162:
        FUN_18063ab10(&local_858,0,0x800);
        pcVar41 = "[OFFSETS] Rejected an unexpected signed manifest format";
      }
    }
LAB_1801cb19a:
    FUN_18015ad60(&local_858,0x800,0xffffffffffffffff,pcVar41);
    FUN_1800a9e50(3,&local_858);
  }
LAB_1801cb1c5:
  FUN_18015c010(local_8d8);
LAB_1801cb1d2:
  FUN_18015b930(local_898);
}



