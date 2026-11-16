// FUN_1801efc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801efc70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801efc70(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ULONGLONG UVar12;
  ulonglong uVar13;
  short *psVar14;
  short *psVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar18;
  undefined1 auStack_708 [32];
  undefined **local_6e8;
  short *local_6e0;
  short *local_6d8;
  short *local_6d0;
  short *local_6c8;
  longlong local_6c0;
  short *local_6b8;
  char local_6b0;
  char *local_6a8;
  longlong local_6a0;
  char *local_698;
  longlong local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined2 local_658;
  uint6 uStack_656;
  undefined1 local_650 [24];
  undefined4 local_638;
  undefined4 local_634;
  undefined1 local_630 [200];
  undefined8 local_568;
  undefined8 local_560;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  local_6c0 = param_1;
  cVar5 = FUN_1801ef840();
  if (cVar5 == '\0') {
  }
  cVar6 = FUN_1801ef550(param_1);
  cVar5 = DAT_180bbe88d;
  if (cVar6 == '\0') {
  }
  LOCK();
  DAT_180bbe88d = 0;
  UNLOCK();
  uVar18 = extraout_XMM0_Qa;
  if (cVar5 != '\0') {
    uVar18 = FUN_1801f3150(&DAT_180bbeb60);
  }
  plVar9 = (longlong *)FUN_1801f3f80(uVar18,local_650,param_1);
  lVar2 = *plVar9;
  if ((*(longlong *)(lVar2 + 0x40) != *(longlong *)(param_1 + 200)) ||
     (*(longlong *)(lVar2 + 0x48) != *(longlong *)(param_1 + 0xd0))) {
    local_688 = 0;
    uStack_680 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    local_668 = 0;
    uStack_660 = 0;
    local_658 = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(ulonglong *)(lVar2 + 0x60) = (ulonglong)uStack_656 << 0x10;
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0xd0);
  }
  local_6c8 = (short *)GetTickCount64();
  if (*(char *)(lVar2 + 0x61) == '\0') {
    if (*(longlong *)(lVar2 + 0x30) == 0) goto LAB_1801efe76;
  }
  else {
    lVar11 = *(longlong *)(lVar2 + 0x50);
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    if (lVar11 == 0) {
      bVar3 = false;
      psVar14 = local_6c8;
    }
    else {
      local_6d0 = (short *)0x0;
      cVar5 = FUN_1804514f0(&local_6d0,lVar11,8);
      if (cVar5 == '\0') {
        bVar3 = false;
        psVar14 = local_6c8;
      }
      else {
        bVar3 = true;
        psVar14 = local_6d0;
      }
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    if (bVar3) {
      if (psVar14 == (short *)0x0) goto LAB_1801efe3e;
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      bVar3 = false;
      if (psVar14 + 0x140 != (short *)0x0) {
        local_6d8 = (short *)((ulonglong)local_6d8 & 0xffffffff00000000);
        cVar5 = FUN_1804514f0(&local_6d8,psVar14 + 0x140,4);
        if (cVar5 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      iVar4 = (int)local_6d8;
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      iVar8 = 0;
      if (bVar3) {
        iVar8 = iVar4;
      }
      param_1 = local_6c0;
    }
    else {
      psVar14 = (short *)0x0;
LAB_1801efe3e:
      iVar8 = 0;
    }
    if ((psVar14 == *(short **)(lVar2 + 0x58)) && (iVar8 - 1U < 0x40)) {
    }
    *(undefined2 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
LAB_1801efe76:
    psVar14 = local_6c8;
    cVar5 = FUN_1801ef630(param_1);
    if (cVar5 == '\0') {
      iVar8 = FUN_1805f68d0(&DAT_1808daea0);
      if (iVar8 != 0) goto LAB_1801f05ed;
      if (DAT_1808daeec != 0x7fffffff) {
        FUN_1801f3010(&DAT_180bbeba0);
        FUN_1805f68fc(&DAT_1808daea0);
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        DAT_1808da689 = 1;
        DAT_180bbe88d = 1;
      }
      DAT_1808daeec = 0x7ffffffe;
      goto LAB_1801f05e2;
    }
    *(short **)(lVar2 + 0x30) = psVar14;
  }
  psVar14 = DAT_180c631f8;
  local_6d0 = DAT_180c631f8;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (psVar14 == (short *)0x0) {
    bVar3 = false;
    psVar14 = local_6c8;
  }
  else {
    local_6d8 = (short *)0x0;
    cVar5 = FUN_1804514f0(&local_6d8,psVar14,8);
    if (cVar5 == '\0') {
      bVar3 = false;
      psVar14 = local_6c8;
    }
    else {
      bVar3 = true;
      psVar14 = local_6d8;
    }
  }
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if ((!bVar3) || (psVar14 == (short *)0x0)) {
    local_6d8 = (short *)0x0;
  }
  else {
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    if (psVar14 + 0x13c == (short *)0x0) {
      bVar3 = false;
      psVar14 = local_6c8;
    }
    else {
      local_6d8 = (short *)0x0;
      cVar5 = FUN_1804514f0(&local_6d8,psVar14 + 0x13c,8);
      if (cVar5 == '\0') {
        bVar3 = false;
        psVar14 = local_6c8;
      }
      else {
        bVar3 = true;
        psVar14 = local_6d8;
      }
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    local_6d8 = (short *)0x0;
    if (bVar3) {
      local_6d8 = psVar14;
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808e7188;
  lVar11 = DAT_1808da460;
  if ((DAT_1808e7188 != DAT_1808da460) || (lVar16 = DAT_180c63220, DAT_180c63220 == 0)) {
    UVar12 = GetTickCount64();
    if ((lVar10 == lVar11) && (UVar12 < DAT_180c63218)) {
      lVar16 = 0;
    }
    else {
      local_6b8 = (short *)&DAT_1808e7130;
      iVar8 = FUN_1805f68d0(&DAT_1808e7130);
      if (iVar8 != 0) goto LAB_1801f05ed;
      if (DAT_1808e717c == 0x7fffffff) {
        DAT_1808e717c = 0x7ffffffe;
        goto LAB_1801f05e2;
      }
      if (DAT_1808e7188 == lVar11) {
        if ((DAT_180c63220 == 0) && (DAT_180c63218 <= UVar12)) goto LAB_1801f00c6;
      }
      else {
        DAT_1808e7180 = 1000;
LAB_1801f00c6:
        lVar10 = -1;
        do {
          local_690 = lVar10 + 1;
          pcVar1 = "lient.dll:48895C24??574883EC??8B41??488D79" + lVar10;
          lVar10 = local_690;
        } while (*pcVar1 != '\0');
        local_698 = "client.dll:48895C24??574883EC??8B41??488D79";
        local_6a8 = "patterns::init_particle_path_buffer";
        local_6a0 = 0x23;
        DAT_180c63220 = FUN_1800e5d20(&local_6a8,&local_698);
        DAT_1808e7188 = lVar11;
        DAT_180c63218 = 0xffffffffffffffff;
        if (DAT_180c63220 == 0) {
          DAT_180c63218 = DAT_1808e7180 + UVar12;
          if (DAT_1808e7180 < 60000) {
            DAT_1808e7180 = DAT_1808e7180 * 2;
          }
          else {
            DAT_1808e7180 = 60000;
          }
        }
        else {
          DAT_1808e7180 = 1000;
        }
      }
      lVar16 = DAT_180c63220;
      FUN_1805f68fc(&DAT_1808e7130);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808e7128;
  lVar11 = DAT_1808da460;
  if ((DAT_1808e7128 == DAT_1808da460) && (lVar17 = DAT_180c63210, DAT_180c63210 != 0))
  goto LAB_1801f02d1;
  UVar12 = GetTickCount64();
  if ((lVar10 == lVar11) && (UVar12 < DAT_180c63208)) {
    lVar17 = 0;
    goto LAB_1801f02d1;
  }
  local_6b8 = (short *)&DAT_1808e70d0;
  iVar8 = FUN_1805f68d0(&DAT_1808e70d0);
  if (iVar8 != 0) {
LAB_1801f05ed:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e711c == 0x7fffffff) {
    DAT_1808e711c = 0x7ffffffe;
LAB_1801f05e2:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1808e7128 == lVar11) {
    if ((DAT_180c63210 == 0) && (DAT_180c63208 <= UVar12)) goto LAB_1801f0234;
  }
  else {
    DAT_1808e7120 = 1000;
LAB_1801f0234:
    uVar13 = 1000;
    lVar10 = -1;
    do {
      local_6a0 = lVar10 + 1;
      lVar17 = lVar10 + 1;
      lVar10 = local_6a0;
    } while ("resourcesystem.dll:48895C24??48896C24??48897424??574883EC??488B01"[lVar17] != '\0');
    local_6a8 = "resourcesystem.dll:48895C24??48896C24??48897424??574883EC??488B01";
    local_698 = "patterns::resource_system_load";
    local_690 = 0x1e;
    DAT_180c63210 = FUN_1800e5d20(&local_698,&local_6a8);
    DAT_1808e7128 = lVar11;
    DAT_180c63208 = 0xffffffffffffffff;
    if (DAT_180c63210 == 0) {
      DAT_180c63208 = DAT_1808e7120 + UVar12;
      uVar13 = DAT_1808e7120 * 2;
      if (59999 < DAT_1808e7120) {
        uVar13 = 60000;
      }
    }
    DAT_1808e7120 = uVar13;
  }
  lVar17 = DAT_180c63210;
  FUN_1805f68fc(&DAT_1808e70d0);
LAB_1801f02d1:
  if (DAT_180c63200 == (short *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    if ((*DAT_180c63200 == 0x5a4d) &&
       (*(int *)((longlong)*(int *)(DAT_180c63200 + 0x1e) + (longlong)DAT_180c63200) == 0x4550)) {
      uVar13 = (ulonglong)
               *(uint *)((longlong)*(int *)(DAT_180c63200 + 0x1e) + 0x50 + (longlong)DAT_180c63200);
    }
  }
  if (((((local_6d0 == (short *)0x0) || (lVar16 == 0)) || (lVar17 == 0)) ||
      ((local_6d8 < DAT_180c63200 || ((short *)(uVar13 + (longlong)DAT_180c63200) <= local_6d8))))
     || (local_6c8 < *(short **)(lVar2 + 0x38))) {
    lVar11 = local_6c0;
  }
  else {
    *(short **)(lVar2 + 0x38) = local_6c8 + 0x7d;
    local_638 = 0;
    local_634 = 0xc00000c8;
    FUN_18063ab10(local_630,0,200);
    lVar11 = local_6c0;
    local_568 = 0;
    local_560 = 0;
    plVar9 = (longlong *)(local_6c0 + 0x40);
    if (0xf < *(ulonglong *)(local_6c0 + 0x58)) {
      plVar9 = (longlong *)*plVar9;
    }
    cVar5 = FUN_1804513c0(lVar16,1,2);
    if (cVar5 != '\0') {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      cVar5 = FUN_1801f3ab0(lVar16,&local_638,plVar9);
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if (cVar5 != '\0') {
        local_560 = 0x6c646d76;
        if (*(char *)(lVar2 + 0x60) == '\0') {
          cVar5 = FUN_1804513c0(lVar17,1,2);
          if (cVar5 == '\0') {
            uVar7 = 0;
          }
          else {
            lVar10 = FUN_18017ea70();
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
            uVar7 = FUN_1801f3ae0(lVar17,local_6d0,&local_638);
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
          }
          *(undefined1 *)(lVar2 + 0x60) = uVar7;
        }
        psVar14 = local_6d8;
        cVar5 = FUN_1804513c0(local_6d8,1,2);
        if (cVar5 == '\0') {
          *(undefined8 *)(lVar2 + 0x50) = 0;
        }
        else {
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          FUN_1801f3b10(&local_6b8,psVar14,local_6d0,&local_638);
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          psVar14 = local_6b8;
          if (local_6b0 == '\0') {
            psVar14 = (short *)0x0;
          }
          *(short **)(lVar2 + 0x50) = psVar14;
        }
      }
    }
  }
  lVar10 = *(longlong *)(lVar2 + 0x50);
  if (lVar10 != 0) {
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    local_6d0 = (short *)0x0;
    cVar5 = FUN_1804514f0(&local_6d0,lVar10,8);
    psVar14 = local_6b8;
    if (cVar5 != '\0') {
      psVar14 = local_6d0;
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    psVar15 = (short *)0x0;
    if (cVar5 != '\0') {
      psVar15 = psVar14;
    }
    if ((psVar15 != (short *)0x0) &&
       (lVar10 = FUN_1801f2890(&local_6a8,psVar15), *(char *)(lVar10 + 0xc) != '\0')) {
      *(undefined1 *)(lVar2 + 0x61) = 1;
      *(short **)(lVar2 + 0x58) = psVar15;
      plVar9 = (longlong *)(lVar11 + 0x40);
      if (0xf < *(ulonglong *)(lVar11 + 0x58)) {
        plVar9 = (longlong *)*plVar9;
      }
      FUN_18063ab10(&local_638,0,0x600);
      local_6e8 = (undefined **)plVar9;
      local_6e0 = psVar15;
      FUN_18015ad60(&local_638,0x600,0xffffffffffffffff,
                    "model=%s native_view_groups=verified resource=0x%llx");
      local_6e8 = &PTR_180700558;
      if ((char)local_638 != '\0') {
        local_6e8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6e0 = (short *)&local_638;
      FUN_1800f6900(1);
    }
  }
  if (9999 < (ulonglong)((longlong)local_6c8 - *(longlong *)(lVar2 + 0x30))) {
    FUN_1801ef940(lVar11,"native_AG2_view_groups_unavailable");
  }
}



