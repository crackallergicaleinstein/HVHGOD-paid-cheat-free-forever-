// FUN_18041f3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041f3b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18041f3b0(void)

{
  byte bVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ULONG UVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ULONGLONG UVar11;
  ULONGLONG UVar12;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar13;
  longlong lVar14;
  undefined **ppuVar15;
  undefined1 auStack_658 [32];
  undefined **local_638;
  char *local_630;
  undefined *local_628;
  undefined8 local_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  if ((DAT_180bb8ad0 & 0x10) == 0) {
    FUN_18041f290();
    ppuVar15 = &PTR_180700558;
    if ((DAT_180bb8ad0 & 0x40) == 0) {
      LOCK();
      DAT_180bb93ad = 1;
      UNLOCK();
      iVar7 = FUN_1805f68d0(&DAT_1808da860);
      if (iVar7 != 0) goto LAB_18041fa7e;
      if (DAT_1808da8ac == 0x7fffffff) {
        DAT_1808da8ac = 0x7ffffffe;
        goto LAB_18041fa73;
      }
      if ((DAT_180bbea78 != '\0') && (FUN_18015a2e0(&DAT_180bbea70), DAT_180bbea78 != '\0')) {
        FUN_18015a450(&DAT_180bbea60);
        FUN_18015a520(&DAT_180bbea70);
        if (DAT_180bbea68 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18060ab3c();
        }
        DAT_180bbea78 = '\0';
      }
      FUN_1805f68fc(&DAT_1808da860);
      iVar7 = FUN_1805f68d0(&DAT_1808da810);
      if (iVar7 != 0) goto LAB_18041fa7e;
      if (DAT_1808da85c == 0x7fffffff) {
        DAT_1808da85c = 0x7ffffffe;
        goto LAB_18041fa73;
      }
      DAT_1808da8c0 = 0;
      puVar9 = &DAT_1808da8b0;
      if (0xf < DAT_1808da8c8) {
        puVar9 = _DAT_1808da8b0;
      }
      *puVar9 = 0;
      DAT_1808da8e0 = 0;
      puVar10 = &DAT_1808da8d0;
      if (0xf < DAT_1808da8e8) {
        puVar10 = DAT_1808da8d0;
      }
      *(undefined1 *)puVar10 = 0;
      FUN_1805f68fc(&DAT_1808da810);
      DAT_180bb93a8 = 1;
      FUN_180194970();
      FUN_180196ee0();
      local_620 = FUN_180113860(&DAT_180bbe948);
      uVar5 = DAT_180bbe948;
      local_628 = DAT_180bbe940;
      DAT_180bbe940 = (undefined *)0x0;
      LOCK();
      DAT_180bbe948 = 0;
      UNLOCK();
      if (((byte)uVar5 & 3) == 2) {
        FUN_1805fa36c(&DAT_180bbe948);
      }
      FUN_1800efed0(&local_628);
      iVar7 = FUN_1805f68d0(&DAT_1808da720);
      lVar4 = DAT_180bbe928;
      if (iVar7 != 0) goto LAB_18041fa7e;
      if (DAT_1808da76c == 0x7fffffff) {
        DAT_1808da76c = 0x7ffffffe;
        goto LAB_18041fa73;
      }
      lVar14 = DAT_180bbe920;
      if (DAT_180bbe920 != DAT_180bbe928) {
        do {
          FUN_18015c010(lVar14);
          lVar14 = lVar14 + 0x20;
        } while (lVar14 != lVar4);
        DAT_180bbe928 = DAT_180bbe920;
      }
      DAT_180bbe938 = 0;
      FUN_1805f68fc(&DAT_1808da720);
      DAT_1808da688 = '\0';
      DAT_180bb904f = 1;
      UVar11 = GetTickCount64();
      while ((DAT_1808da688 == '\0' && (UVar12 = GetTickCount64(), UVar12 < UVar11 + 200))) {
        Sleep(1);
      }
      if (DAT_1808da688 == '\0') {
        FUN_18063ab10(local_618,0,0x600);
        FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                      "reason=no_native_frame game_calls_from_shutdown=0");
        local_638 = &PTR_180700558;
        if (local_618[0] != '\0') {
          local_638 = (undefined **)&DAT_1806bcfc0;
        }
        local_630 = local_618;
        FUN_1800f6900(0);
      }
      LOCK();
      DAT_180bbe88c = 1;
      UNLOCK();
      local_628 = &DAT_1808dae50;
      iVar7 = FUN_1805f68d0(&DAT_1808dae50);
      if (iVar7 != 0) goto LAB_18041fa7e;
      if (DAT_1808dae9c == 0x7fffffff) {
        DAT_1808dae9c = 0x7ffffffe;
        goto LAB_18041fa73;
      }
      if (DAT_180bb9398 != 0) {
        FUN_18015a2e0(&DAT_180bb93a0);
        FUN_18015a3e0(&DAT_180bb9390);
      }
      LOCK();
      DAT_180bbeb00 = 0;
      UNLOCK();
      FUN_1805f68fc(&DAT_1808dae50);
      FUN_1802cb720(1);
      LOCK();
      DAT_180bb8ad0 = DAT_180bb8ad0 | 0x40;
      UNLOCK();
    }
    UVar11 = GetTickCount64();
    bVar1 = (byte)DAT_180bb8ad0;
    while (((bVar1 & 6) != 6 && (UVar12 = GetTickCount64(), UVar12 < UVar11 + 10000))) {
      Sleep(5);
      bVar1 = (byte)DAT_180bb8ad0;
    }
    if (((byte)DAT_180bb8ad0 & 6) == 6) {
      iVar7 = FUN_1805f68d0(&DAT_1809ba4c0);
      if (iVar7 != 0) {
LAB_18041fa7e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      plVar2 = DAT_180b0df98;
      if (DAT_1809ba50c == 0x7fffffff) {
        DAT_1809ba50c = 0x7ffffffe;
LAB_18041fa73:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      for (; plVar2 != DAT_180b0dfa0; plVar2 = plVar2 + 1) {
        if (*(char *)(*plVar2 + 0x38) != '\0') {
          FUN_1805f68fc(&DAT_1809ba4c0);
          goto LAB_18041f8b0;
        }
      }
      FUN_1805f68fc(&DAT_1809ba4c0);
      iVar7 = FUN_1805f68d0(&DAT_1808e4f30);
      if (iVar7 != 0) goto LAB_18041fa7e;
      if (DAT_1808e4f7c == 0x7fffffff) {
LAB_18041fa69:
        DAT_1808e4f7c = 0x7ffffffe;
        goto LAB_18041fa73;
      }
      DAT_180bbec8f = 1;
      FUN_1805f68fc(&DAT_1808e4f30);
      UVar11 = GetTickCount64();
      do {
        iVar7 = FUN_1805f68d0(&DAT_1808e4f30);
        if (iVar7 != 0) goto LAB_18041fa7e;
        if (DAT_1808e4f7c == 0x7fffffff) goto LAB_18041fa69;
        FUN_180455230(DAT_180c62c38,DAT_180c62c40);
        FUN_1804556e0();
        if (DAT_180c62c38 == DAT_180c62c40) {
          FUN_1805f68fc(&DAT_1808e4f30);
          if (DAT_180c62ba8 != (PVOID)0x0) {
            UVar8 = RemoveVectoredExceptionHandler(DAT_180c62ba8);
            if (UVar8 == 0) {
            }
            DAT_180c62ba8 = (PVOID)0x0;
          }
          if (DAT_180c7d890 != (PVOID)0x0) {
            UVar8 = RemoveVectoredExceptionHandler(DAT_180c7d890);
            if (UVar8 == 0) {
            }
            DAT_180c7d890 = (PVOID)0x0;
          }
          pPVar13 = DAT_180c62ba0;
          LOCK();
          DAT_180c62ba0 = (LPTOP_LEVEL_EXCEPTION_FILTER)0x0;
          UNLOCK();
          pPVar13 = SetUnhandledExceptionFilter(pPVar13);
          if (pPVar13 != FUN_18041d410) {
            SetUnhandledExceptionFilter(pPVar13);
          }
          cVar6 = FUN_18044ec30(DAT_180c62b90,DAT_180c7d8a8);
          if (cVar6 != '\0') {
            FUN_18063ab10(local_618,0,0x600);
            FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                          "effects=restored callbacks=drained hooks=restored mapping=awaiting_loader_release"
                         );
            if (local_618[0] != '\0') {
              ppuVar15 = (undefined **)&DAT_1806bcfc0;
            }
            local_630 = local_618;
            local_638 = ppuVar15;
            FUN_1800f6900(1);
            LOCK();
            DAT_180bb8ad0 = DAT_180bb8ad0 | 0x10;
            UNLOCK();
          }
          FUN_18063ab10(local_618,0,0x600);
          FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                        "reason=hooks_or_callbacks_busy action=retain_mapping_and_ownership");
          goto LAB_18041f8e9;
        }
        FUN_1805f68fc(&DAT_1808e4f30);
        Sleep(2);
        UVar12 = GetTickCount64();
      } while (UVar12 < UVar11 + 2000);
    }
LAB_18041f8b0:
    uVar3 = DAT_180bb8ad0;
    FUN_18063ab10(local_618,0,0x600);
    local_638 = (undefined **)CONCAT44(local_638._4_4_,uVar3);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"phases=%u action=retain_mapping_and_ownership"
                 );
LAB_18041f8e9:
    local_630 = local_618;
    if (local_618[0] != '\0') {
      ppuVar15 = (undefined **)&DAT_1806bcfc0;
    }
    local_638 = ppuVar15;
    FUN_1800f6900(2);
  }
}



