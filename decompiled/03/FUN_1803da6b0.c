// FUN_1803da6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803da6b0 */

undefined8 * FUN_1803da6b0(undefined8 *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  bool bVar11;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  if ((param_2 == 0) || (param_3 < 0)) goto LAB_1803daa35;
  lVar7 = param_2 + 0xd0;
  local_f0 = lVar7;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (lVar7 == 0) {
    bVar11 = false;
  }
  else {
    local_100 = local_100 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_100,lVar7,4);
    bVar11 = false;
    if (cVar4 != '\0') {
      bVar11 = true;
    }
  }
  iVar2 = (int)local_100;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  uVar9 = param_2 + 0xd8;
  local_f8 = uVar9;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (uVar9 == 0) {
    bVar1 = false;
  }
  else {
    local_100 = 0;
    cVar4 = FUN_1804514f0(&local_100,uVar9,8);
    if (cVar4 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar9 = local_100;
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if ((((!bVar11) || (0x3ff < iVar2 - 1U)) || (iVar2 <= param_3)) || ((!bVar1 || (uVar9 == 0))))
  goto LAB_1803daa35;
  lVar6 = (longlong)param_3 * 0x30 + uVar9;
  local_e8 = lVar6;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (lVar6 == 0) {
LAB_1803da833:
    local_b0[0] = local_b0[0] & 0xffffff00;
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    local_88 = (undefined1  [16])0x0;
    cVar4 = FUN_1804514f0(&local_a8,lVar6,0x30);
    if (cVar4 == '\0') goto LAB_1803da833;
    local_e0 = local_a8;
    uStack_d8 = uStack_a0;
    uStack_d0 = uStack_98;
    uStack_c8 = uStack_90;
    local_c0 = local_88._0_8_;
    uStack_b8 = local_88._8_8_;
    local_b0[0] = CONCAT31(local_b0[0]._1_3_,1);
  }
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if ((char)local_b0[0] != '\0') {
    puVar10 = (uint *)&local_e0;
    do {
      sVar5 = thunk_FUN_180624430(*puVar10);
      if (0 < sVar5) goto LAB_1803daa35;
      puVar10 = puVar10 + 1;
    } while (puVar10 != local_b0);
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (local_f8 == 0) {
      bVar11 = false;
      uVar8 = local_f8;
    }
    else {
      local_100 = 0;
      cVar4 = FUN_1804514f0(&local_100,local_f8,8);
      if (cVar4 == '\0') {
        bVar11 = false;
        uVar8 = local_f8;
      }
      else {
        bVar11 = true;
        uVar8 = local_100;
      }
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    bVar1 = !bVar11 || uVar8 != uVar9;
    if (bVar11 && uVar8 == uVar9) {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (local_f0 != 0) {
        local_100 = local_100 & 0xffffffff00000000;
        cVar4 = FUN_1804514f0(&local_100,local_f0,4);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar3 = (int)local_100;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if (bVar1 && iVar3 == iVar2) {
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        if (local_e8 == 0) {
          local_48[0] = 0;
          cVar4 = '\0';
        }
        else {
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          local_88 = (undefined1  [16])0x0;
          cVar4 = FUN_1804514f0(&local_a8,local_e8,0x30);
          if (cVar4 == '\0') {
            local_48[0] = 0;
            cVar4 = '\0';
          }
          else {
            local_78 = local_a8;
            uStack_70 = uStack_a0;
            uStack_68 = uStack_98;
            uStack_60 = uStack_90;
            local_58 = local_88._0_8_;
            uStack_50 = local_88._8_8_;
            local_48[0] = 1;
            cVar4 = '\x01';
          }
        }
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if ((cVar4 == '\0') || (lVar7 = 0, (char)local_b0[0] == '\0')) {
          bVar11 = cVar4 != (char)local_b0[0];
        }
        else {
          do {
            if (*(float *)(local_88 + lVar7 + 0x10) !=
                *(float *)((longlong)local_b0 + lVar7 + -0x30)) {
              bVar11 = true;
              goto LAB_1803daa12;
            }
            lVar6 = lVar7 + 0x14;
            lVar7 = lVar7 + 4;
          } while (local_88 + lVar6 != local_48);
          bVar11 = false;
        }
LAB_1803daa12:
        if (!bVar11) {
          *param_1 = local_e0;
          param_1[1] = uStack_d8;
          param_1[2] = uStack_d0;
          param_1[3] = uStack_c8;
          param_1[4] = local_c0;
          param_1[5] = uStack_b8;
          *(uint *)(param_1 + 6) = local_b0[0];
          return param_1;
        }
      }
    }
  }
LAB_1803daa35:
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



