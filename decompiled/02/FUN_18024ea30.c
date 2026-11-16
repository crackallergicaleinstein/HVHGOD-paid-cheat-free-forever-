// FUN_18024ea30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024ea30 */

longlong *
FUN_18024ea30(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5
             )

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  ulonglong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  longlong lStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_f8 [16];
  uint local_e8;
  int iStack_e4;
  longlong local_e0;
  longlong local_c8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_84;
  char local_80;
  
  *param_1 = 0;
  plVar9 = param_1 + 0xe;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = -1;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_148 = param_2;
  local_140 = param_4;
  local_138 = param_3;
  FUN_18063ab10(plVar9,0,0x500);
  lVar7 = 0x20;
  plVar5 = plVar9;
  do {
    *(undefined8 *)((longlong)plVar5 + 4) = 0;
    *(undefined8 *)((longlong)plVar5 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x24) = 0;
    *(undefined4 *)plVar5 = 0;
    lVar7 = lVar7 + -1;
    plVar5 = plVar5 + 5;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0xae) = 0x1000100;
  if ((((param_3 != 0) && (param_4 != 0)) && (-1 < *(longlong *)(param_2 + 8))) &&
     (((*(longlong *)(param_2 + 0x40) != 0 &&
       (FUN_180250640(local_f8,*(longlong *)(param_2 + 0x40) + 0x10), local_80 != '\0')) &&
      (local_c8 != 0)))) {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if (local_c8 + 0x10 != 0) {
      local_168 = 0;
      uStack_164 = 0;
      lStack_160 = 0;
      uStack_158 = 0;
      cVar3 = FUN_1804514f0(&local_168,local_c8 + 0x10,0x14);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar2 = uStack_158;
    auVar12 = ZEXT1664(CONCAT88(lStack_160,CONCAT44(uStack_164,local_168)));
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (bVar1) {
      auVar11 = vshufps_avx(auVar12._0_16_,auVar12._0_16_,0xaa);
      sVar4 = thunk_FUN_180624430(auVar11._0_8_);
      if (sVar4 < 1) {
        auVar11 = vshufps_avx(auVar12._0_16_,auVar12._0_16_,0xff);
        sVar4 = thunk_FUN_180624430(auVar11._0_8_);
        if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(uVar2), sVar4 < 1)) {
          auVar21 = ZEXT464(local_b0);
          sVar4 = thunk_FUN_180624430(local_b0);
          if (sVar4 < 1) {
            auVar18 = ZEXT464(local_ac);
            sVar4 = thunk_FUN_180624430(local_ac);
            if (sVar4 < 1) {
              auVar15 = ZEXT464(local_a8);
              sVar4 = thunk_FUN_180624430(local_a8);
              uVar13 = auVar15._0_4_;
              uVar16 = auVar18._0_4_;
              uVar19 = auVar21._0_4_;
              auVar11 = auVar12._0_16_;
              if (((sVar4 < 1) && (local_e8 < 0x21)) && ((int)local_e8 <= iStack_e4)) {
                if (local_e8 != 0) {
                  lVar7 = FUN_18017ea70();
                  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                  if (local_e0 == 0) {
                    bVar1 = false;
                  }
                  else {
                    local_170 = local_170 & 0xffffffff00000000;
                    cVar3 = FUN_1804514f0(&local_170,local_e0,4);
                    if (cVar3 == '\0') {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                  }
                  iVar8 = (int)local_170;
                  lVar7 = FUN_18017ea70();
                  uVar13 = auVar15._0_4_;
                  uVar16 = auVar18._0_4_;
                  uVar19 = auVar21._0_4_;
                  auVar11 = auVar12._0_16_;
                  if (*(int *)(lVar7 + 4) != 0) {
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                  }
                  if (local_e0 == 0) {
                    return param_1;
                  }
                  if (!bVar1) {
                    return param_1;
                  }
                  if (iVar8 < (int)local_e8) {
                    return param_1;
                  }
                  iVar8 = 0;
                  if (0 < (int)local_e8) {
                    uVar10 = local_140;
                    do {
                      auVar12 = ZEXT1664(auVar12._0_16_);
                      auVar15 = ZEXT1664(auVar15._0_16_);
                      auVar18 = ZEXT1664(auVar18._0_16_);
                      auVar21 = ZEXT1664(auVar21._0_16_);
                      lVar7 = FUN_18017ea70();
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                      lVar7 = (longlong)iVar8 * 8 + 8 + local_e0;
                      bVar1 = false;
                      if (lVar7 != 0) {
                        local_170 = 0;
                        cVar3 = FUN_1804514f0(&local_170,lVar7,8);
                        if (cVar3 == '\0') {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                          uVar10 = local_170;
                        }
                      }
                      lVar7 = FUN_18017ea70();
                      if (*(int *)(lVar7 + 4) != 0) {
                        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                      }
                      if (!bVar1) {
                        return param_1;
                      }
                      if (uVar10 == 0) {
                        return param_1;
                      }
                      lVar7 = FUN_18017ea70();
                      auVar20 = auVar21._0_16_;
                      auVar17 = auVar18._0_16_;
                      auVar14 = auVar15._0_16_;
                      auVar11 = auVar12._0_16_;
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                      bVar1 = false;
                      if (uVar10 + 0x10 != 0) {
                        local_130 = 0;
                        uStack_12c = 0;
                        uStack_128 = 0;
                        uStack_124 = 0;
                        uStack_120 = 0;
                        uStack_11c = 0;
                        uStack_118 = 0;
                        uStack_114 = 0;
                        uStack_110 = 0;
                        uStack_10c = 0;
                        auVar12 = ZEXT1664(auVar11);
                        auVar21 = ZEXT1664(auVar14);
                        auVar18 = ZEXT1664(auVar17);
                        auVar15 = ZEXT1664(auVar20);
                        cVar3 = FUN_1804514f0(&local_130,uVar10 + 0x10,0x28);
                        auVar20 = auVar15._0_16_;
                        auVar17 = auVar18._0_16_;
                        auVar14 = auVar21._0_16_;
                        auVar11 = auVar12._0_16_;
                        if (cVar3 == '\0') {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                        }
                      }
                      lStack_160 = CONCAT44(uStack_124,uStack_128);
                      lStack_150 = CONCAT44(uStack_114,uStack_118);
                      lVar7 = CONCAT44(uStack_10c,uStack_110);
                      local_168 = local_130;
                      uStack_164 = uStack_12c;
                      uStack_158 = uStack_120;
                      uStack_154 = uStack_11c;
                      auVar12 = ZEXT1664(auVar11);
                      auVar15 = ZEXT1664(auVar14);
                      auVar18 = ZEXT1664(auVar17);
                      auVar21 = ZEXT1664(auVar20);
                      lVar6 = FUN_18017ea70();
                      uVar13 = auVar15._0_4_;
                      uVar16 = auVar18._0_4_;
                      uVar19 = auVar21._0_4_;
                      auVar11 = auVar12._0_16_;
                      if (*(int *)(lVar6 + 4) != 0) {
                        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
                      }
                      if (!bVar1) {
                        return param_1;
                      }
                      *plVar9 = CONCAT44(uStack_164,local_168);
                      plVar9[1] = lStack_160;
                      plVar9[2] = CONCAT44(uStack_154,uStack_158);
                      plVar9[3] = lStack_150;
                      plVar9[4] = lVar7;
                      plVar9 = plVar9 + 5;
                      iVar8 = iVar8 + 1;
                    } while (iVar8 < (int)local_e8);
                  }
                  param_2 = local_148;
                }
                *param_1 = local_138;
                param_1[1] = local_140;
                param_1[2] = *(longlong *)(param_2 + 8);
                param_1[3] = param_5;
                *(undefined4 *)(param_1 + 7) = local_b4;
                *(undefined1 (*) [16])((longlong)param_1 + 0x44) = auVar11;
                *(undefined4 *)(param_1 + 8) = local_84;
                *(undefined4 *)(param_1 + 0xb) = uVar19;
                *(undefined4 *)((longlong)param_1 + 0x5c) = uVar16;
                *(undefined4 *)(param_1 + 0xc) = uVar13;
                *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
                param_1[4] = *(longlong *)(param_2 + 0x60);
                param_1[5] = *(longlong *)(param_2 + 0x68);
                param_1[6] = *(longlong *)(param_2 + 0x70);
                *(uint *)((longlong)param_1 + 0x3c) = local_e8;
                *(undefined1 *)(param_1 + 0xae) = 1;
              }
            }
          }
        }
      }
    }
  }
  return param_1;
}



