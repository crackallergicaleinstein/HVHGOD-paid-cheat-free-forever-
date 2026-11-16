// FUN_1802017f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802017f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802017f0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 *param_7)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_6c8 [32];
  undefined **local_6a8;
  char *local_6a0;
  undefined *local_698;
  undefined *local_690;
  undefined8 uStack_688;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6c8;
  DAT_180ccaa00 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_690 = _DAT_180bb88b0;
  uStack_688 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  uVar10 = 0xffffffffffffffff;
  iVar8 = DAT_180c63768;
  if (DAT_180c63768 == 0) {
    UVar4 = GetTickCount64();
    if (UVar4 < DAT_180c63760) {
      iVar8 = 0;
    }
    else {
      local_698 = &DAT_1808e9240;
      iVar8 = FUN_1805f68d0(&DAT_1808e9240);
      if (iVar8 != 0) goto LAB_180201fbd;
      if (DAT_1808e928c == 0x7fffffff) {
        DAT_1808e928c = 0x7ffffffe;
        goto LAB_180201fb2;
      }
      if ((DAT_180c63768 == 0) && (DAT_180c63760 <= UVar4)) {
        DAT_180c63768 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c63768 == 0) {
          DAT_180c63760 = UVar4 + 1000;
        }
        else {
          DAT_180c63760 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c63768;
      FUN_1805f68fc(&DAT_1808e9240);
    }
  }
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if (iVar8 + param_3 == 0) {
    bVar1 = false;
  }
  else {
    local_698 = (undefined *)((ulonglong)local_698 & 0xffffffffffff0000);
    cVar2 = FUN_1804514f0(&local_698,iVar8 + param_3,2);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar9 = local_698._0_2_;
  lVar5 = FUN_18017ea70();
  iVar8 = *(int *)(lVar5 + 4);
  if (iVar8 != 0) {
    iVar8 = iVar8 + -1;
    *(int *)(lVar5 + 4) = iVar8;
  }
  if (!bVar1) {
    uVar9 = 0;
  }
  cVar2 = FUN_180222280(iVar8,param_3,uVar9,(ulonglong)local_690 & 0xffffffff);
  if (cVar2 != '\0') {
    iVar8 = DAT_180c63754;
    if (DAT_180c63754 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c63758) {
        iVar8 = 0;
      }
      else {
        local_698 = &DAT_1808e91f0;
        iVar8 = FUN_1805f68d0(&DAT_1808e91f0);
        if (iVar8 != 0) goto LAB_180201fbd;
        if (DAT_1808e923c == 0x7fffffff) {
          DAT_1808e923c = 0x7ffffffe;
          goto LAB_180201fb2;
        }
        if ((DAT_180c63754 == 0) && (DAT_180c63758 <= UVar4)) {
          DAT_180c63754 = FUN_1804174b0("C_EconEntity",0xa12d48f);
          if (DAT_180c63754 == 0) {
            DAT_180c63758 = UVar4 + 1000;
          }
          else {
            DAT_180c63758 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c63754;
        FUN_1805f68fc(&DAT_1808e91f0);
      }
    }
    cVar2 = FUN_1804513c0(iVar8 + param_2,4,1);
    if (cVar2 == '\0') goto LAB_180201f27;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar2 = FUN_1801ad800(iVar8 + param_2,param_7);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (cVar2 == '\0') goto LAB_180201f27;
    iVar8 = DAT_180c63750;
    if (DAT_180c63750 == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c63748) {
        iVar8 = 0;
      }
      else {
        local_698 = &DAT_1808e91a0;
        iVar8 = FUN_1805f68d0(&DAT_1808e91a0);
        if (iVar8 != 0) goto LAB_180201fbd;
        if (DAT_1808e91ec == 0x7fffffff) {
          DAT_1808e91ec = 0x7ffffffe;
          goto LAB_180201fb2;
        }
        if ((DAT_180c63750 == 0) && (DAT_180c63748 <= UVar4)) {
          DAT_180c63750 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
          if (DAT_180c63750 == 0) {
            DAT_180c63748 = UVar4 + 1000;
          }
          else {
            DAT_180c63748 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c63750;
        FUN_1805f68fc(&DAT_1808e91a0);
      }
    }
    cVar2 = FUN_1804513c0(iVar8 + param_2,4,1);
    if (cVar2 == '\0') goto LAB_180201f27;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar2 = FUN_1801ad800(iVar8 + param_2,param_7 + 2);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    iVar8 = DAT_180c6373c;
    if (cVar2 == '\0') goto LAB_180201f27;
    if ((DAT_180c6373c == 0) && (UVar4 = GetTickCount64(), DAT_180c63740 <= UVar4)) {
      local_698 = &DAT_1808e9150;
      iVar8 = FUN_1805f68d0(&DAT_1808e9150);
      if (iVar8 != 0) goto LAB_180201fbd;
      if (DAT_1808e919c == 0x7fffffff) {
        DAT_1808e919c = 0x7ffffffe;
        goto LAB_180201fb2;
      }
      if ((DAT_180c6373c == 0) && (DAT_180c63740 <= UVar4)) {
        DAT_180c6373c = FUN_1804174b0("C_EconEntity",0x86253266);
        if (DAT_180c6373c == 0) {
          DAT_180c63740 = UVar4 + 1000;
        }
        else {
          DAT_180c63740 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c6373c;
      FUN_1805f68fc(&DAT_1808e9150);
    }
    cVar2 = FUN_1804513c0(iVar8 + param_2,4,1);
    if (cVar2 == '\0') goto LAB_180201f27;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar2 = FUN_1801ad800(iVar8 + param_2,param_7 + 1);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    iVar8 = DAT_180c63738;
    if (cVar2 == '\0') goto LAB_180201f27;
    if (*(char *)(param_7 + 3) == '\0') {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = param_7[4];
    }
    local_698 = (undefined *)CONCAT44(local_698._4_4_,uVar3);
    if ((DAT_180c63738 == 0) && (UVar4 = GetTickCount64(), DAT_180c63730 <= UVar4)) {
      local_690 = &DAT_1808e9100;
      iVar8 = FUN_1805f68d0(&DAT_1808e9100);
      if (iVar8 != 0) goto LAB_180201fbd;
      if (DAT_1808e914c == 0x7fffffff) {
        DAT_1808e914c = 0x7ffffffe;
        goto LAB_180201fb2;
      }
      if ((DAT_180c63738 == 0) && (DAT_180c63730 <= UVar4)) {
        DAT_180c63738 = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
        if (DAT_180c63738 == 0) {
          DAT_180c63730 = UVar4 + 1000;
        }
        else {
          DAT_180c63730 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c63738;
      FUN_1805f68fc(&DAT_1808e9100);
    }
    cVar2 = FUN_1804513c0(iVar8 + param_2,4,1);
    if (cVar2 != '\0') {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      cVar2 = FUN_1801ad800(iVar8 + param_2,&local_698);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if (cVar2 != '\0') {
        uVar6 = FUN_180208890(&DAT_180cc9bb0,*param_7);
        iVar8 = DAT_180c63724;
        if (DAT_180c63724 == 0) {
          UVar4 = GetTickCount64();
          if (UVar4 < DAT_180c63728) {
            iVar8 = 0;
          }
          else {
            local_690 = &DAT_1808e90b0;
            iVar8 = FUN_1805f68d0(&DAT_1808e90b0);
            if (iVar8 != 0) {
LAB_180201fbd:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808e90fc == 0x7fffffff) {
              DAT_1808e90fc = 0x7ffffffe;
LAB_180201fb2:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c63724 == 0) && (DAT_180c63728 <= UVar4)) {
              DAT_180c63724 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
              if (DAT_180c63724 == 0) {
                uVar10 = UVar4 + 1000;
              }
              DAT_180c63728 = uVar10;
            }
            iVar8 = DAT_180c63724;
            FUN_1805f68fc(&DAT_1808e90b0);
          }
        }
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        if (iVar8 + param_3 == 0) {
          bVar1 = false;
        }
        else {
          local_698 = (undefined *)((ulonglong)local_698 & 0xffffffffffff0000);
          cVar2 = FUN_1804514f0(&local_698,iVar8 + param_3,2);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        uVar9 = local_698._0_2_;
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (!bVar1) {
          uVar9 = 0;
        }
        cVar2 = FUN_1801846a0(param_2,param_3,uVar9);
        if (cVar2 == '\0') {
        }
        local_6a8 = (undefined **)param_6;
        local_6a0 = (char *)uVar6;
        uVar6 = FUN_180202ec0(extraout_XMM0_Qa,param_2,param_4,param_5);
        FUN_1802045a0(uVar6,param_3);
        DAT_180ccaa00 = param_3;
        plVar7 = (longlong *)FUN_18017bf40(&local_690);
        DAT_180ccaa08 = *plVar7 + 50000000;
      }
    }
  }
LAB_180201f27:
  FUN_18063ab10(local_648,0,0x600);
  local_6a8 = (undefined **)CONCAT44(local_6a8._4_4_,param_4);
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "feature=guns handle=0x%X reason=entity_transition");
  local_6a8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_6a8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6a0 = local_648;
  FUN_1800f6900(2);
}



