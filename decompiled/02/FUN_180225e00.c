// FUN_180225e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180225e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180225e00(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_6c8 [32];
  undefined **local_6a8;
  char *local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  longlong lStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined4 local_670;
  char local_66c [4];
  undefined8 local_668;
  ulonglong uStack_660;
  longlong lStack_658;
  undefined8 uStack_650;
  char local_648;
  undefined *local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  uVar3 = DAT_180c63120;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6c8;
  if (param_1 == 0) {
  }
  if (DAT_180bbec80 != param_1) {
  }
  if (DAT_180c63119 == '\0') {
  }
  if (DAT_1808e6c00 == '\0') {
  }
  UVar7 = GetTickCount64();
  if (uVar3 <= UVar7) {
  }
  if (DAT_180c63118 == '\0') {
  }
  local_640 = &DAT_1808dafe0;
  iVar6 = FUN_1805f68d0(&DAT_1808dafe0);
  uVar3 = DAT_180bbecc8;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808db02c == 0x7fffffff) {
    DAT_1808db02c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (((((param_1 != DAT_180bbec98) || (param_4 != DAT_180bbecb0)) ||
       (UVar7 = GetTickCount64(), uVar3 <= UVar7)) ||
      ((DAT_180bbecc0 == 0 || (DAT_180c630e8 != DAT_180bbecc0)))) ||
     (((DAT_180c630f8 != DAT_180bbecc0 ||
       ((DAT_180c630f0 != DAT_180bbecc0 ||
        (lVar8 = FUN_1803d4150(DAT_180bbecc0,DAT_180bbecb8), lVar8 != param_1)))) ||
      (cVar5 = FUN_180224cb0(DAT_180bbec90), cVar5 == '\0')))) goto LAB_18022636b;
  plVar9 = (longlong *)FUN_180224dc0(&local_698,DAT_180bbec90,DAT_180bbecbc);
  lStack_688 = plVar9[2];
  lVar8 = plVar9[1];
  if (*plVar9 != 0) {
    lVar8 = *plVar9;
  }
  if (lVar8 != DAT_180bbeca0) goto LAB_18022636b;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (param_2 == 0) {
LAB_180225ff5:
    local_66c[0] = '\0';
  }
  else {
    local_698 = 0;
    uStack_690 = uStack_690 & 0xffffffff00000000;
    cVar5 = FUN_1804514f0(&local_698,param_2,0xc);
    if (cVar5 == '\0') goto LAB_180225ff5;
    local_678 = local_698;
    local_670 = (uint)uStack_690;
    local_66c[0] = '\x01';
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (param_3 == 0) {
LAB_18022604e:
    local_648 = '\0';
  }
  else {
    local_698 = 0;
    uStack_690 = 0;
    lStack_688 = 0;
    uStack_680 = 0;
    cVar5 = FUN_1804514f0(&local_698,param_3,0x20);
    if (cVar5 == '\0') goto LAB_18022604e;
    local_668 = local_698;
    uStack_660 = uStack_690;
    lStack_658 = lStack_688;
    uStack_650 = uStack_680;
    local_648 = '\x01';
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  lVar4 = DAT_180bbecd0;
  lVar8 = DAT_180bbecc0;
  if ((local_66c[0] != '\0') && (local_648 != '\0')) {
    lVar10 = 0;
    do {
      if (*(float *)(local_66c + lVar10 + -0xc) != *(float *)(local_66c + lVar10 + 4))
      goto LAB_18022636b;
      lVar2 = lVar10 + -8;
      lVar10 = lVar10 + 4;
    } while (local_66c + lVar2 != local_66c);
    iVar6 = FUN_1805f68d0(&DAT_1808e6b40);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e6b8c == 0x7fffffff) {
      DAT_1808e6b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    UVar7 = GetTickCount64();
    if ((((DAT_1808e6a50 == lVar8) && (DAT_1808e6a58 == lVar4)) && (DAT_1808e6990 == lVar8)) &&
       (((DAT_1808e6998 == lVar4 && (UVar7 < DAT_1808e69a0)) &&
        ((DAT_1808e6b28 != '\0' || (UVar7 < DAT_1808e6b30)))))) {
      if ((((DAT_1808e6b10 & 0x7f800000) == 0x7f800000) ||
          ((DAT_1808e6b14 & 0x7f800000) == 0x7f800000)) ||
         (bVar11 = (DAT_1808e6b18 & 0x7f800000) != 0x7f800000, !bVar11)) {
        uStack_690._0_5_ = (uint5)(uint)uStack_690;
        bVar11 = false;
      }
      else {
        auVar1 = vunpcklps_avx(ZEXT416(DAT_1808e6b10),ZEXT416(DAT_1808e6b14));
        local_698 = auVar1._0_8_;
        uStack_690._0_5_ = CONCAT14(bVar11,DAT_1808e6b18);
        _DAT_1808e6b10 = local_698;
      }
      FUN_1805f68fc(&DAT_1808e6b40);
      if ((bVar11) && (cVar5 = FUN_1804513c0(param_2,0xc,1), cVar5 != '\0')) {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        cVar5 = FUN_18022ffa0(param_2,&local_698);
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        if (cVar5 != '\0') {
          cVar5 = FUN_1804513c0(param_3,0xc,1);
          if (cVar5 != '\0') {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            cVar5 = FUN_18022ffa0(param_3,&local_698);
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            lVar8 = DAT_180c64040;
            if (cVar5 != '\0') {
              if (DAT_180c63e60 != DAT_180c64040) {
                DAT_180c63e60 = DAT_180c64040;
                FUN_18063ab10(local_638,0,0x600);
                local_6a0 = (char *)lVar8;
                local_6a8 = (undefined **)DAT_180bbecc0;
                FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                              "session=%llu hold=%llu source=visible_hud_bounds stock_pick_required=0 initial_snap=0 scope=owned_preview visual_ack=pending"
                             );
                local_6a8 = &PTR_180700558;
                if (local_638[0] != '\0') {
                  local_6a8 = (undefined **)&DAT_1806bcfc0;
                }
                local_6a0 = local_638;
                FUN_1800f6900(0);
              }
              goto LAB_18022636b;
            }
          }
          cVar5 = FUN_1804513c0(param_2,0xc,1);
          if (cVar5 != '\0') {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            FUN_18022ffa0(param_2,&local_678);
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
          }
        }
      }
    }
    else {
      FUN_1805f68fc(&DAT_1808e6b40);
    }
  }
LAB_18022636b:
  FUN_1805f68fc(&DAT_1808dafe0);
}



