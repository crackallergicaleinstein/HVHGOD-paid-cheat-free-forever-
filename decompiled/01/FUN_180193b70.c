// FUN_180193b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180193b70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180193b70(longlong param_1,undefined8 *param_2,LPCWSTR param_3,int *param_4,
                  longlong param_5,undefined8 param_6,undefined8 *param_7)

{
  ulonglong _Size;
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  BOOL BVar15;
  longlong *plVar16;
  ULONGLONG UVar17;
  ulonglong uVar18;
  longlong *plVar19;
  LPCWSTR pWVar20;
  ulonglong uVar21;
  undefined8 *_Buf2;
  undefined1 *puVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined1 auStack_918 [32];
  undefined **local_8f8;
  char *local_8f0;
  longlong local_8e8;
  int *local_8d8;
  undefined8 local_8d0;
  int *local_8c8 [2];
  longlong *local_8b8;
  longlong local_8b0;
  undefined8 *local_8a8;
  longlong local_8a0;
  longlong local_898;
  undefined8 *local_890;
  undefined8 local_888;
  ULONGLONG local_880;
  undefined8 *local_878;
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined8 uStack_850;
  ulonglong uStack_848;
  undefined1 local_840 [16];
  undefined8 local_830;
  ulonglong uStack_828;
  undefined4 local_818;
  undefined4 uStack_814;
  longlong lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined1 local_7f8 [16];
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 local_7d8 [16];
  undefined8 uStack_7c8;
  ulonglong uStack_7c0;
  undefined1 local_7b8 [16];
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined1 local_798 [16];
  undefined8 local_788;
  undefined8 uStack_780;
  undefined1 local_778 [16];
  undefined8 local_768;
  undefined8 uStack_760;
  undefined1 local_758 [16];
  undefined8 local_748;
  ulonglong uStack_740;
  undefined1 local_738 [16];
  undefined8 local_728;
  ulonglong uStack_720;
  undefined1 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined1 local_6f8 [32];
  undefined1 local_6d8 [32];
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  char local_678 [1536];
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_918;
  local_898 = param_5;
  local_888 = param_6;
  local_8a8 = param_7;
  local_878 = param_7;
  local_8c8[0] = param_4;
  local_8a0 = param_1;
  local_890 = param_2;
  local_880 = GetTickCount64();
  local_870 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_8d8 = (int *)0x180827288;
    local_8d0 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_8d8);
  }
  lVar24 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)lVar24 = lVar24;
  *(longlong *)(lVar24 + 8) = lVar24;
  *(longlong *)(lVar24 + 0x10) = lVar24;
  *(undefined2 *)(lVar24 + 0x18) = 0x101;
  local_870._0_8_ = lVar24;
  local_8d8 = (int *)*param_7;
  if (local_8d8 != (int *)0x0) {
    LOCK();
    *local_8d8 = *local_8d8 + 1;
    UNLOCK();
  }
  local_8f8 = (undefined **)local_870;
  cVar13 = FUN_18018a140(param_3,param_2,param_6,&local_8d8);
  if (cVar13 != '\0') {
    uStack_814 = 0;
    uStack_800 = 0;
    local_7f8 = ZEXT816(0);
    uStack_7e8 = 0;
    uStack_7e0 = 0;
    local_818 = 0;
    lStack_810 = 0;
    uStack_808 = 0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_8d8 = (int *)0x180827288;
      local_8d0 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_8d8);
    }
    lStack_810 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38);
    *(longlong *)lStack_810 = lStack_810;
    *(longlong *)(lStack_810 + 8) = lStack_810;
    uStack_800 = 0;
    local_7f8 = (undefined1  [16])0x0;
    uStack_7e8 = 7;
    uStack_7e0 = 8;
    local_818 = 0x3f800000;
    FUN_1801406e0(&uStack_800,0x10,lStack_810);
    plVar16 = *(longlong **)local_870._0_8_;
    uVar27 = 0;
    uVar28 = 7;
    if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
      do {
        plVar23 = plVar16 + 4;
        _Size = plVar16[6];
        uVar1 = plVar16[7];
        plVar19 = plVar23;
        if (0xf < uVar1) {
          plVar19 = (longlong *)*plVar23;
        }
        uVar18 = 0xcbf29ce484222325;
        uVar21 = 0;
        if (_Size != 0) {
          do {
            uVar18 = (uVar18 ^ *(byte *)((longlong)plVar19 + uVar21)) * 0x100000001b3;
            uVar21 = uVar21 + 1;
          } while (uVar21 < _Size);
        }
        lVar24 = *(longlong *)
                  (*(longlong *)(param_4 + 6) + 8 + (uVar18 & *(ulonglong *)(param_4 + 0xc)) * 0x10)
        ;
        if (lVar24 != *(longlong *)(param_4 + 2)) {
          lVar2 = *(longlong *)
                   (*(longlong *)(param_4 + 6) + (uVar18 & *(ulonglong *)(param_4 + 0xc)) * 0x10);
          while( true ) {
            _Buf2 = (undefined8 *)(lVar24 + 0x10);
            if (0xf < *(ulonglong *)(lVar24 + 0x28)) {
              _Buf2 = (undefined8 *)*_Buf2;
            }
            plVar19 = plVar23;
            if (0xf < uVar1) {
              plVar19 = (longlong *)*plVar23;
            }
            if ((_Size == *(ulonglong *)(lVar24 + 0x20)) &&
               ((_Size == 0 || (iVar14 = memcmp(plVar19,_Buf2,_Size), iVar14 == 0)))) {
              param_4 = local_8c8[0];
              goto LAB_180193e11;
            }
            if (lVar24 == lVar2) break;
            lVar24 = *(longlong *)(lVar24 + 8);
          }
          param_4 = local_8c8[0];
        }
        lVar24 = 0;
LAB_180193e11:
        if (((lVar24 != 0) && (lVar24 != *(longlong *)(param_4 + 2))) &&
           (*(int *)(lVar24 + 0x30) != (int)plVar16[8])) {
          if (0xf < (ulonglong)plVar16[7]) {
            plVar23 = (longlong *)*plVar23;
          }
          FUN_18063ab10(local_678,0,0x600);
          local_8f8 = (undefined **)plVar23;
          FUN_18015ad60(local_678,0x600,0xffffffffffffffff,"resource=%s action=keep_existing");
          local_8f8 = &PTR_180700558;
          if (local_678[0] != '\0') {
            local_8f8 = (undefined **)&DAT_1806bcfc0;
          }
          local_8f0 = local_678;
          FUN_1800f6900(2);
          FUN_1801869d0(&local_818);
          FUN_1801b6160(local_870,local_870,*(undefined8 *)(local_870._0_8_ + 8));
          FUN_1804547d0(local_870._0_8_,0x48);
          FUN_18017cdd0(local_8a8);
        }
        lVar2 = *(longlong *)(local_898 + 0x28);
        param_7 = local_8a8;
        for (lVar24 = *(longlong *)(local_898 + 0x20); local_8a8 = param_7, lVar24 != lVar2;
            lVar24 = lVar24 + 0x20) {
          local_860._2_14_ = SUB1614((undefined1  [16])0x0,2);
          auVar4._14_2_ = 0;
          auVar4._0_14_ = local_860._2_14_;
          local_860 = auVar4 << 0x10;
          local_8b8 = plVar23;
          if (0xf < (ulonglong)plVar16[7]) {
            local_8b8 = (longlong *)*plVar23;
          }
          local_8b0 = plVar16[6];
          uStack_850 = uVar27;
          uStack_848 = uVar28;
          cVar13 = FUN_1801864b0(lVar24,&local_8b8,local_860,&local_818);
          if (cVar13 != '\0') {
            FUN_18015b360(local_6f8,plVar23);
            FUN_1800f5370(local_6d8,local_860);
            param_7 = local_8a8;
            local_6b8 = 0;
            local_6b0 = 0;
            local_8d8 = (int *)*local_8a8;
            if (local_8d8 != (int *)0x0) {
              LOCK();
              *local_8d8 = *local_8d8 + 1;
              UNLOCK();
            }
            cVar13 = FUN_180187c80(local_6f8,&local_8d8);
            if ((cVar13 == '\0') || (local_6b8._4_4_ != (int)plVar16[8])) {
              if (0xf < (ulonglong)plVar16[7]) {
                plVar23 = (longlong *)*plVar23;
              }
              FUN_18063ab10(local_678,0,0x600);
              local_8f8 = (undefined **)plVar23;
              FUN_18015ad60(local_678,0x600,0xffffffffffffffff,"resource=%s action=keep_existing");
              local_8f8 = &PTR_180700558;
              if (local_678[0] != '\0') {
                local_8f8 = (undefined **)&DAT_1806bcfc0;
              }
              local_8f0 = local_678;
              FUN_1800f6900(2);
              FUN_18015b930(local_6d8);
              FUN_18015c010(local_6f8);
              FUN_18015b930(local_860);
              FUN_1801869d0(&local_818);
              FUN_1801b6160(local_870,local_870,*(undefined8 *)(local_870._0_8_ + 8));
              FUN_1804547d0(local_870._0_8_,0x48);
              piVar3 = (int *)*param_7;
              if (piVar3 == (int *)0x0) {
              }
              LOCK();
              iVar14 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar14 != 1) {
              }
              if (DAT_180c7df30 == (undefined8 *)0x0) {
                local_8b8 = (longlong *)0x180827288;
                local_8b0 = 0x15;
                DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_8b8);
              }
              (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar3);
            }
            FUN_18015b930(local_6d8);
            FUN_18015c010(local_6f8);
            FUN_18015b930(local_860);
            break;
          }
          FUN_18015b930(local_860);
          param_7 = local_8a8;
        }
        plVar23 = (longlong *)plVar16[2];
        if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
          cVar13 = *(char *)(*plVar23 + 0x19);
          plVar16 = plVar23;
          plVar23 = (longlong *)*plVar23;
          while (cVar13 == '\0') {
            cVar13 = *(char *)(*plVar23 + 0x19);
            plVar16 = plVar23;
            plVar23 = (longlong *)*plVar23;
          }
        }
        else {
          cVar13 = *(char *)(plVar16[1] + 0x19);
          plVar19 = (longlong *)plVar16[1];
          plVar23 = plVar16;
          while ((plVar16 = plVar19, cVar13 == '\0' && (plVar23 == (longlong *)plVar16[2]))) {
            cVar13 = *(char *)(plVar16[1] + 0x19);
            plVar19 = (longlong *)plVar16[1];
            plVar23 = plVar16;
          }
        }
      } while (*(char *)((longlong)plVar16 + 0x19) == '\0');
      param_2 = local_890;
      param_6 = local_888;
      param_1 = local_8a0;
    }
    uVar25 = 0;
    uVar26 = 0xf;
    local_830 = 0;
    uStack_828 = 0xf;
    local_840._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_840._1_15_;
    local_840 = auVar5 << 8;
    local_8c8[0] = (int *)*param_7;
    if (local_8c8[0] != (int *)0x0) {
      LOCK();
      *local_8c8[0] = *local_8c8[0] + 1;
      UNLOCK();
    }
    local_8f8 = (undefined **)local_840;
    cVar13 = FUN_18018bc80(param_3,param_2,param_6,local_8c8);
    if (cVar13 == '\0') {
      puVar22 = local_840;
      if (0xf < uStack_828) {
        puVar22 = (undefined1 *)local_840._0_8_;
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_18063ab10(local_678,0,0x600);
      local_8f8 = (undefined **)param_2;
      local_8f0 = puVar22;
      FUN_18015ad60(local_678,0x600,0xffffffffffffffff,
                    "sha256=%s reason=%s destination=managed_cache action=retry");
      local_8f8 = &PTR_180700558;
      if (local_678[0] != '\0') {
        local_8f8 = (undefined **)&DAT_1806bcfc0;
      }
      local_8f0 = local_678;
      FUN_1800f6900(2);
    }
    else {
      local_6a8 = 0;
      uStack_6a0 = 0;
      uStack_698 = 0;
      uStack_694 = 0;
      uStack_690 = 0;
      uStack_68c = 0;
      local_688 = 0;
      pWVar20 = param_3;
      if (7 < *(ulonglong *)(param_3 + 0xc)) {
        pWVar20 = *(LPCWSTR *)param_3;
      }
      BVar15 = GetFileAttributesExW(pWVar20,GetFileExInfoStandard,&local_6a8);
      if (BVar15 != 0) {
        local_7d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar6[0xf] = 0;
        auVar6._0_15_ = local_7d8._1_15_;
        local_7d8 = auVar6 << 8;
        local_7b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar7[0xf] = 0;
        auVar7._0_15_ = local_7b8._1_15_;
        local_7b8 = auVar7 << 8;
        local_798._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar8[0xf] = 0;
        auVar8._0_15_ = local_798._1_15_;
        local_798 = auVar8 << 8;
        local_778._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar9[0xf] = 0;
        auVar9._0_15_ = local_778._1_15_;
        local_778 = auVar9 << 8;
        local_758._2_14_ = SUB1614((undefined1  [16])0x0,2);
        auVar10._14_2_ = 0;
        auVar10._0_14_ = local_758._2_14_;
        local_758 = auVar10 << 0x10;
        local_738._2_14_ = SUB1614((undefined1  [16])0x0,2);
        auVar11._14_2_ = 0;
        auVar11._0_14_ = local_738._2_14_;
        local_738 = auVar11 << 0x10;
        local_718 = 0;
        local_710 = 0;
        local_708 = 0;
        local_8e8 = param_2[2];
        uStack_7c8 = uVar25;
        uStack_7c0 = uVar26;
        local_7a8 = uVar25;
        uStack_7a0 = uVar26;
        local_788 = uVar25;
        uStack_780 = uVar26;
        local_768 = uVar25;
        uStack_760 = uVar26;
        local_748 = uVar27;
        uStack_740 = uVar28;
        local_728 = uVar27;
        uStack_720 = uVar28;
        if (0x7fffffffffffffffU - local_8e8 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        local_8f0 = (char *)param_2;
        if (0xf < (ulonglong)param_2[3]) {
          local_8f0 = (char *)*param_2;
        }
        local_8f8 = (undefined **)0x5;
        FUN_18015a9c0(local_860);
        FUN_18015c010(local_7d8);
        local_7d8 = local_860;
        uStack_7c8 = uStack_850;
        uStack_7c0 = uStack_848;
        auVar12[0xf] = 0;
        auVar12._0_15_ = local_860._1_15_;
        local_860 = auVar12 << 8;
        uStack_850 = uVar25;
        uStack_848 = uVar26;
        FUN_18015c010(local_860);
        FUN_180113930(local_7b8,"Synchronized custom model",0x19);
        plVar16 = param_2 + 4;
        if ((longlong *)local_798 != plVar16) {
          if (0xf < (ulonglong)param_2[7]) {
            plVar16 = (longlong *)*plVar16;
          }
          FUN_180113930(local_798,plVar16,param_2[6]);
        }
        if ((LPCWSTR)local_738 != param_3) {
          pWVar20 = param_3 + 8;
          if (7 < *(ulonglong *)(param_3 + 0xc)) {
            param_3 = *(LPCWSTR *)param_3;
          }
          FUN_1800f5190(local_738,param_3,*(undefined8 *)pWVar20);
        }
        puVar22 = local_738;
        if (7 < uStack_720) {
          puVar22 = (undefined1 *)local_738._0_8_;
        }
        FUN_1800f5190(local_758,puVar22,local_728);
        local_718 = 1;
        local_710 = CONCAT44(uStack_690,uStack_694);
        local_708 = param_2[8];
        plVar16 = *(longlong **)local_870._0_8_;
        cVar13 = *(char *)((longlong)plVar16 + 0x19);
        while (cVar13 == '\0') {
          FUN_1801a8140(param_4,&local_8b8,plVar16 + 4,plVar16 + 8);
          plVar23 = (longlong *)plVar16[2];
          if (*(char *)((longlong)plVar23 + 0x19) == '\0') {
            cVar13 = *(char *)(*plVar23 + 0x19);
            plVar16 = plVar23;
            plVar23 = (longlong *)*plVar23;
            while (cVar13 == '\0') {
              cVar13 = *(char *)(*plVar23 + 0x19);
              plVar16 = plVar23;
              plVar23 = (longlong *)*plVar23;
            }
          }
          else {
            cVar13 = *(char *)(plVar16[1] + 0x19);
            plVar19 = (longlong *)plVar16[1];
            plVar23 = plVar16;
            while ((plVar16 = plVar19, cVar13 == '\0' && (plVar23 == (longlong *)plVar16[2]))) {
              cVar13 = *(char *)(plVar16[1] + 0x19);
              plVar19 = (longlong *)plVar16[1];
              plVar23 = plVar16;
            }
          }
          cVar13 = *(char *)((longlong)plVar16 + 0x19);
        }
        local_8a0 = param_1;
        iVar14 = FUN_1805f68d0(param_1);
        if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
          *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        plVar16 = (longlong *)FUN_1801b02f0(param_1 + 0x490,&local_8b8,param_2);
        FUN_180195b10(*plVar16 + 0x30,local_7d8);
        FUN_1805f68fc(param_1);
        UVar17 = GetTickCount64();
        lVar24 = UVar17 - local_880;
        uVar27 = param_2[8];
        if (0xf < (ulonglong)param_2[3]) {
          param_2 = (undefined8 *)*param_2;
        }
        FUN_18063ab10(local_678,0,0x600);
        local_8f8 = (undefined **)param_2;
        local_8f0 = (char *)uVar27;
        local_8e8 = lVar24;
        FUN_18015ad60(local_678,0x600,0xffffffffffffffff,
                      "sha256=%s bytes=%llu resources=managed_cache verification_ms=%llu");
        local_8f8 = &PTR_180700558;
        if (local_678[0] != '\0') {
          local_8f8 = (undefined **)&DAT_1806bcfc0;
        }
        local_8f0 = local_678;
        FUN_1800f6900(1);
        FUN_18015b930(local_738);
        FUN_18015b930(local_758);
        FUN_18015c010(local_778);
        FUN_18015c010(local_798);
        FUN_18015c010(local_7b8);
        FUN_18015c010(local_7d8);
        FUN_18015c010(local_840);
        FUN_1801869d0(&local_818);
        FUN_1801b6160(local_870,local_870,*(undefined8 *)(local_870._0_8_ + 8));
        FUN_1804547d0(local_870._0_8_,0x48);
        piVar3 = (int *)*param_7;
        if (piVar3 == (int *)0x0) {
        }
        LOCK();
        iVar14 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar14 != 1) {
        }
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_8b8 = (longlong *)0x180827288;
          local_8b0 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_8b8);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar3);
      }
    }
    FUN_18015c010(local_840);
    FUN_1801869d0(&local_818);
  }
  FUN_1801b6160(local_870,local_870,*(undefined8 *)(local_870._0_8_ + 8));
  FUN_1804547d0(local_870._0_8_,0x48);
  FUN_18017cdd0(param_7);
}



