// FUN_180435fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180435fc0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180435fc0(void)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auStack_1af8 [32];
  undefined4 local_1ad8;
  undefined1 *local_1ad0;
  undefined4 local_1ab8 [2];
  undefined8 local_1ab0;
  longlong local_1aa8;
  undefined1 local_1aa0 [16];
  undefined1 local_1a90;
  undefined4 local_1a8c;
  undefined1 local_1a88 [16];
  longlong local_1a78;
  longlong local_1a70;
  undefined1 local_1a68 [16];
  undefined1 local_1a58 [16];
  longlong *local_1a48;
  longlong *local_1a40;
  longlong *local_1a38;
  longlong *local_1a30;
  longlong *local_1a28;
  undefined4 local_1a20 [2];
  undefined8 local_1a18;
  undefined8 *puStack_1a10;
  undefined8 **ppuStack_1a08;
  undefined1 *puStack_1a00;
  longlong *local_19f8;
  undefined4 local_19f0;
  undefined1 local_19e8 [12];
  float fStack_19dc;
  undefined8 local_19d8;
  undefined8 local_19d0;
  int local_19c8;
  int local_19c4;
  undefined1 local_19c0 [16];
  undefined4 local_19b0;
  undefined8 *local_19a8;
  undefined8 *local_19a0;
  undefined8 local_1998;
  float local_1990;
  float local_198c;
  undefined4 local_1988;
  undefined4 local_1984;
  undefined1 local_1978 [16];
  undefined1 local_1968 [16];
  undefined1 local_1958 [16];
  undefined1 local_1948 [16];
  undefined1 local_1938 [16];
  undefined1 local_1928 [16];
  undefined1 local_1918 [16];
  undefined1 local_1908 [16];
  undefined1 local_18f8 [16];
  undefined4 local_18e8;
  undefined1 local_18d8 [16];
  undefined8 local_18c8;
  undefined1 local_18b8 [6208];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_1af8;
  if ((DAT_180bbabe8 != DAT_180bbabf0) && (lVar4 = DAT_180bbac18, DAT_180bbac00 != DAT_180bbac08)) {
    for (; lVar4 != DAT_180bbac20; lVar4 = lVar4 + 0x28) {
      if (*(int *)(lVar4 + 4) != 0) goto LAB_18043656e;
    }
  }
  if ((DAT_180bbafa0 != DAT_180bbafa8) && (lVar4 = DAT_180bbafd0, DAT_180bbafb8 != DAT_180bbafc0)) {
    for (; lVar4 != DAT_180bbafd8; lVar4 = lVar4 + 0x28) {
      if (*(int *)(lVar4 + 4) != 0) goto LAB_18043656e;
    }
  }
  bVar6 = false;
LAB_1804360b6:
  if ((DAT_180bbac80 != DAT_180bbac88) && (lVar4 = DAT_180bbacb0, DAT_180bbac98 != DAT_180bbaca0)) {
    for (; lVar4 != DAT_180bbacb8; lVar4 = lVar4 + 0x28) {
      if (*(int *)(lVar4 + 4) != 0) goto LAB_180436576;
    }
  }
  if ((DAT_180bbb038 != DAT_180bbb040) && (lVar4 = DAT_180bbb068, DAT_180bbb050 != DAT_180bbb058)) {
    for (; lVar4 != DAT_180bbb070; lVar4 = lVar4 + 0x28) {
      if (*(int *)(lVar4 + 4) != 0) goto LAB_180436576;
    }
  }
  bVar2 = false;
LAB_18043614b:
  if ((DAT_180bbad18 != DAT_180bbad20) && (lVar4 = DAT_180bbad48, DAT_180bbad30 != DAT_180bbad38)) {
    for (; lVar4 != DAT_180bbad50; lVar4 = lVar4 + 0x28) {
      if (*(int *)(lVar4 + 4) != 0) goto LAB_1804361da;
    }
  }
  if ((DAT_180bbb0d0 != DAT_180bbb0d8) && (lVar4 = DAT_180bbb100, DAT_180bbb0e8 != DAT_180bbb0f0)) {
    for (; lVar4 != DAT_180bbb108; lVar4 = lVar4 + 0x28) {
      if (*(int *)(lVar4 + 4) != 0) goto LAB_1804361da;
    }
  }
  if (bVar2 || bVar6) {
LAB_1804361da:
    FUN_18042bc30(local_18b8,DAT_180bbab78);
    _local_19e8 = (undefined1  [16])0x0;
    local_19d8 = 0;
    local_1a20[0] = 1;
    (**(code **)(*DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_1a20,local_19e8);
    local_19d0 = 0;
    auVar22 = vroundss_avx(ZEXT416(0),ZEXT416((uint)local_19e8._8_4_),2);
    local_19c8 = (int)auVar22._0_4_;
    auVar22 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fStack_19dc),2);
    local_19c4 = (int)auVar22._0_4_;
    iVar8 = 0;
    iVar21 = 0;
    iVar16 = 0;
    local_1a40 = (longlong *)0x0;
    (**(code **)(*DAT_180bbab78 + 0x2c8))(DAT_180bbab78,1,&local_1a40,0);
    if (local_1a40 != (longlong *)0x0) {
      local_1a48 = (longlong *)0x0;
      (**(code **)(*local_1a40 + 0x38))(local_1a40,&local_1a48);
      local_1a38 = (longlong *)0x0;
      if ((local_1a48 != (longlong *)0x0) &&
         (iVar7 = (**(code **)*local_1a48)(local_1a48,&DAT_180806ff8,&local_1a38), -1 < iVar7)) {
        local_1a18 = (undefined8 *)0x0;
        puStack_1a10 = (undefined8 *)0x0;
        ppuStack_1a08 = (undefined8 **)0x0;
        puStack_1a00 = (undefined1 *)0x0;
        local_19f8 = (longlong *)0x0;
        local_19f0 = 0;
        (**(code **)(*local_1a38 + 0x50))(local_1a38,&local_1a18);
        iVar8 = (int)local_1a18;
        iVar21 = local_1a18._4_4_;
        local_19c0 = (undefined1  [16])0x0;
        local_19b0 = 0;
        (**(code **)(*local_1a40 + 0x40))(local_1a40,local_19c0);
        iVar16 = local_19c0._0_4_;
        if (local_19c0._0_4_ == 0) {
          iVar16 = (int)ppuStack_1a08;
        }
      }
      plVar19 = local_1a38;
      if (local_1a38 != (longlong *)0x0) {
        local_1a38 = (longlong *)0x0;
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      plVar19 = local_1a48;
      if (local_1a48 != (longlong *)0x0) {
        local_1a48 = (longlong *)0x0;
        (**(code **)(*plVar19 + 0x10))();
      }
    }
    plVar19 = local_1a40;
    if (local_1a40 != (longlong *)0x0) {
      local_1a40 = (longlong *)0x0;
      (**(code **)(*plVar19 + 0x10))();
    }
    lVar4 = DAT_180bbae18;
    lVar18 = 3;
    if (((0 < iVar8) && (0 < iVar21)) &&
       ((iVar8 != DAT_180bbaf70 || ((iVar21 != DAT_180bbaf74 || (iVar16 != DAT_180bbaf78)))))) {
      local_1a88._0_8_ = DAT_180bbae18;
      if (DAT_180bbae18 != 0) {
        (**(code **)(*(longlong *)DAT_180bbae18 + 8))(DAT_180bbae18);
      }
      FUN_18042dd40(iVar8,iVar21,iVar16);
      if (lVar4 != 0) {
        plVar19 = &DAT_180bbac18;
        lVar20 = 3;
        do {
          lVar1 = plVar19[1];
          lVar5 = DAT_180bbae18;
          for (lVar13 = *plVar19; DAT_180bbae18 = lVar5, lVar13 != lVar1; lVar13 = lVar13 + 0x28) {
            if ((*(longlong *)(lVar13 + 8) == lVar4) &&
               (*(longlong *)(lVar13 + 8) = lVar5, lVar5 == 0)) {
              *(undefined4 *)(lVar13 + 4) = 0;
            }
            lVar5 = DAT_180bbae18;
          }
          plVar19 = plVar19 + 0x13;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (lVar4 != 0) {
        (**(code **)(*(longlong *)lVar4 + 0x10))(lVar4);
      }
    }
    local_1a88 = (undefined1  [16])0x0;
    local_1ad0 = local_1a88;
    local_1ad8 = 0;
    iVar8 = (**(code **)(*DAT_180bbab78 + 0x70))(DAT_180bbab78,DAT_180bbab90,0,4);
    if (-1 < iVar8) {
      *(undefined8 *)local_1a88._0_8_ = 0;
      ((float *)(local_1a88._0_8_ + 8))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 8))[1] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x10))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x10))[1] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x18))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x18))[1] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x20))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x20))[1] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x28))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x28))[1] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x30))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x30))[1] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x38))[0] = 0.0;
      ((float *)(local_1a88._0_8_ + 0x38))[1] = 0.0;
      *(float *)local_1a88._0_8_ = 2.0 / (float)local_19e8._8_4_;
      *(float *)(local_1a88._0_8_ + 0x14) = 2.0 / -fStack_19dc;
      *(float *)(local_1a88._0_8_ + 0x28) = 0.5;
      *(float *)(local_1a88._0_8_ + 0x30) = -1.0;
      *(float *)(local_1a88._0_8_ + 0x34) = 1.0;
      *(float *)(local_1a88._0_8_ + 0x38) = 0.5;
      *(float *)(local_1a88._0_8_ + 0x3c) = 1.0;
      (**(code **)(*DAT_180bbab78 + 0x78))(DAT_180bbab78,DAT_180bbab90,0);
    }
    plVar19 = DAT_180bbab78;
    local_19a8 = &DAT_180bbab70;
    local_19a0 = &local_19d0;
    local_1a78 = DAT_180bbae18;
    local_1a18 = &DAT_180bbab70;
    puStack_1a10 = &local_19d0;
    ppuStack_1a08 = &local_19a8;
    puStack_1a00 = local_19e8;
    local_19f8 = &local_1a78;
    plVar14 = &DAT_180bbafa8;
    do {
      if (plVar14[-1] != *plVar14) {
        if ((((DAT_180bbaf88 != 0) && (DAT_180bbaf90 != 0)) && (0 < DAT_180bbaf70)) &&
           (0 < DAT_180bbaf74)) {
          local_1a28 = (longlong *)0x0;
          local_1a30 = (longlong *)0x0;
          (**(code **)(*DAT_180bbab78 + 0x2c8))(DAT_180bbab78,1,&local_1a28,&local_1a30);
          local_18d8 = (undefined1  [16])0x0;
          local_18c8 = 0;
          local_1a38 = (longlong *)CONCAT44(local_1a38._4_4_,1);
          (**(code **)(*plVar19 + 0x2f8))(plVar19,&local_1a38,local_18d8);
          local_19c0 = (undefined1  [16])0x0;
          (**(code **)(*plVar19 + 400))(plVar19,DAT_180bbaf88,local_19c0);
          (**(code **)(*plVar19 + 0x108))(plVar19,1,&DAT_180bbaf88,0);
          local_1998 = 0;
          local_1988 = 0;
          local_1990 = (float)DAT_180bbaf70;
          local_198c = (float)DAT_180bbaf74;
          auVar26 = ZEXT464(0x3f800000);
          local_1984 = 0x3f800000;
          (**(code **)(*plVar19 + 0x160))(plVar19,1,&local_1998);
          plVar14 = &DAT_180bbafa0;
          do {
            FUN_18042f490(plVar14,DAT_180bbaf70,DAT_180bbaf74);
            plVar14 = plVar14 + 0x13;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          (**(code **)(*plVar19 + 0x108))(plVar19,1,&local_1a28,local_1a30);
          (**(code **)(*plVar19 + 0x160))(plVar19,1,local_18d8);
          FUN_18042ed50();
          local_1a70 = DAT_180bbae18;
          if (DAT_180bbae18 != 0) {
            local_1ab8[0] = 0xffffffff;
            local_1978 = (undefined1  [16])0x0;
            local_1968 = (undefined1  [16])0x0;
            local_1958 = (undefined1  [16])0x0;
            local_1948 = (undefined1  [16])0x0;
            local_1938 = (undefined1  [16])0x0;
            local_1928 = (undefined1  [16])0x0;
            local_1918 = (undefined1  [16])0x0;
            local_1908 = (undefined1  [16])0x0;
            local_18f8 = (undefined1  [16])0x0;
            uVar10 = 0;
            local_18e8 = 0;
            local_1ab0 = 0;
            local_1aa8 = DAT_180bbae18;
            local_1a90 = 0;
            local_1a8c = 0;
            local_1aa0 = (undefined1  [16])0x0;
            FUN_1802ea4d0(local_1948,0,&local_1ab0);
            uVar12 = local_1ab8[0];
            iVar21 = DAT_180bbaf74;
            iVar8 = DAT_180bbaf70;
            local_1ad0._0_4_ = local_1ab8[0];
            local_1ad8 = uVar10;
            uVar9 = FUN_1804354e0(local_1978,0,0,0);
            auVar24._0_4_ = (float)iVar8;
            auVar24._4_12_ = SUB1612(ZEXT816(0),4);
            auVar25 = ZEXT1664(auVar24);
            local_1ad0._0_4_ = uVar12;
            local_1ad8 = uVar10;
            uVar10 = FUN_1804354e0(local_1978,auVar24._0_8_,0,auVar26._0_8_);
            auVar22._0_4_ = (float)iVar21;
            auVar22._4_12_ = SUB1612(ZEXT816(0),4);
            auVar23 = ZEXT1664(auVar22);
            local_1ad0._0_4_ = uVar12;
            local_1ad8 = auVar26._0_4_;
            uVar11 = FUN_1804354e0(local_1978,auVar25._0_8_,auVar22._0_8_,auVar26._0_8_);
            local_1ad0 = (undefined1 *)CONCAT44(local_1ad0._4_4_,uVar12);
            local_1ad8 = auVar26._0_4_;
            uVar12 = FUN_1804354e0(local_1978,0,auVar23._0_8_,0);
            local_1ab8[0] = uVar9;
            local_1a40._0_4_ = uVar10;
            local_1a48._0_4_ = uVar11;
            FUN_1802aa650(local_1968 + 8,local_1ab8);
            FUN_1802aa650(local_1968 + 8,&local_1a40);
            FUN_1802aa650(local_1968 + 8,&local_1a48);
            *(int *)(local_1948._8_8_ + -0x24) = *(int *)(local_1948._8_8_ + -0x24) + 3;
            local_1a40 = (longlong *)CONCAT44(local_1a40._4_4_,uVar11);
            local_1a48 = (longlong *)CONCAT44(local_1a48._4_4_,uVar9);
            local_1ab8[0] = uVar12;
            FUN_1802aa650(local_1968 + 8,&local_1a48);
            FUN_1802aa650(local_1968 + 8,&local_1a40);
            FUN_1802aa650(local_1968 + 8,local_1ab8);
            *(int *)(local_1948._8_8_ + -0x24) = *(int *)(local_1948._8_8_ + -0x24) + 3;
            lVar4 = DAT_180bbab80;
            uVar17 = (int)((longlong)(local_1978._8_8_ - local_1978._0_8_) / 0x14) * 0x14;
            uVar15 = local_1958._0_4_ - local_1968._8_4_ & 0xfffffffc;
            if (DAT_180bbab98 < uVar17) {
              DAT_180bbab98 = DAT_180bbab98 * 2;
              if (DAT_180bbab98 < uVar17) {
                DAT_180bbab98 = uVar17;
              }
              if (DAT_180bbab80 != 0) {
                DAT_180bbab80 = 0;
                (**(code **)(*(longlong *)lVar4 + 0x10))();
              }
              FUN_18042c4d0(DAT_180bbab70,&DAT_180bbab80,DAT_180bbab98,1);
            }
            lVar4 = DAT_180bbab88;
            if (DAT_180bbab9c < uVar15) {
              DAT_180bbab9c = DAT_180bbab9c * 2;
              if (DAT_180bbab9c < uVar15) {
                DAT_180bbab9c = uVar15;
              }
              if (DAT_180bbab88 != 0) {
                DAT_180bbab88 = 0;
                (**(code **)(*(longlong *)lVar4 + 0x10))();
              }
              FUN_18042c4d0(DAT_180bbab70,&DAT_180bbab88,DAT_180bbab9c,2);
            }
            local_1a68 = (undefined1  [16])0x0;
            local_1a58 = (undefined1  [16])0x0;
            local_1ad0 = local_1a68;
            local_1ad8 = 0;
            iVar8 = (**(code **)(*plVar19 + 0x70))(plVar19,DAT_180bbab80,0,4);
            if (-1 < iVar8) {
              local_1ad0 = local_1a58;
              local_1ad8 = 0;
              iVar8 = (**(code **)(*plVar19 + 0x70))(plVar19,DAT_180bbab88,0,4);
              if (-1 < iVar8) {
                FUN_18063aed0(local_1a68._0_8_,local_1978._0_8_,uVar17);
                FUN_18063aed0(local_1a58._0_8_,local_1968._8_8_,uVar15);
                (**(code **)(*plVar19 + 0x78))(plVar19,DAT_180bbab88,0);
              }
              (**(code **)(*plVar19 + 0x78))(plVar19,DAT_180bbab80,0);
            }
            FUN_180436cb0(&local_19a8);
            local_78 = 0;
            uStack_70 = 0;
            (**(code **)(*plVar19 + 0x118))(plVar19,DAT_180bbaf98,&local_78,0xffffffff);
            (**(code **)(*plVar19 + 0x40))(plVar19,0,1,&local_1a70);
            (**(code **)(*plVar19 + 0x60))(plVar19,*(undefined4 *)(local_1948._0_8_ + 4),0,0);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_1a88._8_8_;
            local_1a88 = auVar3 << 0x40;
            (**(code **)(*plVar19 + 0x40))(plVar19,0,1,local_1a88);
            (**(code **)(*plVar19 + 0x118))(plVar19,DAT_180bbabc0,&local_78,0xffffffff);
            FUN_180439170(local_1908 + 8);
            FUN_180176390(local_1918);
            FUN_180439200(local_1938 + 8);
            FUN_1801b3590(local_1948);
            FUN_180159650(local_1968 + 8);
            FUN_1801ac260(local_1978);
          }
          plVar19 = local_1a30;
          if (local_1a30 != (longlong *)0x0) {
            local_1a30 = (longlong *)0x0;
            (**(code **)(*plVar19 + 0x10))();
          }
          plVar19 = local_1a28;
          if (local_1a28 != (longlong *)0x0) {
            local_1a28 = (longlong *)0x0;
            (**(code **)(*plVar19 + 0x10))();
          }
        }
        break;
      }
      plVar14 = plVar14 + 0x13;
    } while ((longlong)plVar14 < 0x180bbb170);
    FUN_180436e90(&local_1a18,&DAT_180bbabe8);
    FUN_180436e90(&local_1a18,&DAT_180bbac80);
    FUN_180436e90(&local_1a18,&DAT_180bbad18);
    FUN_18042be60(local_18b8);
  }
LAB_18043656e:
  bVar6 = true;
  goto LAB_1804360b6;
LAB_180436576:
  bVar2 = true;
  goto LAB_18043614b;
}



