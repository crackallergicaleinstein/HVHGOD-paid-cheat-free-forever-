// FUN_18016e0a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016e0a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016e0a0(longlong param_1,undefined8 *param_2)

{
  LPCWSTR pWVar1;
  WCHAR WVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 uVar6;
  LPCWSTR pWVar7;
  char cVar8;
  int iVar9;
  DWORD DVar10;
  undefined4 uVar11;
  BOOL BVar12;
  ULONGLONG UVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  LPCWSTR pWVar16;
  HANDLE hFile;
  undefined8 *puVar17;
  LPCWSTR ***ppppWVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 ****lpBuffer;
  byte *pbVar21;
  LPCWSTR pWVar22;
  longlong lVar23;
  char *pcVar24;
  undefined1 auStackY_268 [32];
  undefined8 *local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  DWORD local_d8 [2];
  undefined1 local_d0 [16];
  longlong local_c0;
  LPCWSTR ***local_b8 [2];
  longlong local_a8;
  ulonglong local_a0;
  undefined8 ****local_98 [2];
  DWORD local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_268;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = 0;
  local_228 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    local_228 = (undefined8 *)*param_2;
  }
  puVar17 = param_2 + 2;
  uStack_220 = *puVar17;
  FUN_180166230(local_d0,&local_228);
  if (1 < (ulonglong)((longlong)(local_d0._8_8_ - local_d0._0_8_) >> 4)) {
    plVar3 = *(longlong **)(local_d0._0_8_ + 0x10);
    lVar23 = local_d0._0_8_;
    if ((((10 < *(ulonglong *)(local_d0._0_8_ + 0x18)) && (*plVar3 == 0x6f662d6c61636f6c)) &&
        ((short)plVar3[1] == 0x6b72)) &&
       ((*(char *)((longlong)plVar3 + 10) == '-' && (*(ulonglong *)(local_d0._0_8_ + 0x18) == 0x2b))
       )) {
      pbVar21 = (byte *)((longlong)plVar3 + 0xb);
      if (pbVar21 != (byte *)((longlong)plVar3 + 0x2b)) {
        do {
          iVar9 = isxdigit((uint)*pbVar21);
          lVar23 = local_d0._0_8_;
          if (iVar9 == 0) goto LAB_18016e1a9;
          pbVar21 = pbVar21 + 1;
        } while (pbVar21 != (byte *)((longlong)plVar3 + 0x2b));
      }
      goto LAB_18016e740;
    }
LAB_18016e1a9:
    if (((0xc < *(ulonglong *)(lVar23 + 0x18)) &&
        (plVar3 = *(longlong **)(lVar23 + 0x10), *plVar3 == 0x2d65746176697270)) &&
       (((int)plVar3[1] == 0x6b726f66 && (*(char *)((longlong)plVar3 + 0xc) == '-'))))
    goto LAB_18016e740;
  }
  FUN_1801655d0(local_78,0);
  if ((local_68 != 0) && (cVar8 = FUN_1800a9120(local_78), cVar8 != '\0')) {
    *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
    uVar19 = *(uint *)(param_1 + 0x530);
    pcVar24 = (char *)((longlong)&uStack_48 + 5);
    do {
      pcVar24 = pcVar24 + -1;
      *pcVar24 = (char)uVar19 + (char)((ulonglong)uVar19 / 10) * -10 + '0';
      uVar19 = (uint)((ulonglong)uVar19 / 10);
    } while (uVar19 != 0);
    FUN_18015bdb0(local_1d8,pcVar24,(longlong)&uStack_48 + 5);
    DVar10 = GetCurrentProcessId();
    pcVar24 = (char *)((longlong)&uStack_48 + 5);
    uVar20 = (ulonglong)DVar10;
    do {
      pcVar24 = pcVar24 + -1;
      uVar4 = uVar20 / 10;
      *pcVar24 = (char)uVar20 + (char)uVar4 * -10 + '0';
      uVar20 = uVar4;
    } while ((int)uVar4 != 0);
    FUN_18015bdb0(local_f8,pcVar24,(longlong)&uStack_48 + 5);
    UVar13 = GetTickCount64();
    pcVar24 = (char *)((longlong)&uStack_48 + 5);
    do {
      pcVar24 = pcVar24 + -1;
      uVar20 = UVar13 / 10;
      *pcVar24 = (char)UVar13 + (char)uVar20 * -10 + '0';
      UVar13 = uVar20;
    } while (uVar20 != 0);
    FUN_18015bdb0(local_118,pcVar24,(longlong)&uStack_48 + 5);
    local_218 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    FUN_18015ba30(local_218,"config-command-",0xf);
    FUN_18015a6e0(local_138);
    puVar14 = (undefined8 *)FUN_18015b2a0(local_138,&DAT_180701178,1);
    local_158 = *puVar14;
    uStack_150 = puVar14[1];
    uStack_148 = puVar14[2];
    uStack_140 = puVar14[3];
    puVar14[3] = 0xf;
    *(undefined1 *)puVar14 = 0;
    puVar14[2] = 0;
    FUN_18015a6e0(local_178);
    puVar14 = (undefined8 *)FUN_18015b2a0(local_178,&DAT_180701178,1);
    local_58 = (undefined8 *)*puVar14;
    uStack_50 = puVar14[1];
    uStack_48 = puVar14[2];
    uStack_40 = puVar14[3];
    puVar14[3] = 0xf;
    *(undefined1 *)puVar14 = 0;
    puVar14[2] = 0;
    FUN_18015a6e0(local_198);
    pauVar15 = (undefined1 (*) [16])FUN_18015b2a0(local_198,".bridge",7);
    local_1f8 = *pauVar15;
    auStack_1e8 = pauVar15[1];
    (*pauVar15)[0] = 0;
    *(undefined8 *)pauVar15[1] = 0;
    *(undefined8 *)(pauVar15[1] + 8) = 0xf;
    uVar6 = auStack_1e8._0_8_;
    puVar14 = (undefined8 *)local_1f8;
    if (0xf < (ulonglong)auStack_1e8._8_8_) {
      puVar14 = (undefined8 *)local_1f8._0_8_;
    }
    uVar11 = __std_fs_code_page();
    uStack_220 = uVar6;
    local_228 = puVar14;
    FUN_1801628d0(local_1b8,uVar11,&local_228);
    FUN_1800a7e60(local_b8,local_78,local_1b8);
    FUN_18015b930(local_1b8);
    FUN_18015c010(local_1f8);
    FUN_18015c010(local_198);
    FUN_18015c010(&local_58);
    FUN_18015c010(local_178);
    FUN_18015c010(&local_158);
    FUN_18015c010(local_138);
    FUN_18015c010(local_218);
    FUN_18015c010(local_118);
    FUN_18015c010(local_f8);
    FUN_18015c010(local_1d8);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uStack_50 = *puVar17;
    ppppWVar18 = (LPCWSTR ***)local_b8;
    if (7 < local_a0) {
      ppppWVar18 = local_b8[0];
    }
    pWVar1 = (LPCWSTR)((longlong)ppppWVar18 + local_a8 * 2);
    local_58 = param_2;
    pWVar16 = (LPCWSTR)FUN_1800a7b00(ppppWVar18,pWVar1);
    pWVar22 = pWVar1;
    if (pWVar16 != pWVar1) {
      do {
        pWVar7 = pWVar1;
        if ((*pWVar16 != L'\\') && (*pWVar16 != L'/')) break;
        pWVar16 = pWVar16 + 1;
      } while (pWVar16 != pWVar1);
      do {
        pWVar22 = pWVar7;
        if (pWVar16 == pWVar22) break;
        WVar2 = pWVar22[-1];
        if ((WVar2 == L'\\') || (pWVar7 = pWVar22 + -1, WVar2 == L'/')) break;
      } while( true );
    }
    local_218 = (undefined1  [16])0x0;
    local_208 = ZEXT816(0);
    FUN_180159e60(local_218,pWVar22,(longlong)pWVar1 - (longlong)pWVar22 >> 1);
    puVar14 = (undefined8 *)FUN_180162b60(local_218,local_1d8);
    puVar17 = puVar14;
    if (0xf < (ulonglong)puVar14[3]) {
      puVar17 = (undefined8 *)*puVar14;
    }
    local_228 = local_58;
    uStack_220 = uStack_50;
    uStack_50 = puVar14[2];
    local_58 = puVar17;
    FUN_18000fdc0(local_98,&local_58);
    FUN_18015c010(local_1d8);
    FUN_18015b930(local_218);
    if (CONCAT44(uStack_84,local_88) != 0) {
      ppppWVar18 = (LPCWSTR ***)local_b8;
      if (7 < local_a0) {
        ppppWVar18 = local_b8[0];
      }
      hFile = CreateFileW((LPCWSTR)ppppWVar18,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80000080,
                          (HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffffffffffff) {
        FUN_180113930(param_1 + 0x460,"Could not contact loader bridge.");
      }
      else {
        local_d8[0] = 0;
        lpBuffer = local_98;
        if (0xf < local_80) {
          lpBuffer = local_98[0];
        }
        BVar12 = WriteFile(hFile,lpBuffer,local_88,local_d8,(LPOVERLAPPED)0x0);
        if ((BVar12 == 0) || ((ulonglong)local_d8[0] != CONCAT44(uStack_84,local_88))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        FlushFileBuffers(hFile);
        CloseHandle(hFile);
        pcVar24 = "Config command failed.";
        if (bVar5) {
          pcVar24 = "Syncing with internal cloud library...";
        }
        lVar23 = -1;
        do {
          lVar23 = lVar23 + 1;
        } while (pcVar24[lVar23] != '\0');
        FUN_180113930(param_1 + 0x460);
      }
    }
    FUN_18015c010(local_98);
    FUN_18015b930(local_b8);
  }
  FUN_18015b930(local_78);
  lVar23 = local_d0._0_8_;
LAB_18016e740:
  if (lVar23 != 0) {
    if ((0xfff < (local_c0 - lVar23 & 0xfffffffffffffff0U)) &&
       (0x1f < (lVar23 - *(longlong *)(lVar23 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
}



