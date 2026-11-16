// FUN_1803e3470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e3470 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e3470(longlong param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  undefined8 uVar7;
  longlong *plVar8;
  LPCWSTR ***ppppWVar9;
  LPCWSTR ***lpExistingFileName;
  wchar_t *pwVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_1c28 [48];
  undefined1 local_1bf8 [16];
  undefined8 local_1be8;
  undefined1 local_1bd8 [16];
  undefined8 local_1bc8;
  undefined8 local_1bc0;
  undefined1 local_1bb8 [16];
  undefined8 local_1ba8;
  undefined8 local_1ba0;
  undefined1 local_1b98 [16];
  undefined8 local_1b88;
  undefined8 local_1b80;
  undefined1 local_1b78 [44];
  int iStack_1b4c;
  longlong local_1b48 [2];
  uint local_1b38 [14];
  longlong alStack_1b00 [13];
  undefined **local_1a98 [11];
  int iStack_1a3c;
  longlong local_1a38;
  undefined1 local_1a30 [8];
  uint auStack_1a28 [14];
  longlong alStack_19f0 [12];
  undefined **local_1990 [13];
  char local_1928 [8];
  LPCWSTR ***local_1920 [3];
  ulonglong local_1908;
  LPCWSTR ***local_1900 [3];
  ulonglong local_18e8;
  undefined1 local_18e0 [40];
  undefined1 local_18b8 [3136];
  undefined1 local_c78 [3136];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1803e349a;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_1c28;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (cVar2 = FUN_1800a7de0(), cVar2 != '\0')) {
    local_1bb8 = (undefined1  [16])0x0;
    local_1ba8 = 0;
    local_1ba0 = 0;
    FUN_180159e60(local_1bb8,L"hvhgod",6);
    local_1bd8 = (undefined1  [16])0x0;
    local_1bc8 = 0;
    local_1bc0 = 0;
    FUN_180159e60(local_1bd8,L"materials",9);
    uVar7 = FUN_1800a7e60(local_1b78,param_1,local_1bd8);
    FUN_1800a7e60(local_18e0,uVar7,local_1bb8);
    FUN_18015b930(local_1b78);
    FUN_18015b930(local_1bd8);
    FUN_18015b930(local_1bb8);
    local_1bf8 = ZEXT816(0x1808d7db8) << 0x40;
    FUN_1800a81d0(local_18e0,local_1bf8);
    cVar2 = '\0';
    if (local_1bf8._0_4_ == 0) {
      local_1928[0] = '\0';
      local_1928[1] = '\x01';
      pcVar11 = local_1928;
      while( true ) {
        pwVar10 = L"character_matte_v3.vtex_c";
        if (cVar2 != '\0') {
          pwVar10 = L"character_metal_v3.vtex_c";
        }
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar10[lVar12] != L'\0');
        local_1b98 = (undefined1  [16])0x0;
        local_1b88 = 0;
        local_1b80 = 0;
        FUN_180159e60(local_1b98);
        FUN_1800a7e60(local_1900,local_18e0,local_1b98);
        FUN_18015b930(local_1b98);
        uVar7 = FUN_1803e2490(local_18b8,cVar2);
        FUN_18063aed0(local_c78,uVar7,0xc34);
        ppppWVar9 = (LPCWSTR ***)local_1900;
        if (7 < local_18e8) {
          ppppWVar9 = local_1900[0];
        }
        DVar3 = GetFileAttributesW((LPCWSTR)ppppWVar9);
        if ((DVar3 != 0xffffffff) && ((DVar3 & 0x410) != 0)) break;
        FUN_18063ab10(local_1b48,0,0x110);
        FUN_18015e690(local_1b48,local_1900,0x24);
        bVar1 = false;
        if (((*(byte *)((longlong)local_1b38 + (longlong)*(int *)(local_1b48[0] + 4)) & 6) == 0) &&
           (plVar8 = (longlong *)FUN_180176ec0(local_1b48,local_1bf8), plVar8[1] + *plVar8 == 0xc34)
           ) {
          FUN_18063ab10(local_18b8,0,0xc34);
          local_1bf8 = (undefined1  [16])0x0;
          local_1be8 = 0;
          FUN_180176fb0(local_1b48,local_1bf8);
          FUN_1801771e0(local_1b48,local_18b8,0xc34);
          if ((*(int *)((longlong)local_1b38 + (longlong)*(int *)(local_1b48[0] + 4)) == 0) &&
             (iVar4 = memcmp(local_18b8,local_c78,0xc34), iVar4 == 0)) {
            bVar1 = true;
          }
        }
        lVar12 = FUN_180113da0(local_1b38);
        if (lVar12 == 0) {
          lVar12 = (longlong)*(int *)(local_1b48[0] + 4);
          uVar5 = 4;
          if (*(longlong *)((longlong)alStack_1b00 + lVar12) != 0) {
            uVar5 = 0;
          }
          uVar5 = uVar5 | *(uint *)((longlong)local_1b38 + lVar12) & 0x15 | 2;
          *(uint *)((longlong)local_1b38 + lVar12) = uVar5;
          uVar5 = uVar5 & *(uint *)((longlong)local_1b38 + lVar12 + 4);
          if (uVar5 != 0) {
            if ((uVar5 & 4) == 0) {
              pcVar11 = "ios_base::failbit set";
              if ((uVar5 & 2) == 0) {
                pcVar11 = "ios_base::eofbit set";
              }
            }
            else {
              pcVar11 = "ios_base::badbit set";
            }
            uVar7 = FUN_1801597e0(local_1bf8,1);
            FUN_1801596c0(local_1b78,pcVar11,uVar7);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_1b78,&DAT_1808d0f18);
          }
        }
        if (!bVar1) {
          FUN_1800f5370(local_1920,local_1900);
          FUN_1800f52e0(local_1920,L".tmp",4);
          ppppWVar9 = (LPCWSTR ***)local_1920;
          if (7 < local_1908) {
            ppppWVar9 = local_1920[0];
          }
          DVar3 = GetFileAttributesW((LPCWSTR)ppppWVar9);
          if ((DVar3 == 0xffffffff) || ((DVar3 & 0x410) == 0)) {
            FUN_18063ab10(&local_1a38,0,0x108);
            FUN_1800e6fe0(&local_1a38,local_1920,0x30);
            FUN_1801ad380(&local_1a38,local_c78,0xc34);
            FUN_1800f6450(&local_1a38);
            iVar4 = *(int *)((longlong)auStack_1a28 + (longlong)*(int *)(local_1a38 + 4));
            lVar12 = FUN_180113da0(local_1a30);
            if (lVar12 == 0) {
              lVar12 = (longlong)*(int *)(local_1a38 + 4);
              uVar5 = 4;
              if (*(longlong *)((longlong)alStack_19f0 + lVar12) != 0) {
                uVar5 = 0;
              }
              uVar5 = uVar5 | *(uint *)((longlong)auStack_1a28 + lVar12) & 0x15 | 2;
              *(uint *)((longlong)auStack_1a28 + lVar12) = uVar5;
              uVar5 = uVar5 & *(uint *)((longlong)auStack_1a28 + lVar12 + 4);
              if (uVar5 != 0) {
                if ((uVar5 & 4) == 0) {
                  pcVar11 = "ios_base::failbit set";
                  if ((uVar5 & 2) == 0) {
                    pcVar11 = "ios_base::eofbit set";
                  }
                }
                else {
                  pcVar11 = "ios_base::badbit set";
                }
                uVar7 = FUN_1801597e0(local_1bf8,1);
                FUN_1801596c0(local_1b78,pcVar11,uVar7);
                    /* WARNING: Subroutine does not return */
                FUN_180606630(local_1b78,&DAT_1808d0f18);
              }
            }
            if (iVar4 == 0) {
              ppppWVar9 = (LPCWSTR ***)local_1900;
              if (7 < local_18e8) {
                ppppWVar9 = local_1900[0];
              }
              lpExistingFileName = (LPCWSTR ***)local_1920;
              if (7 < local_1908) {
                lpExistingFileName = local_1920[0];
              }
              BVar6 = MoveFileExW((LPCWSTR)lpExistingFileName,(LPCWSTR)ppppWVar9,9);
              if (BVar6 != 0) {
                *(undefined ***)(local_1a30 + (longlong)*(int *)(local_1a38 + 4) + -8) =
                     std::basic_ofstream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)local_1a98 + (longlong)*(int *)(local_1a38 + 4) + 0x5c) =
                     *(int *)(local_1a38 + 4) + -0xa8;
                FUN_1800f63e0(local_1a30);
                *(undefined ***)(local_1a30 + (longlong)*(int *)(local_1a38 + 4) + -8) =
                     std::basic_ostream<char,std::char_traits<char>_>::vftable;
                *(int *)((longlong)local_1a98 + (longlong)*(int *)(local_1a38 + 4) + 0x5c) =
                     *(int *)(local_1a38 + 4) + -0x10;
                local_1990[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)local_1990);
                FUN_18015b930(local_1920);
                *(undefined ***)((longlong)local_1b48 + (longlong)*(int *)(local_1b48[0] + 4)) =
                     std::basic_ifstream<char,std::char_traits<char>_>::vftable;
                *(int *)(local_1b78 + (longlong)*(int *)(local_1b48[0] + 4) + 0x2c) =
                     *(int *)(local_1b48[0] + 4) + -0xb0;
                FUN_1800f63e0(local_1b38);
                *(undefined ***)((longlong)local_1b48 + (longlong)*(int *)(local_1b48[0] + 4)) =
                     std::basic_istream<char,std::char_traits<char>_>::vftable;
                *(int *)(local_1b78 + (longlong)*(int *)(local_1b48[0] + 4) + 0x2c) =
                     *(int *)(local_1b48[0] + 4) + -0x18;
                local_1a98[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)local_1a98);
                goto LAB_1803e3a13;
              }
            }
            *(undefined ***)(local_1a30 + (longlong)*(int *)(local_1a38 + 4) + -8) =
                 std::basic_ofstream<char,std::char_traits<char>_>::vftable;
            *(int *)((longlong)local_1a98 + (longlong)*(int *)(local_1a38 + 4) + 0x5c) =
                 *(int *)(local_1a38 + 4) + -0xa8;
            FUN_1800f63e0(local_1a30);
            *(undefined ***)(local_1a30 + (longlong)*(int *)(local_1a38 + 4) + -8) =
                 std::basic_ostream<char,std::char_traits<char>_>::vftable;
            *(int *)((longlong)local_1a98 + (longlong)*(int *)(local_1a38 + 4) + 0x5c) =
                 *(int *)(local_1a38 + 4) + -0x10;
            local_1990[0] = std::ios_base::vftable;
            std::ios_base::_Ios_base_dtor((ios_base *)local_1990);
          }
          FUN_18015b930(local_1920);
          *(undefined ***)((longlong)local_1b48 + (longlong)*(int *)(local_1b48[0] + 4)) =
               std::basic_ifstream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_1b78 + (longlong)*(int *)(local_1b48[0] + 4) + 0x2c) =
               *(int *)(local_1b48[0] + 4) + -0xb0;
          FUN_1800f63e0(local_1b38);
          *(undefined ***)((longlong)local_1b48 + (longlong)*(int *)(local_1b48[0] + 4)) =
               std::basic_istream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_1b78 + (longlong)*(int *)(local_1b48[0] + 4) + 0x2c) =
               *(int *)(local_1b48[0] + 4) + -0x18;
          local_1a98[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_1a98);
          break;
        }
        *(undefined ***)((longlong)local_1b48 + (longlong)*(int *)(local_1b48[0] + 4)) =
             std::basic_ifstream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_1b78 + (longlong)*(int *)(local_1b48[0] + 4) + 0x2c) =
             *(int *)(local_1b48[0] + 4) + -0xb0;
        FUN_1800f63e0(local_1b38);
        *(undefined ***)((longlong)local_1b48 + (longlong)*(int *)(local_1b48[0] + 4)) =
             std::basic_istream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_1b78 + (longlong)*(int *)(local_1b48[0] + 4) + 0x2c) =
             *(int *)(local_1b48[0] + 4) + -0x18;
        local_1a98[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_1a98);
LAB_1803e3a13:
        FUN_18015b930(local_1900);
        pcVar11 = pcVar11 + 1;
        if (pcVar11 == local_1928 + 2) goto LAB_1803e3b31;
        cVar2 = *pcVar11;
      }
      FUN_18015b930(local_1900);
    }
LAB_1803e3b31:
    FUN_18015b930(local_18e0);
  }
}



