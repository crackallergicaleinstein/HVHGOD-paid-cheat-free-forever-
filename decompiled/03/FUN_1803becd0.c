// FUN_1803becd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803becd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803becd0(void)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  int iVar3;
  longlong lVar4;
  UINT UVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 **ppuVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined4 uVar18;
  undefined1 auVar19 [64];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auStack_528 [48];
  undefined8 local_4f8;
  undefined8 local_4f0;
  char *local_4e8;
  undefined8 local_4e0;
  undefined2 **local_4d8;
  longlong *local_4d0;
  longlong local_4c8;
  longlong local_4b8;
  longlong local_4b0;
  char *local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [16];
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478 [16];
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 local_440;
  undefined2 *local_438;
  wchar_t *local_430;
  wchar_t *local_428;
  wchar_t *local_420;
  undefined1 local_418 [32];
  undefined1 local_3f8 [28];
  int iStack_3dc;
  longlong local_3d8 [2];
  longlong lStack_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  longlong local_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 local_358 [32];
  undefined8 local_338;
  undefined **local_328 [12];
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  longlong local_2a8;
  longlong local_2a0;
  WCHAR local_288 [264];
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_528;
  auVar19 = ZEXT464(0x41400000);
  if (DAT_180b90820 == 0) {
    local_4f8 = &DAT_18090ba90;
    local_4f0 = 0x53a98;
    DAT_180b90820 = FUN_180438560(&local_4f8,auVar19._0_8_,0x400);
  }
  auVar22 = ZEXT464(0x41700000);
  if (DAT_180b90828 == 0) {
    local_4f8 = &DAT_18090ba90;
    local_4f0 = 0x53a98;
    DAT_180b90828 = FUN_180438560(&local_4f8,auVar22._0_8_,0x400);
  }
  uVar6 = auVar19._0_8_;
  auVar17 = ZEXT464(0x41900000);
  if (DAT_180b90830 == 0) {
    local_4f8 = &DAT_18090ba90;
    local_4f0 = 0x53a98;
    DAT_180b90830 = FUN_180438560(&local_4f8,auVar17._0_8_,0x400);
    uVar6 = auVar19._0_8_;
  }
  if (DAT_180b90838 == 0) {
    local_4f8 = &DAT_18095f530;
    local_4f0 = 0x54058;
    DAT_180b90838 = FUN_180438560(&local_4f8,uVar6,0x400);
  }
  uVar6 = auVar17._0_8_;
  if (DAT_180b90840 == 0) {
    local_4f8 = &DAT_18095f530;
    local_4f0 = 0x54058;
    DAT_180b90840 = FUN_180438560(&local_4f8,auVar22._0_8_,0x400);
    uVar6 = auVar17._0_8_;
  }
  if (DAT_180b90848 == 0) {
    local_4f8 = &DAT_18095f530;
    local_4f0 = 0x54058;
    DAT_180b90848 = FUN_180438560(&local_4f8,uVar6,0x400);
  }
  if (DAT_180b90850 == 0) {
    local_4f8 = &DAT_1809b3590;
    local_4f0 = 0x6400;
    DAT_180b90850 = FUN_180438560(&local_4f8,0x41100000,0x400);
  }
  if (DAT_180b90858 == 0) {
    local_4f8 = &DAT_1809b3590;
    local_4f0 = 0x6400;
    DAT_180b90858 = FUN_180438560(&local_4f8,0x41280000,0x400);
  }
  if (DAT_180b90860 == 0) {
    local_4f8 = &DAT_1809b3590;
    local_4f0 = 0x6400;
    DAT_180b90860 = FUN_180438560(&local_4f8,0x41600000,0x400);
  }
  lVar14 = DAT_180b90820;
  auVar21 = auVar22._0_16_;
  if (DAT_180c62928 != DAT_180b90820) {
    FUN_18063ab10(local_3d8,0,0xa8);
    auVar21 = auVar22._0_16_;
    DAT_180c62880 = local_3d8[0];
    DAT_180c62888 = local_3d8[1];
    DAT_180c62890 = lStack_3c8;
    DAT_180c62898 = lStack_3c0;
    DAT_180c628a0 = local_3b8;
    DAT_180c628a8 = lStack_3b0;
    DAT_180c628b0 = lStack_3a8;
    DAT_180c628b8 = lStack_3a0;
    DAT_180c628c0 = local_398;
    DAT_180c628c8 = uStack_390;
    uRam0000000180c628d0 = uStack_388;
    uRam0000000180c628d8 = uStack_380;
    _DAT_180c628e0 = local_378;
    uRam0000000180c628e8 = uStack_370;
    uRam0000000180c628f0 = uStack_368;
    uRam0000000180c628f8 = uStack_360;
    _DAT_180c62900 = local_358;
    DAT_180c62920 = local_338;
    DAT_180c62928 = lVar14;
  }
  if (DAT_180c62880 == 0) {
    local_4f8 = &DAT_1809b3590;
    local_4f0 = 0x6400;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c62880 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c62888 == 0) {
    local_4f8 = &DAT_1809b3590;
    local_4f0 = 0x6400;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c62888 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c62890 == 0) {
    local_4f8 = &DAT_1809b3590;
    local_4f0 = 0x6400;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c62890 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c62898 == 0) {
    local_4f8 = &DAT_18090ba90;
    local_4f0 = 0x53a98;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c62898 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c628a0 == 0) {
    local_4f8 = &DAT_18090ba90;
    local_4f0 = 0x53a98;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c628a0 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c628a8 == 0) {
    local_4f8 = &DAT_18090ba90;
    local_4f0 = 0x53a98;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c628a8 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c628b0 == 0) {
    local_4f8 = &DAT_18095f530;
    local_4f0 = 0x54058;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c628b0 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c628b8 == 0) {
    local_4f8 = &DAT_18095f530;
    local_4f0 = 0x54058;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c628b8 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180c628c0 == 0) {
    local_4f8 = &DAT_18095f530;
    local_4f0 = 0x54058;
    auVar19 = ZEXT1664(auVar21);
    DAT_180c628c0 = FUN_180438560(&local_4f8);
    auVar21 = auVar19._0_16_;
  }
  if (DAT_180b90950 == '\0') {
    DAT_180b90950 = '\x01';
    auVar19 = ZEXT1664(auVar21);
    FUN_18063ab10(local_288,0,0x208);
    UVar5 = GetWindowsDirectoryW(local_288,0x104);
    if ((UVar5 != 0) && (UVar5 < 0x104)) {
      local_438 = &DAT_18080ca98;
      local_430 = L"verdana.ttf";
      local_428 = L"segoeui.ttf";
      local_420 = L"consola.ttf";
      lVar14 = 0;
      local_4d8 = &local_438;
      local_4d0 = &DAT_180b908f8;
      local_4c8 = 4;
      uVar18 = 0x41300000;
      uVar20 = 0x41500000;
      do {
        lVar9 = local_4c8;
        plVar15 = local_4d0;
        ppuVar11 = local_4d8;
        pauVar12 = (undefined1 (*) [16])0x0;
        FUN_18063ab10(local_3d8,0,0x110);
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while ((*ppuVar11)[lVar13] != 0);
        local_458 = (undefined1  [16])0x0;
        local_448 = 0;
        local_440 = 0;
        FUN_180159e60(local_458);
        local_478 = (undefined1  [16])0x0;
        local_468 = 0;
        local_460 = 0;
        FUN_180159e60(local_478,L"Fonts",5);
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (local_288[lVar13] != L'\0');
        local_498 = (undefined1  [16])0x0;
        local_488 = 0;
        local_480 = 0;
        FUN_180159e60(local_498,local_288);
        uVar6 = FUN_1800a7e60(local_3f8,local_498,local_478);
        uVar6 = FUN_1800a7e60(local_418,uVar6,local_458);
        FUN_18015e690(local_3d8,uVar6,0x24);
        FUN_18015b930(local_418);
        FUN_18015b930(local_3f8);
        FUN_18015b930(local_498);
        FUN_18015b930(local_478);
        FUN_18015b930(local_458);
        if ((*(byte *)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x10) & 6) == 0)
        {
          FUN_180176ec0(local_3d8,&local_2a8);
          if ((local_2a0 + local_2a8) - 1U < 0x400000) {
            FUN_1801b0ec0(plVar15 + -1);
            local_2c8 = (undefined1  [16])0x0;
            local_2b8 = 0;
            FUN_180176fb0(local_3d8,local_2c8);
            plVar7 = (longlong *)FUN_1801771e0(local_3d8,plVar15[-1],*plVar15 - plVar15[-1]);
            if ((*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) & 6) == 0) {
              if (DAT_180c7df28 == (undefined8 *)0x0) {
                local_4e8 = "tier0.dll:g_pMemAlloc";
                local_4e0 = 0x15;
                DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_4e8);
              }
              pauVar8 = (undefined1 (*) [16])
                        (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                  ((longlong *)*DAT_180c7df28,0x28);
              if (pauVar8 == (undefined1 (*) [16])0x0) {
                pauVar8 = pauVar12;
              }
              else {
                *pauVar8 = (undefined1  [16])0x0;
                *(undefined4 *)(*pauVar8 + 8) = 1;
                *(undefined4 *)(*pauVar8 + 0xc) = 1;
                *(undefined ***)*pauVar8 =
                     std::_Ref_count_obj2<std::vector<std::byte,std::allocator<std::byte>_>_const_>
                     ::vftable;
                lVar9 = plVar15[-1];
                lVar13 = *plVar15;
                lVar4 = plVar15[1];
                plVar15[1] = 0;
                *plVar15 = 0;
                plVar15[-1] = 0;
                *(longlong *)pauVar8[1] = lVar9;
                *(longlong *)(pauVar8[1] + 8) = lVar13;
                *(longlong *)pauVar8[2] = lVar4;
              }
              pauVar1 = pauVar8 + 1;
              local_2c8._8_8_ = pauVar8;
              local_2c8._0_8_ = pauVar1;
              local_4f8 = (undefined *)CONCAT44(uVar20,uVar18);
              local_4f0 = CONCAT44(local_4f0._4_4_,auVar19._0_4_);
              do {
                fVar16 = *(float *)((longlong)&local_4f8 + (longlong)pauVar12 * 4);
                local_4b8 = *(longlong *)*pauVar1;
                local_4b0 = *(longlong *)(pauVar8[1] + 8) - local_4b8;
                lVar9 = FUN_180438560(&local_4b8,fVar16,0x200);
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)(lVar9 + 0x98);
                  if (DAT_180c7df28 == (undefined8 *)0x0) {
                    local_4a8 = "tier0.dll:g_pMemAlloc";
                    local_4a0 = 0x15;
                    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_4a8);
                  }
                  puVar10 = (undefined8 *)
                            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                      ((longlong *)*DAT_180c7df28,0x10);
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    if (pauVar8 != (undefined1 (*) [16])0x0) {
                      LOCK();
                      *(int *)(*pauVar8 + 8) = *(int *)(*pauVar8 + 8) + 1;
                      UNLOCK();
                    }
                    *puVar10 = pauVar1;
                    puVar10[1] = pauVar8;
                  }
                  *(undefined8 **)(lVar13 + 0x48) = puVar10;
                  *(code **)(lVar13 + 0x50) = FUN_1803bfa60;
                  (&DAT_180b90868)[(longlong)(*pauVar12 + lVar14)] = lVar9;
                }
                local_4b8 = *(longlong *)*pauVar1;
                local_4b0 = *(longlong *)(pauVar8[1] + 8) - local_4b8;
                lVar9 = FUN_180438560(&local_4b8,fVar16 + fVar16,0x200);
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)(lVar9 + 0x98);
                  if (DAT_180c7df28 == (undefined8 *)0x0) {
                    local_4a8 = "tier0.dll:g_pMemAlloc";
                    local_4a0 = 0x15;
                    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_4a8);
                  }
                  puVar10 = (undefined8 *)
                            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                      ((longlong *)*DAT_180c7df28,0x10);
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    if (pauVar8 != (undefined1 (*) [16])0x0) {
                      LOCK();
                      *(int *)(*pauVar8 + 8) = *(int *)(*pauVar8 + 8) + 1;
                      UNLOCK();
                    }
                    *puVar10 = pauVar1;
                    puVar10[1] = pauVar8;
                  }
                  *(undefined8 **)(lVar13 + 0x48) = puVar10;
                  *(code **)(lVar13 + 0x50) = FUN_1803bfa60;
                  (&DAT_180c628c8)[(longlong)(*pauVar12 + lVar14)] = lVar9;
                }
                plVar15 = local_4d0;
                pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
              } while ((longlong)pauVar12 < 3);
              if (pauVar8 != (undefined1 (*) [16])0x0) {
                LOCK();
                piVar2 = (int *)(*pauVar8 + 8);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (*(code *)**(undefined8 **)*pauVar8)(pauVar8);
                  LOCK();
                  piVar2 = (int *)(*pauVar8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*(longlong *)*pauVar8 + 8))(pauVar8);
                  }
                }
              }
              *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
                   std::basic_ifstream<char,std::char_traits<char>_>::vftable;
              *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
                   *(int *)(local_3d8[0] + 4) + -0xb0;
              FUN_1800f63e0(&lStack_3c8);
              *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
                   std::basic_istream<char,std::char_traits<char>_>::vftable;
              *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
                   *(int *)(local_3d8[0] + 4) + -0x18;
              local_328[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)local_328);
              ppuVar11 = local_4d8;
              lVar9 = local_4c8;
            }
            else {
              if (plVar15[-1] != *plVar15) {
                *plVar15 = plVar15[-1];
              }
              *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
                   std::basic_ifstream<char,std::char_traits<char>_>::vftable;
              *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
                   *(int *)(local_3d8[0] + 4) + -0xb0;
              FUN_1800f63e0(&lStack_3c8);
              *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
                   std::basic_istream<char,std::char_traits<char>_>::vftable;
              *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
                   *(int *)(local_3d8[0] + 4) + -0x18;
              local_328[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)local_328);
            }
          }
          else {
            *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
                 std::basic_ifstream<char,std::char_traits<char>_>::vftable;
            *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
                 *(int *)(local_3d8[0] + 4) + -0xb0;
            FUN_1800f63e0(&lStack_3c8);
            *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
                 std::basic_istream<char,std::char_traits<char>_>::vftable;
            *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
                 *(int *)(local_3d8[0] + 4) + -0x18;
            local_328[0] = std::ios_base::vftable;
            std::ios_base::_Ios_base_dtor((ios_base *)local_328);
          }
        }
        else {
          *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
               std::basic_ifstream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
               *(int *)(local_3d8[0] + 4) + -0xb0;
          FUN_1800f63e0(&lStack_3c8);
          *(undefined ***)((longlong)local_3d8 + (longlong)*(int *)(local_3d8[0] + 4)) =
               std::basic_istream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_3f8 + (longlong)*(int *)(local_3d8[0] + 4) + 0x1c) =
               *(int *)(local_3d8[0] + 4) + -0x18;
          local_328[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_328);
        }
        local_4d8 = ppuVar11 + 1;
        local_4d0 = plVar15 + 3;
        lVar14 = lVar14 + 3;
        local_4c8 = lVar9 + -1;
      } while (local_4c8 != 0);
      local_4c8 = 0;
    }
  }
  if (DAT_180b908c8 == 0) {
    local_4e8 = &DAT_18095f530;
    local_4e0 = 0x54058;
    DAT_180b908c8 = FUN_180438560(&local_4e8);
  }
  if (DAT_180b908d0 == 0) {
    local_4e8 = &DAT_18095f530;
    local_4e0 = 0x54058;
    DAT_180b908d0 = FUN_180438560(&local_4e8);
  }
  if (DAT_180b908d8 == 0) {
    local_4e8 = &DAT_18095f530;
    local_4e0 = 0x54058;
    DAT_180b908d8 = FUN_180438560(&local_4e8);
  }
  if (DAT_180b908e0 == 0) {
    local_4e8 = &DAT_18095f530;
    local_4e0 = 0x54058;
    DAT_180b908e0 = FUN_180438560(&local_4e8);
  }
  if (DAT_180b908e8 == 0) {
    local_4e8 = &DAT_18090ba90;
    local_4e0 = 0x53a98;
    DAT_180b908e8 = FUN_180438560(&local_4e8);
  }
}



