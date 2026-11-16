// FUN_180216210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180216210 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180216210(undefined8 param_1,longlong param_2,longlong param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_6c8 [32];
  undefined **local_6a8;
  char *local_6a0;
  undefined4 local_698 [2];
  undefined *local_690;
  undefined8 uStack_688;
  char local_648 [1536];
  ulonglong local_48;
  
  iVar2 = DAT_180c63aec;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6c8;
  DAT_180c710c8 = 0;
  local_698[0] = CONCAT22(local_698[0]._2_2_,*param_4);
  if ((DAT_180c63aec == 0) && (UVar3 = GetTickCount64(), DAT_180c63af0 <= UVar3)) {
    local_690 = &DAT_1808ea830;
    iVar2 = FUN_1805f68d0(&DAT_1808ea830);
    if (iVar2 != 0) goto LAB_1802168d4;
    if (DAT_1808ea87c == 0x7fffffff) {
      DAT_1808ea87c = 0x7ffffffe;
      goto LAB_1802168c9;
    }
    if ((DAT_180c63aec == 0) && (DAT_180c63af0 <= UVar3)) {
      DAT_180c63aec = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
      if (DAT_180c63aec == 0) {
        DAT_180c63af0 = UVar3 + 1000;
      }
      else {
        DAT_180c63af0 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c63aec;
    FUN_1805f68fc(&DAT_1808ea830);
  }
  cVar1 = FUN_1804513c0(iVar2 + param_3,2,1);
  if (cVar1 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar1 = FUN_1801aec90(iVar2 + param_3,local_698);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (cVar1 == '\0') goto LAB_180216835;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_690 = _DAT_180bb88b0;
    uStack_688 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    cVar1 = FUN_180222280();
    iVar2 = DAT_180c63ae8;
    if (cVar1 == '\0') goto LAB_180216835;
    if ((DAT_180c63ae8 == 0) && (UVar3 = GetTickCount64(), DAT_180c63ae0 <= UVar3)) {
      local_690 = &DAT_1808ea7e0;
      iVar2 = FUN_1805f68d0(&DAT_1808ea7e0);
      if (iVar2 != 0) goto LAB_1802168d4;
      if (DAT_1808ea82c == 0x7fffffff) {
        DAT_1808ea82c = 0x7ffffffe;
        goto LAB_1802168c9;
      }
      if ((DAT_180c63ae8 == 0) && (DAT_180c63ae0 <= UVar3)) {
        DAT_180c63ae8 = FUN_1804174b0("C_EconEntity",0xa12d48f);
        if (DAT_180c63ae8 == 0) {
          DAT_180c63ae0 = UVar3 + 1000;
        }
        else {
          DAT_180c63ae0 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c63ae8;
      FUN_1805f68fc(&DAT_1808ea7e0);
    }
    cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
    if (cVar1 == '\0') goto LAB_180216835;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar1 = FUN_1801ad800(iVar2 + param_2,param_5);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    iVar2 = DAT_180c63ad4;
    if (cVar1 == '\0') goto LAB_180216835;
    if ((DAT_180c63ad4 == 0) && (UVar3 = GetTickCount64(), DAT_180c63ad8 <= UVar3)) {
      local_690 = &DAT_1808ea790;
      iVar2 = FUN_1805f68d0(&DAT_1808ea790);
      if (iVar2 != 0) goto LAB_1802168d4;
      if (DAT_1808ea7dc == 0x7fffffff) {
        DAT_1808ea7dc = 0x7ffffffe;
        goto LAB_1802168c9;
      }
      if ((DAT_180c63ad4 == 0) && (DAT_180c63ad8 <= UVar3)) {
        DAT_180c63ad4 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
        if (DAT_180c63ad4 == 0) {
          DAT_180c63ad8 = UVar3 + 1000;
        }
        else {
          DAT_180c63ad8 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c63ad4;
      FUN_1805f68fc(&DAT_1808ea790);
    }
    cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
    if (cVar1 == '\0') goto LAB_180216835;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar1 = FUN_1801ad800(iVar2 + param_2,param_5 + 2);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    iVar2 = DAT_180c63ad0;
    if (cVar1 == '\0') goto LAB_180216835;
    if ((DAT_180c63ad0 == 0) && (UVar3 = GetTickCount64(), DAT_180c63ac8 <= UVar3)) {
      local_690 = &DAT_1808ea740;
      iVar2 = FUN_1805f68d0(&DAT_1808ea740);
      if (iVar2 != 0) goto LAB_1802168d4;
      if (DAT_1808ea78c == 0x7fffffff) {
        DAT_1808ea78c = 0x7ffffffe;
        goto LAB_1802168c9;
      }
      if ((DAT_180c63ad0 == 0) && (DAT_180c63ac8 <= UVar3)) {
        DAT_180c63ad0 = FUN_1804174b0("C_EconEntity",0x86253266);
        if (DAT_180c63ad0 == 0) {
          DAT_180c63ac8 = UVar3 + 1000;
        }
        else {
          DAT_180c63ac8 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c63ad0;
      FUN_1805f68fc(&DAT_1808ea740);
    }
    cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
    if (cVar1 != '\0') {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      cVar1 = FUN_1801ad800(iVar2 + param_2,param_5 + 1);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      iVar2 = DAT_180c63abc;
      if (cVar1 != '\0') {
        if (*(char *)(param_5 + 3) == '\0') {
          local_698[0] = 0xffffffff;
        }
        else {
          local_698[0] = param_5[4];
        }
        if ((DAT_180c63abc == 0) && (UVar3 = GetTickCount64(), DAT_180c63ac0 <= UVar3)) {
          local_690 = &DAT_1808ea6f0;
          iVar2 = FUN_1805f68d0(&DAT_1808ea6f0);
          if (iVar2 != 0) {
LAB_1802168d4:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ea73c == 0x7fffffff) {
            DAT_1808ea73c = 0x7ffffffe;
LAB_1802168c9:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c63abc == 0) && (DAT_180c63ac0 <= UVar3)) {
            DAT_180c63abc = FUN_1804174b0("C_EconEntity",0x67ecc1e7);
            if (DAT_180c63abc == 0) {
              DAT_180c63ac0 = UVar3 + 1000;
            }
            else {
              DAT_180c63ac0 = 0xffffffffffffffff;
            }
          }
          iVar2 = DAT_180c63abc;
          FUN_1805f68fc(&DAT_1808ea6f0);
        }
        cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
        if (cVar1 != '\0') {
          lVar4 = FUN_18017ea70();
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          cVar1 = FUN_1801ad800(iVar2 + param_2,local_698);
          lVar4 = FUN_18017ea70();
          if (*(int *)(lVar4 + 4) != 0) {
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
          }
          if (cVar1 != '\0') {
            uVar5 = FUN_180208890(&DAT_180cc9bb0,*param_5);
            cVar1 = FUN_1801846a0(param_2,param_3,*param_4);
            DAT_180c710a8 = 1;
            if (cVar1 == '\0') {
              DAT_180c710a8 = 1;
            }
            local_6a8 = (undefined **)uVar5;
            uVar5 = FUN_180217720(extraout_XMM0_Qa,param_2,param_7,param_8);
            FUN_180218a40(uVar5,param_3);
            DAT_180c710c8 = param_3;
            plVar6 = (longlong *)FUN_18017bf40(&local_690);
            DAT_180c710d0 = *plVar6 + 50000000;
          }
        }
      }
    }
  }
LAB_180216835:
  FUN_18063ab10(local_648,0,0x600);
  local_6a8 = (undefined **)CONCAT44(local_6a8._4_4_,DAT_180c71094);
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "feature=knives handle=0x%X reason=entity_transition");
  local_6a8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_6a8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6a0 = local_648;
  FUN_1800f6900(2,local_6a0,"SkinChanger","SKIN_WRITE_DEFERRED");
}



