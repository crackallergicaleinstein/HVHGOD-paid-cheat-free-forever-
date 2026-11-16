// FUN_180436e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180436e90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180436e90(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  char cVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 *local_c0;
  char local_a8;
  char local_a7;
  ulonglong local_a0;
  longlong local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  if ((*param_2 != param_2[1]) && (param_2[6] != param_2[7])) {
    uVar11 = (int)((param_2[1] - *param_2) / 0x14) * 0x14;
    uVar13 = (int)param_2[4] - (int)param_2[3] & 0xfffffffc;
    lVar16 = *param_1;
    if (*(uint *)(lVar16 + 0x28) < uVar11) {
      uVar8 = *(uint *)(lVar16 + 0x28) * 2;
      if (uVar8 < uVar11) {
        uVar8 = uVar11;
      }
      *(uint *)(lVar16 + 0x28) = uVar8;
      plVar2 = *(longlong **)(lVar16 + 0x10);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      FUN_18042c4d0(DAT_180bbab70,lVar16 + 0x10,*(undefined4 *)(lVar16 + 0x28),1);
    }
    lVar16 = *param_1;
    if (*(uint *)(lVar16 + 0x2c) < uVar13) {
      uVar8 = *(uint *)(lVar16 + 0x2c) * 2;
      if (uVar8 < uVar13) {
        uVar8 = uVar13;
      }
      *(uint *)(lVar16 + 0x2c) = uVar8;
      plVar2 = *(longlong **)(lVar16 + 0x18);
      if (plVar2 != (longlong *)0x0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      FUN_18042c4d0(DAT_180bbab70,lVar16 + 0x18,*(undefined4 *)(lVar16 + 0x2c),2);
    }
    local_90 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    plVar2 = *(longlong **)(*param_1 + 8);
    local_c0 = local_90;
    local_c8 = 0;
    iVar9 = (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(*param_1 + 0x10),0,4);
    if (-1 < iVar9) {
      plVar2 = *(longlong **)(*param_1 + 8);
      local_c0 = local_80;
      local_c8 = 0;
      iVar9 = (**(code **)(*plVar2 + 0x70))(plVar2,*(undefined8 *)(*param_1 + 0x18),0,4);
      if (iVar9 < 0) {
        plVar2 = *(longlong **)(*param_1 + 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(*param_1 + 0x10),0);
      }
      else {
        FUN_18063aed0(local_90._0_8_,*param_2,uVar11);
        FUN_18063aed0(local_80._0_8_,param_2[3],uVar13);
        plVar2 = *(longlong **)(*param_1 + 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(*param_1 + 0x10),0);
        plVar2 = *(longlong **)(*param_1 + 8);
        (**(code **)(*plVar2 + 0x78))(plVar2,*(undefined8 *)(*param_1 + 0x18),0);
        local_a8 = '\x01';
        bVar4 = true;
        lVar18 = 0;
        uVar17 = *(undefined8 *)param_1[1];
        uVar12 = ((undefined8 *)param_1[1])[1];
        local_a0 = 0;
        lVar16 = param_2[6];
        if ((param_2[7] - lVar16) / 0x28 != 0) {
          local_98 = 0;
          fVar20 = 0.0;
          local_68 = uVar17;
          uStack_60 = uVar12;
          do {
            puVar14 = (undefined4 *)(local_98 + lVar16);
            if (puVar14[1] != 0) {
              cVar19 = local_a8;
              if (fVar20 < (float)puVar14[9]) {
                FUN_180436cb0(param_1[2]);
                cVar19 = '\x01';
                local_a8 = '\x01';
                lVar18 = 0;
                bVar4 = true;
                cVar7 = FUN_18042cd30(param_2,puVar14,param_1[3]);
                if (cVar7 != '\0') goto LAB_1804372f4;
              }
              if ((*(longlong *)param_1[4] == 0) ||
                 (*(longlong *)(puVar14 + 2) != *(longlong *)param_1[4])) {
                local_a7 = '\0';
LAB_180437190:
                if (cVar19 != '\0') goto LAB_180437195;
              }
              else {
                local_a7 = '\x01';
                if ((!bVar4) || (*(longlong *)(*param_1 + 0x3c0) == 0)) goto LAB_180437190;
                FUN_18042e300();
                bVar4 = false;
LAB_180437195:
                FUN_180436cb0(param_1[2]);
                local_a8 = '\0';
                lVar18 = 0;
                uVar12 = ((undefined8 *)param_1[1])[1];
                uVar17 = *(undefined8 *)param_1[1];
              }
              piVar3 = (int *)param_1[1];
              uVar5 = *(undefined8 *)piVar3;
              uVar6 = *(undefined8 *)(piVar3 + 2);
              if (*(char *)(puVar14 + 8) == '\0') {
                uStack_60._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
                uStack_60._0_4_ = (int)uVar6;
                local_68._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
                local_68._0_4_ = (int)uVar5;
                iVar15 = (int)local_68;
                iVar10 = local_68._4_4_;
                iVar1 = uStack_60._4_4_;
                iVar9 = (int)uStack_60;
                local_68 = uVar5;
                uStack_60 = uVar6;
              }
              else {
                iVar15 = *piVar3;
                if (*piVar3 < (int)puVar14[4]) {
                  iVar15 = puVar14[4];
                }
                iVar10 = piVar3[1];
                if (piVar3[1] < (int)puVar14[5]) {
                  iVar10 = puVar14[5];
                }
                local_68 = CONCAT44(iVar10,iVar15);
                iVar9 = piVar3[2];
                if ((int)puVar14[6] < piVar3[2]) {
                  iVar9 = puVar14[6];
                }
                iVar1 = piVar3[3];
                if ((int)puVar14[7] < piVar3[3]) {
                  iVar1 = puVar14[7];
                }
                uStack_60 = CONCAT44(iVar1,iVar9);
                if ((iVar9 <= iVar15) || (iVar1 <= iVar10)) goto LAB_1804372f4;
              }
              if ((iVar15 != (int)uVar17) ||
                 (((iVar10 != (int)((ulonglong)uVar17 >> 0x20) || (iVar9 != (int)uVar12)) ||
                  (iVar1 != (int)((ulonglong)uVar12 >> 0x20))))) {
                (**(code **)(**(longlong **)(*param_1 + 8) + 0x168))
                          (*(longlong **)(*param_1 + 8),1,&local_68);
                uVar12 = uStack_60;
                uVar17 = local_68;
              }
              if (*(longlong *)(puVar14 + 2) != lVar18) {
                (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))
                          (*(longlong **)(*param_1 + 8),0,1,puVar14 + 2);
                lVar18 = *(longlong *)(puVar14 + 2);
              }
              (**(code **)(**(longlong **)(*param_1 + 8) + 0x60))
                        (*(longlong **)(*param_1 + 8),puVar14[1],*puVar14,0);
              if (local_a7 == '\0') {
                bVar4 = true;
              }
            }
LAB_1804372f4:
            local_a0 = local_a0 + 1;
            local_98 = local_98 + 0x28;
            lVar16 = param_2[6];
          } while (local_a0 < (ulonglong)((param_2[7] - lVar16) / 0x28));
        }
      }
    }
  }
}



