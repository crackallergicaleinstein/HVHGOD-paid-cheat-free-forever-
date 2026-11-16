// FUN_1801c1b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c1b40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c1b40(longlong *param_1)

{
  byte ******ppppppbVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte ******ppppppbVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  BOOL BVar16;
  DWORD DVar17;
  DWORD DVar18;
  ULONGLONG UVar19;
  longlong lVar20;
  undefined8 ******ppppppuVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  undefined1 *_Buf1;
  LPCWSTR lpExistingFileName;
  char *pcVar26;
  LPCWSTR *****lpNewFileName;
  ulonglong uVar27;
  byte ******ppppppbVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auStack_668 [32];
  undefined1 local_648;
  char local_638;
  uint local_634;
  longlong *local_630;
  undefined1 local_628 [16];
  undefined1 auStack_618 [16];
  int local_608;
  ulonglong local_600;
  byte ******local_5f8;
  undefined8 uStack_5f0;
  longlong lStack_5e8;
  ulonglong uStack_5e0;
  undefined *local_5d8;
  longlong *local_5d0;
  undefined1 *local_5c8;
  size_t local_5c0;
  char *local_5b8;
  undefined8 local_5b0;
  char *local_5a8;
  undefined8 local_5a0;
  undefined1 local_598 [16];
  undefined1 local_588 [40];
  undefined1 local_560 [56];
  undefined1 local_528 [56];
  undefined1 local_4f0 [56];
  undefined1 local_4b8 [56];
  undefined1 local_480 [56];
  undefined1 local_448 [56];
  undefined1 local_410 [52];
  int iStack_3dc;
  longlong local_3d8;
  undefined1 local_3d0 [8];
  uint auStack_3c8 [14];
  longlong alStack_390 [12];
  undefined **local_330 [13];
  char *local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [16];
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  undefined1 local_298 [16];
  undefined1 auStack_288 [16];
  undefined8 ******local_278 [2];
  ulonglong local_268;
  ulonglong local_260;
  undefined1 local_258 [16];
  size_t local_248;
  ulonglong local_240;
  undefined1 local_238 [16];
  size_t local_228;
  ulonglong local_220;
  LPCWSTR *****local_218 [3];
  ulonglong local_200;
  undefined8 ******local_1f8 [3];
  ulonglong local_1e0;
  undefined1 local_1d8 [32];
  undefined8 ******local_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined8 local_180;
  byte ******local_178;
  undefined8 uStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  undefined1 local_148 [160];
  undefined **local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  local_634 = 0;
  local_630 = param_1;
  local_5d0 = param_1;
  FUN_1801655d0(local_1d8,3);
  local_238 = (undefined1  [16])0x0;
  local_228 = 0;
  local_220 = 0;
  FUN_180159e60(local_238,L"radar-frame.bridge",0x12);
  FUN_1800a7e60(local_218,local_1d8,local_238);
  FUN_18015b930(local_238);
  local_2b8 = (undefined1  [16])0x0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  FUN_180159e60(local_2b8,L"radar-state.bridge",0x12);
  uVar30 = 0x3c;
  local_634 = 0x3c;
  FUN_1800a7e60(local_1f8,local_1d8,local_2b8);
  FUN_18015b930(local_2b8);
  local_228 = 0;
  local_220 = 0xf;
  local_238._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar31[0xf] = 0;
  auVar31._0_15_ = local_238._1_15_;
  local_238 = auVar31 << 8;
  local_600 = 0;
  local_608 = -1;
  local_638 = '\0';
  auVar32 = ZEXT1664(_DAT_18086d450);
  do {
    cVar12 = local_638;
    if ((*param_1 != 0) && ((*(uint *)(*param_1 + 4) & 1) != 0)) {
      FUN_18015c010(local_238);
      FUN_18015b930(local_1f8);
      FUN_18015b930(local_218);
      FUN_18015b930(local_1d8);
      piVar2 = (int *)*param_1;
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_2c8 = "tier0.dll:g_pMemAlloc";
            local_2c0 = 0x15;
            DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_2c8);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar2);
        }
      }
    }
    UVar19 = GetTickCount64();
    if (local_600 <= UVar19) {
      UVar19 = GetTickCount64();
      iVar13 = DAT_1808d9be0;
      local_600 = UVar19 + 1000;
      if (DAT_180bb93aa == '\0') {
        iVar13 = FUN_1805f68d0(&DAT_1808da810);
        if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da85c == 0x7fffffff) {
          DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        DAT_1808da900 = 0;
        puVar25 = &DAT_1808da8f0;
        if (0xf < DAT_1808da908) {
          puVar25 = _DAT_1808da8f0;
        }
        *puVar25 = 0;
        local_638 = '\0';
        FUN_1805f68fc(&DAT_1808da810);
      }
      else if ((DAT_180bb93ab != '\0') && ((cVar12 == '\0' || (local_608 != DAT_1808d9be0)))) {
        FUN_1801c13b0(local_2b8);
        if (DAT_1808d9be0 != iVar13) {
          uStack_2a8 = 0;
          puVar25 = local_2b8;
          if (0xf < uStack_2a0) {
            puVar25 = (undefined1 *)local_2b8._0_8_;
          }
          *puVar25 = 0;
        }
        local_638 = uStack_2a8 != 0;
        local_608 = iVar13;
        iVar14 = FUN_1805f68d0(&DAT_1808da810);
        if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da85c == 0x7fffffff) {
          DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        FUN_18015c010(&DAT_1808da8f0);
        _DAT_1808da8f0 = (undefined1 *)local_2b8._0_8_;
        uRam00000001808da8f8 = local_2b8._8_8_;
        DAT_1808da900 = uStack_2a8;
        DAT_1808da908 = uStack_2a0;
        uStack_2a8 = 0;
        uStack_2a0 = 0xf;
        auVar3[0xf] = 0;
        auVar3._0_15_ = local_2b8._1_15_;
        local_2b8 = auVar3 << 8;
        DAT_180bbea80 = iVar13;
        auVar32 = ZEXT1664(auVar32._0_16_);
        FUN_1805f68fc(&DAT_1808da810);
        FUN_18015c010(local_2b8);
      }
    }
    local_248 = 0;
    local_240 = 0xf;
    local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_258._1_15_;
    local_258 = auVar4 << 8;
    local_5d8 = &DAT_1808da810;
    iVar13 = FUN_1805f68d0(&DAT_1808da810);
    if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808da85c == 0x7fffffff) {
      DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    puVar25 = &DAT_1808da8b0;
    if (0xf < DAT_1808da8c8) {
      puVar25 = _DAT_1808da8b0;
    }
    FUN_180113930(local_258,puVar25,DAT_1808da8c0);
    FUN_1805f68fc(&DAT_1808da810);
    if (local_248 != 0) {
      puVar25 = local_238;
      if (0xf < local_220) {
        puVar25 = (undefined1 *)local_238._0_8_;
      }
      _Buf1 = local_258;
      if (0xf < local_240) {
        _Buf1 = (undefined1 *)local_258._0_8_;
      }
      if (((local_248 != local_228) || (iVar13 = memcmp(_Buf1,puVar25,local_248), iVar13 != 0)) &&
         (cVar12 = FUN_1800a9120(local_1d8), cVar12 != '\0')) {
        local_5c8 = local_258;
        if (0xf < local_240) {
          local_5c8 = (undefined1 *)local_258._0_8_;
        }
        local_5c0 = local_248;
        local_5b8 = "radar-frame";
        local_5b0 = 0xb;
        FUN_18000fdc0(local_278,&local_5b8,&local_5c8);
        if (local_268 != 0) {
          FUN_1800f5370(local_2b8,local_218);
          FUN_1800f52e0(local_2b8,L".tmp",4);
          FUN_18063ab10(&local_3d8,0,0x108);
          FUN_1800e6fe0(&local_3d8,local_2b8,0x30);
          ppppppuVar21 = local_278;
          if (0xf < local_260) {
            ppppppuVar21 = local_278[0];
          }
          FUN_1800f7160(&local_3d8,ppppppuVar21,local_268);
          lVar20 = FUN_180113da0(local_3d0);
          if (lVar20 == 0) {
            lVar20 = (longlong)*(int *)(local_3d8 + 4);
            uVar15 = 4;
            if (*(longlong *)((longlong)alStack_390 + lVar20) != 0) {
              uVar15 = 0;
            }
            uVar15 = uVar15 | *(uint *)((longlong)auStack_3c8 + lVar20) & 0x15 | 2;
            *(uint *)((longlong)auStack_3c8 + lVar20) = uVar15;
            uVar15 = uVar15 & *(uint *)((longlong)auStack_3c8 + lVar20 + 4);
            if (uVar15 != 0) {
              if ((uVar15 & 4) == 0) {
                pcVar26 = "ios_base::failbit set";
                if ((uVar15 & 2) == 0) {
                  pcVar26 = "ios_base::eofbit set";
                }
              }
              else {
                pcVar26 = "ios_base::badbit set";
              }
              uVar22 = FUN_1801597e0(local_598,1);
              FUN_1801596c0(local_588,pcVar26,uVar22);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_588,&DAT_1808d0f18);
            }
          }
          if ((*(byte *)((longlong)auStack_3c8 + (longlong)*(int *)(local_3d8 + 4)) & 6) == 0) {
            lpNewFileName = (LPCWSTR *****)local_218;
            if (7 < local_200) {
              lpNewFileName = local_218[0];
            }
            lpExistingFileName = (LPCWSTR)local_2b8;
            if (7 < uStack_2a0) {
              lpExistingFileName = (LPCWSTR)local_2b8._0_8_;
            }
            BVar16 = MoveFileExW(lpExistingFileName,(LPCWSTR)lpNewFileName,9);
            if (BVar16 != 0) {
              puVar25 = local_258;
              if (0xf < local_240) {
                puVar25 = (undefined1 *)local_258._0_8_;
              }
              FUN_180113930(local_238,puVar25,local_248);
            }
          }
          *(undefined ***)(local_410 + (longlong)*(int *)(local_3d8 + 4) + 0x38) =
               std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_410 + (longlong)*(int *)(local_3d8 + 4) + 0x34) =
               *(int *)(local_3d8 + 4) + -0xa8;
          FUN_1800f63e0(local_3d0);
          *(undefined ***)(local_410 + (longlong)*(int *)(local_3d8 + 4) + 0x38) =
               std::basic_ostream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_410 + (longlong)*(int *)(local_3d8 + 4) + 0x34) =
               *(int *)(local_3d8 + 4) + -0x10;
          local_330[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_330);
          FUN_18015b930(local_2b8);
        }
        FUN_18015c010(local_278);
      }
    }
    ppppppuVar21 = local_1f8;
    if (7 < local_1e0) {
      ppppppuVar21 = local_1f8[0];
    }
    iVar13 = FUN_1805fb620(ppppppuVar21,local_298,9,0xffffffff);
    if (iVar13 == 0) {
      if ((local_298._8_8_ != 0) && ((ulonglong)local_298._8_8_ < 0x4001)) {
        FUN_18063ab10(local_158,0,0x110);
        FUN_18015e690(local_158,local_1f8,0x20);
        FUN_18015ae30(local_278,0x4001,0);
        ppppppuVar21 = local_278;
        if (0xf < local_260) {
          ppppppuVar21 = local_278[0];
        }
        FUN_1801771e0(local_158,ppppppuVar21,local_268);
        uVar29 = local_268;
        if (local_268 < (ulonglong)local_158[1]) {
          uVar27 = local_158[1] - local_268;
          if (local_260 - local_268 < uVar27) {
            local_648 = 0;
            FUN_18013fa60(local_278,uVar27,local_638,uVar27);
          }
          else {
            local_268 = local_158[1];
            ppppppuVar21 = local_278;
            if (0xf < local_260) {
              ppppppuVar21 = local_278[0];
            }
            FUN_18063ab10((longlong)ppppppuVar21 + uVar29,0,uVar27);
            *(undefined1 *)((longlong)ppppppuVar21 + uVar27 + uVar29) = 0;
          }
        }
        else {
          local_268 = local_158[1];
          ppppppuVar21 = local_278;
          if (0xf < local_260) {
            ppppppuVar21 = local_278[0];
          }
          *(undefined1 *)(local_158[1] + (longlong)ppppppuVar21) = 0;
        }
        if (local_268 < 0x4001) {
          local_5a8 = "radar-state";
          local_5a0 = 0xb;
          cVar12 = FUN_180010790(&local_5a8,local_278);
          if (cVar12 != '\0') {
            local_180 = 0;
            FUN_180175670(&local_2c8,local_278,&local_1b8,1);
            lVar20 = _Xtime_get_ticks();
            lVar20 = lVar20 / 10000;
            if ((char)local_2c8 != '\x01') {
              local_630 = (longlong *)FUN_180112a50(&local_2c8);
              uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
              FUN_1800f6ca0(local_410,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_410,&DAT_1808d1050);
            }
            local_298 = ZEXT816(0);
            auStack_288 = ZEXT816(0);
            auVar32 = ZEXT1664(auVar32._0_16_);
            FUN_1800e6b50(&local_2c8,local_298,"processId");
            uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
            cVar12 = FUN_1800e6ca0(local_298,uVar22);
            if (cVar12 == '\0') {
              uVar22 = FUN_1800f34a0(local_298);
              DVar17 = FUN_1800e9850(uVar22);
            }
            else {
              DVar17 = 0;
            }
            DVar18 = GetCurrentProcessId();
            if (DVar17 == DVar18) {
              if ((char)local_2c8 != '\x01') {
                local_630 = (longlong *)FUN_180112a50(&local_2c8);
                uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
                FUN_1800f6ca0(local_448,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_448,&DAT_1808d1050);
              }
              local_298 = ZEXT816(0);
              auStack_288 = ZEXT816(0);
              auVar32 = ZEXT1664(auVar32._0_16_);
              FUN_1800e6b50(&local_2c8,local_298,"expiresAtMs");
              uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
              cVar12 = FUN_1800e6ca0(local_298,uVar22);
              if (cVar12 == '\0') {
                uVar22 = FUN_1800f34a0(local_298);
                lVar23 = FUN_1800e6630(uVar22);
              }
              else {
                lVar23 = 0;
              }
              if (lVar20 < lVar23) {
                if ((char)local_2c8 != '\x01') {
                  local_630 = (longlong *)FUN_180112a50(&local_2c8);
                  uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
                  FUN_1800f6ca0(local_480,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
                  FUN_180606630(local_480,&DAT_1808d1050);
                }
                local_298 = ZEXT816(0);
                auStack_288 = ZEXT816(0);
                auVar32 = ZEXT1664(auVar32._0_16_);
                FUN_1800e6b50(&local_2c8,local_298,"expiresAtMs");
                uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
                cVar12 = FUN_1800e6ca0(local_298,uVar22);
                if (cVar12 == '\0') {
                  uVar22 = FUN_1800f34a0(local_298);
                  lVar23 = FUN_1800e6630(uVar22);
                }
                else {
                  lVar23 = 0;
                }
                if (lVar23 <= lVar20 + 15000) {
                  auStack_618 = auVar32._0_16_;
                  local_628._1_15_ = SUB1615((undefined1  [16])0x0,1);
                  auVar5[0xf] = 0;
                  auVar5._0_15_ = local_628._1_15_;
                  local_628 = auVar5 << 8;
                  if ((char)local_2c8 != '\x01') {
                    local_630 = (longlong *)FUN_180112a50(&local_2c8);
                    uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
                    FUN_1800f6ca0(local_4b8,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_4b8,&DAT_1808d1050);
                  }
                  local_298 = ZEXT816(0);
                  auStack_288 = ZEXT816(0);
                  auVar32 = ZEXT1664(auStack_618);
                  FUN_1800e6b50(&local_2c8,local_298,"viewerUrl");
                  uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
                  cVar12 = FUN_1800e6ca0(local_298,uVar22);
                  auVar31 = auVar32._0_16_;
                  if (cVar12 == '\0') {
                    uVar22 = FUN_1800f34a0(local_298);
                    FUN_1800e69c0(uVar22,local_2b8);
                    auVar31 = auVar32._0_16_;
                  }
                  else {
                    local_2b8 = local_628;
                    uStack_2a8 = auStack_618._0_8_;
                    uStack_2a0 = auStack_618._8_8_;
                    auVar6[0xf] = 0;
                    auVar6._0_15_ = local_628._1_15_;
                    local_628 = auVar6 << 8;
                    auStack_618 = auVar31;
                  }
                  local_634 = uVar30 | 0x40;
                  auVar32 = ZEXT1664(auVar31);
                  FUN_18015c010(local_628);
                  local_628 = (undefined1  [16])0x0;
                  auStack_618 = (undefined1  [16])0x0;
                  FUN_18015ba30(local_628,"Waiting for a match",0x13);
                  if ((char)local_2c8 != '\x01') {
                    local_630 = (longlong *)FUN_180112a50(&local_2c8);
                    uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
                    FUN_1800f6ca0(local_4f0,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_4f0,&DAT_1808d1050);
                  }
                  local_298 = ZEXT816(0);
                  auStack_288 = ZEXT816(0);
                  auVar32 = ZEXT1664(auVar32._0_16_);
                  FUN_1800e6b50(&local_2c8,local_298,"status");
                  uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
                  cVar12 = FUN_1800e6ca0(local_298,uVar22);
                  auVar31 = auVar32._0_16_;
                  if (cVar12 == '\0') {
                    uVar22 = FUN_1800f34a0(local_298);
                    FUN_1800e69c0(uVar22,&local_1b8);
                    auVar31 = auVar32._0_16_;
                  }
                  else {
                    local_1b8 = (undefined8 ******)local_628._0_8_;
                    uStack_1b0 = local_628._8_8_;
                    uStack_1a8 = auStack_618._0_8_;
                    uStack_1a0 = auStack_618._8_8_;
                    auVar7[0xf] = 0;
                    auVar7._0_15_ = local_628._1_15_;
                    local_628 = auVar7 << 8;
                    auStack_618 = auVar31;
                  }
                  local_634 = uVar30 | 0xc0;
                  auVar32 = ZEXT1664(auVar31);
                  FUN_18015c010(local_628);
                  uVar27 = uStack_2a0;
                  uVar29 = uStack_2a8;
                  auVar31 = auVar32._0_16_;
                  uVar22 = local_2b8._0_8_;
                  puVar25 = local_2b8;
                  if (0xf < uStack_2a0) {
                    puVar25 = (undefined1 *)local_2b8._0_8_;
                  }
                  if (uStack_2a8 < 0x20) {
LAB_1801c287d:
                    auStack_618 = auVar31;
                    local_628._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar8[0xf] = 0;
                    auVar8._0_15_ = local_628._1_15_;
                    local_628 = auVar8 << 8;
                    puVar24 = (undefined8 *)local_628;
                    uVar30 = uVar30 | 0xc2;
                  }
                  else {
                    iVar13 = memcmp(puVar25,"https://cheat.hvhgods.com/games/",0x20);
                    auVar31 = auVar32._0_16_;
                    if (iVar13 != 0) goto LAB_1801c287d;
                    local_298 = (undefined1  [16])0x0;
                    auStack_288 = (undefined1  [16])0x0;
                    lVar23 = -1;
                    if (uVar29 - 0x20 != -1) {
                      lVar23 = uVar29 - 0x20;
                    }
                    puVar25 = local_2b8;
                    if (0xf < uVar27) {
                      puVar25 = (undefined1 *)uVar22;
                    }
                    FUN_18015ba30(local_298,puVar25 + 0x20,lVar23);
                    auVar31 = auVar32._0_16_;
                    puVar24 = (undefined8 *)local_298;
                    uVar30 = uVar30 | 0x1c1;
                  }
                  local_178 = (byte ******)*puVar24;
                  uStack_170 = puVar24[1];
                  lStack_168 = puVar24[2];
                  uStack_160 = puVar24[3];
                  local_5f8 = local_178;
                  uStack_5f0 = uStack_170;
                  lStack_5e8 = lStack_168;
                  uStack_5e0 = uStack_160;
                  *(undefined1 *)puVar24 = 0;
                  puVar24[2] = 0;
                  puVar24[3] = 0xf;
                  local_634 = uVar30;
                  if ((uVar30 & 2) != 0) {
                    uVar30 = uVar30 & 0xfffffffd;
                    auVar32 = ZEXT1664(auVar31);
                    local_634 = uVar30;
                    FUN_18015c010(local_628);
                    auVar31 = auVar32._0_16_;
                  }
                  if ((uVar30 & 1) != 0) {
                    uVar30 = uVar30 & 0xfffffffe;
                    auVar32 = ZEXT1664(auVar31);
                    local_634 = uVar30;
                    FUN_18015c010(local_298);
                    auVar31 = auVar32._0_16_;
                  }
                  if (lStack_5e8 - 1U < 0x80) {
                    ppppppbVar28 = (byte ******)&local_178;
                    if (0xf < uStack_5e0) {
                      ppppppbVar28 = local_5f8;
                    }
                    if (lStack_5e8 != 0) {
                      ppppppbVar1 = (byte ******)((longlong)ppppppbVar28 + lStack_5e8);
                      auVar32 = ZEXT1664(auVar31);
                      FUN_18063ab10(&local_3d8,0,0x100);
                      auVar31 = auVar32._0_16_;
                      pcVar26 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-";
                      do {
                        local_410[(ulonglong)(byte)*pcVar26 + 0x38] = 1;
                        pcVar26 = pcVar26 + 1;
                        ppppppbVar11 = ppppppbVar28;
                      } while ((byte *)pcVar26 != (byte *)0x1807c5ed0);
                      for (; ppppppbVar11 < ppppppbVar1;
                          ppppppbVar11 = (byte ******)((longlong)ppppppbVar11 + 1)) {
                        if (local_410[(ulonglong)*(byte *)ppppppbVar11 + 0x38] == '\0') {
                          if ((longlong)ppppppbVar11 - (longlong)ppppppbVar28 != -1)
                          goto LAB_1801c29b2;
                          break;
                        }
                      }
                    }
                  }
                  else {
LAB_1801c29b2:
                    uStack_2a8 = 0;
                    puVar25 = local_2b8;
                    if (0xf < uStack_2a0) {
                      puVar25 = (undefined1 *)local_2b8._0_8_;
                    }
                    *puVar25 = 0;
                  }
                  if ((char)local_2c8 != '\x01') {
                    local_630 = (longlong *)FUN_180112a50(&local_2c8);
                    uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
                    FUN_1800f6ca0(local_528,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
                    FUN_180606630(local_528,&DAT_1808d1050);
                  }
                  local_298 = ZEXT816(0);
                  auStack_288 = ZEXT816(0);
                  auVar32 = ZEXT1664(auVar31);
                  FUN_1800e6b50(&local_2c8,local_298,"viewerCount");
                  uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
                  cVar12 = FUN_1800e6ca0(local_298,uVar22);
                  if (cVar12 == '\0') {
                    uVar22 = FUN_1800f34a0(local_298);
                    uVar15 = FUN_1800e62a0(uVar22);
                    if (uVar15 < 0x186a1) goto LAB_1801c2a5e;
                  }
                  else {
                    uVar15 = 0;
LAB_1801c2a5e:
                    local_5d8 = &DAT_1808da810;
                    iVar13 = FUN_1805f68d0(&DAT_1808da810);
                    if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_1808da85c == 0x7fffffff) {
                      DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    FUN_18015c010(&DAT_1808da8d0);
                    DAT_1808da8d0 = local_2b8._0_8_;
                    uRam00000001808da8d8 = local_2b8._8_8_;
                    DAT_1808da8e0 = uStack_2a8;
                    DAT_1808da8e8 = uStack_2a0;
                    uStack_2a8 = 0;
                    uStack_2a0 = 0xf;
                    auVar9[0xf] = 0;
                    auVar9._0_15_ = local_2b8._1_15_;
                    local_2b8 = auVar9 << 8;
                    local_628 = (undefined1  [16])0x0;
                    auStack_618 = (undefined1  [16])0x0;
                    uVar29 = 0xa0;
                    if (uStack_1a8 < 0xa0) {
                      uVar29 = uStack_1a8;
                    }
                    ppppppuVar21 = &local_1b8;
                    if (0xf < uStack_1a0) {
                      ppppppuVar21 = local_1b8;
                    }
                    auVar32 = ZEXT1664(auVar32._0_16_);
                    FUN_18015ba30(local_628,ppppppuVar21,uVar29);
                    uVar30 = uVar30 | 0x200;
                    local_634 = uVar30;
                    FUN_18015c010(&DAT_180bb9240);
                    _DAT_180bb9240 = local_628._0_8_;
                    uRam0000000180bb9248 = local_628._8_8_;
                    uRam0000000180bb9250 = auStack_618._0_8_;
                    uRam0000000180bb9258 = auStack_618._8_8_;
                    auStack_618 = auVar32._0_16_;
                    auVar10[0xf] = 0;
                    auVar10._0_15_ = local_628._1_15_;
                    local_628 = auVar10 << 8;
                    auVar32 = ZEXT1664(auStack_618);
                    FUN_18015c010(local_628);
                    DAT_180bbeaa0 = uVar15;
                    if ((char)local_2c8 != '\x01') {
                      local_630 = (longlong *)FUN_180112a50(&local_2c8);
                      uVar22 = FUN_1800f6bd0(&local_5f8,"cannot use value() with ",&local_630);
                      FUN_1800f6ca0(local_560,0x132,uVar22);
                    /* WARNING: Subroutine does not return */
                      FUN_180606630(local_560,&DAT_1808d1050);
                    }
                    local_298 = ZEXT816(0);
                    auStack_288 = ZEXT816(0);
                    auVar32 = ZEXT1664(auVar32._0_16_);
                    FUN_1800e6b50(&local_2c8,local_298,"expiresAtMs");
                    uVar22 = FUN_1800f3e20(&local_2c8,&local_5f8);
                    cVar12 = FUN_1800e6ca0(local_298,uVar22);
                    if (cVar12 == '\0') {
                      uVar22 = FUN_1800f34a0(local_298);
                      lVar23 = FUN_1800e6630(uVar22);
                    }
                    else {
                      lVar23 = 0;
                    }
                    UVar19 = GetTickCount64();
                    DAT_180bbea98 = UVar19 + (lVar23 - lVar20);
                    FUN_1805f68fc(&DAT_1808da810);
                  }
                  FUN_18015c010(&local_178);
                  FUN_18015c010(&local_1b8);
                  FUN_18015c010(local_2b8);
                }
              }
            }
            FUN_1801409d0(&local_2c0,(ulonglong)local_2c8 & 0xff);
          }
        }
        FUN_18015c010(local_278);
        *(undefined ***)((longlong)local_158 + (longlong)*(int *)(local_158[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)local_158 + (longlong)*(int *)(local_158[0] + 4) + -4) =
             *(int *)(local_158[0] + 4) + -0xb0;
        FUN_1800f63e0(local_148);
        *(undefined ***)((longlong)local_158 + (longlong)*(int *)(local_158[0] + 4)) =
             std::basic_istream<char,std::char_traits<char>_>::vftable;
        *(int *)((longlong)local_158 + (longlong)*(int *)(local_158[0] + 4) + -4) =
             *(int *)(local_158[0] + 4) + -0x18;
        local_a8[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_a8);
        param_1 = local_630;
      }
    }
    FUN_18015c010(local_258);
    iVar13 = 0;
    do {
      if ((*param_1 != 0) && ((*(uint *)(*param_1 + 4) & 1) != 0)) break;
      Sleep(0x14);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  } while( true );
}



