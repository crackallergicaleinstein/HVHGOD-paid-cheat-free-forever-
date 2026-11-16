// FUN_1801d8420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d8420 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801d8420(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  undefined1 auVar3 [16];
  short *psVar4;
  DWORD DVar5;
  int iVar6;
  HMODULE pHVar7;
  longlong lVar8;
  short *psVar9;
  LPCWSTR ******lpFileName;
  LPWSTR pWVar10;
  ulonglong *puVar11;
  short *psVar12;
  HMODULE *ppHVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined4 local_140;
  HMODULE local_138;
  undefined8 local_130;
  HMODULE local_128;
  longlong local_120;
  undefined1 local_118 [16];
  longlong local_108;
  ulonglong local_100;
  HMODULE local_f8 [2];
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char local_b8;
  LPCWSTR ******local_b0 [3];
  ulonglong local_98;
  ulonglong local_88 [4];
  undefined1 local_68 [32];
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_140 = 0;
  local_148 = param_1;
  pHVar7 = GetModuleHandleW(L"client.dll");
  local_130 = 0;
  ppHVar13 = &local_138;
  uVar14 = 0;
  uVar15 = 7;
  local_138 = pHVar7;
  do {
    local_108 = 0;
    local_118 = (undefined1  [16])0x0;
    lVar8 = FUN_18015bca0(0x208);
    local_118._0_8_ = lVar8;
    lVar1 = lVar8 + 0x208;
    local_108 = lVar1;
    FUN_18063ab10(lVar8,0,0x208);
    lVar8 = lVar1 - local_118._0_8_;
    local_118._8_8_ = lVar1;
    while (((ulonglong)(lVar8 >> 1) < 0x8001 &&
           (DVar5 = GetModuleFileNameW(pHVar7,(LPWSTR)local_118._0_8_,
                                       (DWORD)((longlong)(local_118._8_8_ - local_118._0_8_) >> 1)),
           DVar5 != 0))) {
      if ((ulonglong)DVar5 < (ulonglong)((longlong)(local_118._8_8_ - local_118._0_8_) >> 1)) {
        local_168 = (undefined1  [16])0x0;
        uStack_158 = 0;
        uStack_150 = 0;
        FUN_180159e60(local_168,local_118._0_8_,(longlong)((ulonglong)DVar5 * 2) >> 1);
        local_d8 = local_168._0_8_;
        uStack_d0 = local_168._8_8_;
        uStack_c8 = uStack_158;
        uStack_c0 = uStack_150;
        auVar3._14_2_ = 0;
        auVar3._0_14_ = local_168._2_14_;
        local_168 = auVar3 << 0x10;
        local_b8 = '\x01';
        uStack_158 = uVar14;
        uStack_150 = uVar15;
        FUN_18015b930(local_168);
        goto LAB_1801d8551;
      }
      FUN_1801d98e0(local_118);
      lVar8 = local_118._8_8_ - local_118._0_8_;
    }
    local_b8 = '\0';
LAB_1801d8551:
    FUN_1801c6980(local_118);
    if (local_b8 != '\0') {
      FUN_18015c130(&local_d8);
      while (local_e8 != 0) {
        FUN_1800f5370(local_88,local_f8);
        local_168 = (undefined1  [16])0x0;
        uStack_158 = 0;
        uStack_150 = 0;
        FUN_180159e60(local_168,L"csgo",4);
        FUN_1800a7e60(local_68,local_f8,local_168);
        FUN_18015b930(local_168);
        puVar11 = local_88;
        do {
          local_168 = (undefined1  [16])0x0;
          uStack_158 = 0;
          uStack_150 = 0;
          FUN_180159e60(local_168,L"pak01_dir.vpk",0xd);
          FUN_1800a7e60(local_b0,puVar11,local_168);
          FUN_18015b930(local_168);
          lpFileName = (LPCWSTR ******)local_b0;
          if (7 < local_98) {
            lpFileName = local_b0[0];
          }
          DVar5 = GetFileAttributesW((LPCWSTR)lpFileName);
          if ((DVar5 != 0xffffffff) && ((DVar5 & 0x10) == 0)) {
            FUN_1800f5370(param_1,puVar11);
            *(undefined1 *)(param_1 + 0x20) = 1;
            FUN_18015b930(local_b0);
            _eh_vector_destructor_iterator_(local_88,0x20,2,thunk_FUN_18015b930);
            FUN_18015b930(local_f8);
            if (local_b8 == '\0') {
            }
            FUN_18015b930(&local_d8);
          }
          FUN_18015b930(local_b0);
          puVar11 = puVar11 + 4;
        } while (puVar11 != local_48);
        pHVar7 = (HMODULE)local_f8;
        if (7 < local_e0) {
          pHVar7 = local_f8[0];
        }
        psVar12 = (short *)((longlong)&pHVar7->unused + local_e8 * 2);
        psVar9 = (short *)FUN_1800a7b00(pHVar7,psVar12);
        if (psVar9 != psVar12) {
          do {
            if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) break;
            psVar9 = psVar9 + 1;
          } while (psVar9 != psVar12);
          do {
            if (psVar9 == psVar12) goto LAB_1801d874d;
            sVar2 = psVar12[-1];
            psVar4 = psVar12;
          } while ((sVar2 != 0x5c) && (psVar12 = psVar12 + -1, sVar2 != 0x2f));
          do {
            psVar12 = psVar4;
            if (psVar9 == psVar12) break;
            psVar4 = psVar12 + -1;
          } while ((*psVar4 == 0x5c) || (*psVar4 == 0x2f));
        }
LAB_1801d874d:
        local_118._0_8_ = (LPWSTR)0x0;
        local_118._8_8_ = 0;
        local_108 = 0;
        local_100 = 0;
        FUN_180159e60(local_118,pHVar7,(longlong)psVar12 - (longlong)pHVar7 >> 1);
        local_128 = (HMODULE)local_f8;
        if (7 < local_e0) {
          local_128 = local_f8[0];
        }
        local_120 = local_e8;
        iVar6 = FUN_180162c60(local_118,&local_128);
        if (iVar6 == 0) {
          FUN_18015b930(local_118);
          _eh_vector_destructor_iterator_(local_88,0x20,2,thunk_FUN_18015b930);
          break;
        }
        pWVar10 = (LPWSTR)local_118;
        if (7 < local_100) {
          pWVar10 = (LPWSTR)local_118._0_8_;
        }
        FUN_1800f5190(local_f8,pWVar10,local_108);
        FUN_18015b930(local_118);
        _eh_vector_destructor_iterator_(local_88,0x20,2,thunk_FUN_18015b930);
      }
      FUN_18015b930(local_f8);
      if (local_b8 != '\0') {
        FUN_18015b930(&local_d8);
      }
    }
    ppHVar13 = ppHVar13 + 1;
    if (ppHVar13 == &local_128) {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    pHVar7 = *ppHVar13;
  } while( true );
}



