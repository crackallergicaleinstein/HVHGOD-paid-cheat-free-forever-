// FUN_18044ec30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044ec30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18044ec30(ulonglong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  HANDLE hObject;
  HANDLE pvVar11;
  byte extraout_var;
  ULONGLONG UVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong *plVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auStackY_5d8 [32];
  uint uStack_584;
  undefined1 local_558 [16];
  undefined8 *local_548;
  undefined1 local_540 [16];
  longlong local_530;
  uint local_528;
  undefined1 local_520 [16];
  longlong local_510;
  _CONTEXT local_508;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_5d8;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_520 = (undefined1  [16])0x0;
    local_510 = 0;
    iVar5 = FUN_1805f68d0(&DAT_1808e4e40);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e4e8c == 0x7fffffff) {
      DAT_1808e4e8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_1801780e0(local_520);
    FUN_1805f68fc(&DAT_1808e4e40);
    hModule = GetModuleHandleW(L"ntdll.dll");
    pFVar8 = GetProcAddress(hModule,"NtQuerySystemInformation");
    if (pFVar8 != (FARPROC)0x0) {
      local_540 = (undefined1  [16])0x0;
      local_530 = 0;
      lVar9 = FUN_18015bca0(0x400000);
      local_540._0_8_ = lVar9;
      local_530 = lVar9 + 0x400000;
      FUN_18063ab10(lVar9,0);
      local_540._8_8_ = lVar9 + 0x400000;
      local_528 = 0;
      UVar10 = GetTickCount64();
      while( true ) {
        bVar2 = false;
        local_558 = (undefined1  [16])0x0;
        local_548 = (undefined8 *)0x0;
        hObject = (HANDLE)CreateToolhelp32Snapshot(4,0);
        if (hObject == (HANDLE)0xffffffffffffffff) break;
        iVar5 = Thread32First(hObject);
        bVar20 = iVar5 == 0;
        while (iVar5 != 0) {
          DVar6 = GetCurrentProcessId();
          if ((DVar6 == 0) && (DVar6 = GetCurrentThreadId(), DVar6 != 0)) {
            pvVar11 = OpenThread(0x4a,0,0);
            if (pvVar11 == (HANDLE)0x0) {
              CloseHandle(hObject);
              goto LAB_18044f1e7;
            }
            uStack_584 = uStack_584 & 0xffffff00;
            if ((undefined8 *)local_558._8_8_ == local_548) {
              FUN_180269e30(local_558);
            }
            else {
              *(HANDLE *)local_558._8_8_ = pvVar11;
              *(ulonglong *)(local_558._8_8_ + 8) = (ulonglong)uStack_584 << 0x20;
              local_558._8_8_ = (undefined8 *)(local_558._8_8_ + 0x10);
            }
          }
          iVar5 = Thread32Next(hObject);
        }
        CloseHandle(hObject);
        if (bVar20) break;
        uVar3 = local_558._8_8_;
        for (puVar13 = (undefined8 *)local_558._0_8_; puVar13 != (undefined8 *)uVar3;
            puVar13 = puVar13 + 2) {
          DVar6 = SuspendThread((HANDLE)*puVar13);
          if (DVar6 == 0xffffffff) goto LAB_18044f0f1;
          *(undefined1 *)((longlong)puVar13 + 0xc) = 1;
        }
        bVar20 = DAT_180c64050 == 0;
        uVar3 = local_558._8_8_;
        for (puVar13 = (undefined8 *)local_558._0_8_; puVar13 != (undefined8 *)uVar3;
            puVar13 = puVar13 + 2) {
          FUN_18063ab10(&local_508,0);
          local_508.ContextFlags = 0x100001;
          BVar7 = GetThreadContext((HANDLE)*puVar13,&local_508);
          if ((BVar7 == 0) || ((param_1 <= local_508.Rip && (local_508.Rip - param_1 < param_2))))
          goto LAB_18044f0c0;
          for (plVar17 = (longlong *)local_520._0_8_; plVar17 != (longlong *)local_520._8_8_;
              plVar17 = plVar17 + 1) {
            puVar1 = (ulonglong *)*plVar17;
            uVar15 = *puVar1;
            if ((((uVar15 != 0) && (uVar15 <= local_508.Rip)) &&
                (local_508.Rip - uVar15 < puVar1[9])) ||
               (((uVar15 = puVar1[2], uVar15 != 0 && (uVar15 <= local_508.Rip)) &&
                (local_508.Rip - uVar15 < 0x40)))) {
              bVar20 = false;
              break;
            }
          }
        }
        if (bVar20) {
          (*pFVar8)(5);
          bVar18 = extraout_var >> 7 ^ 1;
          bVar19 = 0;
          if (bVar18 != 0) {
            bVar19 = 0;
            uVar15 = 0;
            lVar9 = 0;
            if (0x14f < (ulonglong)(local_540._8_8_ - local_540._0_8_)) {
              while( true ) {
                puVar16 = (uint *)(local_540._0_8_ + lVar9);
                DVar6 = GetCurrentProcessId();
                if (*(ulonglong *)(puVar16 + 0x14) == (ulonglong)DVar6) break;
                uVar14 = *puVar16;
                if (uVar14 == 0) goto LAB_18044f076;
                if (((ulonglong)((local_540._8_8_ - local_540._0_8_) - lVar9) < (ulonglong)uVar14)
                   || (lVar9 = lVar9 + (ulonglong)uVar14,
                      (ulonglong)(local_540._8_8_ - local_540._0_8_) < lVar9 + 0x150U))
                goto LAB_18044f076;
              }
              bVar19 = 1;
              if ((((local_540._8_8_ - local_540._0_8_) - lVar9) - 0x100U) / 0x50 <
                  (ulonglong)puVar16[1]) {
LAB_18044f073:
                bVar18 = 0;
              }
              else if (puVar16[1] != 0) {
                do {
                  uVar14 = puVar16[uVar15 * 0x14 + 0x4c];
                  DVar6 = GetCurrentThreadId();
                  if (uVar14 != DVar6) {
                    lVar9 = local_558._0_8_;
                    while( true ) {
                      if (lVar9 == local_558._8_8_) goto LAB_18044f073;
                      if (*(uint *)(lVar9 + 8) == uVar14) break;
                      lVar9 = lVar9 + 0x10;
                    }
                  }
                  uVar14 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar14;
                } while (uVar14 < puVar16[1]);
              }
            }
LAB_18044f076:
            bVar19 = bVar18 & bVar19;
          }
          if (bVar19 != 0) {
            bVar20 = true;
            bVar2 = true;
            uVar3 = local_520._8_8_;
            for (plVar17 = (longlong *)local_520._0_8_; plVar17 != (longlong *)uVar3;
                plVar17 = plVar17 + 1) {
              if (*(longlong *)*plVar17 != 0) {
                if (((longlong *)*plVar17)[2] != 0) {
                  cVar4 = FUN_18044e300();
                  bVar2 = bVar20;
                  if (cVar4 == '\0') {
                    bVar2 = false;
                    bVar20 = false;
                  }
                }
              }
            }
          }
        }
LAB_18044f0c0:
        uVar3 = local_558._8_8_;
        for (puVar13 = (undefined8 *)local_558._0_8_; puVar13 != (undefined8 *)uVar3;
            puVar13 = puVar13 + 2) {
          if (*(char *)((longlong)puVar13 + 0xc) != '\0') {
            ResumeThread((HANDLE)*puVar13);
            *(undefined1 *)((longlong)puVar13 + 0xc) = 0;
          }
        }
LAB_18044f0f1:
        uVar3 = local_558._8_8_;
        for (puVar13 = (undefined8 *)local_558._0_8_; puVar13 != (undefined8 *)uVar3;
            puVar13 = puVar13 + 2) {
          if (*(char *)((longlong)puVar13 + 0xc) != '\0') {
            ResumeThread((HANDLE)*puVar13);
            *(undefined1 *)((longlong)puVar13 + 0xc) = 0;
          }
        }
        uVar3 = local_558._8_8_;
        for (puVar13 = (undefined8 *)local_558._0_8_; puVar13 != (undefined8 *)uVar3;
            puVar13 = puVar13 + 2) {
          CloseHandle((HANDLE)*puVar13);
        }
        if (local_558._0_8_ != 0) {
          if ((0xfff < ((longlong)local_548 - local_558._0_8_ & 0xfffffffffffffff0U)) &&
             (0x1f < (local_558._0_8_ - *(longlong *)(local_558._0_8_ + -8)) - 8U))
          goto LAB_18044f34c;
          FUN_1804547d0();
        }
        if (bVar2) {
          uVar3 = local_520._8_8_;
          for (puVar13 = (undefined8 *)local_520._0_8_; puVar13 != (undefined8 *)uVar3;
              puVar13 = puVar13 + 1) {
            FUN_18044e4e0(*puVar13);
          }
          goto LAB_18044f275;
        }
        if (((ulonglong)(local_540._8_8_ - local_540._0_8_) < (ulonglong)local_528) &&
           (local_528 < 0x1000001)) {
          FUN_1801b0ec0(local_540);
        }
        Sleep(2);
        UVar12 = GetTickCount64();
        if (UVar10 + 2000 <= UVar12) goto LAB_18044f275;
      }
LAB_18044f1e7:
      uVar3 = local_558._8_8_;
      puVar13 = (undefined8 *)local_558._0_8_;
      if (local_558._0_8_ != local_558._8_8_) {
        do {
          if (*(char *)((longlong)puVar13 + 0xc) != '\0') {
            ResumeThread((HANDLE)*puVar13);
            *(undefined1 *)((longlong)puVar13 + 0xc) = 0;
          }
          puVar13 = puVar13 + 2;
        } while (puVar13 != (undefined8 *)uVar3);
        uVar3 = local_558._8_8_;
        puVar13 = (undefined8 *)local_558._0_8_;
        if (local_558._0_8_ != local_558._8_8_) {
          do {
            CloseHandle((HANDLE)*puVar13);
            puVar13 = puVar13 + 2;
          } while (puVar13 != (undefined8 *)uVar3);
        }
      }
      if ((undefined8 *)local_558._0_8_ != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)local_558._0_8_;
        if ((0xfff < ((longlong)local_548 - local_558._0_8_ & 0xfffffffffffffff0U)) &&
           (puVar13 = *(undefined8 **)(local_558._0_8_ + -8),
           0x1f < (ulonglong)(local_558._0_8_ + (-8 - (longlong)puVar13)))) {
LAB_18044f34c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(puVar13);
      }
LAB_18044f275:
      FUN_180113710(local_540);
    }
    if (local_520._0_8_ != 0) {
      if ((0xfff < (local_510 - local_520._0_8_ & 0xfffffffffffffff8U)) &&
         (0x1f < (local_520._0_8_ - *(longlong *)(local_520._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0();
    }
  }
}



