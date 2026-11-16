// FUN_18041a610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041a610 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18041a610(int *param_1,longlong param_2,char param_3)

{
  WCHAR WVar1;
  ulonglong uVar2;
  bool bVar3;
  LPCWSTR pWVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  BOOL BVar8;
  HANDLE hObject;
  LPCWSTR pWVar9;
  undefined8 uVar10;
  ULONGLONG UVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  ulonglong *puVar14;
  LPCWSTR pWVar15;
  LPCWSTR ******pppppppWVar16;
  LPCWSTR ******lpExistingFileName;
  ulonglong uVar17;
  undefined1 *puVar18;
  LPCWSTR pWVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  short *psVar23;
  wchar_t **ppwVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  ulonglong local_2d0;
  uint local_2c8;
  undefined1 local_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 local_298 [32];
  undefined1 local_278 [16];
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 local_240;
  undefined1 *local_238;
  undefined8 local_230;
  undefined1 *local_228;
  undefined8 local_220;
  undefined1 local_218 [32];
  wchar_t *local_1f8 [13];
  ulonglong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  LPCWSTR ******local_118 [2];
  longlong local_108;
  ulonglong local_100;
  LPCWSTR ******local_f8 [2];
  longlong local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  short local_50 [4];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_328;
  local_2c8 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1800f5370(local_98);
    cVar5 = FUN_180165ac0(local_98);
    if (cVar5 != '\0') {
      if (param_3 == '\0') {
        param_1[1] = param_1[1] + 1;
      }
      local_1f8[0] = L"Logs/hvhgods_init.log";
      local_1f8[1] = L"Internal/Logs/Legacy/runtime-lifecycle.log";
      local_1f8[2] = L"Logs/hvhgods_init.previous.log";
      local_1f8[3] = L"Internal/Logs/Legacy/runtime-lifecycle.previous.log";
      local_1f8[4] = L"Logs/hvhgods_crash.dmp";
      local_1f8[5] = L"Internal/Logs/Crashes/Legacy/runtime-crash.dmp";
      local_1f8[6] = L"Logs/hvhgods_crash.previous.dmp";
      local_1f8[7] = L"Internal/Logs/Crashes/Legacy/runtime-crash.previous.dmp";
      local_1f8[8] = L"Internal/sync-h-logo.png";
      local_1f8[9] = L"Internal/Cache/UI/sync-h-logo.png";
      local_1f8[10] = L"Internal/legitbot.cfg";
      local_1f8[0xb] = L"Internal/Configs/Imported/legitbot.cfg";
      local_278 = (undefined1  [16])0x0;
      local_268 = 0;
      local_260 = 0;
      FUN_180159e60(local_278,L"CS2 Runtime",0xb);
      FUN_1800a7e60(local_98,param_2,local_278);
      FUN_18015b930(local_278);
      ppwVar24 = local_1f8;
      uVar26 = 0;
      uVar27 = 7;
      uVar21 = 0x180;
      do {
        while( true ) {
          if (ppwVar24 == local_1f8 + 0xc) {
            FUN_18015b930(local_98);
          }
          lVar22 = -1;
          do {
            lVar22 = lVar22 + 1;
          } while ((*ppwVar24)[lVar22] != L'\0');
          local_2e8 = (undefined1  [16])0x0;
          local_2d8 = 0;
          local_2d0 = 0;
          FUN_180159e60(local_2e8);
          FUN_1800a7e60(local_f8,param_2,local_2e8);
          FUN_18015b930(local_2e8);
          lVar22 = -1;
          do {
            lVar22 = lVar22 + 1;
          } while (ppwVar24[1][lVar22] != L'\0');
          local_258 = (undefined1  [16])0x0;
          local_248 = 0;
          local_240 = 0;
          FUN_180159e60(local_258);
          FUN_1800a7e60(local_118,local_98,local_258);
          FUN_18015b930(local_258);
          FUN_1800f5370(local_b8,local_f8);
          cVar5 = FUN_180165ac0(local_b8);
          if (cVar5 != '\0') break;
LAB_18041b132:
          param_1[2] = param_1[2] + 1;
LAB_18041b136:
          FUN_18015b930(local_118);
          FUN_18015b930(local_f8);
          ppwVar24 = ppwVar24 + 2;
          uVar21 = uVar21 | 0x78;
        }
        FUN_1800f5370(local_d8,local_118);
        cVar5 = FUN_180165ac0(local_d8);
        if (cVar5 == '\0') goto LAB_18041b132;
        pppppppWVar16 = (LPCWSTR ******)local_f8;
        if (7 < local_e0) {
          pppppppWVar16 = local_f8[0];
        }
        DVar6 = GetFileAttributesW((LPCWSTR)pppppppWVar16);
        if (DVar6 == 0xffffffff) goto LAB_18041b136;
        if ((DVar6 & 0x10) != 0) goto LAB_18041b132;
        pppppppWVar16 = (LPCWSTR ******)local_f8;
        if (7 < local_e0) {
          pppppppWVar16 = local_f8[0];
        }
        hObject = CreateFileW((LPCWSTR)pppppppWVar16,0x80010000,0,(LPSECURITY_ATTRIBUTES)0x0,3,
                              0x200000,(HANDLE)0x0);
        if (hObject == (HANDLE)0xffffffffffffffff) {
          param_1[1] = param_1[1] + 1;
          goto LAB_18041b136;
        }
        CloseHandle(hObject);
        bVar25 = 0;
        pppppppWVar16 = (LPCWSTR ******)local_118;
        if (7 < local_100) {
          pppppppWVar16 = local_118[0];
        }
        DVar6 = GetFileAttributesW((LPCWSTR)pppppppWVar16);
        uVar20 = uVar21 | 0x78;
        if (DVar6 != 0xffffffff) {
          local_2e8 = (undefined1  [16])0x0;
          local_2d8 = 0;
          local_2d0 = 0;
          FUN_180159e60(local_2e8,L"Internal/Recovery/Legacy",0x18);
          FUN_1800a7e60(local_b8,local_98,local_2e8);
          FUN_18015b930(local_2e8);
          FUN_1801bdad0(local_f8,local_d8);
          local_2e8 = (undefined1  [16])0x0;
          local_2d8 = 0;
          local_2d0 = 0;
          FUN_180159e60(local_2e8,L".log",4);
          uVar20 = uVar21 | 0x1e79;
          local_238 = local_2e8;
          if (7 < local_2d0) {
            local_238 = (undefined1 *)local_2e8._0_8_;
          }
          local_230 = local_2d8;
          local_2c8 = uVar20;
          iVar7 = FUN_180162c60(local_d8,&local_238);
          if (iVar7 == 0) {
LAB_18041ab0b:
            bVar25 = 1;
          }
          else {
            local_2b8 = (undefined1  [16])0x0;
            auStack_2a8 = ZEXT816(0);
            FUN_180159e60(local_2b8,L".dmp",4);
            uVar20 = uVar21 | 0x31e7b;
            local_228 = local_2b8;
            if (7 < (ulonglong)auStack_2a8._8_8_) {
              local_228 = (undefined1 *)local_2b8._0_8_;
            }
            local_220 = auStack_2a8._0_8_;
            iVar7 = FUN_180162c60(local_d8,&local_228);
            if (iVar7 == 0) goto LAB_18041ab0b;
          }
          if ((uVar20 & 2) != 0) {
            uVar20 = uVar20 & 0xfffffffd;
            FUN_18015b930(local_2b8);
          }
          if ((uVar20 & 1) != 0) {
            uVar20 = uVar20 & 0xfffffffe;
            FUN_18015b930(local_2e8);
          }
          if (bVar25 == 0) {
            pppppppWVar16 = (LPCWSTR ******)local_f8;
            if (7 < local_e0) {
              pppppppWVar16 = local_f8[0];
            }
            pWVar19 = (LPCWSTR)((longlong)pppppppWVar16 + local_e8 * 2);
            pWVar9 = (LPCWSTR)FUN_1800a7b00(pppppppWVar16,pWVar19);
            pWVar15 = pWVar19;
            if (pWVar9 != pWVar19) {
              do {
                pWVar4 = pWVar19;
                if ((*pWVar9 != L'\\') && (*pWVar9 != L'/')) break;
                pWVar9 = pWVar9 + 1;
              } while (pWVar9 != pWVar19);
              do {
                pWVar15 = pWVar4;
                if (pWVar9 == pWVar15) break;
                WVar1 = pWVar15[-1];
                if ((WVar1 == L'\\') || (pWVar4 = pWVar15 + -1, WVar1 == L'/')) break;
              } while( true );
            }
            local_2e8 = (undefined1  [16])0x0;
            local_2d8 = 0;
            local_2d0 = 0;
            FUN_180159e60(local_2e8,pWVar15,(longlong)pWVar19 - (longlong)pWVar15 >> 1);
            UVar11 = GetTickCount64();
            psVar23 = local_50 + 1;
            do {
              psVar23 = psVar23 + -1;
              uVar17 = UVar11 / 10;
              *psVar23 = (short)UVar11 + (short)uVar17 * -10 + 0x30;
              UVar11 = uVar17;
            } while (uVar17 != 0);
            FUN_1801bd710(local_298,psVar23,local_50 + 1);
            DVar6 = GetCurrentProcessId();
            psVar23 = local_50 + 1;
            uVar17 = (ulonglong)DVar6;
            do {
              psVar23 = psVar23 + -1;
              uVar2 = uVar17 / 10;
              *psVar23 = (short)uVar17 + (short)uVar2 * -10 + 0x30;
              uVar17 = uVar2;
            } while ((int)uVar2 != 0);
            FUN_1801bd710(local_218,psVar23,local_50 + 1);
            puVar12 = (undefined8 *)FUN_1800f52e0(local_218,&DAT_1807c2414,1);
            local_78 = *puVar12;
            uStack_70 = puVar12[1];
            uStack_68 = puVar12[2];
            uStack_60 = puVar12[3];
            *(undefined2 *)puVar12 = 0;
            puVar12[2] = 0;
            puVar12[3] = 7;
            FUN_180178880(local_158);
            pauVar13 = (undefined1 (*) [16])FUN_1800f52e0(local_158,&DAT_1807c2414,1);
            local_2b8 = *pauVar13;
            auStack_2a8 = pauVar13[1];
            *(undefined2 *)*pauVar13 = 0;
            *(undefined8 *)pauVar13[1] = 0;
            *(undefined8 *)(pauVar13[1] + 8) = 7;
            puVar18 = local_2e8;
            if (7 < local_2d0) {
              puVar18 = (undefined1 *)local_2e8._0_8_;
            }
            puVar14 = (ulonglong *)FUN_1800f52e0(local_2b8,puVar18,local_2d8);
            local_178 = *puVar14;
            uStack_190 = puVar14[1];
            uStack_168 = puVar14[2];
            uStack_160 = puVar14[3];
            *(undefined2 *)puVar14 = 0;
            puVar14[2] = 0;
            puVar14[3] = 7;
            uVar20 = uVar20 | 0xffe00000;
            local_1f8[0xc] = (wchar_t *)(local_178 & 0xffffffffffff0000);
            uStack_188 = uVar26;
            uStack_180 = uVar27;
            uStack_170 = uStack_190;
            uVar10 = FUN_1800a7e60(local_138,local_b8,&local_178);
            FUN_180176c30(local_118,uVar10);
            FUN_18015b930(local_138);
            FUN_18015b930(&local_178);
            FUN_18015b930(local_1f8 + 0xc);
            FUN_18015b930(local_2b8);
            FUN_18015b930(local_158);
            FUN_18015b930(&local_78);
            FUN_18015b930(local_218);
            FUN_18015b930(local_298);
          }
          else {
            pppppppWVar16 = (LPCWSTR ******)local_f8;
            if (7 < local_e0) {
              pppppppWVar16 = local_f8[0];
            }
            pWVar19 = (LPCWSTR)((longlong)pppppppWVar16 + local_e8 * 2);
            pWVar9 = (LPCWSTR)FUN_1800a7b00(pppppppWVar16,pWVar19);
            pWVar15 = pWVar19;
            if (pWVar9 != pWVar19) {
              do {
                pWVar4 = pWVar19;
                if ((*pWVar9 != L'\\') && (*pWVar9 != L'/')) break;
                pWVar9 = pWVar9 + 1;
              } while (pWVar9 != pWVar19);
              do {
                pWVar15 = pWVar4;
                if (pWVar9 == pWVar15) break;
                WVar1 = pWVar15[-1];
                if ((WVar1 == L'\\') || (pWVar4 = pWVar15 + -1, WVar1 == L'/')) break;
              } while( true );
            }
            local_2e8 = (undefined1  [16])0x0;
            local_2d8 = 0;
            local_2d0 = 0;
            FUN_180159e60(local_2e8,pWVar15,(longlong)pWVar19 - (longlong)pWVar15 >> 1);
            uVar20 = uVar20 | 0x1c0000;
            uVar10 = FUN_1800a7e60(local_298,local_b8,local_2e8);
            FUN_180176c30(local_118,uVar10);
            FUN_18015b930(local_298);
          }
          FUN_18015b930(local_2e8);
          FUN_18015b930(local_d8);
          FUN_18015b930(local_b8);
        }
        uVar21 = uVar20;
        FUN_1800f5370(local_298,local_118);
        cVar5 = FUN_180165ac0(local_298);
        if (cVar5 == '\0') {
LAB_18041b07e:
          bVar3 = true;
        }
        else {
          pppppppWVar16 = (LPCWSTR ******)local_118;
          if (7 < local_100) {
            pppppppWVar16 = local_118[0];
          }
          pWVar19 = (LPCWSTR)((longlong)pppppppWVar16 + local_108 * 2);
          pWVar15 = (LPCWSTR)FUN_1800a7b00(pppppppWVar16,pWVar19);
          if (pWVar15 != pWVar19) {
            do {
              if ((*pWVar15 != L'\\') && (*pWVar15 != L'/')) break;
              pWVar15 = pWVar15 + 1;
            } while (pWVar15 != pWVar19);
            do {
              if (pWVar15 == pWVar19) goto LAB_18041b00d;
              WVar1 = pWVar19[-1];
              pWVar9 = pWVar19;
            } while ((WVar1 != L'\\') && (pWVar19 = pWVar19 + -1, WVar1 != L'/'));
            do {
              pWVar19 = pWVar9;
              if (pWVar15 == pWVar19) break;
              pWVar9 = pWVar19 + -1;
            } while ((*pWVar9 == L'\\') || (*pWVar9 == L'/'));
          }
LAB_18041b00d:
          local_2e8 = (undefined1  [16])0x0;
          local_2d8 = 0;
          local_2d0 = 0;
          FUN_180159e60(local_2e8,pppppppWVar16,(longlong)pWVar19 - (longlong)pppppppWVar16 >> 1);
          uVar21 = uVar21 | 0xe004;
          local_2c8 = uVar21;
          cVar5 = FUN_1800a9120(local_2e8);
          if (cVar5 == '\0') goto LAB_18041b07e;
          FUN_1800f5370(local_218,local_118);
          cVar5 = FUN_180165ac0(local_218);
          if (cVar5 == '\0') goto LAB_18041b07e;
          bVar3 = false;
        }
        if ((uVar21 & 4) != 0) {
          uVar21 = uVar21 & 0xfffffffb;
          FUN_18015b930(local_2e8);
        }
        if (bVar3) {
          param_1[2] = param_1[2] + 1;
          FUN_18015b930(local_118);
          FUN_18015b930(local_f8);
          ppwVar24 = ppwVar24 + 2;
        }
        else {
          pppppppWVar16 = (LPCWSTR ******)local_118;
          if (7 < local_100) {
            pppppppWVar16 = local_118[0];
          }
          lpExistingFileName = (LPCWSTR ******)local_f8;
          if (7 < local_e0) {
            lpExistingFileName = local_f8[0];
          }
          BVar8 = MoveFileExW((LPCWSTR)lpExistingFileName,(LPCWSTR)pppppppWVar16,(uint)bVar25);
          if (BVar8 == 0) {
            param_1[1] = param_1[1] + 1;
          }
          else {
            *param_1 = *param_1 + 1;
          }
          FUN_18015b930(local_118);
          FUN_18015b930(local_f8);
          ppwVar24 = ppwVar24 + 2;
        }
      } while( true );
    }
  }
  param_1[2] = param_1[2] + 1;
}



