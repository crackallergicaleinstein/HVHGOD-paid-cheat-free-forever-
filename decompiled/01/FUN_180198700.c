// FUN_180198700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180198700 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180198700(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  longlong *plVar7;
  char cVar8;
  char cVar9;
  DWORD DVar10;
  BOOL BVar11;
  int iVar12;
  ULONGLONG UVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 *puVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined8 ******ppppppuVar21;
  LPCWSTR ******lpExistingFileName;
  undefined8 *******pppppppuVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *******pppppppuVar25;
  LPCWSTR ******lpNewFileName;
  uint uVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  char *pcVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined1 (*pauVar32) [16];
  undefined1 auStackY_de8 [32];
  char local_d98;
  undefined1 local_d88 [16];
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 (*local_d68) [16];
  undefined1 (*local_d60) [16];
  undefined1 (*local_d58) [16];
  undefined1 local_d50 [8];
  undefined1 local_d48 [16];
  undefined8 local_d38;
  undefined8 local_d30;
  ULONGLONG local_d28;
  undefined1 local_d20 [16];
  undefined8 local_d10;
  undefined1 uStack_d08;
  undefined7 uStack_d07;
  undefined8 local_d00;
  undefined8 local_cf8;
  ulonglong local_cf0;
  undefined1 local_ce8 [24];
  undefined1 local_cd0 [16];
  undefined8 local_cc0;
  undefined1 local_cb8 [24];
  undefined1 local_ca0 [16];
  undefined8 local_c90;
  undefined1 local_c88 [24];
  undefined1 local_c70 [16];
  undefined8 local_c60;
  undefined1 local_c58 [24];
  undefined1 local_c40 [16];
  undefined8 local_c30;
  undefined1 local_c28 [24];
  undefined1 local_c10 [16];
  undefined8 local_c00;
  undefined1 local_bf8 [24];
  undefined1 local_be0 [16];
  undefined8 local_bd0;
  undefined1 local_bc8 [24];
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined1 local_b98 [24];
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined1 local_b68 [16];
  undefined8 local_b58;
  undefined1 local_b50 [16];
  undefined8 local_b40;
  undefined1 local_b38 [16];
  undefined8 local_b28;
  undefined1 local_b20 [8];
  char local_b18 [8];
  undefined1 local_b10 [8];
  undefined8 local_b08;
  undefined1 local_b00 [16];
  undefined8 local_af0;
  undefined1 local_ae8 [16];
  undefined8 local_ad8;
  undefined1 local_ad0 [16];
  undefined8 local_ac0;
  undefined1 local_ab8 [16];
  undefined8 local_aa8;
  undefined1 local_aa0 [16];
  undefined8 local_a90;
  undefined1 local_a88 [312];
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined1 local_928 [16];
  undefined8 *******local_918 [2];
  longlong local_908;
  ulonglong local_900;
  LPCWSTR ******local_8f8 [3];
  ulonglong local_8e0;
  undefined8 *******local_8d8 [7];
  ulonglong local_8a0;
  LPCWSTR ******local_898 [3];
  ulonglong local_880;
  undefined1 local_878 [16];
  longlong local_868;
  char local_858;
  undefined1 local_850 [448];
  longlong local_690;
  undefined1 local_688 [16];
  longlong *local_678;
  undefined1 local_668 [16];
  undefined8 uStack_658;
  undefined8 uStack_650;
  char local_648;
  undefined7 uStack_647;
  undefined1 local_640 [8];
  uint auStack_638 [14];
  longlong alStack_600 [12];
  undefined **local_5a0 [36];
  longlong local_480;
  longlong *plStack_478;
  undefined8 uStack_470;
  longlong *plStack_468;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_de8;
  if (DAT_180bb93a8 != '\0') {
  }
  UVar13 = GetTickCount64();
  local_d28 = UVar13;
  if (DAT_180bb9090 <= UVar13) {
    FUN_1801acd50(&DAT_180bb9050);
  }
  FUN_1801971a0();
  if (((DAT_180bb8ad0 & 1) != 0) || (DAT_180bb9048 == '\0')) {
    FUN_1801acd50(&DAT_180bb9050);
    uVar19 = FUN_180113860(&DAT_180bbe948);
    pauVar17 = DAT_180bbe948;
    local_d88._0_8_ = DAT_180bbe940;
    auVar5 = local_d88;
    DAT_180bbe940 = (undefined1 (*) [16])0x0;
    LOCK();
    DAT_180bbe948 = (undefined1 (*) [16])0x0;
    UNLOCK();
    if (((byte)pauVar17 & 3) == 2) {
      local_d88 = auVar5;
      FUN_1805fa36c(&DAT_180bbe948);
    }
    local_d88._8_8_ = uVar19;
    FUN_1800efed0(local_d88);
    local_648 = '\0';
    FUN_1801a85f0(local_640);
    local_480 = 0;
    plStack_478 = (longlong *)0x0;
    uStack_470 = 0;
    plStack_468 = (longlong *)0x0;
    local_b18[0] = local_648;
    _eh_vector_copy_constructor_iterator_
              (local_b10,local_640,0xe0,2,FUN_180195d60,thunk_FUN_1801ab310);
    local_950 = local_480;
    local_948 = plStack_478;
    local_480 = 0;
    plStack_478 = (longlong *)0x0;
    local_940 = uStack_470;
    local_938 = plStack_468;
    uStack_470 = 0;
    plStack_468 = (longlong *)0x0;
    FUN_180194780();
    plVar30 = plStack_468;
    if (plStack_468 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_468 + 1;
      lVar31 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*plStack_468)(plStack_468);
        LOCK();
        piVar2 = (int *)((longlong)plVar30 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30);
        }
      }
    }
    plVar30 = plStack_478;
    if (plStack_478 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_478 + 1;
      lVar31 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*plStack_478)(plStack_478);
        LOCK();
        piVar2 = (int *)((longlong)plVar30 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30);
        }
      }
    }
    _eh_vector_destructor_iterator_(local_640,0xe0,2,thunk_FUN_1801ab310);
    FUN_1801971a0();
  }
  if ((DAT_180bbe8c8 == (undefined1 (*) [16])0x0) || (DAT_180b0b4d8 == '\0')) {
    cVar8 = '\0';
    local_d98 = '\0';
    uVar19 = FUN_180113860(&DAT_180bbe948);
    pauVar17 = DAT_180bbe948;
    local_928._0_8_ = DAT_180bbe940;
    auVar5 = local_928;
    DAT_180bbe940 = (undefined1 (*) [16])0x0;
    LOCK();
    DAT_180bbe948 = (undefined1 (*) [16])0x0;
    UNLOCK();
    if (((byte)pauVar17 & 3) == 2) {
      local_928 = auVar5;
      FUN_1805fa36c(&DAT_180bbe948);
    }
    local_928._8_8_ = uVar19;
    FUN_1800efed0(local_928);
  }
  else {
    cVar8 = '\x01';
    local_d98 = '\x01';
  }
  FUN_1800ce230(&DAT_180cc8140,local_8d8,2);
  FUN_1800ce230(&DAT_180cc8140,local_8d8 + 4,3);
  local_858 = 0;
  _eh_vector_constructor_iterator_(local_850,0xe0,2,FUN_1801abaf0,thunk_FUN_1801ab310);
  local_690 = 0;
  local_688 = (undefined1  [16])0x0;
  local_678 = (longlong *)0x0;
  local_858 = cVar8;
  puVar14 = (undefined8 *)FUN_18019a380(local_d88);
  plVar7 = local_678;
  uVar19 = *puVar14;
  plVar30 = (longlong *)puVar14[1];
  *puVar14 = 0;
  puVar14[1] = 0;
  local_688._8_8_ = uVar19;
  if (local_678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_678 + 1;
    lVar31 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      puVar14 = (undefined8 *)*local_678;
      local_678 = plVar30;
      (*(code *)*puVar14)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar30 = local_678;
      if (iVar12 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
        plVar30 = local_678;
      }
    }
  }
  local_678 = plVar30;
  uVar19 = local_d88._8_8_;
  if ((longlong *)local_d88._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar30 = (longlong *)(local_d88._8_8_ + 8);
    lVar31 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (*(code *)**(undefined8 **)local_d88._8_8_)(local_d88._8_8_);
      LOCK();
      piVar2 = (int *)(uVar19 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*(longlong *)uVar19 + 8))(uVar19);
      }
    }
  }
  lVar15 = FUN_180113860(&DAT_180bb9388);
  lVar31 = DAT_180bb9380;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar20 = (byte)DAT_180bb9388;
  DAT_180bb9388 = lVar15;
  if ((bVar20 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bb9388);
  }
  local_690 = lVar31;
  uVar19 = local_688._0_8_;
  local_688._0_8_ = lVar15;
  if ((longlong *)uVar19 != (longlong *)0x0) {
    LOCK();
    plVar30 = (longlong *)(uVar19 + 8);
    lVar31 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar31 == 1) {
      (*(code *)**(undefined8 **)uVar19)(uVar19);
      LOCK();
      piVar2 = (int *)(uVar19 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*(longlong *)uVar19 + 8))(uVar19);
      }
    }
  }
  local_cf0 = 0xcbf29ce484222325;
  cVar9 = '\0';
  if (cVar8 != '\0') {
    puVar27 = local_850;
    pppppppuVar25 = local_8d8;
    lVar31 = 2;
    do {
      lVar15 = local_690;
      pppppppuVar22 = pppppppuVar25;
      if ((undefined8 ******)0xf < pppppppuVar25[3]) {
        pppppppuVar22 = (undefined8 *******)*pppppppuVar25;
      }
      uVar28 = 0xcbf29ce484222325;
      ppppppuVar21 = (undefined8 ******)0x0;
      if (pppppppuVar25[2] != (undefined8 ******)0x0) {
        do {
          uVar28 = (uVar28 ^ *(byte *)((longlong)ppppppuVar21 + (longlong)pppppppuVar22)) *
                   0x100000001b3;
          ppppppuVar21 = (undefined8 ******)((longlong)ppppppuVar21 + 1);
        } while (ppppppuVar21 < pppppppuVar25[2]);
      }
      lVar16 = FUN_180177b00(local_690 + 0x50,local_668,pppppppuVar25,uVar28);
      lVar16 = *(longlong *)(lVar16 + 8);
      if ((lVar16 != 0) && (lVar16 != *(longlong *)(lVar15 + 0x58))) {
        if (puVar27[0xd8] == '\0') {
          FUN_180195650(puVar27,*(longlong *)(lVar16 + 0x30) * 0xd8 +
                                *(longlong *)(local_690 + 0x38));
          puVar27[0xd8] = 1;
        }
        else {
          FUN_1801aea60();
        }
      }
      pppppppuVar25 = pppppppuVar25 + 4;
      puVar27 = puVar27 + 0xe0;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    UVar13 = local_d28;
    cVar9 = local_d98;
  }
  local_648 = local_858;
  _eh_vector_copy_constructor_iterator_
            (local_640,local_850,0xe0,2,FUN_180195d60,thunk_FUN_1801ab310);
  local_480 = local_690;
  plStack_478 = (longlong *)local_688._0_8_;
  local_690 = 0;
  uStack_470 = local_688._8_8_;
  plStack_468 = local_678;
  local_688 = ZEXT816(0);
  local_678 = (longlong *)0x0;
  FUN_180194780();
  lVar31 = DAT_180b90798;
  if ((DAT_180ccaa14 & 1) == 0) {
    DAT_180ccaa14 = DAT_180ccaa14 | 1;
    atexit(FUN_1806620c0);
  }
  cVar8 = FUN_1801ae9d0(local_8d8,local_898,&DAT_1808d9190);
  if ((cVar8 == '\0') || (lVar31 != DAT_180bb8750)) {
    pppppppuVar25 = local_8d8;
    if (0xf < local_8d8[3]) {
      pppppppuVar25 = local_8d8[0];
    }
    FUN_180113930(&DAT_1808d9190,pppppppuVar25,local_8d8[2]);
    pppppppuVar25 = local_8d8 + 4;
    if (0xf < local_8a0) {
      pppppppuVar25 = local_8d8[4];
    }
    FUN_180113930(&DAT_1808d91b0,pppppppuVar25,local_8d8[6]);
    DAT_180bb8750 = lVar31;
    DAT_1808da6f0 = '\x01';
  }
  if ((DAT_180bbe8d0 != DAT_180bbe8c8) || (DAT_180bb904e != cVar9)) {
    DAT_1808da6f0 = '\x01';
  }
  FUN_1801655d0(local_878,3);
  if (local_868 == 0) goto LAB_18019a084;
  if ((UVar13 < DAT_1808da6e8) || ((DAT_1808da6f0 == '\0' && (UVar13 < DAT_1808da6e0)))) {
LAB_180199a53:
    if (DAT_180bbe8d8 <= UVar13) {
      DAT_180bbe8d8 = UVar13 + 100;
      local_d88 = (undefined1  [16])0x0;
      local_d68 = (undefined1 (*) [16])&DAT_1808da778;
      iVar12 = FUN_1805f68d0(&DAT_1808da778);
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808da7c4 == 0x7fffffff) {
        DAT_1808da7c4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1808da7f0 == '\0') {
        if (DAT_1808da7e0 == 0) {
          local_d58 = (undefined1 (*) [16])&PTR_FUN_1808da770;
          uVar19 = FUN_1801a88f0(local_668,&local_d58);
          FUN_18017ccc0(&DAT_1808da7d8,uVar19);
          FUN_18015a450(local_668);
          FUN_18015a520(&uStack_658);
          if (local_668._8_4_ != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_18060ab3c();
          }
        }
        if (DAT_1808da7d0 != 0) {
          LOCK();
          *(int *)(DAT_1808da7d0 + 8) = *(int *)(DAT_1808da7d0 + 8) + 1;
          UNLOCK();
        }
        plVar30 = (longlong *)DAT_1808da7d0;
        lVar31 = DAT_1808da7c8;
        local_d88._8_8_ = DAT_1808da7d0;
        local_d88._0_8_ = DAT_1808da7c8;
        FUN_1805f68fc(&DAT_1808da778);
      }
      else {
        lVar31 = 0;
        plVar30 = (longlong *)0x0;
        local_d88 = (undefined1  [16])0x0;
        FUN_1805f68fc(&DAT_1808da778);
      }
      if ((DAT_180ccaa14 & 2) == 0) {
        DAT_180ccaa14 = DAT_180ccaa14 | 2;
        atexit(FUN_180662060);
      }
      if ((lVar31 != 0) && (lVar31 != DAT_180bb8740)) {
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
          UNLOCK();
        }
        lVar15 = DAT_180bb8748;
        DAT_180bb8740 = lVar31;
        plVar7 = plVar30;
        if (DAT_180bb8748 != 0) {
          LOCK();
          piVar2 = (int *)(DAT_180bb8748 + 8);
          iVar12 = *piVar2;
          DAT_180bb8748 = (longlong)plVar30;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = (longlong *)DAT_180bb8748;
          if (iVar12 == 1) {
            (*(code *)**(undefined8 **)lVar15)(lVar15);
            LOCK();
            piVar2 = (int *)(lVar15 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar7 = (longlong *)DAT_180bb8748;
            if (iVar12 == 1) {
              (**(code **)(*(longlong *)lVar15 + 8))(lVar15);
              plVar7 = (longlong *)DAT_180bb8748;
            }
          }
        }
        DAT_180bb8748 = (longlong)plVar7;
        _Xtime_get_ticks();
        local_d58 = (undefined1 (*) [16])(*DAT_180bb90b0 + DAT_180bb90b8);
        pauVar17 = DAT_180bb90b0;
        if (DAT_180bb90b0 != local_d58) {
LAB_180199c21:
          uVar19 = *(undefined8 *)(DAT_180bb90a0 + (DAT_180bb90a8 - 1 & (ulonglong)pauVar17) * 8);
          DVar10 = GetCurrentProcessId();
          cVar8 = FUN_18017e100(&DAT_180bb9050,lVar31,DVar10,uVar19);
          if (cVar8 == '\0') goto code_r0x000180199c7b;
          if (DAT_180c7df28 == (undefined8 *)0x0) {
            local_928._8_8_ = 0x15;
            local_928._0_8_ = "tier0.dll:g_pMemAlloc";
            DAT_180c7df28 = (undefined8 *)FUN_180451750(local_928);
          }
          pauVar17 = (undefined1 (*) [16])
                     (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xa8)
          ;
          local_d68 = pauVar17;
          if (pauVar17 == (undefined1 (*) [16])0x0) {
            pauVar17 = (undefined1 (*) [16])0x0;
            local_d58 = (undefined1 (*) [16])0x0;
          }
          else {
            *pauVar17 = (undefined1  [16])0x0;
            *(undefined4 *)(*pauVar17 + 8) = 1;
            *(undefined4 *)(*pauVar17 + 0xc) = 1;
            *(undefined ***)*pauVar17 =
                 std::_Ref_count_obj2<hvhgod::sync::cosmetic_snapshot>::vftable;
            local_d60 = pauVar17 + 1;
            *(undefined8 *)*local_d60 = 0;
            *(undefined8 *)(pauVar17[1] + 8) = 0;
            *(undefined8 *)pauVar17[2] = 0;
            *(undefined8 *)(pauVar17[2] + 8) = 0;
            *(undefined8 *)pauVar17[3] = 0;
            *(undefined8 *)(pauVar17[3] + 8) = 0;
            *(undefined8 *)pauVar17[4] = 0;
            *(undefined8 *)(pauVar17[4] + 8) = 0;
            *(undefined8 *)pauVar17[5] = 0;
            *(undefined8 *)(pauVar17[5] + 8) = 0;
            *(undefined8 *)pauVar17[6] = 0;
            *(undefined8 *)(pauVar17[6] + 8) = 0;
            *(undefined8 *)pauVar17[7] = 0;
            *(undefined8 *)(pauVar17[7] + 8) = 0;
            *(undefined8 *)pauVar17[8] = 0;
            *(undefined8 *)(pauVar17[8] + 8) = 0;
            pauVar17[9] = (undefined1  [16])0x0;
            *(undefined8 *)pauVar17[10] = 0;
            local_d58 = pauVar17;
            FUN_1801abd10(local_d60);
            *(undefined8 *)pauVar17[5] = 0;
            FUN_1801bb620(pauVar17[5] + 8);
            *(undefined8 *)(pauVar17[9] + 8) = 0;
            *(undefined8 *)pauVar17[10] = 0;
          }
          pauVar24 = pauVar17 + 1;
          local_928._8_8_ = pauVar17;
          local_928._0_8_ = pauVar24;
          *(undefined1 (**) [16])(pauVar17[9] + 8) = DAT_180bbe8c8;
          *(ulonglong *)pauVar17[10] = DAT_180bb9090;
          if (pauVar24 != (undefined1 (*) [16])&DAT_180bb9050) {
            local_d48._0_8_ = pauVar24;
            *(undefined4 *)*pauVar24 = DAT_180bb9050;
            FUN_1801b6e80(pauVar17[1] + 8,*(undefined8 *)*DAT_180bb9058);
            uVar19 = FUN_180151090(pauVar24,*(undefined8 *)pauVar17[2]);
            FUN_1801bb6e0(pauVar24,uVar19);
          }
          *(ulonglong *)pauVar17[5] = DAT_180bb9090;
          pauVar6 = DAT_180bb9058;
          pauVar32 = pauVar17;
          if (local_d98 != '\0') {
            local_d60 = DAT_180bb9058;
            for (pauVar4 = *(undefined1 (**) [16])*DAT_180bb9058; pauVar4 != pauVar6;
                pauVar4 = *(undefined1 (**) [16])*pauVar4) {
              local_d68 = *(undefined1 (**) [16])pauVar4[1];
              local_d60 = (undefined1 (*) [16])((ulonglong)local_d68 >> 0x10);
              if (local_d68 != DAT_180bbe8c8) {
                uVar28 = (((((((((ulonglong)local_d68 & 0xff ^ local_cf0) * 0x100000001b3 ^
                               (ulonglong)local_d68 >> 8 & 0xff) * 0x100000001b3 ^
                              (ulonglong)local_d60 & 0xff) * 0x100000001b3 ^
                             (ulonglong)local_d68 >> 0x18 & 0xff) * 0x100000001b3 ^
                            (ulonglong)local_d68 >> 0x20 & 0xff) * 0x100000001b3 ^
                           (ulonglong)local_d68 >> 0x28 & 0xff) * 0x100000001b3 ^
                          (ulonglong)local_d68 >> 0x30 & 0xff) * 0x100000001b3 ^
                         (ulonglong)local_d68 >> 0x38) * 0x100000001b3 &
                         *(ulonglong *)(lVar31 + 0x40);
                lVar15 = *(longlong *)(*(longlong *)(lVar31 + 0x28) + 8 + uVar28 * 0x10);
                if (lVar15 == *(longlong *)(lVar31 + 0x18)) {
LAB_180199ef1:
                  lVar15 = 0;
                }
                else {
                  pauVar32 = *(undefined1 (**) [16])(lVar15 + 0x10);
                  while (local_d68 != pauVar32) {
                    if (lVar15 == *(longlong *)(*(longlong *)(lVar31 + 0x28) + uVar28 * 0x10))
                    goto LAB_180199ef1;
                    lVar15 = *(longlong *)(lVar15 + 8);
                    pauVar32 = *(undefined1 (**) [16])(lVar15 + 0x10);
                  }
                }
                if ((lVar15 != 0) && (lVar15 != *(longlong *)(lVar31 + 0x18))) {
                  FUN_1801a8d10(pauVar17[5] + 8,local_668,&local_d68,lVar15 + 0x18);
                }
              }
              pauVar32 = local_d58;
            }
          }
          local_928 = (undefined1  [16])0x0;
          uVar19 = FUN_180113860(&DAT_180bbe948);
          local_d48._0_8_ = DAT_180bbe940;
          auVar5 = local_d48;
          LOCK();
          UNLOCK();
          bVar20 = (byte)DAT_180bbe948;
          DAT_180bbe940 = pauVar24;
          DAT_180bbe948 = pauVar32;
          if ((bVar20 & 3) == 2) {
            local_d48 = auVar5;
            FUN_1805fa36c(&DAT_180bbe948);
          }
          local_d48._8_8_ = uVar19;
          FUN_1800efed0(local_d48);
          FUN_18063ab10(&local_648,0,0x600);
          FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                        "enabled=%d peers=%zu profiles=%zu roster=%zu ttl_ms=%llu");
          FUN_1800f6900(0);
          FUN_1801971a0();
        }
      }
LAB_18019a047:
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar30 + 1;
        lVar31 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*plVar30)(plVar30);
          LOCK();
          piVar2 = (int *)((longlong)plVar30 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar30 + 8))(plVar30);
          }
        }
      }
    }
  }
  else {
    if (DAT_180bbe8d0 != DAT_180bbe8c8) {
      FUN_1801acd50(&DAT_180bb9050);
      FUN_1801b2ac0(&DAT_180bb9098);
    }
    DAT_180bbe8e8 = DAT_180bbe8e8 + 1;
    pcVar29 = (char *)((longlong)&uStack_658 + 5);
    uVar28 = DAT_180bbe8e8;
    do {
      pcVar29 = pcVar29 + -1;
      uVar23 = uVar28 / 10;
      *pcVar29 = (char)uVar28 + (char)uVar23 * -10 + '0';
      uVar28 = uVar23;
    } while (uVar23 != 0);
    FUN_18015bdb0(local_d48,pcVar29,(longlong)&uStack_658 + 5);
    local_d20 = (undefined1  [16])0x0;
    local_d10 = 0;
    uStack_d08 = 0;
    uStack_d07 = 0;
    lVar31 = -1;
    do {
      lVar15 = lVar31 + 1;
      lVar31 = lVar31 + 1;
    } while (s_uninitialized_1808d7d90[lVar15] != '\0');
    FUN_18015ba30(local_d20);
    pauVar17 = (undefined1 (*) [16])FUN_18015b2a0(local_d20,&DAT_180701178,1);
    local_d88 = *pauVar17;
    uStack_d78 = *(undefined8 *)pauVar17[1];
    uStack_d70 = *(undefined8 *)(pauVar17[1] + 8);
    (*pauVar17)[0] = 0;
    *(undefined8 *)pauVar17[1] = 0;
    *(undefined8 *)(pauVar17[1] + 8) = 0xf;
    FUN_18015a6e0(local_668);
    FUN_18015c010(&DAT_1808da6f8);
    _DAT_1808da6f8 = local_668._0_8_;
    uRam00000001808da700 = local_668._8_8_;
    uRam00000001808da708 = uStack_658;
    uRam00000001808da710 = uStack_650;
    uStack_658 = 0;
    uStack_650 = 0xf;
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_668._1_15_;
    local_668 = auVar5 << 8;
    FUN_18015c010(local_668);
    FUN_18015c010(local_d88);
    FUN_18015c010(local_d20);
    FUN_18015c010(local_d48);
    FUN_1800e60e0(local_bf8,"requestId");
    FUN_1800e64d0(local_be0,&DAT_1808da6f8);
    local_bd0 = 0;
    local_d88._0_8_ = local_bf8;
    local_d88._8_8_ = local_bc8;
    FUN_1800f4e90(local_b18,local_d88,1,2);
    local_b08 = 0;
    FUN_1800e60e0(local_c88,"processId");
    DVar10 = GetCurrentProcessId();
    local_c70 = ZEXT816(0);
    FUN_1801409d0(local_c70 + 8,0);
    local_c70[0] = 6;
    local_c70._8_4_ = DVar10;
    local_c70._12_4_ = 0;
    local_c60 = 0;
    local_d88._0_8_ = local_c88;
    local_d88._8_8_ = local_c58;
    FUN_1800f4e90(local_b00,local_d88,1,2);
    local_af0 = 0;
    FUN_1800e60e0(local_cb8,"issuedAtMs");
    lVar31 = _Xtime_get_ticks();
    local_ca0 = ZEXT816(0);
    FUN_1801409d0(local_ca0 + 8,0);
    local_ca0[0] = 5;
    local_ca0._8_8_ = lVar31 / 10000;
    local_c90 = 0;
    local_d88._0_8_ = local_cb8;
    local_d88._8_8_ = local_c88;
    FUN_1800f4e90(local_ae8,local_d88,1,2);
    local_ad8 = 0;
    FUN_1800e60e0(local_c28,"steamId");
    pcVar29 = (char *)((longlong)&uStack_658 + 5);
    pauVar17 = DAT_180bbe8c8;
    do {
      pcVar29 = pcVar29 + -1;
      pauVar24 = (undefined1 (*) [16])((ulonglong)pauVar17 / 10);
      *pcVar29 = (char)pauVar17 + (char)pauVar24 * -10 + '0';
      pauVar17 = pauVar24;
    } while (pauVar24 != (undefined1 (*) [16])0x0);
    FUN_18015bdb0(local_d20,pcVar29,(longlong)&uStack_658 + 5);
    FUN_1800e6ec0(local_c10,local_d20);
    local_c00 = 0;
    local_d88._0_8_ = local_c28;
    local_d88._8_8_ = local_bf8;
    FUN_1800f4e90(local_ad0,local_d88,1,2);
    local_ac0 = 0;
    FUN_1800e60e0(local_ce8,"enabled");
    local_cd0 = ZEXT816(0);
    FUN_1801409d0(local_cd0 + 8,0);
    local_cd0[0] = 4;
    local_d58 = (undefined1 (*) [16])CONCAT71(local_d58._1_7_,cVar9);
    local_cd0._8_8_ = local_d58;
    local_cc0 = 0;
    local_d88._8_8_ = local_cb8;
    local_d88._0_8_ = local_ce8;
    FUN_1800f4e90(local_ab8,local_d88,1,2);
    local_aa8 = 0;
    FUN_1800e60e0(local_c58,"peers");
    local_d68 = &local_c40;
    local_c40 = ZEXT816(0);
    FUN_1801b9310(local_c40,&DAT_180bbe8f0);
    local_c30 = 0;
    local_d88._0_8_ = local_c58;
    local_d88._8_8_ = local_c28;
    FUN_1800f4e90(local_aa0,local_d88,1,2);
    local_a90 = 0;
    local_d88._8_8_ = local_a88;
    local_d88._0_8_ = local_b18;
    FUN_1800f4e90(local_928,local_d88,1,2);
    _eh_vector_destructor_iterator_(local_b18,0x18,6,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_c58,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_ce8,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_c28,0x18,2,FUN_1800aab30);
    FUN_18015c010(local_d20);
    _eh_vector_destructor_iterator_(local_cb8,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_c88,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_bf8,0x18,2,FUN_1800aab30);
    cVar8 = '\0';
    if (cVar9 != '\0') {
      local_d68 = &local_668;
      FUN_1800e60e0(local_d20,"version");
      uStack_d07 = 0;
      uStack_d08 = 0;
      local_d00 = 0;
      FUN_1801409d0(&local_d00,0);
      uStack_d08 = 5;
      local_d00 = 1;
      local_cf8 = 0;
      local_d88._0_8_ = local_d20;
      local_d88._8_8_ = &local_cf0;
      FUN_1800f4e90(local_b68,local_d88,1,2);
      local_b58 = 0;
      FUN_1800e60e0(local_b98,"skins");
      puVar14 = (undefined8 *)FUN_1800cb640(&DAT_180cc8068,&local_d58);
      local_b80 = *puVar14;
      uStack_b78 = puVar14[1];
      *(undefined1 *)puVar14 = 0;
      puVar14[1] = 0;
      local_b70 = 0;
      local_d88._0_8_ = local_b98;
      local_d88._8_8_ = local_b68;
      FUN_1800f4e90(local_b50,local_d88,1,2);
      local_b40 = 0;
      FUN_1800e60e0(local_bc8,"agents");
      puVar14 = (undefined8 *)FUN_1800ce490(&DAT_180cc8140,local_d48);
      local_bb0 = *puVar14;
      uStack_ba8 = puVar14[1];
      *(undefined1 *)puVar14 = 0;
      puVar14[1] = 0;
      local_ba0 = 0;
      local_d88._0_8_ = local_bc8;
      local_d88._8_8_ = local_b98;
      FUN_1800f4e90(local_b38,local_d88,1,2);
      local_b28 = 0;
      local_d88._8_8_ = local_b20;
      local_d88._0_8_ = local_b68;
      puVar27 = (undefined1 *)FUN_1800f4e90(local_668,local_d88,1,2);
      local_d88 = (undefined1  [16])0x0;
      uStack_d78 = 0;
      uStack_d70 = 0;
      FUN_18015ba30(local_d88,"cosmetics",9);
      puVar18 = (undefined1 *)FUN_1800f43d0(local_928,local_d88);
      uVar3 = *puVar18;
      *puVar18 = *puVar27;
      *puVar27 = uVar3;
      uVar19 = *(undefined8 *)(puVar18 + 8);
      *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar27 + 8);
      *(undefined8 *)(puVar27 + 8) = uVar19;
      FUN_1801409d0(puVar27 + 8,*puVar27);
      _eh_vector_destructor_iterator_(local_b68,0x18,3,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_bc8,0x18,2,FUN_1800aab30);
      FUN_1801409d0(local_d48 + 8,local_d48[0]);
      _eh_vector_destructor_iterator_(local_b98,0x18,2,FUN_1800aab30);
      FUN_1801409d0(local_d50,(ulonglong)local_d58 & 0xff);
      _eh_vector_destructor_iterator_(local_d20,0x18,2,FUN_1800aab30);
      local_d68 = &local_668;
      puVar27 = (undefined1 *)FUN_180194d20();
      local_d88 = (undefined1  [16])0x0;
      uStack_d78 = 0;
      uStack_d70 = 0;
      FUN_18015ba30(local_d88,"cosmetics",9);
      uVar19 = FUN_1800f43d0(local_928,local_d88);
      local_d48 = (undefined1  [16])0x0;
      local_d38 = 0;
      local_d30 = 0;
      FUN_18015ba30(local_d48,"agents",6);
      uVar19 = FUN_1800f43d0(uVar19,local_d48);
      local_d88 = (undefined1  [16])0x0;
      uStack_d78 = 0;
      uStack_d70 = 0;
      FUN_18015ba30(local_d88,"bundles",7);
      puVar18 = (undefined1 *)FUN_1800f43d0(uVar19,local_d88);
      uVar3 = *puVar18;
      *puVar18 = *puVar27;
      *puVar27 = uVar3;
      uVar19 = *(undefined8 *)(puVar18 + 8);
      *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar27 + 8);
      *(undefined8 *)(puVar27 + 8) = uVar19;
      FUN_1801409d0(puVar27 + 8,*puVar27);
      cVar8 = local_d98;
    }
    cVar9 = FUN_1800a9120(local_878);
    if (cVar9 != '\0') {
      local_668 = (undefined1  [16])0x0;
      uStack_658 = 0;
      uStack_650 = 0;
      FUN_180159e60(local_668,L"sync-request.bridge",0x13);
      FUN_1800a7e60(local_898,local_878,local_668);
      FUN_18015b930(local_668);
      FUN_1800f5370(local_8f8,local_898);
      FUN_1800f52e0(local_8f8,L".tmp",4);
      puVar14 = (undefined8 *)FUN_1800f4710(local_928,local_d20,0xffffffff);
      local_d88._0_8_ = puVar14;
      if (0xf < (ulonglong)puVar14[3]) {
        local_d88._0_8_ = *puVar14;
      }
      local_d88._8_8_ = puVar14[2];
      local_d48._8_8_ = 0xc;
      local_d48._0_8_ = "sync-request";
      FUN_18000fdc0(local_918,local_d48,local_d88);
      FUN_18015c010(local_d20);
      if (local_908 != 0) {
        FUN_18063ab10(&local_648,0,0x108);
        FUN_1800e6fe0(&local_648,local_8f8,0x30);
        pppppppuVar25 = local_918;
        if (0xf < local_900) {
          pppppppuVar25 = local_918[0];
        }
        FUN_1800f7160(&local_648,pppppppuVar25,local_908);
        lVar31 = FUN_180113da0(local_640);
        if (lVar31 == 0) {
          lVar31 = (longlong)*(int *)(CONCAT71(uStack_647,local_648) + 4);
          uVar26 = 4;
          if (*(longlong *)((longlong)alStack_600 + lVar31) != 0) {
            uVar26 = 0;
          }
          uVar26 = uVar26 | *(uint *)((longlong)auStack_638 + lVar31) & 0x15 | 2;
          *(uint *)((longlong)auStack_638 + lVar31) = uVar26;
          uVar26 = uVar26 & *(uint *)((longlong)auStack_638 + lVar31 + 4);
          if (uVar26 != 0) {
            if ((uVar26 & 4) == 0) {
              pcVar29 = "ios_base::failbit set";
              if ((uVar26 & 2) == 0) {
                pcVar29 = "ios_base::eofbit set";
              }
            }
            else {
              pcVar29 = "ios_base::badbit set";
            }
            uVar19 = FUN_1801597e0(local_668,1);
            FUN_1801596c0(local_d20,pcVar29,uVar19);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_d20,&DAT_1808d0f18);
          }
        }
        if ((*(byte *)((longlong)auStack_638 +
                      (longlong)*(int *)(CONCAT71(uStack_647,local_648) + 4)) & 6) == 0) {
          lpNewFileName = (LPCWSTR ******)local_898;
          if (7 < local_880) {
            lpNewFileName = local_898[0];
          }
          lpExistingFileName = (LPCWSTR ******)local_8f8;
          if (7 < local_8e0) {
            lpExistingFileName = local_8f8[0];
          }
          BVar11 = MoveFileExW((LPCWSTR)lpExistingFileName,(LPCWSTR)lpNewFileName,1);
          if (BVar11 != 0) {
            DAT_180bbe8d0 = DAT_180bbe8c8;
            DAT_180bb904e = cVar8;
            if (DAT_180bb90a8 <= DAT_180bb90b8 + 1) {
              FUN_1801b7c90(&DAT_180bb9098);
            }
            DAT_180bb90b0 = (undefined1 (*) [16])((ulonglong)DAT_180bb90b0 & DAT_180bb90a8 - 1);
            puVar27 = *DAT_180bb90b0 + DAT_180bb90b8;
            lVar31 = ((ulonglong)puVar27 & DAT_180bb90a8 - 1) * 8;
            if (*(longlong *)(DAT_180bb90a0 + lVar31) == 0) {
              if (DAT_180c7df28 == (undefined8 *)0x0) {
                local_d88._8_8_ = 0x15;
                local_d88._0_8_ = "tier0.dll:g_pMemAlloc";
                DAT_180c7df28 = (undefined8 *)FUN_180451750(local_d88);
              }
              uVar19 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                 ((longlong *)*DAT_180c7df28,0x20);
              *(undefined8 *)(DAT_180bb90a0 + lVar31) = uVar19;
            }
            FUN_18015b360(*(undefined8 *)
                           (DAT_180bb90a0 + (DAT_180bb90a8 - 1 & (ulonglong)puVar27) * 8),
                          &DAT_1808da6f8);
            DAT_180bb90b8 = DAT_180bb90b8 + 1;
            if (6 < DAT_180bb90b8) {
              FUN_18015c010(*(undefined8 *)
                             (DAT_180bb90a0 + (DAT_180bb90a8 - 1 & (ulonglong)DAT_180bb90b0) * 8));
              if (DAT_180bb90b8 == 1) {
                DAT_180bb90b0 = (undefined1 (*) [16])0x0;
                DAT_180bb90b8 = DAT_180bb90b8 - 1;
              }
              else {
                DAT_180bb90b0 = (undefined1 (*) [16])(*DAT_180bb90b0 + 1);
                DAT_180bb90b8 = DAT_180bb90b8 - 1;
              }
            }
          }
        }
        DAT_1808da6f0 = '\0';
        DAT_1808da6e0 = UVar13 + 3000;
        DAT_1808da6e8 = UVar13 + 0x640;
        *(undefined ***)(local_640 + (longlong)*(int *)(CONCAT71(uStack_647,local_648) + 4) + -8) =
             std::basic_ofstream<char,std::char_traits<char>_>::vftable;
        iVar12 = *(int *)(CONCAT71(uStack_647,local_648) + 4);
        *(int *)(local_640 + (longlong)iVar12 + -0xc) = iVar12 + -0xa8;
        FUN_1800f63e0(local_640);
        *(undefined ***)(local_640 + (longlong)*(int *)(CONCAT71(uStack_647,local_648) + 4) + -8) =
             std::basic_ostream<char,std::char_traits<char>_>::vftable;
        iVar12 = *(int *)(CONCAT71(uStack_647,local_648) + 4);
        *(int *)(local_640 + (longlong)iVar12 + -0xc) = iVar12 + -0x10;
        local_5a0[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_5a0);
        FUN_18015c010(local_918);
        FUN_18015b930(local_8f8);
        FUN_18015b930(local_898);
        FUN_1801409d0(local_928 + 8,local_928[0]);
        goto LAB_180199a53;
      }
      FUN_18015c010(local_918);
      FUN_18015b930(local_8f8);
      FUN_18015b930(local_898);
    }
    FUN_1801409d0(local_928 + 8,local_928[0]);
  }
LAB_18019a084:
  FUN_18015b930(local_878);
  FUN_1800efed0(local_688 + 8);
  FUN_1800efed0(&local_690);
  _eh_vector_destructor_iterator_(local_850,0xe0,2,thunk_FUN_1801ab310);
  _eh_vector_destructor_iterator_(local_8d8,0x20,2,thunk_FUN_18015c010);
code_r0x000180199c7b:
  pauVar17 = (undefined1 (*) [16])(*pauVar17 + 1);
  if (pauVar17 == local_d58) goto LAB_18019a047;
  goto LAB_180199c21;
}



