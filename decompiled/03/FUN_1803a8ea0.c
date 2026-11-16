// FUN_1803a8ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a8ea0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803a9405) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a8ea0(undefined *param_1,undefined **param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  bool bVar16;
  longlong unaff_retaddr;
  undefined1 auStack_738 [32];
  undefined **local_718;
  char *local_710;
  double local_708;
  double local_700;
  double local_6f8;
  int local_6f0;
  char *local_6e8;
  undefined8 local_6d8;
  undefined *local_6c8;
  undefined8 local_6c0;
  float local_6b8;
  char local_6b4;
  longlong local_6b0;
  char *local_6a8;
  longlong local_6a0;
  char *local_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  PSRWLOCK pRStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  char local_658 [1544];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_738;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_6c8 = param_1;
  local_6c0 = param_2;
  local_6b0 = unaff_retaddr;
  if (DAT_180c707b0 == 0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    ppuVar11 = (undefined **)(*(code *)DAT_180c707b0)();
  }
  if (((DAT_180c70b40 == '\0') || (DAT_180cad2e0 != 1)) || (DAT_180cad6b8 == '\0'))
  goto LAB_1803a94d5;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809036a8;
  lVar7 = DAT_1808da460;
  uVar14 = 1000;
  if ((DAT_1809036a8 != DAT_1808da460) || (lVar10 = DAT_180c717e8, DAT_180c717e8 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar6 == lVar7) && (UVar4 < DAT_180c71800)) {
      lVar10 = 0;
    }
    else {
      local_6d8 = &DAT_180903650;
      iVar3 = FUN_1805f68d0(&DAT_180903650);
      if (iVar3 != 0) goto LAB_1803a9660;
      if (DAT_18090369c == 0x7fffffff) {
        DAT_18090369c = 0x7ffffffe;
        goto LAB_1803a9655;
      }
      if (DAT_1809036a8 == lVar7) {
        if ((DAT_180c717e8 == 0) && (DAT_180c71800 <= UVar4)) goto LAB_1803a9014;
      }
      else {
        DAT_1809036a0 = 1000;
LAB_1803a9014:
        lVar6 = -1;
        do {
          local_6a0 = lVar6 + 1;
          lVar10 = lVar6 + 1;
          lVar6 = local_6a0;
        } while ("client.dll:488B01488D5424204C8BF1FF9070050000+11"[lVar10] != '\0');
        local_6a8 = "client.dll:488B01488D5424204C8BF1FF9070050000+11";
        local_698 = "patterns::pawn_eye_update_return";
        puStack_690 = (undefined *)0x20;
        DAT_180c717e8 = FUN_1800e5d20(&local_698,&local_6a8);
        DAT_1809036a8 = lVar7;
        DAT_180c71800 = 0xffffffffffffffff;
        if (DAT_180c717e8 == 0) {
          DAT_180c71800 = DAT_1809036a0 + UVar4;
          if (DAT_1809036a0 < 60000) {
            DAT_1809036a0 = DAT_1809036a0 * 2;
          }
          else {
            DAT_1809036a0 = 60000;
          }
        }
        else {
          DAT_1809036a0 = 1000;
        }
      }
      lVar10 = DAT_180c717e8;
      FUN_1805f68fc(&DAT_180903650);
    }
    param_2 = local_6c0;
  }
  if ((((local_6b0 != lVar10) || (ppuVar11 == (undefined **)0x0)) || (ppuVar11 != param_2)) ||
     (DAT_180c70b40 == '\0')) goto LAB_1803a94d5;
  puVar5 = (undefined4 *)FUN_180415e00();
  lVar7 = DAT_180c717c8;
  local_6c0 = (undefined **)CONCAT44(local_6c0._4_4_,*puVar5);
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (lVar7 == 0) {
    bVar16 = false;
    puVar13 = local_6c8;
  }
  else {
    local_6d8 = (undefined *)0x0;
    cVar2 = FUN_1804514f0(&local_6d8,lVar7,8);
    if (cVar2 == '\0') {
      bVar16 = false;
      puVar13 = local_6c8;
    }
    else {
      bVar16 = true;
      puVar13 = local_6d8;
    }
  }
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if (!bVar16) {
    puVar13 = (undefined *)0x0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1809035f0;
  lVar7 = DAT_1808da460;
  if ((DAT_1809035f0 != DAT_1808da460) || (lVar10 = DAT_180c717c0, DAT_180c717c0 == 0)) {
    UVar4 = GetTickCount64();
    if ((lVar6 == lVar7) && (UVar4 < DAT_180c717b8)) {
      lVar10 = 0;
    }
    else {
      local_6d8 = &DAT_1809035a0;
      iVar3 = FUN_1805f68d0(&DAT_1809035a0);
      if (iVar3 != 0) {
LAB_1803a9660:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809035ec == 0x7fffffff) {
        DAT_1809035ec = 0x7ffffffe;
LAB_1803a9655:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1809035f0 == lVar7) {
        if ((DAT_180c717c0 == 0) && (DAT_180c717b8 <= UVar4)) goto LAB_1803a920e;
      }
      else {
        DAT_1809035f8 = 1000;
LAB_1803a920e:
        puVar8 = (undefined *)0xffffffffffffffff;
        do {
          puStack_690 = puVar8 + 1;
          puVar1 = puVar8 + 1;
          puVar8 = puStack_690;
        } while ("client.dll:8B81????????84D274??FFC08981????????C383E8018981????????75??80B9"
                 [(longlong)puVar1] != '\0');
        local_698 = "client.dll:8B81????????84D274??FFC08981????????C383E8018981????????75??80B9";
        local_6a8 = "patterns::prediction_set_state";
        local_6a0 = 0x1e;
        DAT_180c717c0 = FUN_1800e5d20(&local_6a8,&local_698);
        DAT_1809035f0 = lVar7;
        DAT_180c717b8 = 0xffffffffffffffff;
        if (DAT_180c717c0 == 0) {
          DAT_180c717b8 = DAT_1809035f8 + UVar4;
          uVar14 = DAT_1809035f8 * 2;
          if (59999 < DAT_1809035f8) {
            uVar14 = 60000;
          }
        }
        DAT_1809035f8 = uVar14;
      }
      lVar10 = DAT_180c717c0;
      FUN_1805f68fc(&DAT_1809035a0);
    }
  }
  FUN_1803aaae0(&local_6d8,lVar10,puVar13);
  puVar13 = local_6d8;
  cVar2 = local_6d8._4_1_;
  iVar3 = (int)(float)local_6c0;
  iVar9 = (int)local_6d8;
  if ((((float)local_6c0 == 0.0) && (local_6d8._4_1_ != '\0')) && (iVar9 == 0)) {
    local_678 = 0;
    pRStack_670 = (PSRWLOCK)0x0;
    uStack_668 = 0;
    uStack_660 = 0;
    FUN_180244f40();
    if ((((char)uStack_660 != (char)puVar13) && (DAT_180cad2e0 == 1)) &&
       (DAT_180cad6b8 != (char)puVar13)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_698 = _DAT_180bb8890;
      puStack_690 = puRam0000000180bb8898;
      uStack_688 = uRam0000000180bb88a0;
      uStack_680 = uRam0000000180bb88a8;
      cVar2 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      puVar13 = local_6c8;
      if ((puStack_690 == local_6c8) && (cVar2 != '\0')) {
        local_718 = ppuVar11;
        FUN_18024c5d0(&DAT_180b8e420,6,0,0);
        FUN_18024b690(&DAT_180b8e420,&local_6c0,puVar13);
        if (local_6b4 != '\0') {
          local_6d8 = *ppuVar11;
          *ppuVar11 = (undefined *)local_6c0;
          *(float *)(ppuVar11 + 1) = local_6b8;
          local_718 = ppuVar11;
          FUN_18024c5d0(&DAT_180b8e420,7,0,0);
          UVar4 = GetTickCount64();
          if (DAT_180c717b0 <= UVar4) {
            DAT_180c717b0 = UVar4 + 2000;
            LOCK();
            UNLOCK();
            FUN_18063ab10(local_658,0,0x600);
            local_6f8 = (double)(float)local_6c0;
            local_700 = (double)local_6c0._4_4_;
            local_708 = (double)local_6d8._4_4_;
            local_710 = (char *)local_6b0;
            local_718 = (undefined **)puVar13;
            FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                          "pawn=0x%llx caller=0x%llx native_yaw=%.3f pose_yaw=%.3f pose_pitch=%.3f source=antiaim_presentation camera_modified=0 server_pose=unverified"
                         );
            local_718 = &PTR_180700558;
            if (local_658[0] != '\0') {
              local_718 = (undefined **)&DAT_1806bcfc0;
            }
            local_710 = local_658;
            FUN_1800f6900(0);
          }
        }
      }
    }
    FUN_180180bf0(&local_678);
    if ((char)uStack_668 != '\0') {
      ReleaseSRWLockShared(pRStack_670);
    }
  }
  else if ((DAT_180cad2e0 == 1) && (DAT_180cad6b8 != '\0')) {
    if ((float)local_6c0 == 0.0) {
      lVar7 = 2 - (ulonglong)(local_6d8._4_1_ != '\0');
    }
    else {
      lVar7 = 0;
    }
    UVar4 = GetTickCount64();
    uVar14 = (&DAT_180c717d0)[lVar7];
    if (uVar14 <= UVar4) {
      LOCK();
      bVar16 = uVar14 == (&DAT_180c717d0)[lVar7];
      if (bVar16) {
        (&DAT_180c717d0)[lVar7] = UVar4 + 2000;
      }
      UNLOCK();
      if (bVar16) {
        if (iVar3 == 0) {
          pcVar15 = "unknown_prediction_context";
          if (cVar2 != '\0') {
            pcVar15 = "native_prediction";
          }
        }
        else {
          pcVar15 = "isolated_trial";
        }
        iVar12 = -1;
        if (cVar2 != '\0') {
          iVar12 = iVar9;
        }
        FUN_18063ab10(local_658,0,0x600);
        local_700 = (double)*(float *)ppuVar11;
        local_708 = (double)*(float *)((longlong)ppuVar11 + 4);
        local_6f8 = (double)CONCAT44(local_6f8._4_4_,(uint)(iVar3 != 0));
        local_710 = (char *)local_6b0;
        local_718 = (undefined **)local_6c8;
        local_6f0 = iVar12;
        local_6e8 = pcVar15;
        FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                      "pawn=0x%llx caller=0x%llx native_yaw=%.3f native_pitch=%.3f isolated=%d native_depth=%d reason=%s presentation_override=0 server_pose=unverified"
                     );
        local_718 = &PTR_180700558;
        if (local_658[0] != '\0') {
          local_718 = (undefined **)&DAT_1806bcfc0;
        }
        local_710 = local_658;
        FUN_1800f6900(0);
      }
    }
  }
LAB_1803a94d5:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



