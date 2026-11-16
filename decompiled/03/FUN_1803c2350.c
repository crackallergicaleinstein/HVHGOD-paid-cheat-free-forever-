// FUN_1803c2350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c2350 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Type propagation algorithm not settling */

void FUN_1803c2350(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  ULONGLONG UVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  undefined8 uVar23;
  char *pcVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  bool bVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar30;
  undefined1 auStack_808 [32];
  undefined **local_7e8;
  char *local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  uint local_7c8;
  undefined8 local_7c0;
  undefined1 local_7b8;
  char local_7b7;
  longlong *local_7a8;
  longlong *plStack_7a0;
  longlong *local_798;
  longlong *local_790;
  undefined1 local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768;
  undefined7 uStack_767;
  undefined1 local_760 [24];
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  uint local_6e8 [2];
  longlong *local_6e0;
  undefined8 local_6d8;
  float local_6d0;
  float local_6cc;
  undefined1 local_6c8 [16];
  longlong *local_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined4 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined4 local_658;
  longlong local_648 [192];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_808;
  local_6e8[0] = 0;
  local_790 = param_2;
  UVar17 = GetTickCount64();
  local_6c8._0_8_ = UVar17;
  if (*(char *)(param_1 + 0xdc1) == '\0') {
LAB_1803c23e7:
    if (param_3 == '\0') goto LAB_1803c326a;
  }
  else {
    if ((param_3 != '\0') && (DAT_180ccaa20 == '\0')) {
    }
    if ((*(char *)(param_1 + 0xdc1) == '\0') || (*(char *)(param_1 + 0x10d4) == '\0'))
    goto LAB_1803c23e7;
    if ((param_3 == '\0') || (*(ulonglong *)(param_1 + 0x10c8) <= UVar17)) {
      LOCK();
      *(undefined8 *)(param_1 + 0x1048) = 0;
      UNLOCK();
    }
  }
  if ((*(char *)(param_1 + 0x10d4) == '\0') || (*(ulonglong *)(param_1 + 0x10c8) <= UVar17)) {
LAB_1803c326a:
    LOCK();
    *(undefined8 *)(param_1 + 0x1048) = 0;
    UNLOCK();
    local_778 = (undefined1  [16])0x0;
    FUN_1803c9920(param_1 + 0x1020,local_778);
    if (((*(char *)(param_1 + 0x10d4) == '\0') || (*(char *)(param_1 + 0xec2) == '\0')) ||
       (param_2 == (longlong *)0x0)) {
      FUN_1803c34b0(param_1);
      FUN_1803f2990(param_1 + 0x980,0,0);
      *(undefined1 *)(param_1 + 0x10d4) = 0;
    }
    else {
      FUN_1803f2990(param_1 + 0x980,param_2,0);
    }
  }
  local_760._0_16_ = (undefined1  [16])0x0;
  plVar18 = (longlong *)FUN_180113860(param_1 + 0x1028);
  lVar26 = *(longlong *)(param_1 + 0x1020);
  local_760._8_8_ = plVar18;
  local_760._0_8_ = lVar26;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  LOCK();
  uVar23 = *(undefined8 *)(param_1 + 0x1028);
  *(undefined8 *)(param_1 + 0x1028) = plVar18;
  UNLOCK();
  uVar30 = extraout_XMM0_Qa;
  local_798 = plVar18;
  if (((byte)uVar23 & 3) == 2) {
    uVar30 = FUN_1805fa36c(param_1 + 0x1028);
  }
  if ((*(char *)(param_1 + 0xdc1) == '\0') || (lVar26 == 0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = FUN_1803c2180(uVar30,lVar26);
  }
  local_6e8[0] = uVar15;
  if ((*(char *)(param_1 + 0xdc1) != '\0') && (lVar26 != 0)) {
    if ((uVar15 != 0) && (*(int *)(param_1 + 0x990) == 0)) {
      FUN_1803bfba0(param_1 + 0x250,*(undefined8 *)(lVar26 + 0x150),0,1);
    }
    local_6d8 = (longlong *)((ulonglong)local_6d8 & 0xffffffff00000000);
    if ((param_2 != (longlong *)0x0) &&
       (iVar16 = (**(code **)(*param_2 + 0x88))(param_2,&local_6d8), -1 < iVar16)) {
      lVar26 = *(longlong *)(lVar26 + 0x150);
      lVar28 = ((ulonglong)local_6d8 & 0xffffffff) + 1;
      iVar16 = FUN_1805f68d0(param_1 + 0x250);
      if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (*(int *)(param_1 + 0x29c) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x29c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (uVar15 == 0) {
        *(undefined1 *)(param_1 + 0x8b6) = 1;
LAB_1803c257c:
        *(longlong *)(param_1 + 0x8a8) = lVar26;
      }
      else if ((*(char *)(param_1 + 0x8b5) == '\0') || (*(longlong *)(param_1 + 0x8a0) != lVar26)) {
        if (*(longlong *)(param_1 + 0x8a8) != lVar26) {
          *(undefined1 *)(param_1 + 0x8b6) = 0;
          goto LAB_1803c257c;
        }
      }
      else {
        *(longlong *)(param_1 + 0x8a8) = lVar26;
        if ((*(char *)(param_1 + 0x8b4) == '\0') && ((~*(uint *)(param_1 + 0x8b0) & uVar15) == 0)) {
          *(undefined1 *)(param_1 + 0x8b6) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x8b6) = 0;
        }
      }
      local_778._8_8_ = lVar26;
      local_778._0_8_ = lVar28;
      local_768 = *(undefined1 *)(param_1 + 0x8b6);
      uVar27 = (ulonglong)((uint)lVar28 & 0x3f);
      plVar2 = (longlong *)(param_1 + 0x2a0 + uVar27 * 0x18);
      *plVar2 = lVar28;
      plVar2[1] = lVar26;
      *(ulonglong *)(param_1 + 0x2b0 + uVar27 * 0x18) = CONCAT71(uStack_767,local_768);
      *(undefined4 *)(param_1 + 0x8b0) = 0;
      *(undefined2 *)(param_1 + 0x8b4) = 0;
      FUN_1805f68fc(param_1 + 0x250);
      param_2 = local_790;
    }
  }
  FUN_1803f2990(param_1 + 0x980,param_2,1);
  local_6d8 = (longlong *)FUN_1803f5070(param_1 + 0x980,*(undefined4 *)(param_1 + 0xdc8));
  if (DAT_180c71d88 <= (ulonglong)local_6c8._0_8_) {
    DAT_180c71d88 = local_6c8._0_8_ + 5000;
    uVar23 = *(undefined8 *)(param_1 + 0x1040);
    lVar26 = *(longlong *)(param_1 + 0x1068);
    uVar30 = *(undefined8 *)(param_1 + 0x1030);
    FUN_18063ab10(local_648,0,0x600);
    local_7c8 = (uint)(lVar26 != 0);
    local_7d8 = *(undefined8 *)(param_1 + 0x10b8);
    local_7e0 = (char *)CONCAT44(local_7e0._4_4_,(uint)(local_6d8 != (longlong *)0x0));
    local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,*(undefined4 *)(param_1 + 0xdc8));
    local_7d0 = uVar30;
    local_7c0 = uVar23;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "definition=%d composition=%d revision=%llu rendered=%llu image=%d tinted=%llu");
    local_7e8 = &PTR_180700558;
    if ((char)local_648[0] != '\0') {
      local_7e8 = (undefined **)&DAT_1806bcfc0;
    }
    local_7e0 = (char *)local_648;
    FUN_1800f6900(0);
  }
  if ((*(char *)(param_1 + 0xdc1) == '\0') || (local_7b7 = '\x01', *(int *)(param_1 + 0x100c) < 1))
  {
    local_7b7 = '\0';
  }
  if (((local_6d8 == (longlong *)0x0) ||
      (*(longlong *)(param_1 + 0xb90) == *(longlong *)(param_1 + 0x10c0))) ||
     ((*(char *)(param_1 + 0xdc1) == '\0' &&
      (*(longlong *)(param_1 + 0x1030) != *(longlong *)(param_1 + 0x10b8))))) goto LAB_1803c321c;
  if (*(char *)(param_1 + 0xdc1) == '\0') {
    uVar27 = 0;
  }
  else {
    lVar26 = param_1 + 0x250;
    lVar28 = *(longlong *)(param_1 + 0xc10);
    iVar16 = FUN_1805f68d0(lVar26);
    if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(param_1 + 0x29c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x29c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    uVar27 = (ulonglong)((uint)lVar28 & 0x3f);
    if (((lVar28 == 0) || (*(longlong *)(param_1 + 0x2a0 + uVar27 * 0x18) != lVar28)) ||
       (*(char *)(param_1 + 0x2b0 + uVar27 * 0x18) == '\0')) {
      uVar27 = 0;
      FUN_1805f68fc(lVar26);
    }
    else {
      uVar27 = *(ulonglong *)(param_1 + 0x2a8 + uVar27 * 0x18);
      FUN_1805f68fc(lVar26);
    }
  }
  if (((local_6e8[0] == 0) || (uVar27 < *(ulonglong *)(param_1 + 0x8b8))) ||
     ((*(ulonglong *)(param_1 + 0x10b8) < uVar27 || (uVar27 == 0)))) {
    bVar29 = false;
    local_7b8 = 0;
    if (local_6e8[0] != 0) goto LAB_1803c27e7;
  }
  else {
    bVar29 = true;
    local_7b8 = 1;
LAB_1803c27e7:
    if (((local_7b7 == '\0') && (!bVar29)) &&
       ((*(char *)(param_1 + 0x10a8) != '\0' && (*(longlong *)(param_1 + 0x1068) != 0)))) {
      if (DAT_180c71d90 <= (ulonglong)local_6c8._0_8_) {
        DAT_180c71d90 = local_6c8._0_8_ + 5000;
        FUN_18063ab10(local_648,0,0x600);
        local_7e0 = *(char **)(param_1 + 0x10b8);
        local_7e8 = *(undefined ***)(param_1 + 0xc10);
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                      "source_frame=%llu revision=%llu action=retain_verified_image reason=incomplete_material_frame"
                     );
        local_7e8 = &PTR_180700558;
        if ((char)local_648[0] != '\0') {
          local_7e8 = (undefined **)&DAT_1806bcfc0;
        }
        local_7e0 = (char *)local_648;
        FUN_1800f6900(0);
      }
      goto LAB_1803c321c;
    }
  }
  if (((*(char *)(param_1 + 0xdc1) != '\0') && (*(char *)(param_1 + 0x1004) != '\0')) &&
     ((*(ulonglong *)(param_1 + 0xc10) <= *(ulonglong *)(param_1 + 0x10b0) ||
      ((local_6e8[0] != 0 && (!bVar29)))))) goto LAB_1803c321c;
  local_778 = (undefined1  [16])0x0;
  bVar29 = *(char *)(param_1 + 0xdc1) == '\0';
  if (bVar29) {
    local_788._8_8_ = 0;
    puVar19 = (undefined8 *)local_788;
    uVar23 = 0;
  }
  else {
    puVar19 = (undefined8 *)
              FUN_1803ed0c0(&local_7a8,*(undefined4 *)(param_1 + 0x980),
                            *(undefined8 *)(param_1 + 0xc10));
    uVar23 = *puVar19;
  }
  local_6c8._0_8_ = uVar23;
  local_778._0_8_ = uVar23;
  plVar2 = (longlong *)puVar19[1];
  local_778._8_8_ = plVar2;
  *puVar19 = 0;
  puVar19[1] = 0;
  if ((bVar29) && (uVar23 = local_788._8_8_, (longlong *)local_788._8_8_ != (longlong *)0x0)) {
    LOCK();
    plVar20 = (longlong *)(local_788._8_8_ + 8);
    lVar26 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar26 == 1) {
      (*(code *)**(undefined8 **)local_788._8_8_)(local_788._8_8_);
      LOCK();
      piVar1 = (int *)(uVar23 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*(longlong *)uVar23 + 8))(uVar23);
      }
    }
  }
  plVar20 = plStack_7a0;
  if ((!bVar29) && (plStack_7a0 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_7a0 + 1;
    lVar26 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar26 == 1) {
      (**(code **)*plStack_7a0)(plStack_7a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
  }
  local_788 = (undefined1  [16])0x0;
  plVar20 = (longlong *)FUN_180113860(param_1 + 0x1028);
  local_788._8_8_ = plVar20;
  local_788._0_8_ = *(undefined8 *)(param_1 + 0x1020);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  LOCK();
  uVar23 = *(undefined8 *)(param_1 + 0x1028);
  *(undefined8 *)(param_1 + 0x1028) = plVar20;
  UNLOCK();
  if (((byte)uVar23 & 3) == 2) {
    FUN_1805fa36c();
  }
  *(undefined8 *)(param_1 + 0x10c0) = *(undefined8 *)(param_1 + 0xb90);
  if ((1 < *(int *)(param_1 + 0x10d0)) ||
     (iVar16 = *(int *)(param_1 + 0x10d0) + 1, *(int *)(param_1 + 0x10d0) = iVar16, 1 < iVar16)) {
    puVar19 = DAT_180c6e510;
    lVar26 = DAT_180c6e508;
    local_7a8 = DAT_180c6e510;
    if ((DAT_180c6e508 != 0) && (DAT_180c6e510 != (undefined8 *)0x0)) {
      local_6b8 = (longlong *)0x0;
      (**(code **)(*local_6d8 + 0x38))(local_6d8,&local_6b8);
      local_6e0 = (longlong *)0x0;
      iVar16 = (**(code **)*local_6b8)(local_6b8,&DAT_180806ff8,&local_6e0);
      if (-1 < iVar16) {
        local_6b0 = 0;
        uStack_6a8 = 0;
        uStack_6a0 = 0;
        uStack_698 = 0;
        local_690 = 0;
        local_688 = 0;
        (**(code **)(*local_6e0 + 0x50))(local_6e0,&local_6b0);
        plVar18 = *(longlong **)(param_1 + 0x1060);
        if (plVar18 != (longlong *)0x0) {
          local_680 = 0;
          uStack_678 = 0;
          uStack_670 = 0;
          uStack_668 = 0;
          local_660 = 0;
          local_658 = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18,&local_680);
          if ((int)local_680 == (int)local_6b0) {
            if (local_680._4_4_ == local_6b0._4_4_) {
              if ((int)uStack_670 == (int)uStack_6a0) goto LAB_1803c2b92;
            }
          }
          plVar18 = *(longlong **)(param_1 + 0x1060);
          if (plVar18 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x1060) = 0;
            (**(code **)(*plVar18 + 0x10))();
          }
          plVar18 = *(longlong **)(param_1 + 0x1068);
          if (plVar18 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x1068) = 0;
            (**(code **)(*plVar18 + 0x10))();
          }
        }
LAB_1803c2b92:
        if (((*(longlong *)(param_1 + 0x1060) != 0) ||
            (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x28))
                                (lVar26,&local_6b0,0,param_1 + 0x1060), -1 < iVar16)) &&
           ((*(longlong *)(param_1 + 0x1068) != 0 ||
            (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x38))
                                (lVar26,*(undefined8 *)(param_1 + 0x1060),0,param_1 + 0x1068),
            -1 < iVar16)))) {
          (**(code **)(*puVar19 + 0x178))(puVar19,*(undefined8 *)(param_1 + 0x1060),local_6e0);
          if (((*(char *)(param_1 + 0xdc1) == '\0') || (local_788._0_8_ == 0)) ||
             (*(char *)(local_788._0_8_ + 0x12e) == '\0')) {
            *(undefined1 *)(param_1 + 0x978) = 0;
            local_748 = 0;
            uStack_740 = 0;
            uStack_738 = 0;
            uStack_730 = 0;
            local_728 = 0;
            uStack_720 = 0;
            uStack_718 = 0;
            uStack_710 = 0;
            local_708 = 0;
            uStack_700 = 0;
            uStack_6f8 = 0;
            uStack_6f0 = 0;
            FUN_1803c8490(&local_748);
            FUN_1803bfc40(param_1 + 0x8c0,&local_748);
            _eh_vector_destructor_iterator_(&local_748,0x18,4,FUN_1801d7480);
            *(undefined8 *)(param_1 + 0x970) = 0;
          }
          else {
            uVar15 = *(uint *)(local_788._0_8_ + 0x130);
            local_6d8 = (longlong *)
                        CONCAT44((float)(uVar15 >> 8 & 0xff) / 255.0,(float)(uVar15 & 0xff) / 255.0)
            ;
            local_6d0 = (float)(uVar15 >> 0x10 & 0xff) / 255.0;
            local_6cc = (float)(uVar15 >> 0x18) / 255.0;
            local_7e8 = (undefined **)&local_6d8;
            cVar14 = FUN_1803bfd40(param_1 + 0x8c0,lVar26,puVar19,*(undefined8 *)(param_1 + 0x1068))
            ;
            if (cVar14 == '\0') {
              *(undefined8 *)(param_1 + 0x1038) = 0;
            }
            else {
              *(undefined8 *)(param_1 + 0x1038) = *(undefined8 *)(local_788._0_8_ + 0x150);
            }
          }
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
          }
          *(undefined8 *)(param_1 + 0x1098) = local_6c8._0_8_;
          plVar18 = *(longlong **)(param_1 + 0x10a0);
          *(longlong **)(param_1 + 0x10a0) = plVar2;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar18 + 1;
            lVar28 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar28 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x10a8) = local_7b8;
          if ((*(char *)(param_1 + 0xdc1) != '\0') && (*(char *)(param_1 + 0x1004) != '\0')) {
            if (*(char *)(param_1 + 0x10a9) == '\0') {
              if ((*(longlong *)(param_1 + 0x1088) == 0) &&
                 (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x28))
                                     (lVar26,&local_6b0,0,param_1 + 0x1088), iVar16 < 0))
              goto LAB_1803c3163;
              uVar23 = *(undefined8 *)(param_1 + 0x1088);
              plVar18 = local_7a8;
LAB_1803c2f24:
              (**(code **)(*plVar18 + 0x178))(plVar18,uVar23,local_6e0);
            }
            else if ((((*(longlong *)(param_1 + 0x1088) != 0) &&
                      ((*(longlong *)(param_1 + 0x1070) != 0 ||
                       (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x28))
                                           (lVar26,&local_6b0,0,param_1 + 0x1070), -1 < iVar16))))
                     && ((*(longlong *)(param_1 + 0x1078) != 0 ||
                         (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x38))
                                             (lVar26,*(undefined8 *)(param_1 + 0x1070),0,
                                              (longlong *)(param_1 + 0x1078)), -1 < iVar16)))) &&
                    (((*(longlong *)(param_1 + 0x1080) != 0 ||
                      (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x28))
                                          (lVar26,&local_6b0,0,param_1 + 0x1080), -1 < iVar16)) &&
                     ((*(longlong *)(param_1 + 0x1090) != 0 ||
                      (iVar16 = (**(code **)(*(longlong *)lVar26 + 0x38))
                                          (lVar26,*(undefined8 *)(param_1 + 0x1080),0,
                                           (longlong *)(param_1 + 0x1090)), -1 < iVar16)))))) {
              plVar18 = local_7a8;
              (**(code **)(*local_7a8 + 0x178))
                        (local_7a8,*(undefined8 *)(param_1 + 0x1070),
                         *(undefined8 *)(param_1 + 0x1088));
              uVar23 = *(undefined8 *)(param_1 + 0x1080);
              goto LAB_1803c2f24;
            }
            *(bool *)(param_1 + 0x10a9) = *(char *)(param_1 + 0x10a9) == '\0';
            local_6c8 = (undefined1  [16])0x0;
            FUN_1803c84e0(local_6c8);
            lVar28 = 2;
            lVar26 = 2;
            puVar19 = (undefined8 *)(param_1 + 0xed8);
            pcVar13 = (char *)local_648;
            do {
              pcVar24 = pcVar13;
              puVar21 = puVar19;
              uVar23 = puVar21[1];
              uVar30 = puVar21[2];
              uVar5 = puVar21[3];
              *(undefined8 *)pcVar24 = *puVar21;
              *(undefined8 *)(pcVar24 + 8) = uVar23;
              *(undefined8 *)(pcVar24 + 0x10) = uVar30;
              *(undefined8 *)(pcVar24 + 0x18) = uVar5;
              uVar23 = puVar21[5];
              uVar30 = puVar21[6];
              uVar5 = puVar21[7];
              *(undefined8 *)(pcVar24 + 0x20) = puVar21[4];
              *(undefined8 *)(pcVar24 + 0x28) = uVar23;
              *(undefined8 *)(pcVar24 + 0x30) = uVar30;
              *(undefined8 *)(pcVar24 + 0x38) = uVar5;
              uVar23 = puVar21[9];
              uVar30 = puVar21[10];
              uVar5 = puVar21[0xb];
              *(undefined8 *)(pcVar24 + 0x40) = puVar21[8];
              *(undefined8 *)(pcVar24 + 0x48) = uVar23;
              *(undefined8 *)(pcVar24 + 0x50) = uVar30;
              *(undefined8 *)(pcVar24 + 0x58) = uVar5;
              uVar23 = puVar21[0xd];
              *(undefined8 *)(pcVar24 + 0x60) = puVar21[0xc];
              *(undefined8 *)(pcVar24 + 0x68) = uVar23;
              uVar23 = puVar21[0xf];
              *(undefined8 *)(pcVar24 + 0x70) = puVar21[0xe];
              *(undefined8 *)(pcVar24 + 0x78) = uVar23;
              lVar26 = lVar26 + -1;
              puVar19 = puVar21 + 0x10;
              pcVar13 = pcVar24 + 0x80;
            } while (lVar26 != 0);
            uVar23 = puVar21[0x11];
            uVar30 = puVar21[0x12];
            uVar5 = puVar21[0x13];
            *(undefined8 *)(pcVar24 + 0x80) = puVar21[0x10];
            *(undefined8 *)(pcVar24 + 0x88) = uVar23;
            *(undefined8 *)(pcVar24 + 0x90) = uVar30;
            *(undefined8 *)(pcVar24 + 0x98) = uVar5;
            uVar23 = puVar21[0x15];
            uVar30 = puVar21[0x16];
            uVar5 = puVar21[0x17];
            *(undefined8 *)(pcVar24 + 0xa0) = puVar21[0x14];
            *(undefined8 *)(pcVar24 + 0xa8) = uVar23;
            *(undefined8 *)(pcVar24 + 0xb0) = uVar30;
            *(undefined8 *)(pcVar24 + 0xb8) = uVar5;
            *(undefined8 *)(pcVar24 + 0xc0) = puVar21[0x18];
            plVar18 = local_648;
            plVar12 = (longlong *)local_6c8._0_8_;
            do {
              plVar25 = plVar12;
              plVar22 = plVar18;
              lVar26 = plVar22[1];
              lVar4 = plVar22[2];
              lVar6 = plVar22[3];
              *plVar25 = *plVar22;
              plVar25[1] = lVar26;
              plVar25[2] = lVar4;
              plVar25[3] = lVar6;
              lVar26 = plVar22[5];
              lVar4 = plVar22[6];
              lVar6 = plVar22[7];
              plVar25[4] = plVar22[4];
              plVar25[5] = lVar26;
              plVar25[6] = lVar4;
              plVar25[7] = lVar6;
              lVar26 = plVar22[9];
              lVar4 = plVar22[10];
              lVar6 = plVar22[0xb];
              plVar25[8] = plVar22[8];
              plVar25[9] = lVar26;
              plVar25[10] = lVar4;
              plVar25[0xb] = lVar6;
              lVar26 = plVar22[0xd];
              plVar25[0xc] = plVar22[0xc];
              plVar25[0xd] = lVar26;
              lVar26 = plVar22[0xf];
              plVar25[0xe] = plVar22[0xe];
              plVar25[0xf] = lVar26;
              lVar28 = lVar28 + -1;
              plVar18 = plVar22 + 0x10;
              plVar12 = plVar25 + 0x10;
            } while (lVar28 != 0);
            lVar26 = plVar22[0x11];
            lVar28 = plVar22[0x12];
            lVar4 = plVar22[0x13];
            plVar25[0x10] = plVar22[0x10];
            plVar25[0x11] = lVar26;
            plVar25[0x12] = lVar28;
            plVar25[0x13] = lVar4;
            lVar26 = plVar22[0x15];
            lVar28 = plVar22[0x16];
            lVar4 = plVar22[0x17];
            plVar25[0x14] = plVar22[0x14];
            plVar25[0x15] = lVar26;
            plVar25[0x16] = lVar28;
            plVar25[0x17] = lVar4;
            plVar25[0x18] = plVar22[0x18];
            if (*(char *)(param_1 + 0x10a9) != '\0') {
              lVar6 = *(longlong *)(param_1 + 0xf58);
              lVar7 = *(longlong *)(param_1 + 0xf60);
              lVar8 = *(longlong *)(param_1 + 0xf68);
              lVar28 = *(longlong *)(param_1 + 0xf70);
              lVar4 = *(longlong *)(param_1 + 0xf78);
              lVar26 = *(longlong *)(param_1 + 0xf80);
              uVar3 = *(undefined4 *)(param_1 + 0xf88);
              *(longlong *)local_6c8._0_8_ = *(longlong *)(param_1 + 0xf50);
              *(longlong *)(local_6c8._0_8_ + 8) = lVar6;
              *(longlong *)(local_6c8._0_8_ + 0x10) = lVar7;
              *(longlong *)(local_6c8._0_8_ + 0x18) = lVar8;
              *(longlong *)(local_6c8._0_8_ + 0x20) = lVar28;
              *(longlong *)(local_6c8._0_8_ + 0x28) = lVar4;
              *(longlong *)(local_6c8._0_8_ + 0x30) = lVar26;
              *(undefined4 *)(local_6c8._0_8_ + 0x38) = uVar3;
              uVar9 = *(undefined8 *)(param_1 + 0xfd0);
              uVar10 = *(undefined8 *)(param_1 + 0xfd8);
              uVar11 = *(undefined8 *)(param_1 + 0xfe0);
              uVar30 = *(undefined8 *)(param_1 + 0xfe8);
              uVar5 = *(undefined8 *)(param_1 + 0xff0);
              uVar23 = *(undefined8 *)(param_1 + 0xff8);
              uVar3 = *(undefined4 *)(param_1 + 0x1000);
              *(undefined8 *)(local_6c8._0_8_ + 0xb4) = *(undefined8 *)(param_1 + 0xfc8);
              *(undefined8 *)(local_6c8._0_8_ + 0xbc) = uVar9;
              *(undefined8 *)(local_6c8._0_8_ + 0xc4) = uVar10;
              *(undefined8 *)(local_6c8._0_8_ + 0xcc) = uVar11;
              *(undefined8 *)(local_6c8._0_8_ + 0xd4) = uVar30;
              *(undefined8 *)(local_6c8._0_8_ + 0xdc) = uVar5;
              *(undefined8 *)(local_6c8._0_8_ + 0xe4) = uVar23;
              *(undefined4 *)(local_6c8._0_8_ + 0xec) = uVar3;
              *(undefined1 *)(local_6c8._0_8_ + 0x12e) = *(undefined1 *)(param_1 + 0x1005);
            }
            *(undefined4 *)(local_6c8._0_8_ + 0x148) = *(undefined4 *)(param_1 + 0xdc8);
            *(longlong *)(param_1 + 0x10b8) = *(longlong *)(param_1 + 0x10b8) + 1;
            *(longlong *)(local_6c8._0_8_ + 0x150) = *(longlong *)(param_1 + 0x10b8);
            LOCK();
            *(undefined8 *)(param_1 + 0x1030) = 0;
            UNLOCK();
            local_7a8 = (longlong *)local_6c8._0_8_;
            plStack_7a0 = (longlong *)local_6c8._8_8_;
            local_6c8 = (undefined1  [16])0x0;
            FUN_1803c9920(param_1 + 0x1020,&local_7a8);
            local_6e8[0] = 0;
            if ((local_790 != (longlong *)0x0) &&
               (iVar16 = (**(code **)(*local_790 + 0x88))(local_790,local_6e8), -1 < iVar16)) {
              *(ulonglong *)(param_1 + 0x10b0) = (ulonglong)local_6e8[0] + 1;
            }
          }
        }
      }
LAB_1803c3163:
      plVar18 = local_6e0;
      if (local_6e0 != (longlong *)0x0) {
        local_6e0 = (longlong *)0x0;
        (**(code **)(*plVar18 + 0x10))();
      }
      plVar18 = local_6b8;
      if (local_6b8 != (longlong *)0x0) {
        local_6b8 = (longlong *)0x0;
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    plVar18 = local_798;
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar20 + 1;
    lVar26 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar26 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar2 + 1;
    lVar26 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar26 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
LAB_1803c321c:
  if (plVar18 == (longlong *)0x0) {
  }
  LOCK();
  plVar2 = plVar18 + 1;
  lVar26 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar26 != 1) {
  }
  (**(code **)*plVar18)(plVar18);
  LOCK();
  piVar1 = (int *)((longlong)plVar18 + 0xc);
  iVar16 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar16 == 1) {
    (**(code **)(*plVar18 + 8))(plVar18);
  }
}



