// FUN_18042f490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042f490 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042f490(longlong *param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 *local_c0;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68 [3];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  lVar6 = DAT_180bbab80;
  plVar5 = DAT_180bbab78;
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  if ((*param_1 != param_1[1]) && (param_1[6] != param_1[7])) {
    uVar15 = (int)((param_1[1] - *param_1) / 0x14) * 0x14;
    uVar10 = (int)param_1[4] - (int)param_1[3] & 0xfffffffc;
    lVar14 = 0;
    local_a8 = param_2;
    local_a4 = param_3;
    if (DAT_180bbab98 < uVar15) {
      DAT_180bbab98 = DAT_180bbab98 * 2;
      if (DAT_180bbab98 < uVar15) {
        DAT_180bbab98 = uVar15;
      }
      if (DAT_180bbab80 != 0) {
        DAT_180bbab80 = 0;
        (**(code **)(*(longlong *)lVar6 + 0x10))();
      }
      lVar6 = DAT_180bbab80;
      plVar4 = DAT_180bbab70;
      local_70 = 0;
      _local_80 = CONCAT44(2,DAT_180bbab98);
      uStack_78 = 0x1000000000001;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x18);
      if (DAT_180bbab80 != 0) {
        DAT_180bbab80 = 0;
        (**(code **)(*(longlong *)lVar6 + 0x10))();
      }
      (*pcVar1)(plVar4,&local_80,0,&DAT_180bbab80);
    }
    lVar6 = DAT_180bbab88;
    if (DAT_180bbab9c < uVar10) {
      DAT_180bbab9c = DAT_180bbab9c * 2;
      if (DAT_180bbab9c < uVar10) {
        DAT_180bbab9c = uVar10;
      }
      if (DAT_180bbab88 != 0) {
        DAT_180bbab88 = 0;
        (**(code **)(*(longlong *)lVar6 + 0x10))();
      }
      lVar6 = DAT_180bbab88;
      plVar4 = DAT_180bbab70;
      local_70 = 0;
      _local_80 = CONCAT44(2,DAT_180bbab9c);
      uStack_78 = 0x1000000000002;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x18);
      if (DAT_180bbab88 != 0) {
        DAT_180bbab88 = 0;
        (**(code **)(*(longlong *)lVar6 + 0x10))();
      }
      (*pcVar1)(plVar4,&local_80,0,&DAT_180bbab88);
    }
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    local_c0 = (undefined4 *)local_a0;
    local_c8 = (undefined4 *)((ulonglong)local_c8._4_4_ << 0x20);
    iVar7 = (**(code **)(*plVar5 + 0x70))(plVar5,DAT_180bbab80,0,4);
    if (-1 < iVar7) {
      local_c0 = (undefined4 *)local_90;
      local_c8 = (undefined4 *)((ulonglong)local_c8 & 0xffffffff00000000);
      iVar7 = (**(code **)(*plVar5 + 0x70))(plVar5,DAT_180bbab88,0,4);
      if (iVar7 < 0) {
        (**(code **)(*plVar5 + 0x78))(plVar5,DAT_180bbab80,0);
      }
      else {
        FUN_18063aed0(local_a0._0_8_,*param_1,uVar15);
        FUN_18063aed0(local_90._0_8_,param_1[3],uVar10);
        (**(code **)(*plVar5 + 0x78))(plVar5,DAT_180bbab80,0);
        (**(code **)(*plVar5 + 0x78))(plVar5,DAT_180bbab88,0);
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = local_a8;
        local_5c = local_a4;
        (**(code **)(*plVar5 + 0x88))(plVar5,DAT_180bbabb0);
        (**(code **)(*plVar5 + 0xc0))(plVar5,4);
        local_54 = 0x14;
        local_58 = 0;
        local_c0 = &local_58;
        local_c8 = &local_54;
        (**(code **)(*plVar5 + 0x90))(plVar5,0,1,&DAT_180bbab80);
        (**(code **)(*plVar5 + 0x98))(plVar5,DAT_180bbab88,0x2a,0);
        (**(code **)(*plVar5 + 0x58))(plVar5,DAT_180bbaba0,0,0);
        (**(code **)(*plVar5 + 0x38))(plVar5,0,1,&DAT_180bbab90);
        (**(code **)(*plVar5 + 0x48))(plVar5,DAT_180bbaba8,0,0);
        (**(code **)(*plVar5 + 0x50))(plVar5,0,1,&DAT_180bbabd0);
        (**(code **)(*plVar5 + 0x158))(plVar5,DAT_180bbabb8);
        (**(code **)(*plVar5 + 0x168))(plVar5,1,local_68);
        local_50 = 0;
        uStack_48 = 0;
        (**(code **)(*plVar5 + 0x118))(plVar5,DAT_180bbabc0,&local_50,0xffffffff);
        (**(code **)(*plVar5 + 0x120))(plVar5,DAT_180bbabc8,0);
        puVar2 = (undefined4 *)param_1[7];
        puVar11 = (undefined4 *)param_1[6];
        if (puVar11 != puVar2) {
          iVar7 = local_5c;
          uVar10 = local_68[2];
          uVar15 = local_68[1];
          uVar16 = local_68[0];
          do {
            if (puVar11[1] != 0) {
              if (*(char *)(puVar11 + 8) == '\0') {
                puVar13 = local_68;
              }
              else {
                uVar17 = (uint)*(undefined8 *)(puVar11 + 4);
                uVar9 = uVar16;
                if ((int)uVar16 < (int)uVar17) {
                  uVar9 = uVar17;
                }
                iStack_7c = (int)((ulonglong)*(undefined8 *)(puVar11 + 4) >> 0x20);
                iVar12 = uVar15;
                if ((int)uVar15 < iStack_7c) {
                  iVar12 = iStack_7c;
                }
                _local_80 = CONCAT44(iVar12,uVar9);
                uStack_78._0_4_ = (int)*(undefined8 *)(puVar11 + 6);
                iVar8 = uVar10;
                if ((int)uStack_78 < (int)uVar10) {
                  iVar8 = (int)uStack_78;
                }
                uStack_78._4_4_ = (int)((ulonglong)*(undefined8 *)(puVar11 + 6) >> 0x20);
                iVar3 = iVar7;
                if (uStack_78._4_4_ < iVar7) {
                  iVar3 = uStack_78._4_4_;
                }
                uStack_78 = CONCAT44(iVar3,iVar8);
                if ((iVar8 <= (int)uVar9) || (iVar3 <= iVar12)) goto LAB_18042f9e6;
                puVar13 = &local_80;
              }
              (**(code **)(*plVar5 + 0x168))(plVar5,1,puVar13);
              if (*(longlong *)(puVar11 + 2) != lVar14) {
                (**(code **)(*plVar5 + 0x40))(plVar5,0,1,puVar11 + 2);
                lVar14 = *(longlong *)(puVar11 + 2);
              }
              (**(code **)(*plVar5 + 0x60))(plVar5,puVar11[1],*puVar11,0);
              iVar7 = local_5c;
              uVar10 = local_68[2];
              uVar15 = local_68[1];
              uVar16 = local_68[0];
            }
LAB_18042f9e6:
            puVar11 = puVar11 + 10;
          } while (puVar11 != puVar2);
        }
      }
    }
  }
}



