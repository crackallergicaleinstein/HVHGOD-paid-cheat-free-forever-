// FUN_180507160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180507160 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180507160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined8 *puVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c68 [32];
  undefined8 local_1c48;
  longlong *local_1c40;
  int local_1c28;
  int local_1c24;
  undefined8 *local_1c20;
  undefined8 *local_1c18;
  undefined8 *local_1c10;
  longlong local_1c08;
  undefined8 local_1c00;
  undefined8 local_1bf8;
  undefined8 local_1bf0;
  undefined8 local_1be8;
  longlong local_1be0 [2];
  longlong local_1bd0 [3];
  undefined4 local_1bb8;
  undefined4 local_1bb4;
  undefined1 local_1bb0 [256];
  undefined1 local_1ab0 [384];
  longlong *local_1930;
  longlong *local_1928;
  undefined1 local_1920 [16];
  undefined4 local_1910;
  undefined4 local_190c;
  longlong *local_1908;
  longlong *local_1900;
  longlong *local_18f8;
  longlong *local_18f0;
  longlong *local_18e8;
  longlong *local_18e0;
  uint local_18d8;
  uint local_18d4;
  undefined4 local_18d0 [2];
  longlong local_18c8 [256];
  longlong local_10c8 [256];
  undefined1 local_8c8 [2048];
  undefined4 local_c8 [2];
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined4 local_9c;
  longlong *local_98 [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_1c68;
  if (*(float *)(param_1 + 0x28) <= 0.0) {
  }
  if (*(float *)(param_1 + 0x2c) <= 0.0) {
  }
  if (DAT_180bb8ae8 == 0) {
    local_1c20 = (undefined8 *)0x0;
  }
  else {
    local_1c20 = *(undefined8 **)(DAT_180bb8ae8 + 0xd0);
  }
  piVar2 = *(int **)(param_1 + 0x40);
  plVar3 = (longlong *)local_1c20[1];
  if (piVar2 != (int *)0x0) {
    plVar16 = *(longlong **)(piVar2 + 2);
    plVar1 = plVar16 + *piVar2;
    for (; plVar16 != plVar1; plVar16 = plVar16 + 1) {
      if (*(int *)(*plVar16 + 4) != 0) {
        FUN_180507e00();
      }
    }
  }
  puVar15 = local_1c20;
  if (*(int *)(param_1 + 0x48) == 0) {
  }
  if ((longlong *)local_1c20[3] == (longlong *)0x0) {
LAB_18050724d:
    local_88 = *(int *)(param_1 + 0xc) + 5000;
    local_78 = 0;
    *(int *)(puVar15 + 0xe) = local_88;
    local_84 = 2;
    local_80 = 1;
    local_7c = 0x10000;
    local_88 = local_88 * 0x14;
    iVar10 = (**(code **)(*(longlong *)*puVar15 + 0x18))
                       ((longlong *)*puVar15,&local_88,0,puVar15 + 3);
    if (iVar10 < 0) {
    }
  }
  else if (*(int *)(local_1c20 + 0xe) < *(int *)(param_1 + 0xc)) {
    (**(code **)(*(longlong *)local_1c20[3] + 0x10))();
    puVar15[3] = 0;
    goto LAB_18050724d;
  }
  if ((longlong *)puVar15[4] != (longlong *)0x0) {
    if (*(int *)(param_1 + 8) <= *(int *)((longlong)puVar15 + 0x74)) goto LAB_180507332;
    (**(code **)(*(longlong *)puVar15[4] + 0x10))();
    puVar15[4] = 0;
  }
  local_88 = *(int *)(param_1 + 8) + 10000;
  local_78 = 0;
  *(int *)((longlong)puVar15 + 0x74) = local_88;
  local_88 = local_88 * 2;
  local_84 = 2;
  local_80 = 2;
  local_7c = 0x10000;
  iVar10 = (**(code **)(*(longlong *)*puVar15 + 0x18))((longlong *)*puVar15,&local_88,0,puVar15 + 4)
  ;
  if (iVar10 < 0) {
  }
LAB_180507332:
  local_1c40 = local_1be0;
  local_1c48 = (undefined1 *)((ulonglong)local_1c48._4_4_ << 0x20);
  iVar10 = (**(code **)(*plVar3 + 0x70))(plVar3,puVar15[3],0,4);
  if (iVar10 == 0) {
    local_1c40 = local_1bd0;
    local_1c48 = (undefined1 *)((ulonglong)local_1c48 & 0xffffffff00000000);
    iVar10 = (**(code **)(*plVar3 + 0x70))(plVar3,puVar15[4],0,4);
    if (iVar10 == 0) {
      plVar16 = *(longlong **)(param_1 + 0x18);
      plVar1 = plVar16 + *(int *)(param_1 + 0x10);
      lVar19 = local_1be0[0];
      lVar20 = local_1bd0[0];
      if (plVar16 != plVar1) {
        do {
          lVar4 = *plVar16;
          FUN_18063aed0(lVar19,*(undefined8 *)(lVar4 + 0x28),(longlong)*(int *)(lVar4 + 0x20) * 0x14
                       );
          FUN_18063aed0(lVar20,*(undefined8 *)(lVar4 + 0x18),(longlong)*(int *)(lVar4 + 0x10) * 2);
          plVar16 = plVar16 + 1;
          lVar19 = lVar19 + (longlong)*(int *)(lVar4 + 0x20) * 0x14;
          lVar20 = lVar20 + (longlong)*(int *)(lVar4 + 0x10) * 2;
        } while (plVar16 != plVar1);
        puVar15 = local_1c20;
      }
      (**(code **)(*plVar3 + 0x78))(plVar3,puVar15[3],0);
      (**(code **)(*plVar3 + 0x78))(plVar3,puVar15[4],0);
      FUN_18063ab10(local_1bb0,0,0x1b20);
      local_1bb4 = 0x10;
      local_1bb8 = 0x10;
      (**(code **)(*plVar3 + 0x300))(plVar3,&local_1bb8,local_1bb0);
      (**(code **)(*plVar3 + 0x2f8))(plVar3,&local_1bb4,local_1ab0);
      (**(code **)(*plVar3 + 0x2f0))(plVar3,&local_1930);
      (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_1928,local_1920,&local_1910);
      (**(code **)(*plVar3 + 0x2e0))(plVar3,&local_1908,&local_190c);
      (**(code **)(*plVar3 + 0x248))(plVar3,0,1,&local_1900);
      (**(code **)(*plVar3 + 600))(plVar3,0,1,&local_18f8);
      local_18d0[0] = 0x100;
      local_18d4 = 0x100;
      local_18d8 = 0x100;
      (**(code **)(*plVar3 + 0x250))(plVar3,&local_18f0,local_18c8,&local_18d8);
      (**(code **)(*plVar3 + 0x260))(plVar3,&local_18e8,local_10c8,&local_18d4);
      (**(code **)(*plVar3 + 0x240))(plVar3,0,1,&local_b0);
      (**(code **)(*plVar3 + 0x290))(plVar3,&local_18e0,local_8c8,local_18d0);
      (**(code **)(*plVar3 + 0x298))(plVar3,local_c8);
      (**(code **)(*plVar3 + 0x280))(plVar3,&local_c0,&local_9c,&local_a8);
      local_1c40 = (longlong *)local_a0;
      local_1c48 = local_a4;
      (**(code **)(*plVar3 + 0x278))(plVar3,0,1,&local_b8);
      (**(code **)(*plVar3 + 0x270))(plVar3,local_98);
      FUN_180506d30(param_1,plVar3);
      local_1c08 = DAT_180bb8ae8;
      local_1bf8 = *puVar15;
      local_1bf0 = puVar15[1];
      local_1be8 = puVar15[7];
      puVar15[0xf] = &local_1bf8;
      *(undefined8 **)(local_1c08 + 0xc40) = &local_1bf8;
      local_1c18 = *(undefined8 **)(param_1 + 0x18);
      fVar22 = *(float *)(param_1 + 0x20);
      fVar23 = *(float *)(param_1 + 0x24);
      fVar24 = *(float *)(param_1 + 0x30);
      fVar25 = *(float *)(param_1 + 0x34);
      puVar11 = local_1c18 + *(int *)(param_1 + 0x10);
      local_1c24 = 0;
      local_1c28 = 0;
      local_1c10 = puVar11;
      if (local_1c18 != puVar11) {
        do {
          iVar10 = local_1c28;
          uVar17 = 0;
          piVar2 = (int *)*local_1c18;
          if (0 < *piVar2) {
            uVar21 = uVar17;
            do {
              pfVar14 = (float *)(*(longlong *)(piVar2 + 2) + uVar21);
              pcVar5 = *(code **)(pfVar14 + 0xc);
              if (pcVar5 == (code *)0x0) {
                fVar6 = (*pfVar14 - fVar22) * fVar24;
                fVar7 = (pfVar14[2] - fVar22) * fVar24;
                fVar8 = (pfVar14[1] - fVar23) * fVar25;
                fVar9 = (pfVar14[3] - fVar23) * fVar25;
                if ((fVar6 < fVar7) && (fVar8 < fVar9)) {
                  local_88 = (int)fVar6;
                  local_84 = (int)fVar8;
                  local_80 = (int)fVar7;
                  local_7c = (int)fVar9;
                  (**(code **)(*plVar3 + 0x168))(plVar3,1,&local_88);
                  pfVar12 = pfVar14;
                  if (*(float **)(pfVar14 + 4) != (float *)0x0) {
                    pfVar12 = *(float **)(pfVar14 + 4);
                  }
                  local_1c00 = *(undefined8 *)(pfVar12 + 6);
                  (**(code **)(*plVar3 + 0x40))(plVar3,0,1,&local_1c00);
                  (**(code **)(*plVar3 + 0x60))
                            (plVar3,pfVar14[10],(int)pfVar14[9] + iVar10,
                             local_1c24 + (int)pfVar14[8]);
                }
              }
              else if (pcVar5 == FUN_180159a00) {
                FUN_180506d30(param_1,plVar3);
              }
              else {
                (*pcVar5)(piVar2,pfVar14);
              }
              uVar18 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar18;
              uVar21 = uVar21 + 0x48;
            } while ((int)uVar18 < *piVar2);
            puVar11 = local_1c10;
          }
          local_1c28 = local_1c28 + piVar2[4];
          local_1c18 = local_1c18 + 1;
          local_1c24 = local_1c24 + piVar2[8];
        } while (local_1c18 != puVar11);
        puVar15 = local_1c20;
      }
      uVar17 = 0;
      puVar15[0xf] = 0;
      *(undefined8 *)(local_1c08 + 0xc40) = 0;
      (**(code **)(*plVar3 + 0x168))(plVar3,local_1bb8,local_1bb0);
      (**(code **)(*plVar3 + 0x160))(plVar3,local_1bb4,local_1ab0);
      (**(code **)(*plVar3 + 0x158))(plVar3,local_1930);
      if (local_1930 != (longlong *)0x0) {
        (**(code **)(*local_1930 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x118))(plVar3,local_1928,local_1920,local_1910);
      if (local_1928 != (longlong *)0x0) {
        (**(code **)(*local_1928 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x120))(plVar3,local_1908,local_190c);
      if (local_1908 != (longlong *)0x0) {
        (**(code **)(*local_1908 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,0,1,&local_1900);
      if (local_1900 != (longlong *)0x0) {
        (**(code **)(*local_1900 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x50))(plVar3,0,1,&local_18f8);
      if (local_18f8 != (longlong *)0x0) {
        (**(code **)(*local_18f8 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x48))(plVar3,local_18f0,local_18c8,local_18d8);
      if (local_18f0 != (longlong *)0x0) {
        (**(code **)(*local_18f0 + 0x10))();
      }
      uVar21 = uVar17;
      uVar18 = local_18d8;
      if (local_18d8 != 0) {
        do {
          if ((longlong *)local_18c8[uVar21] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_18c8[uVar21] + 0x10))();
            uVar18 = local_18d8;
          }
          uVar13 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar13;
        } while (uVar13 < uVar18);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_18e8,local_10c8,local_18d4);
      if (local_18e8 != (longlong *)0x0) {
        (**(code **)(*local_18e8 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,0,1,&local_b0);
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      (**(code **)(*plVar3 + 0xb8))(plVar3,local_18e0,local_8c8,local_18d0[0]);
      if (local_18e0 != (longlong *)0x0) {
        (**(code **)(*local_18e0 + 0x10))();
      }
      uVar18 = local_18d4;
      if (local_18d4 != 0) {
        do {
          if ((longlong *)local_10c8[uVar17] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_10c8[uVar17] + 0x10))();
            uVar18 = local_18d4;
          }
          uVar13 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar13;
        } while (uVar13 < uVar18);
      }
      (**(code **)(*plVar3 + 0xc0))(plVar3,local_c8[0]);
      (**(code **)(*plVar3 + 0x98))(plVar3,local_c0,local_9c,local_a8);
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      local_1c40 = (longlong *)local_a0;
      local_1c48 = local_a4;
      (**(code **)(*plVar3 + 0x90))(plVar3,0,1,&local_b8);
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x88))(plVar3,local_98[0]);
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
    }
  }
}



