// FUN_1803b0fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0fb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b0fb0(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  DWORD DVar8;
  int iVar9;
  uint uVar10;
  BOOL BVar11;
  undefined8 uVar12;
  undefined1 (*pauVar13) [16];
  longlong *plVar14;
  longlong lVar15;
  LPCWSTR *****ppppppWVar16;
  LPCWSTR *****lpExistingFileName;
  undefined1 *puVar17;
  char *pcVar18;
  undefined **ppuVar19;
  undefined1 auStack_538 [64];
  undefined1 local_4f8 [16];
  undefined1 auStack_4e8 [16];
  undefined1 local_4d8 [16];
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8 [16];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [40];
  undefined1 local_470 [36];
  int iStack_44c;
  longlong local_448 [2];
  uint local_438 [14];
  longlong alStack_400 [13];
  undefined **local_398 [11];
  int iStack_33c;
  longlong local_338;
  undefined1 local_330 [8];
  uint auStack_328 [14];
  longlong alStack_2f0 [12];
  undefined **local_290 [13];
  undefined1 *local_228;
  undefined **local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  LPCWSTR *****local_1f8 [3];
  ulonglong local_1e0;
  LPCWSTR *****local_1d8 [3];
  ulonglong local_1c0;
  undefined *local_1b8 [7];
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_538;
  if ((DAT_1808e49f8 != 0) && (cVar6 = FUN_1800a7de0(&DAT_1808e49e8), cVar6 != '\0')) {
    local_228 = (undefined1 *)0x0;
    local_220 = &PTR_vftable_1808d7db8;
    local_4b8 = (undefined1  [16])0x0;
    local_4a8 = 0;
    local_4a0 = 0;
    FUN_180159e60(local_4b8,L"embedded",8);
    local_4d8 = (undefined1  [16])0x0;
    local_4c8 = 0;
    local_4c0 = 0;
    FUN_180159e60(local_4d8,L"particles",9);
    uVar12 = FUN_1800a7e60(local_498,&DAT_1808e49e8,local_4d8);
    FUN_1800a7e60(local_58,uVar12,local_4b8);
    FUN_18015b930(local_498);
    FUN_18015b930(local_4d8);
    FUN_18015b930(local_4b8);
    FUN_1800a81d0(local_58,&local_228);
    if ((int)local_228 == 0) {
      local_1b8[0] = &DAT_180809440;
      local_1b8[1] = (undefined *)0x4;
      local_1b8[2] = &DAT_180907860;
      local_1b8[3] = (undefined *)0xecf;
      local_1b8[4] = &DAT_180809428;
      local_1b8[5] = (undefined *)0x4;
      local_1b8[6] = &DAT_180904a90;
      local_180 = 0xf4a;
      local_178 = "stars";
      local_170 = 5;
      local_168 = &DAT_180908730;
      local_160 = 0xfdb;
      local_158 = &DAT_180809438;
      local_150 = 4;
      local_148 = &DAT_180903dc0;
      local_140 = 0xccc;
      local_138 = &DAT_180809430;
      local_130 = 4;
      local_128 = &DAT_180909710;
      local_120 = 0x142d;
      local_118 = "tracer";
      local_110 = 6;
      local_108 = &DAT_18090ab40;
      local_100 = 0xdc9;
      local_f8 = "sparks";
      local_f0 = 6;
      local_e8 = &DAT_1809059e0;
      local_e0 = 0xe79;
      local_d8 = &DAT_180809488;
      local_d0 = 4;
      local_c8 = &DAT_180906860;
      local_c0 = 0xfff;
      local_b8 = "weather_snow";
      local_b0 = 0xc;
      local_a8 = &DAT_18080a540;
      local_a0 = 0xe5a;
      local_98 = "weather_rain";
      local_90 = 0xc;
      local_88 = &DAT_18080b3a0;
      local_80 = 0xeb6;
      local_78 = "weather_stars";
      local_70 = 0xd;
      local_68 = &DAT_180809580;
      local_60 = 0xfb6;
      ppuVar19 = local_1b8 + 2;
      do {
        local_218 = (undefined1  [16])0x0;
        local_208 = (undefined1  [16])0x0;
        FUN_18015ba30(local_218,ppuVar19[-2],ppuVar19[-1]);
        pauVar13 = (undefined1 (*) [16])FUN_18015b2a0(local_218,".vpcf_c",7);
        local_4f8 = *pauVar13;
        auStack_4e8 = pauVar13[1];
        (*pauVar13)[0] = 0;
        *(undefined8 *)pauVar13[1] = 0;
        *(undefined8 *)(pauVar13[1] + 8) = 0xf;
        uVar12 = auStack_4e8._0_8_;
        puVar17 = local_4f8;
        if (0xf < (ulonglong)auStack_4e8._8_8_) {
          puVar17 = (undefined1 *)local_4f8._0_8_;
        }
        uVar7 = __std_fs_code_page();
        local_220 = (undefined **)uVar12;
        local_228 = puVar17;
        FUN_1801628d0(local_470,uVar7,&local_228);
        FUN_1800a7e60(local_1d8,local_58,local_470);
        FUN_18015b930(local_470);
        FUN_18015c010(local_4f8);
        FUN_18015c010(local_218);
        ppppppWVar16 = (LPCWSTR *****)local_1d8;
        if (7 < local_1c0) {
          ppppppWVar16 = local_1d8[0];
        }
        DVar8 = GetFileAttributesW((LPCWSTR)ppppppWVar16);
        if ((DVar8 != 0xffffffff) && ((DVar8 & 0x410) != 0)) {
LAB_1803b194c:
          FUN_18015b930(local_1d8);
          break;
        }
        FUN_18063ab10(local_448,0,0x110);
        FUN_18015e690(local_448,local_1d8,0x24);
        bVar5 = false;
        if ((*(byte *)((longlong)local_438 + (longlong)*(int *)(local_448[0] + 4)) & 6) == 0) {
          puVar2 = ppuVar19[1];
          plVar14 = (longlong *)FUN_180176ec0(local_448,local_4f8);
          if ((undefined *)(plVar14[1] + *plVar14) == puVar2) {
            local_218 = (undefined1  [16])0x0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_208._8_8_;
            local_208 = auVar3 << 0x40;
            if (puVar2 != (undefined *)0x0) {
              if ((undefined *)0x7fffffffffffffff < puVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_1801136f0();
              }
              lVar15 = FUN_18015bca0(puVar2);
              local_218._0_8_ = lVar15;
              local_208._0_8_ = puVar2 + lVar15;
              FUN_18063ab10(lVar15,0,puVar2);
              local_218._8_8_ = puVar2 + lVar15;
            }
            local_4f8 = (undefined1  [16])0x0;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = auStack_4e8._8_8_;
            auStack_4e8 = auVar4 << 0x40;
            FUN_180176fb0(local_448,local_4f8);
            FUN_1801771e0(local_448,local_218._0_8_,local_218._8_8_ - local_218._0_8_);
            if (*(int *)((longlong)local_438 + (longlong)*(int *)(local_448[0] + 4)) == 0) {
              iVar9 = memcmp((void *)local_218._0_8_,*ppuVar19,local_218._8_8_ - local_218._0_8_);
              if (iVar9 != 0) goto LAB_1803b1557;
              bVar5 = true;
            }
            else {
LAB_1803b1557:
              bVar5 = false;
            }
            FUN_180113710(local_218);
          }
        }
        lVar15 = FUN_180113da0(local_438);
        if (lVar15 == 0) {
          lVar15 = (longlong)*(int *)(local_448[0] + 4);
          uVar10 = 4;
          if (*(longlong *)((longlong)alStack_400 + lVar15) != 0) {
            uVar10 = 0;
          }
          uVar10 = uVar10 | *(uint *)((longlong)local_438 + lVar15) & 0x15 | 2;
          *(uint *)((longlong)local_438 + lVar15) = uVar10;
          uVar10 = uVar10 & *(uint *)((longlong)local_438 + lVar15 + 4);
          if (uVar10 != 0) {
            if ((uVar10 & 4) == 0) {
              pcVar18 = "ios_base::failbit set";
              if ((uVar10 & 2) == 0) {
                pcVar18 = "ios_base::eofbit set";
              }
            }
            else {
              pcVar18 = "ios_base::badbit set";
            }
            uVar12 = FUN_1801597e0(&local_228,1);
            FUN_1801596c0(local_498,pcVar18,uVar12);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_498,&DAT_1808d0f18);
          }
        }
        if (!bVar5) {
          FUN_1800f5370(local_1f8,local_1d8);
          FUN_1800f52e0(local_1f8,L".tmp",4);
          ppppppWVar16 = (LPCWSTR *****)local_1f8;
          if (7 < local_1e0) {
            ppppppWVar16 = local_1f8[0];
          }
          DVar8 = GetFileAttributesW((LPCWSTR)ppppppWVar16);
          if ((DVar8 == 0xffffffff) || ((DVar8 & 0x410) == 0)) {
            FUN_18063ab10(&local_338,0,0x108);
            FUN_1800e6fe0(&local_338,local_1f8,0x30);
            FUN_1801ad380(&local_338,*ppuVar19,ppuVar19[1]);
            FUN_1800f6450(&local_338);
            iVar9 = *(int *)((longlong)auStack_328 + (longlong)*(int *)(local_338 + 4));
            lVar15 = FUN_180113da0(local_330);
            if (lVar15 == 0) {
              lVar15 = (longlong)*(int *)(local_338 + 4);
              uVar10 = 4;
              if (*(longlong *)((longlong)alStack_2f0 + lVar15) != 0) {
                uVar10 = 0;
              }
              uVar10 = uVar10 | *(uint *)((longlong)auStack_328 + lVar15) & 0x15 | 2;
              *(uint *)((longlong)auStack_328 + lVar15) = uVar10;
              uVar10 = uVar10 & *(uint *)((longlong)auStack_328 + lVar15 + 4);
              if (uVar10 != 0) {
                if ((uVar10 & 4) == 0) {
                  pcVar18 = "ios_base::failbit set";
                  if ((uVar10 & 2) == 0) {
                    pcVar18 = "ios_base::eofbit set";
                  }
                }
                else {
                  pcVar18 = "ios_base::badbit set";
                }
                uVar12 = FUN_1801597e0(&local_228,1);
                FUN_1801596c0(local_498,pcVar18,uVar12);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_498,&DAT_1808d0f18);
              }
            }
            if (iVar9 == 0) {
              ppppppWVar16 = (LPCWSTR *****)local_1d8;
              if (7 < local_1c0) {
                ppppppWVar16 = local_1d8[0];
              }
              lpExistingFileName = (LPCWSTR *****)local_1f8;
              if (7 < local_1e0) {
                lpExistingFileName = local_1f8[0];
              }
              BVar11 = MoveFileExW((LPCWSTR)lpExistingFileName,(LPCWSTR)ppppppWVar16,9);
              if (BVar11 != 0) {
                *(undefined ***)(local_330 + (longlong)*(int *)(local_338 + 4) + -8) =
                     std::basic_ofstream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)local_398 + (longlong)*(int *)(local_338 + 4) + 0x5c) =
                     *(int *)(local_338 + 4) + -0xa8;
                FUN_1800f63e0(local_330);
                *(undefined ***)(local_330 + (longlong)*(int *)(local_338 + 4) + -8) =
                     std::basic_ostream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)local_398 + (longlong)*(int *)(local_338 + 4) + 0x5c) =
                     *(int *)(local_338 + 4) + -0x10;
                local_290[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)local_290);
                FUN_18015b930(local_1f8);
                *(undefined ***)((longlong)local_448 + (longlong)*(int *)(local_448[0] + 4)) =
                     std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                *(int *)(local_470 + (longlong)*(int *)(local_448[0] + 4) + 0x24) =
                     *(int *)(local_448[0] + 4) + -0xb0;
                FUN_1800f63e0(local_438);
                *(undefined ***)((longlong)local_448 + (longlong)*(int *)(local_448[0] + 4)) =
                     std::basic_istream<char,std::char_traits<char>_>::vftable;
                *(int *)(local_470 + (longlong)*(int *)(local_448[0] + 4) + 0x24) =
                     *(int *)(local_448[0] + 4) + -0x18;
                local_398[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)local_398);
                goto LAB_1803b183b;
              }
            }
            *(undefined ***)(local_330 + (longlong)*(int *)(local_338 + 4) + -8) =
                 std::basic_ofstream<char,std::char_traits<char>_>::vftable;
            *(int *)((longlong)local_398 + (longlong)*(int *)(local_338 + 4) + 0x5c) =
                 *(int *)(local_338 + 4) + -0xa8;
            FUN_1800f63e0(local_330);
            *(undefined ***)(local_330 + (longlong)*(int *)(local_338 + 4) + -8) =
                 std::basic_ostream<char,std::char_traits<char>_>::vftable;
            *(int *)((longlong)local_398 + (longlong)*(int *)(local_338 + 4) + 0x5c) =
                 *(int *)(local_338 + 4) + -0x10;
            local_290[0] = std::ios_base::vftable;
            std::ios_base::_Ios_base_dtor((ios_base *)local_290);
          }
          FUN_18015b930(local_1f8);
          *(undefined ***)((longlong)local_448 + (longlong)*(int *)(local_448[0] + 4)) =
               std::basic_ifstream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_470 + (longlong)*(int *)(local_448[0] + 4) + 0x24) =
               *(int *)(local_448[0] + 4) + -0xb0;
          FUN_1800f63e0(local_438);
          *(undefined ***)((longlong)local_448 + (longlong)*(int *)(local_448[0] + 4)) =
               std::basic_istream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_470 + (longlong)*(int *)(local_448[0] + 4) + 0x24) =
               *(int *)(local_448[0] + 4) + -0x18;
          local_398[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_398);
          goto LAB_1803b194c;
        }
        *(undefined ***)((longlong)local_448 + (longlong)*(int *)(local_448[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_470 + (longlong)*(int *)(local_448[0] + 4) + 0x24) =
             *(int *)(local_448[0] + 4) + -0xb0;
        FUN_1800f63e0(local_438);
        *(undefined ***)((longlong)local_448 + (longlong)*(int *)(local_448[0] + 4)) =
             std::basic_istream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_470 + (longlong)*(int *)(local_448[0] + 4) + 0x24) =
             *(int *)(local_448[0] + 4) + -0x18;
        local_398[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_398);
LAB_1803b183b:
        FUN_18015b930(local_1d8);
        ppuVar1 = ppuVar19 + 2;
        ppuVar19 = ppuVar19 + 4;
      } while (ppuVar1 != local_58);
    }
    FUN_18015b930(local_58);
  }
}



