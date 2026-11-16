// FUN_180397570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180397570 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180397570(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  char *pcVar18;
  longlong lVar19;
  int iVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar21 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auStack_ce8 [32];
  undefined1 *local_cc8;
  undefined8 *local_cc0;
  uint local_cb8;
  int local_cb0;
  ulonglong local_ca8;
  longlong local_ca0;
  ULONGLONG *local_c98;
  longlong *local_c90;
  longlong *local_c88;
  longlong *local_c80;
  uint *local_c78;
  undefined8 *local_c70;
  uint *local_c68;
  longlong local_c60;
  ULONGLONG local_c58 [2];
  undefined8 local_c48 [64];
  undefined1 local_a48 [2560];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_ce8;
  local_c60 = param_1;
  plVar9 = (longlong *)FUN_1803a70a0();
  plVar15 = (longlong *)&DAT_180ba31a0;
  if (plVar9 != (longlong *)0x0) {
    plVar15 = plVar9;
  }
  if ((char)plVar15[0x13] == '\0') {
  }
  if (local_c60 == 0) {
  }
  if (plVar15[2] != *(longlong *)(local_c60 + 8)) {
  }
  if (*(char *)((longlong)plVar15 + 0x9a) == '\0') {
    if ((DAT_180cad2e0 == 0) && (DAT_180cc9372 != '\0')) {
      lVar12 = FUN_1802345c0(&DAT_180c8fdb8);
      cVar6 = *(char *)(lVar12 + 0x1a8);
      goto LAB_18039763c;
    }
LAB_180397642:
    bVar4 = false;
  }
  else {
    if (DAT_180cad2e0 != 1) goto LAB_180397642;
    cVar6 = DAT_180c7e1f0;
LAB_18039763c:
    if (cVar6 == '\0') goto LAB_180397642;
    bVar4 = true;
  }
  UVar10 = GetTickCount64();
  local_c98 = local_c58;
  local_c88 = &local_c60;
  *(uint *)(local_c60 + 0x20) = *(uint *)(local_c60 + 0x20) | 1;
  puVar17 = (uint *)0x0;
  if (*(longlong *)(local_c60 + 0x40) != 0) {
    puVar17 = (uint *)(*(longlong *)(local_c60 + 0x40) + 0x10);
  }
  local_ca0 = 0;
  if (puVar17 != (uint *)0x0) {
    *puVar17 = *puVar17 | 4;
    if (*(longlong *)(puVar17 + 0xc) != 0) {
      local_ca0 = *(longlong *)(puVar17 + 0xc) + 0x10;
    }
  }
  local_c90 = plVar15;
  local_c80 = plVar15;
  local_c68 = puVar17;
  local_c58[0] = UVar10;
  if (((bVar4) && (puVar17 != (uint *)0x0)) && (local_ca0 != 0)) {
    iVar8 = FUN_1803972f0(param_2);
    lVar19 = local_c60;
    lVar12 = local_ca0;
    lVar11 = (longlong)(int)puVar17[0x11] - (longlong)*(int *)((longlong)plVar15 + 0x84);
    if ((lVar11 == 0) || ((*(char *)((longlong)plVar15 + 0x9b) == '\0' && (lVar11 - 1U < 4)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((((((char)plVar15[0x13] == '\0') || (plVar15[2] != *(longlong *)(local_c60 + 8))) ||
         ((*plVar15 != param_2 ||
          (((((plVar15[1] != param_3 || ((int)plVar15[8] != iVar8)) ||
             (*(uint *)((longlong)plVar15 + 0x44) != puVar17[0x1d])) ||
            ((!bVar4 || (UVar10 < (ulonglong)plVar15[3])))) || (0xfa < UVar10 - plVar15[3])))))) ||
        (((ulonglong)(*(uint *)(local_c60 + 0x60) & 0x2821) != plVar15[9] ||
         ((ulonglong)(*(uint *)(local_c60 + 0x68) & 0x2821) != plVar15[10])))) ||
       (((ulonglong)(*(uint *)(local_c60 + 0x70) & 0x2821) != plVar15[0xb] ||
        (puVar17[0x16] != *(uint *)(plVar15 + 0xc))))) goto LAB_180397b7f;
    sVar7 = thunk_FUN_180624430(*(undefined4 *)(local_ca0 + 8));
    if ((((sVar7 < 1) && (sVar7 = thunk_FUN_180624430(*(undefined4 *)(lVar12 + 0xc)), sVar7 < 1)) &&
        (sVar7 = thunk_FUN_180624430(*(undefined4 *)(lVar12 + 0x10)), sVar7 < 1)) &&
       ((sVar7 = thunk_FUN_180624430(puVar17[0x12]), sVar7 < 1 &&
        (sVar7 = thunk_FUN_180624430(puVar17[0x13]), sVar7 < 1)))) {
      FUN_18063ab10(local_a48,0,0xa00);
      FUN_18039ee80(local_a48);
      cVar6 = FUN_18039f720(plVar15,lVar19);
      if (cVar6 == '\0') {
        pcVar18 = "native_history_storage";
      }
      else {
        uVar2 = puVar17[4];
        puVar1 = puVar17 + 2;
        if ((uVar2 < 0x41) && ((int)uVar2 <= (int)puVar17[5])) {
          lVar19 = *(longlong *)(puVar17 + 6);
          if (lVar19 == 0) {
            if ((uVar2 != 0) || (puVar17[5] != 0)) goto LAB_1803978d1;
          }
          else {
            lVar11 = FUN_18017ea70();
            local_ca8 = local_ca8 & 0xffffffff00000000;
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            cVar6 = FUN_1804514f0(&local_ca8,lVar19,4);
            iVar8 = (int)(float)local_ca8;
            lVar19 = FUN_18017ea70();
            if (*(int *)(lVar19 + 4) != 0) {
              *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
            }
            if (((cVar6 == '\0') || (iVar8 < (int)puVar17[4])) || ((int)puVar17[5] < iVar8))
            goto LAB_1803978d1;
          }
          FUN_18063ab10(local_c48,0,0x200);
          uVar2 = puVar17[4];
          local_c70 = local_c48;
          iVar8 = 0;
          local_c78 = puVar1;
          if (0 < (int)uVar2) {
            do {
              cVar6 = FUN_180397eb0(&local_c78,iVar8);
              if (cVar6 == '\0') {
                pcVar18 = "native_move_storage";
                goto LAB_180397863;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)uVar2);
          }
          bVar4 = false;
          iVar8 = 0;
          if (0 < (int)uVar2) {
            lVar19 = 0;
            do {
              pbVar3 = (byte *)local_c48[lVar19];
              if ((*(longlong *)(pbVar3 + 8) == plVar15[4]) && ((*pbVar3 & 0x78) == 0)) {
                iVar20 = 1;
              }
              else {
                iVar20 = 0;
              }
              iVar8 = iVar8 + iVar20;
              if ((*(float *)(pbVar3 + 0x14) == 0.0) && ((char)iVar20 == '\0')) {
                bVar5 = 1;
              }
              else {
                bVar5 = 0;
              }
              bVar4 = (bool)(bVar4 | bVar5);
              lVar19 = lVar19 + 1;
            } while (lVar19 < (int)uVar2);
          }
          local_ca8 = FUN_180244af0(*(undefined8 *)((longlong)plVar15 + 0x7c),
                                    *(undefined4 *)(lVar12 + 0xc),
                                    *(undefined4 *)((longlong)plVar15 + 0x74));
          auVar21 = ZEXT464((uint)((float)local_ca8 - *(float *)((longlong)plVar15 + 0x7c)));
          if (bVar4) {
LAB_180397a23:
            iVar20 = 0;
          }
          else {
            auVar21._0_8_ = FUN_180636420();
            auVar21._8_56_ = extraout_var;
            iVar20 = 1;
            if ((float)auVar21._0_8_ <= 1e-05) goto LAB_180397a23;
          }
          iVar8 = *(int *)((longlong)plVar15 + 0x94) - iVar8;
          iVar16 = 0;
          if (0 < iVar8) {
            iVar16 = iVar8;
          }
          iVar8 = iVar16 + iVar20 + uVar2;
          if (iVar8 < 0x41) {
            lVar12 = *(longlong *)(puVar17 + 6);
            iVar20 = 0;
            if (lVar12 != 0) {
              lVar19 = FUN_18017ea70();
              local_ca8 = local_ca8 & 0xffffffff00000000;
              *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
              cVar6 = FUN_1804514f0(&local_ca8,lVar12,4);
              iVar16 = (int)(float)local_ca8;
              lVar12 = FUN_18017ea70();
              auVar21._8_56_ = extraout_var_00;
              auVar21._0_8_ = extraout_XMM0_Qa;
              if (*(int *)(lVar12 + 4) != 0) {
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
              }
              iVar20 = 0;
              if (cVar6 != '\0') {
                iVar20 = iVar16;
              }
            }
            uVar14 = uVar2;
            iVar16 = iVar8;
            if (iVar20 < iVar8) {
              iVar16 = iVar20;
            }
            for (; (int)uVar14 < iVar16; uVar14 = uVar14 + 1) {
              cVar6 = FUN_180397eb0(&local_c78,uVar14);
              auVar21._8_56_ = extraout_var_01;
              auVar21._0_8_ = extraout_XMM0_Qa_00;
              if (cVar6 == '\0') {
                pcVar18 = "move_reuse_storage";
                goto LAB_180397863;
              }
            }
            uVar14 = puVar17[4];
            while ((int)uVar14 < iVar8) {
              lVar12 = FUN_1803dfb00(auVar21._0_8_,puVar1);
              auVar21._8_56_ = extraout_var_02;
              auVar21._0_8_ = extraout_XMM0_Qa_01;
              if (lVar12 == 0) {
                puVar17[4] = uVar2;
                pcVar18 = "move_allocation";
                goto LAB_180397863;
              }
              uVar14 = puVar17[4];
            }
            for (uVar14 = uVar2; (int)uVar14 < iVar8; uVar14 = uVar14 + 1) {
              cVar6 = FUN_180397eb0(&local_c78,uVar14);
              if (cVar6 == '\0') {
                puVar17[4] = uVar2;
                pcVar18 = "allocated_move_storage";
                goto LAB_180397863;
              }
            }
            local_cc0 = local_c48;
            local_cc8 = local_a48;
            local_cb8 = uVar2;
            local_cb0 = iVar8;
            FUN_1803a0010(plVar15,local_c60,local_c68,local_ca0);
            pcVar18 = "native_rebuild";
            uVar13 = 1;
            goto LAB_180397865;
          }
          pcVar18 = "move_capacity";
        }
        else {
LAB_1803978d1:
          pcVar18 = "native_move_bounds";
        }
      }
    }
    else {
      pcVar18 = "native_angles_or_movement";
    }
  }
  else {
LAB_180397b7f:
    pcVar18 = "identity_timing_or_new_input";
  }
LAB_180397863:
  uVar13 = 0;
LAB_180397865:
  FUN_180397ba0(&local_c98,uVar13,pcVar18);
}



