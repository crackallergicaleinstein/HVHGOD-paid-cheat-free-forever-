// FUN_1802c75c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c75c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c75c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined4 *param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 (**ppauVar14) [16];
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  uint local_1b8;
  undefined1 local_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [32];
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 (*local_b8) [16];
  undefined8 ****local_b0 [2];
  ulonglong local_a0;
  ulonglong local_98;
  undefined1 (*local_90) [16];
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_1b8 = 0;
  piVar1 = *(int **)*param_2;
  if (((*(longlong *)(*param_2 + 8) == 3) && ((short)*piVar1 == 0x6948)) &&
     (*(char *)((longlong)piVar1 + 2) == 't')) {
    uVar11 = 3;
  }
  else {
    if (*(longlong *)(*param_2 + 8) == 4) {
      if (*piVar1 == 0x74727548) {
        uVar11 = 4;
        goto LAB_1802c7666;
      }
      if (*(longlong *)(*param_2 + 8) != 4) goto LAB_1802c7652;
      bVar20 = *piVar1 == 0x7373694d;
    }
    else {
LAB_1802c7652:
      bVar20 = false;
    }
    uVar11 = -(uint)bVar20 & 7;
  }
LAB_1802c7666:
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_b8 = param_1;
  FUN_18015ba30(local_158,"[HVHGOD]",8);
  local_138 = *param_4;
  local_134 = 0;
  local_130 = (undefined1  [16])0x0;
  local_120 = 0;
  local_118 = 0;
  FUN_18015ba30(local_130,&DAT_1807c6c50,3);
  local_110 = param_4[1];
  local_10c = 1;
  local_188 = *param_2;
  FUN_1802c7200(local_108,local_188,0x20);
  switch(uVar11) {
  case 0:
    local_e8 = *param_4;
    break;
  case 1:
    local_e8 = param_4[1];
    break;
  case 2:
    local_e8 = param_4[2];
    break;
  case 3:
    local_e8 = param_4[3];
    break;
  case 4:
    local_e8 = param_4[4];
    break;
  case 5:
    local_e8 = param_4[5];
    break;
  case 6:
    local_e8 = param_4[6];
    break;
  case 7:
    local_e8 = param_4[7];
  }
  local_e0 = (undefined1  [16])0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_e4 = uVar11;
  FUN_18015ba30(local_e0,&DAT_1807c6c50,3);
  local_c0 = param_4[1];
  local_bc = 1;
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  local_188._0_8_ = FUN_18015bca0(0xa0);
  *(undefined8 *)*param_1 = local_188._0_8_;
  *(undefined8 *)(*param_1 + 8) = local_188._0_8_;
  *(longlong *)param_1[1] = local_188._0_8_ + 0xa0;
  ppauVar14 = (undefined1 (**) [16])local_158;
  auStack_178._0_8_ = param_1;
  local_90 = param_1;
  local_188._8_8_ = local_188._0_8_;
  do {
    uVar21 = local_188._8_8_;
    FUN_18015b360(local_188._8_8_,ppauVar14);
    *(undefined4 *)(uVar21 + 0x20) = *(undefined4 *)(ppauVar14 + 4);
    *(undefined4 *)(uVar21 + 0x24) = *(undefined4 *)((longlong)ppauVar14 + 0x24);
    local_188._8_8_ = uVar21 + 0x28;
    ppauVar14 = ppauVar14 + 5;
  } while (ppauVar14 != &local_b8);
  *(undefined8 *)(*param_1 + 8) = local_188._8_8_;
  uVar11 = 1;
  local_1b8 = 1;
  _eh_vector_destructor_iterator_(local_158,0x28,4,thunk_FUN_18015c010);
  local_188 = *param_3;
  FUN_1802c7200(local_b0,local_188,param_5);
  piVar1 = *(int **)*param_2;
  uVar21 = 0;
  uVar22 = 0xf;
  if (*(longlong *)(*param_2 + 8) == 3) {
    if (((short)*piVar1 != 0x7542) || (*(char *)((longlong)piVar1 + 2) != 'y')) {
      if ((*(longlong *)(*param_2 + 8) != 3) ||
         (((short)*piVar1 != 0x6948 || (*(char *)((longlong)piVar1 + 2) != 't'))))
      goto LAB_1802c78ab;
      goto LAB_1802c78c2;
    }
    ppppuVar10 = local_b0;
    if (0xf < local_98) {
      ppppuVar10 = local_b0[0];
    }
    local_1c8 = 8;
    uVar6 = FUN_180114410(ppppuVar10,local_a0,0xffffffffffffffff," bought ");
LAB_1802c7984:
    if (uVar6 != 0xffffffffffffffff) goto LAB_1802c7c68;
LAB_1802c798d:
    uVar6 = 0;
  }
  else {
LAB_1802c78ab:
    if ((*(longlong *)(*param_2 + 8) != 4) || (*piVar1 != 0x74727548)) {
      uVar6 = 0;
      goto LAB_1802c7994;
    }
LAB_1802c78c2:
    ppppuVar10 = local_b0;
    if (0xf < local_98) {
      ppppuVar10 = local_b0[0];
    }
    local_1c8 = 8;
    uVar6 = FUN_180114410(ppppuVar10,local_a0,0xffffffffffffffff," in the ");
    if (uVar6 == 0xffffffffffffffff) {
      ppppuVar10 = local_b0;
      if (0xf < local_98) {
        ppppuVar10 = local_b0[0];
      }
      local_1c8 = 6;
      uVar6 = FUN_180114410(ppppuVar10,local_a0,0xffffffffffffffff," with ");
      if (uVar6 == 0xffffffffffffffff) {
        ppppuVar10 = local_b0;
        if (0xf < local_98) {
          ppppuVar10 = local_b0[0];
        }
        if ((local_a0 < 3) ||
           (lVar18 = local_a0 + (longlong)ppppuVar10,
           lVar7 = thunk_FUN_1805f9970(ppppuVar10,lVar18,&DAT_1806bfbdc,3), lVar7 == lVar18)) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = lVar7 - (longlong)ppppuVar10;
        }
        goto LAB_1802c7984;
      }
    }
LAB_1802c7c68:
    if (uVar6 == 0) goto LAB_1802c798d;
    local_188 = (undefined1  [16])0x0;
    auStack_178 = (undefined1  [16])0x0;
    uVar12 = uVar6;
    if (local_a0 < uVar6) {
      uVar12 = local_a0;
    }
    ppppuVar10 = local_b0;
    if (0xf < local_98) {
      ppppuVar10 = local_b0[0];
    }
    FUN_18015ba30(local_188,ppppuVar10,uVar12);
    local_1b8 = 0x11;
    local_168 = param_4[6];
    local_164 = 6;
    puVar2 = *(undefined8 **)(*param_1 + 8);
    if (puVar2 == *(undefined8 **)param_1[1]) {
      FUN_1802eb4a0(param_1,puVar2,local_188);
    }
    else {
      *puVar2 = local_188._0_8_;
      puVar2[1] = local_188._8_8_;
      puVar2[2] = auStack_178._0_8_;
      puVar2[3] = auStack_178._8_8_;
      auStack_178._8_8_ = uVar22;
      auStack_178._0_8_ = uVar21;
      auVar24[0xf] = 0;
      auVar24._0_15_ = local_188._1_15_;
      local_188 = auVar24 << 8;
      *(undefined4 *)(puVar2 + 4) = local_168;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 6;
      *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x28;
    }
    FUN_18015c010(local_188);
  }
  uVar11 = local_1b8;
LAB_1802c7994:
  if (uVar6 < local_a0) {
    fVar23 = 0.0;
    auVar25 = ZEXT464(0x41f00000);
    uVar12 = uVar6;
    uVar16 = local_98;
    ppppuVar10 = local_b0[0];
    uVar17 = local_a0;
    do {
      ppppuVar8 = local_b0;
      if (0xf < uVar16) {
        ppppuVar8 = ppppuVar10;
      }
      if (*(char *)((longlong)ppppuVar8 + uVar12) < '0') {
LAB_1802c7e4d:
        uVar13 = uVar12 + 1;
      }
      else {
        ppppuVar8 = local_b0;
        if (0xf < uVar16) {
          ppppuVar8 = ppppuVar10;
        }
        uVar13 = uVar12;
        if ('9' < *(char *)((longlong)ppppuVar8 + uVar12)) goto LAB_1802c7e4d;
        do {
          ppppuVar8 = local_b0;
          if (0xf < uVar16) {
            ppppuVar8 = ppppuVar10;
          }
          if (*(char *)((longlong)ppppuVar8 + uVar13) < '0') {
LAB_1802c7a14:
            ppppuVar8 = local_b0;
            if (0xf < uVar16) {
              ppppuVar8 = ppppuVar10;
            }
            if (*(char *)((longlong)ppppuVar8 + uVar13) != '.') break;
          }
          else {
            ppppuVar8 = local_b0;
            if (0xf < uVar16) {
              ppppuVar8 = ppppuVar10;
            }
            if ('9' < *(char *)((longlong)ppppuVar8 + uVar13)) goto LAB_1802c7a14;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar17);
        ppppuVar8 = local_b0;
        if (0xf < uVar16) {
          ppppuVar8 = ppppuVar10;
        }
        if (uVar17 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_18015ac40();
        }
        uVar15 = 0xffffffffffffffff;
        if (uVar17 - uVar13 != 0xffffffffffffffff) {
          uVar15 = uVar17 - uVar13;
        }
        uVar11 = local_1b8;
        if ((ulonglong)((*(longlong *)(*param_1 + 8) - *(longlong *)*param_1) / 0x28) < 0xe) {
          if (uVar12 != 0) {
            ppppuVar9 = local_b0;
            if (0xf < uVar16) {
              ppppuVar9 = ppppuVar10;
            }
            if (*(char *)((uVar12 - 1) + (longlong)ppppuVar9) != ' ') {
              ppppuVar9 = local_b0;
              if (0xf < uVar16) {
                ppppuVar9 = ppppuVar10;
              }
              if (*(char *)((longlong)ppppuVar9 + (uVar12 - 1)) != '(') goto LAB_1802c7e60;
            }
          }
          if (((((((6 < uVar15) && (*(int *)((longlong)ppppuVar8 + uVar13) == 0x6d616420)) &&
                 (*(short *)((longlong)ppppuVar8 + uVar13 + 4) == 0x6761)) &&
                (*(char *)((longlong)ppppuVar8 + uVar13 + 6) == 'e')) ||
               ((3 < uVar15 && (*(int *)((longlong)ppppuVar8 + uVar13) == 0x676d6420)))) ||
              ((2 < uVar15 &&
               (((*(short *)((longlong)ppppuVar8 + uVar13) == 0x4820 &&
                 (*(char *)((longlong)ppppuVar8 + uVar13 + 2) == 'P')) ||
                ((*(short *)((longlong)ppppuVar8 + uVar13) == 0x6820 &&
                 (*(char *)((longlong)ppppuVar8 + uVar13 + 2) == 'p')))))))) ||
             ((uVar15 != 0 && (*(char *)((longlong)ppppuVar8 + uVar13) == '%')))) {
            uVar19 = 2;
            if ((2 < uVar15) &&
               (((*(short *)((longlong)ppppuVar8 + uVar13) == 0x4820 &&
                 (*(char *)((longlong)ppppuVar8 + uVar13 + 2) == 'P')) ||
                ((*(short *)((longlong)ppppuVar8 + uVar13) == 0x6820 &&
                 (*(char *)((longlong)ppppuVar8 + uVar13 + 2) == 'p')))))) {
              local_90 = (undefined1 (*) [16])CONCAT44(local_90._4_4_,fVar23);
              ppppuVar8 = local_b0;
              if (0xf < uVar16) {
                ppppuVar8 = ppppuVar10;
              }
              FUN_1802ee0a0(local_188,(longlong)ppppuVar8 + uVar12,(longlong)ppppuVar8 + uVar13,
                            &local_90);
              if (local_188._8_4_ == 0) {
                ppppuVar10 = local_b0;
                if (0xf < local_98) {
                  ppppuVar10 = local_b0[0];
                }
                if (((local_188._0_8_ == (longlong)ppppuVar10 + uVar13) &&
                    (fVar23 <= local_90._0_4_)) && (uVar19 = 2, local_90._0_4_ < auVar25._0_4_)) {
                  uVar19 = 5;
                }
              }
              uVar16 = local_98;
              ppppuVar10 = local_b0[0];
              uVar17 = local_a0;
            }
            if (uVar6 < uVar12) {
              local_1b0 = (undefined1  [16])0x0;
              auStack_1a0 = (undefined1  [16])0x0;
              if (uVar17 < uVar6) goto LAB_1802c7f64;
              uVar15 = uVar12 - uVar6;
              if (uVar17 - uVar6 < uVar12 - uVar6) {
                uVar15 = uVar17 - uVar6;
              }
              ppppuVar8 = local_b0;
              if (0xf < uVar16) {
                ppppuVar8 = ppppuVar10;
              }
              FUN_18015ba30(local_1b0,(longlong)ppppuVar8 + uVar6,uVar15);
              auVar24 = auVar25._0_16_;
              uVar11 = local_1b8 | 8;
              local_190 = param_4[1];
              local_18c = 1;
              puVar2 = *(undefined8 **)(*param_1 + 8);
              local_1b8 = uVar11;
              if (puVar2 == *(undefined8 **)param_1[1]) {
                FUN_1802eb4a0(param_1,puVar2,local_1b0);
                auVar24 = auVar25._0_16_;
              }
              else {
                *puVar2 = local_1b0._0_8_;
                puVar2[1] = local_1b0._8_8_;
                puVar2[2] = auStack_1a0._0_8_;
                puVar2[3] = auStack_1a0._8_8_;
                auStack_1a0._8_8_ = uVar22;
                auStack_1a0._0_8_ = uVar21;
                auVar3[0xf] = 0;
                auVar3._0_15_ = local_1b0._1_15_;
                local_1b0 = auVar3 << 8;
                *(undefined4 *)(puVar2 + 4) = local_190;
                *(undefined4 *)((longlong)puVar2 + 0x24) = 1;
                *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x28;
              }
              auVar25 = ZEXT1664(auVar24);
              FUN_18015c010(local_1b0);
              uVar16 = local_98;
              ppppuVar10 = local_b0[0];
              uVar17 = local_a0;
            }
            else {
              uVar11 = local_1b8;
            }
            local_1b0 = (undefined1  [16])0x0;
            auStack_1a0 = (undefined1  [16])0x0;
            if (uVar17 < uVar12) goto LAB_1802c7f64;
            uVar6 = uVar13 - uVar12;
            if (uVar17 - uVar12 < uVar13 - uVar12) {
              uVar6 = uVar17 - uVar12;
            }
            ppppuVar8 = local_b0;
            if (0xf < uVar16) {
              ppppuVar8 = ppppuVar10;
            }
            FUN_18015ba30(local_1b0,(longlong)ppppuVar8 + uVar12,uVar6);
            auVar24 = auVar25._0_16_;
            uVar11 = uVar11 | 4;
            switch(uVar19) {
            case 0:
              local_190 = *param_4;
              break;
            case 1:
              local_190 = param_4[1];
              break;
            case 2:
              local_190 = param_4[2];
              break;
            case 3:
              local_190 = param_4[3];
              break;
            case 4:
              local_190 = param_4[4];
              break;
            case 5:
              local_190 = param_4[5];
              break;
            case 6:
              local_190 = param_4[6];
              break;
            case 7:
              local_190 = param_4[7];
            }
            puVar2 = *(undefined8 **)(*param_1 + 8);
            local_1b8 = uVar11;
            local_18c = uVar19;
            if (puVar2 == *(undefined8 **)param_1[1]) {
              FUN_1802eb4a0(param_1,puVar2,local_1b0);
              auVar24 = auVar25._0_16_;
            }
            else {
              *puVar2 = local_1b0._0_8_;
              puVar2[1] = local_1b0._8_8_;
              puVar2[2] = auStack_1a0._0_8_;
              puVar2[3] = auStack_1a0._8_8_;
              auStack_1a0._8_8_ = uVar22;
              auStack_1a0._0_8_ = uVar21;
              auVar4[0xf] = 0;
              auVar4._0_15_ = local_1b0._1_15_;
              local_1b0 = auVar4 << 8;
              *(undefined4 *)(puVar2 + 4) = local_190;
              *(undefined4 *)((longlong)puVar2 + 0x24) = uVar19;
              *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x28;
            }
            auVar25 = ZEXT1664(auVar24);
            FUN_18015c010(local_1b0);
            uVar16 = local_98;
            ppppuVar10 = local_b0[0];
            uVar17 = local_a0;
            uVar6 = uVar13;
          }
        }
      }
LAB_1802c7e60:
      uVar12 = uVar13;
    } while (uVar13 < uVar17);
    if (uVar6 < uVar17) {
      local_1b0 = (undefined1  [16])0x0;
      auStack_1a0 = (undefined1  [16])0x0;
      if (uVar17 < uVar6) {
LAB_1802c7f64:
        auStack_1a0 = (undefined1  [16])0x0;
        local_1b0 = (undefined1  [16])0x0;
                    /* WARNING: Subroutine does not return */
        FUN_180141470();
      }
      lVar18 = -1;
      if (uVar17 - uVar6 != -1) {
        lVar18 = uVar17 - uVar6;
      }
      ppppuVar8 = local_b0;
      if (0xf < uVar16) {
        ppppuVar8 = ppppuVar10;
      }
      FUN_18015ba30(local_1b0,(longlong)ppppuVar8 + uVar6,lVar18);
      local_1b8 = uVar11 | 2;
      local_190 = param_4[1];
      local_18c = 1;
      puVar2 = *(undefined8 **)(*param_1 + 8);
      if (puVar2 == *(undefined8 **)param_1[1]) {
        FUN_1802eb4a0(param_1,puVar2,local_1b0);
      }
      else {
        *puVar2 = local_1b0._0_8_;
        puVar2[1] = local_1b0._8_8_;
        puVar2[2] = auStack_1a0._0_8_;
        puVar2[3] = auStack_1a0._8_8_;
        auStack_1a0._8_8_ = uVar22;
        auStack_1a0._0_8_ = uVar21;
        auVar5[0xf] = 0;
        auVar5._0_15_ = local_1b0._1_15_;
        local_1b0 = auVar5 << 8;
        *(undefined4 *)(puVar2 + 4) = local_190;
        *(undefined4 *)((longlong)puVar2 + 0x24) = 1;
        *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + 0x28;
      }
      FUN_18015c010(local_1b0);
    }
  }
  FUN_18015c010(local_b0);
}



