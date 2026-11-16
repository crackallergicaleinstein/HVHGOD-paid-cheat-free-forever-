// FUN_18016e9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016e9c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18016e9c0(HANDLE param_1)

{
  byte bVar1;
  PCCERT_CONTEXT pCertContext;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  BOOL BVar4;
  int iVar5;
  LONG LVar6;
  LPWSTR lpExeName;
  undefined1 *puVar7;
  HANDLE hFile;
  HMODULE hModule;
  FARPROC pFVar8;
  CRYPT_PROVIDER_DATA *pProvData;
  CRYPT_PROVIDER_SGNR *pCVar9;
  byte *pbVar10;
  longlong lVar11;
  LPCWSTR lpFileName;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  LPWSTR pWVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined1 auStackY_1f8 [32];
  char local_1b8 [24];
  undefined1 local_1a0;
  HANDLE local_198;
  HANDLE local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  HANDLE pvStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_128;
  undefined1 *local_120;
  HANDLE local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  longlong local_f8;
  ulonglong local_f0;
  GUID local_e8;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  ulonglong local_c0;
  DWORD local_b8 [2];
  undefined1 local_b0 [16];
  undefined4 local_a0;
  LARGE_INTEGER local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  _BY_HANDLE_FILE_INFORMATION local_70;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_1f8;
  local_78 = 0xf;
  local_f0 = 0xf;
  uVar13 = 0;
  local_80 = 0;
  local_90._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_90._1_15_;
  local_90 = auVar2 << 8;
  local_f8 = 0;
  local_108._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_108._1_15_;
  local_108 = auVar3 << 8;
  pbVar10 = &DAT_1807c6798;
  do {
    bVar1 = *pbVar10;
    if (((bVar1 < 0x30) || (0x39 < bVar1)) && (5 < (byte)(bVar1 + 0xbf))) goto LAB_18016f17c;
    pbVar10 = pbVar10 + 1;
  } while (pbVar10 != &DAT_1807c67c0);
  FUN_180113930(local_90,
                "LS0tLS1CRUdJTiBQVUJMSUMgS0VZLS0tLS0KTUZrd0V3WUhLb1pJemowQ0FRWUlLb1pJemowREFRY0RRZ0FFYVd2TWRYQ0d6MDRJMXdWTmFhVXlQZjdwM3ZsVwoyK09OQkI1aG9pWUhiVXpkZW1LVWR4YnNseHZRVVYrUk16SU4vWGVRMDJ2dkNwbkdFUHRmbk5Wc0xBPT0KLS0tLS1FTkQgUFVCTElDIEtFWS0tLS0tCg=="
                ,0xf0);
  FUN_180113930(local_108,&DAT_1807c6798,0x28);
  if (local_f8 == 0x28) {
    local_d8 = (undefined1  [16])0x0;
    local_c8 = 0;
    local_c0 = 0;
    lpExeName = (LPWSTR)FUN_18015bca0(0x10010);
    local_d8._0_8_ = lpExeName;
    local_c8 = 0x8000;
    local_c0 = 0x8007;
    pWVar15 = lpExeName;
    for (lVar11 = 0x8000; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pWVar15 = L'\0';
      pWVar15 = pWVar15 + 1;
    }
    lpExeName[0x8000] = L'\0';
    local_b8[0] = 0x8000;
    if (((param_1 != (HANDLE)0x0) &&
        (BVar4 = QueryFullProcessImageNameW(param_1,0,lpExeName,local_b8), BVar4 != 0)) &&
       (local_b8[0] != 0)) {
      uVar17 = (ulonglong)local_b8[0];
      if (local_c8 < local_b8[0]) {
        uVar12 = uVar17 - local_c8;
        if (local_c0 - local_c8 < uVar12) {
          FUN_180179100(local_d8,uVar12,local_1a0);
        }
        else {
          puVar7 = local_d8;
          if (7 < local_c0) {
            puVar7 = (undefined1 *)local_d8._0_8_;
          }
          lVar11 = local_c8 * 2;
          local_c8 = uVar17;
          if (uVar12 != 0) {
            puVar16 = (undefined2 *)(puVar7 + lVar11);
            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
          }
          *(undefined2 *)(puVar7 + uVar17 * 2) = 0;
        }
      }
      else {
        puVar7 = local_d8;
        if (7 < local_c0) {
          puVar7 = (undefined1 *)local_d8._0_8_;
        }
        local_c8 = (ulonglong)local_b8[0];
        *(undefined2 *)(puVar7 + uVar17 * 2) = 0;
      }
      lpFileName = (LPCWSTR)local_d8;
      if (7 < local_c0) {
        lpFileName = (LPCWSTR)local_d8._0_8_;
      }
      hFile = CreateFileW(lpFileName,0xa0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x200000,(HANDLE)0x0)
      ;
      local_198 = hFile;
      if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
        local_70.dwFileAttributes = 0;
        local_70.ftCreationTime.dwLowDateTime = 0;
        local_70.ftCreationTime.dwHighDateTime = 0;
        local_70.ftLastAccessTime.dwLowDateTime = 0;
        local_70.ftLastAccessTime.dwHighDateTime = 0;
        local_70.ftLastWriteTime.dwLowDateTime = 0;
        local_70.ftLastWriteTime.dwHighDateTime = 0;
        local_70.dwVolumeSerialNumber = 0;
        local_70.nFileSizeHigh = 0;
        local_70.nFileSizeLow = 0;
        local_70.nNumberOfLinks = 0;
        local_70.nFileIndexHigh = 0;
        local_70.nFileIndexLow = 0;
        local_98.QuadPart = 0;
        BVar4 = GetFileInformationByHandle(hFile,&local_70);
        if (((BVar4 != 0) && (((ulonglong)local_70.dwFileAttributes & 0x410) == 0)) &&
           ((BVar4 = GetFileSizeEx(hFile,&local_98), BVar4 != 0 &&
            (local_98.QuadPart - 1U < 0x10000000)))) {
          local_190 = hFile;
          hModule = GetModuleHandleW(L"ntdll.dll");
          pFVar8 = GetProcAddress(hModule,"NtQueryInformationProcess");
          if ((pFVar8 != (FARPROC)0x0) && (iVar5 = (*pFVar8)(param_1,0x2c,&local_190), iVar5 == 0))
          {
            local_128 = 0x20;
            local_110 = 0;
            local_120 = local_d8;
            if (7 < local_c0) {
              local_120 = (undefined1 *)local_d8._0_8_;
            }
            uStack_180 = 0;
            uStack_178 = 0;
            pvStack_150 = (HANDLE)0x0;
            local_138 = 0;
            local_188 = 0x58;
            uStack_170 = 0x100000002;
            local_168 = 1;
            puStack_160 = &local_128;
            uStack_158 = 1;
            local_148._0_12_ = ZEXT412(0x3080) << 0x40;
            local_148._12_4_ = 0;
            local_e8.Data1 = 0xaac56b;
            local_e8.Data2 = 0xcd44;
            local_e8.Data3 = 0x11d0;
            local_e8.Data4[0] = 0x8c;
            local_e8.Data4[1] = 0xc2;
            local_e8.Data4[2] = '\0';
            local_e8.Data4[3] = 0xc0;
            local_e8.Data4[4] = 'O';
            local_e8.Data4[5] = 0xc2;
            local_e8.Data4[6] = 0x95;
            local_e8.Data4[7] = 0xee;
            local_118 = hFile;
            LVar6 = WinVerifyTrust((HWND)0x0,&local_e8,&local_188);
            pProvData = WTHelperProvDataFromStateData(pvStack_150);
            if (((pProvData == (CRYPT_PROVIDER_DATA *)0x0) ||
                (pCVar9 = WTHelperGetProvSignerFromChain(pProvData,0,0,0),
                pCVar9 == (CRYPT_PROVIDER_SGNR *)0x0)) || (pCVar9->csCertChain == 0)) {
              uStack_158 = CONCAT44(uStack_158._4_4_,2);
              WinVerifyTrust((HWND)0x0,&local_e8,&local_188);
            }
            else {
              pCertContext = pCVar9->pasCertChain->pCert;
              bVar14 = false;
              if ((pCertContext != (PCCERT_CONTEXT)0x0) &&
                 ((LVar6 == 0 ||
                  (((LVar6 == -0x7ff4fef7 &&
                    (LVar6 = CertVerifyTimeValidity((LPFILETIME)0x0,pCertContext->pCertInfo),
                    LVar6 == 0)) &&
                   (BVar4 = CertCompareCertificateName
                                      (1,&pCertContext->pCertInfo->Subject,
                                       &pCertContext->pCertInfo->Issuer), BVar4 != 0)))))) {
                local_b0 = (undefined1  [16])0x0;
                local_a0 = 0;
                local_190 = (HANDLE)CONCAT44(local_190._4_4_,0x14);
                BVar4 = CertGetCertificateContextProperty
                                  (pCertContext,3,local_b0,(DWORD *)&local_190);
                if ((BVar4 != 0) && ((int)local_190 == 0x14)) {
                  builtin_strncpy(local_1b8,"0123456789ABCDEF",0x11);
                  bVar14 = true;
                  do {
                    if (bVar14) {
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2] != local_1b8[(byte)local_b0[uVar13] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 1] != local_1b8[(byte)local_b0[uVar13] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 2] != local_1b8[(byte)local_b0[uVar13 + 1] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 3] != local_1b8[(byte)local_b0[uVar13 + 1] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 4] != local_1b8[(byte)local_b0[uVar13 + 2] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 5] != local_1b8[(byte)local_b0[uVar13 + 2] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 6] != local_1b8[(byte)local_b0[uVar13 + 3] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 7] != local_1b8[(byte)local_b0[uVar13 + 3] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 8] != local_1b8[(byte)local_b0[uVar13 + 4] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 9] != local_1b8[(byte)local_b0[uVar13 + 4] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 10] != local_1b8[(byte)local_b0[uVar13 + 5] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0xb] != local_1b8[(byte)local_b0[uVar13 + 5] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0xc] != local_1b8[(byte)local_b0[uVar13 + 6] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0xd] != local_1b8[(byte)local_b0[uVar13 + 6] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0xe] != local_1b8[(byte)local_b0[uVar13 + 7] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0xf] != local_1b8[(byte)local_b0[uVar13 + 7] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0x10] != local_1b8[(byte)local_b0[uVar13 + 8] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0x11] != local_1b8[(byte)local_b0[uVar13 + 8] & 0xf])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0x12] != local_1b8[(byte)local_b0[uVar13 + 9] >> 4])
                      goto LAB_18016f0fd;
                      puVar7 = local_108;
                      if (0xf < local_f0) {
                        puVar7 = (undefined1 *)local_108._0_8_;
                      }
                      if (puVar7[uVar13 * 2 + 0x13] != local_1b8[(byte)local_b0[uVar13 + 9] & 0xf])
                      goto LAB_18016f0fd;
                      bVar14 = true;
                    }
                    else {
LAB_18016f0fd:
                      bVar14 = false;
                    }
                    uVar13 = uVar13 + 10;
                  } while (uVar13 < 0x14);
                }
              }
              uStack_158 = CONCAT44(uStack_158._4_4_,2);
              WinVerifyTrust((HWND)0x0,&local_e8,&local_188);
              if (bVar14) {
                WaitForSingleObject(param_1,0);
              }
            }
          }
        }
      }
      if ((longlong)hFile - 1U < 0xfffffffffffffffe) {
        CloseHandle(hFile);
      }
    }
    FUN_18015b930(local_d8);
  }
LAB_18016f17c:
  FUN_18015c010(local_108);
  FUN_18015c010(local_90);
}



