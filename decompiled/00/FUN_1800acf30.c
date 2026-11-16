// FUN_1800acf30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800acf30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800acf30(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  BOOL BVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  LPCWSTR ***ppppWVar13;
  LPCWSTR ***lpExistingFileName;
  undefined8 ****ppppuVar14;
  char *pcVar15;
  undefined1 auStack_908 [32];
  undefined **local_8e8;
  undefined8 local_8e0;
  undefined1 local_8d8 [16];
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined4 local_8b8 [2];
  undefined1 local_8b0 [8];
  undefined1 local_8a8 [16];
  undefined8 local_898;
  undefined8 local_890;
  undefined1 local_888 [16];
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined1 local_858 [16];
  undefined8 local_848;
  undefined8 local_840 [2];
  undefined8 local_830;
  undefined1 local_828 [16];
  undefined8 local_818;
  undefined1 local_810 [16];
  undefined8 local_800;
  undefined1 local_7f8 [32];
  undefined1 local_7d8 [44];
  int iStack_7ac;
  longlong local_7a8;
  undefined1 local_7a0 [8];
  uint auStack_798 [14];
  longlong alStack_760 [12];
  undefined **local_700 [13];
  LPCWSTR ***local_698 [3];
  ulonglong local_680;
  undefined1 local_678 [16];
  longlong local_668;
  LPCWSTR ***local_658 [3];
  ulonglong local_640;
  undefined8 ****local_638 [3];
  ulonglong local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_908;
  bVar3 = false;
  bVar2 = false;
  local_8b8[0] = 0;
  FUN_1800a8ff0(local_678);
  if (local_668 != 0) {
    local_8a8 = (undefined1  [16])0x0;
    local_898 = 0;
    local_890 = 0;
    FUN_180159e60(local_8a8,L"Configs",7);
    local_8b8[0] = 0xd;
    uVar8 = FUN_1800a7e60(local_888,local_678,local_8a8);
    bVar3 = true;
    bVar2 = true;
    cVar5 = FUN_1800a9120(uVar8);
    if (cVar5 != '\0') {
      bVar4 = false;
      goto LAB_1800acfe6;
    }
  }
  bVar4 = true;
LAB_1800acfe6:
  if (bVar2) {
    FUN_18015b930(local_888);
  }
  if (bVar3) {
    FUN_18015b930(local_8a8);
  }
  if (bVar4) {
    FUN_18015b930(local_678);
  }
  else {
    local_8d8 = (undefined1  [16])0x0;
    local_8c8 = 0;
    local_8c0 = 0;
    FUN_180159e60(local_8d8,L"loaded-profile.json",0x13);
    local_8a8 = (undefined1  [16])0x0;
    local_898 = 0;
    local_890 = 0;
    FUN_180159e60(local_8a8,L"Configs",7);
    uVar8 = FUN_1800a7e60(local_828,local_678,local_8a8);
    FUN_1800a7e60(local_698,uVar8,local_8d8);
    FUN_18015b930(local_828);
    FUN_18015b930(local_8a8);
    FUN_18015b930(local_8d8);
    local_888 = (undefined1  [16])0x0;
    local_878 = 0;
    local_870 = 0;
    FUN_180159e60(local_888,L"previous-loaded-profile.json",0x1c);
    local_858 = (undefined1  [16])0x0;
    local_848 = 0;
    local_840[0] = 0;
    FUN_180159e60(local_858,L"Configs",7);
    uVar8 = FUN_1800a7e60(local_7f8,local_678,local_858);
    FUN_1800a7e60(local_638,uVar8,local_888);
    FUN_18015b930(local_7f8);
    FUN_18015b930(local_858);
    FUN_18015b930(local_888);
    local_8d8 = (undefined1  [16])0x0;
    local_8c8 = 0;
    local_8c0 = 0;
    FUN_180159e60(local_8d8,L"loaded-profile.tmp",0x12);
    local_8a8 = (undefined1  [16])0x0;
    local_898 = 0;
    local_890 = 0;
    FUN_180159e60(local_8a8,L"Configs",7);
    uVar8 = FUN_1800a7e60(local_828,local_678,local_8a8);
    FUN_1800a7e60(local_658,uVar8,local_8d8);
    FUN_18015b930(local_828);
    FUN_18015b930(local_8a8);
    FUN_18015b930(local_8d8);
    FUN_18063ab10(&local_7a8,0,0x108);
    FUN_1800e6fe0(&local_7a8,local_658,0x30);
    FUN_1800e60e0(local_858,&DAT_1806bc068);
    FUN_1800e64d0(local_840,param_1);
    local_830 = 0;
    local_8d8._0_8_ = local_858;
    local_8d8._8_8_ = local_828;
    FUN_1800f4e90(local_828,local_8d8,1,2);
    local_818 = 0;
    FUN_1800e60e0(local_888,"settings");
    puVar9 = (undefined8 *)FUN_1800abfc0(local_8a8);
    local_870 = *puVar9;
    uStack_868 = puVar9[1];
    *(undefined1 *)puVar9 = 0;
    puVar9[1] = 0;
    local_860 = 0;
    local_8d8._0_8_ = local_888;
    local_8d8._8_8_ = local_858;
    FUN_1800f4e90(local_810,local_8d8,1,2);
    local_800 = 0;
    local_8d8._0_8_ = local_828;
    local_8d8._8_8_ = local_7f8;
    uVar8 = FUN_1800f4e90(local_8b8,local_8d8,1,2);
    local_8e0 = (char *)((ulonglong)local_8e0._4_4_ << 0x20);
    puVar10 = (undefined8 *)FUN_1800f4710(uVar8,local_7f8,0xffffffff);
    puVar9 = puVar10 + 2;
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_1800f7160(&local_7a8,puVar10,*puVar9);
    FUN_18015c010(local_7f8);
    FUN_1801409d0(local_8b0,(undefined1)local_8b8[0]);
    _eh_vector_destructor_iterator_(local_828,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_888,0x18,2,FUN_1800aab30);
    FUN_1801409d0(local_8a8 + 8,local_8a8[0]);
    _eh_vector_destructor_iterator_(local_858,0x18,2,FUN_1800aab30);
    FUN_1800f6450(&local_7a8);
    iVar1 = *(int *)((longlong)auStack_798 + (longlong)*(int *)(local_7a8 + 4));
    lVar11 = FUN_180113da0(local_7a0);
    if (lVar11 == 0) {
      lVar11 = (longlong)*(int *)(local_7a8 + 4);
      uVar6 = 4;
      if (*(longlong *)((longlong)alStack_760 + lVar11) != 0) {
        uVar6 = 0;
      }
      uVar6 = uVar6 | *(uint *)((longlong)auStack_798 + lVar11) & 0x15 | 2;
      *(uint *)((longlong)auStack_798 + lVar11) = uVar6;
      uVar6 = uVar6 & *(uint *)((longlong)auStack_798 + lVar11 + 4);
      if (uVar6 != 0) {
        if ((uVar6 & 4) == 0) {
          pcVar15 = "ios_base::failbit set";
          if ((uVar6 & 2) == 0) {
            pcVar15 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar15 = "ios_base::badbit set";
        }
        uVar8 = FUN_1801597e0(local_8a8,1);
        FUN_1801596c0(local_7d8,pcVar15,uVar8);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_7d8,&DAT_1808d0f18);
      }
    }
    if (iVar1 == 0) {
      local_8d8 = ZEXT816(0x1808d7db8) << 0x40;
      piVar12 = (int *)FUN_1800a80b0(local_8b8,local_698,local_8d8);
      if ((*piVar12 != 0) && (*piVar12 != 1)) {
        ppppuVar14 = local_638;
        if (7 < local_620) {
          ppppuVar14 = local_638[0];
        }
        ppppWVar13 = (LPCWSTR ***)local_698;
        if (7 < local_680) {
          ppppWVar13 = local_698[0];
        }
        FUN_1805fb0fc(ppppWVar13,ppppuVar14,2);
      }
      ppppWVar13 = (LPCWSTR ***)local_698;
      if (7 < local_680) {
        ppppWVar13 = local_698[0];
      }
      lpExistingFileName = (LPCWSTR ***)local_658;
      if (7 < local_640) {
        lpExistingFileName = local_658[0];
      }
      BVar7 = MoveFileExW((LPCWSTR)lpExistingFileName,(LPCWSTR)ppppWVar13,9);
      if (BVar7 == 0) {
        *(undefined ***)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x30) =
             std::basic_ofstream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x2c) =
             *(int *)(local_7a8 + 4) + -0xa8;
        FUN_1800f63e0(local_7a0);
        *(undefined ***)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x30) =
             std::basic_ostream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x2c) =
             *(int *)(local_7a8 + 4) + -0x10;
        local_700[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_700);
        FUN_18015b930(local_658);
        FUN_18015b930(local_638);
        FUN_18015b930(local_698);
        FUN_18015b930(local_678);
      }
      else {
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        FUN_18063ab10(local_618,0,0x600);
        local_8e8 = (undefined **)param_1;
        FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                      "id=%s current=loaded-profile.json previous=previous-loaded-profile.json credentials=excluded"
                     );
        local_8e8 = &PTR_180700558;
        if (local_618[0] != '\0') {
          local_8e8 = (undefined **)&DAT_1806bcfc0;
        }
        local_8e0 = local_618;
        FUN_1800f6900(0);
        *(undefined ***)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x30) =
             std::basic_ofstream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x2c) =
             *(int *)(local_7a8 + 4) + -0xa8;
        FUN_1800f63e0(local_7a0);
        *(undefined ***)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x30) =
             std::basic_ostream<char,std::char_traits<char>_>::vftable;
        *(int *)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x2c) =
             *(int *)(local_7a8 + 4) + -0x10;
        local_700[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_700);
        FUN_18015b930(local_658);
        FUN_18015b930(local_638);
        FUN_18015b930(local_698);
        FUN_18015b930(local_678);
      }
    }
    else {
      *(undefined ***)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x30) =
           std::basic_ofstream<char,std::char_traits<char>_>::vftable;
      *(int *)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x2c) =
           *(int *)(local_7a8 + 4) + -0xa8;
      FUN_1800f63e0(local_7a0);
      *(undefined ***)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x30) =
           std::basic_ostream<char,std::char_traits<char>_>::vftable;
      *(int *)(local_7d8 + (longlong)*(int *)(local_7a8 + 4) + 0x2c) =
           *(int *)(local_7a8 + 4) + -0x10;
      local_700[0] = std::ios_base::vftable;
      std::ios_base::_Ios_base_dtor((ios_base *)local_700);
      FUN_18015b930(local_658);
      FUN_18015b930(local_638);
      FUN_18015b930(local_698);
      FUN_18015b930(local_678);
    }
  }
}



