// FUN_18015ddb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ddb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18015ddb0(char param_1)

{
  short *psVar1;
  short sVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  BOOL BVar7;
  ULONGLONG UVar8;
  short *psVar9;
  undefined8 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  LPCWSTR lpExistingFileName;
  undefined1 *puVar15;
  undefined8 **ppuVar16;
  LPCWSTR lpNewFileName;
  short *psVar17;
  char *pcVar18;
  uint uVar19;
  undefined *puVar20;
  int *piVar21;
  undefined1 auStack_7f8 [32];
  undefined **local_7d8;
  undefined8 local_7d0;
  undefined1 local_7c8;
  undefined1 local_7b8 [16];
  undefined *local_7a8;
  undefined *local_7a0;
  undefined1 *local_798;
  char **local_790;
  undefined1 local_788 [8];
  undefined1 local_780 [8];
  undefined1 local_778 [24];
  undefined1 local_760 [16];
  undefined8 local_750;
  undefined1 local_748 [24];
  undefined1 local_730 [16];
  undefined8 local_720;
  char *local_718;
  undefined8 local_710;
  undefined1 local_708 [16];
  undefined8 local_6f8;
  undefined1 local_6f0 [16];
  undefined8 local_6e0;
  undefined1 local_6d8 [32];
  undefined1 local_6b8 [40];
  undefined1 local_690 [8];
  undefined1 local_688 [16];
  undefined8 local_678;
  ulonglong local_670;
  undefined1 local_668 [16];
  longlong local_658;
  ulonglong uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  int local_630;
  int iStack_62c;
  char local_628;
  undefined7 uStack_627;
  undefined1 local_620 [8];
  uint auStack_618 [14];
  longlong alStack_5e0 [12];
  undefined **local_580 [171];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_7f8;
  local_648 = 0x2d0000002e;
  uStack_640 = 0x77;
  local_638 = 0;
  local_658 = 0;
  uStack_650 = 7;
  local_668._2_14_ = SUB1614((undefined1  [16])0x0,2);
  auVar3._14_2_ = 0;
  auVar3._0_14_ = local_668._2_14_;
  local_668 = auVar3 << 0x10;
  local_7a0 = &DAT_1808da600;
  iVar6 = FUN_1805f68d0(&DAT_1808da600);
  if (iVar6 != 0) goto LAB_18015e611;
  if (DAT_1808da64c == 0x7fffffff) goto LAB_18015e678;
  if (((DAT_180bb904c == '\0') || (DAT_1808da678 == 0)) ||
     ((param_1 == '\0' && (UVar8 = GetTickCount64(), UVar8 < DAT_180bbe8b0)))) goto LAB_18015e5c7;
  local_648 = _DAT_1808da650;
  uStack_640 = uRam00000001808da658;
  local_638 = DAT_1808da660;
  ppuVar16 = &DAT_1808da668;
  if (7 < DAT_1808da680) {
    ppuVar16 = (undefined8 **)DAT_1808da668;
  }
  FUN_1800f5190(local_668,ppuVar16,DAT_1808da678);
  puVar20 = DAT_180bbe8b8;
  local_7a8 = DAT_180bbe8b8;
  local_7a0 = DAT_180bbe8b8;
  FUN_1805f68fc(&DAT_1808da600);
  bVar4 = false;
  local_7c8 = 0;
  puVar15 = local_668;
  if (7 < uStack_650) {
    puVar15 = (undefined1 *)local_668._0_8_;
  }
  psVar17 = (short *)(puVar15 + local_658 * 2);
  psVar9 = (short *)FUN_1800a7b00(puVar15,psVar17);
  if (psVar9 != psVar17) {
    do {
      if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) break;
      psVar9 = psVar9 + 1;
    } while (psVar9 != psVar17);
    do {
      if (psVar9 == psVar17) goto LAB_18015df9b;
      sVar2 = psVar17[-1];
      psVar1 = psVar17;
    } while ((sVar2 != 0x5c) && (psVar17 = psVar17 + -1, sVar2 != 0x2f));
    do {
      psVar17 = psVar1;
      if (psVar9 == psVar17) break;
      psVar1 = psVar17 + -1;
    } while ((*psVar1 == 0x5c) || (*psVar1 == 0x2f));
  }
LAB_18015df9b:
  local_688 = (undefined1  [16])0x0;
  local_678 = 0;
  local_670 = 0;
  FUN_180159e60(local_688,puVar15,(longlong)psVar17 - (longlong)puVar15 >> 1);
  cVar5 = FUN_1800a9120(local_688);
  FUN_18015b930(local_688);
  if (cVar5 != '\0') {
    FUN_1800f5370(local_688,local_668);
    FUN_1800f52e0(local_688,L".tmp",4);
    FUN_18063ab10(&local_628,0,0x108);
    FUN_1800e6fe0(&local_628,local_688,0x30);
    FUN_1800e60e0(local_748,"version");
    local_730 = ZEXT816(0);
    FUN_1801409d0(local_730 + 8,0);
    local_730[0] = 5;
    local_730._8_8_ = 2;
    local_720 = 0;
    local_798 = local_748;
    local_790 = &local_718;
    FUN_1800f4e90(local_708,&local_798,1,2);
    local_6f8 = 0;
    FUN_1800e60e0(local_778,&DAT_1807005f0);
    local_798 = local_760;
    local_760 = ZEXT816(0);
    FUN_1801409d0(local_760 + 8,0);
    local_760[0] = 2;
    local_7b8 = (undefined1  [16])0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_718 = "tier0.dll:g_pMemAlloc";
      local_710 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_718);
    }
    puVar10 = (undefined8 *)
              (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
    local_7b8._8_8_ = puVar10;
    local_7b8._0_8_ = local_690;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    pauVar11 = (undefined1 (*) [16])FUN_18015bca0(0x60);
    *puVar10 = pauVar11;
    puVar10[1] = pauVar11;
    puVar10[2] = pauVar11 + 6;
    piVar21 = (int *)&local_648;
    do {
      *pauVar11 = (undefined1  [16])0x0;
      iVar6 = *piVar21;
      FUN_1801409d0(*pauVar11 + 8,(*pauVar11)[0]);
      (*pauVar11)[0] = 5;
      *(longlong *)(*pauVar11 + 8) = (longlong)iVar6;
      pauVar11 = pauVar11 + 1;
      piVar21 = piVar21 + 1;
    } while (piVar21 != &local_630);
    puVar10[1] = pauVar11;
    local_760._8_8_ = puVar10;
    local_750 = 0;
    local_7b8._0_8_ = local_778;
    local_7b8._8_8_ = local_748;
    FUN_1800f4e90(local_6f0,local_7b8,1,2);
    local_6e0 = 0;
    local_7b8._8_8_ = local_6d8;
    local_7b8._0_8_ = local_708;
    uVar12 = FUN_1800f4e90(local_788,local_7b8,1,2);
    local_7d0 = (char *)((ulonglong)local_7d0._4_4_ << 0x20);
    puVar13 = (undefined8 *)FUN_1800f4710(uVar12,local_6d8,2);
    puVar10 = puVar13 + 2;
    if (0xf < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    FUN_1800f7160(&local_628,puVar13,*puVar10);
    FUN_18015c010(local_6d8);
    FUN_1801409d0(local_780,local_788[0]);
    _eh_vector_destructor_iterator_(local_708,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_778,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_748,0x18,2,FUN_1800aab30);
    lVar14 = FUN_180113da0(local_620);
    if (lVar14 == 0) {
      lVar14 = (longlong)*(int *)(CONCAT71(uStack_627,local_628) + 4);
      uVar19 = 4;
      if (*(longlong *)((longlong)alStack_5e0 + lVar14) != 0) {
        uVar19 = 0;
      }
      uVar19 = uVar19 | *(uint *)((longlong)auStack_618 + lVar14) & 0x15 | 2;
      *(uint *)((longlong)auStack_618 + lVar14) = uVar19;
      uVar19 = uVar19 & *(uint *)((longlong)auStack_618 + lVar14 + 4);
      if (uVar19 != 0) {
        if ((uVar19 & 4) == 0) {
          pcVar18 = "ios_base::failbit set";
          if ((uVar19 & 2) == 0) {
            pcVar18 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar18 = "ios_base::badbit set";
        }
        uVar12 = FUN_1801597e0(local_788,1);
        FUN_1801596c0(local_6b8,pcVar18,uVar12);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_6b8,&DAT_1808d0f18);
      }
    }
    if (*(int *)((longlong)auStack_618 + (longlong)*(int *)(CONCAT71(uStack_627,local_628) + 4)) ==
        0) {
      lpNewFileName = (LPCWSTR)local_668;
      if (7 < uStack_650) {
        lpNewFileName = (LPCWSTR)local_668._0_8_;
      }
      lpExistingFileName = (LPCWSTR)local_688;
      if (7 < local_670) {
        lpExistingFileName = (LPCWSTR)local_688._0_8_;
      }
      BVar7 = MoveFileExW(lpExistingFileName,lpNewFileName,9);
      if (BVar7 == 0) goto LAB_18015e410;
      bVar4 = true;
      local_7c8 = 1;
    }
    else {
LAB_18015e410:
      bVar4 = false;
      local_7c8 = 0;
      puVar15 = local_688;
      if (7 < local_670) {
        puVar15 = (undefined1 *)local_688._0_8_;
      }
      FUN_1805fb9a8(puVar15);
    }
    *(undefined ***)(local_620 + (longlong)*(int *)(CONCAT71(uStack_627,local_628) + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    iVar6 = *(int *)(CONCAT71(uStack_627,local_628) + 4);
    *(int *)(local_620 + (longlong)iVar6 + -0xc) = iVar6 + -0xa8;
    FUN_1800f63e0(local_620);
    *(undefined ***)(local_620 + (longlong)*(int *)(CONCAT71(uStack_627,local_628) + 4) + -8) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    iVar6 = *(int *)(CONCAT71(uStack_627,local_628) + 4);
    *(int *)(local_620 + (longlong)iVar6 + -0xc) = iVar6 + -0x10;
    local_580[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_580);
    FUN_18015b930(local_688);
    puVar20 = local_7a8;
  }
  iVar6 = FUN_1805f68d0(&DAT_1808da600);
  if (iVar6 != 0) {
LAB_18015e611:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da64c == 0x7fffffff) {
LAB_18015e678:
    DAT_1808da64c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  DAT_180bb904b = !bVar4;
  LOCK();
  UNLOCK();
  if (puVar20 == DAT_180bbe8b8) {
    if (bVar4) {
      DAT_180bb904c = '\0';
      goto LAB_18015e5c7;
    }
  }
  else if (bVar4) goto LAB_18015e5c7;
  UVar8 = GetTickCount64();
  DAT_180bbe8b0 = UVar8 + 5000;
  FUN_18063ab10(&local_628,0,0x600);
  FUN_18015ad60(&local_628,0x600,0xffffffffffffffff,"action=retry current_session=preserved");
  local_7d8 = &PTR_180700558;
  if (local_628 != '\0') {
    local_7d8 = (undefined **)&DAT_1806bcfc0;
  }
  local_7d0 = &local_628;
  FUN_1800f6900(2);
LAB_18015e5c7:
  FUN_1805f68fc(&DAT_1808da600);
  FUN_18015b930(local_668);
}



