// FUN_1803ac760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ac760 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803ac760(longlong param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  char local_57;
  uint5 local_50 [2];
  PSRWLOCK pRStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c65e3c != 0) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (param_1 + 0x18 == 0) {
      bVar1 = false;
    }
    else {
      local_50[0]._0_8_ = 0;
      cVar2 = FUN_1804514f0(local_50,param_1 + 0x18,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar8 = local_50[0]._0_8_;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    lVar4 = 0;
    if (bVar1) {
      lVar4 = uVar8;
    }
    DVar3 = GetCurrentThreadId();
    if (DAT_180c65e3c != 0) {
      uVar7 = 0;
      do {
        if (((&DAT_180c660c0)[uVar7] == DVar3) &&
           ((lVar4 == 0 || (*(longlong *)(&DAT_180c65e40 + (ulonglong)uVar7 * 8) == lVar4))))
        goto LAB_1803acb10;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x40);
    }
  }
  FUN_1803c8060(&DAT_180ccf690,&local_58,param_1,0);
  if ((((local_57 != '\0') || (FUN_1803c8060(&DAT_180cd0770,&local_58,param_1,0), local_57 != '\0'))
      || (FUN_1803c8060(&DAT_180cd1850,&local_58,param_1,0), local_57 != '\0')) ||
     (FUN_1803c8060(&DAT_180cd2930,&local_58,param_1,0), local_57 != '\0')) goto LAB_1803acb10;
  if (param_1 != 0) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    bVar1 = false;
    if (param_1 + 0x18 != 0) {
      local_50[0]._0_8_ = 0;
      cVar2 = FUN_1804514f0(local_50,param_1 + 0x18,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar8 = local_50[0]._0_8_;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    lVar4 = 0;
    if (bVar1) {
      lVar4 = uVar8;
    }
    cVar2 = FUN_1803ab8e0(lVar4);
    if (cVar2 != '\0') goto LAB_1803acb10;
  }
  local_50[1]._0_8_ = 0;
  pRStack_40 = (PSRWLOCK)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_180244f40();
  if ((char)uStack_30 == '\0') {
    if (local_50[1]._0_8_ != 0) {
      piVar5 = (int *)FUN_1801acaf0();
      if ((uStack_30._1_1_ != '\0') && (*piVar5 != 0)) {
        *piVar5 = *piVar5 + -1;
      }
      if ((char)uStack_38 != '\0') {
        if (pRStack_40 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_40);
        uStack_38 = uStack_38 & 0xffffffffffffff00;
      }
      uStack_30 = uStack_30 & 0xffffffffffffff00;
      local_50[1]._0_8_ = 0;
    }
LAB_1803acadf:
    if (DAT_180c70690 != 0) {
      (*(code *)DAT_180c70690)(param_1);
    }
  }
  else {
    if ((param_1 == 0) || (lVar4 = *(longlong *)(param_1 + 0x18), lVar4 == 0)) {
LAB_1803aca99:
      if (local_50[1]._0_8_ != 0) {
        if ((char)uStack_30 != '\0') {
          LOCK();
          *(int *)(local_50[1]._0_8_ + 0x5c) = *(int *)(local_50[1]._0_8_ + 0x5c) + -1;
          UNLOCK();
        }
        piVar5 = (int *)FUN_1801acaf0();
        if ((uStack_30._1_1_ != '\0') && (*piVar5 != 0)) {
          *piVar5 = *piVar5 + -1;
        }
        if ((char)uStack_38 != '\0') {
          if (pRStack_40 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_40);
          uStack_38 = uStack_38 & 0xffffffffffffff00;
        }
        uStack_30 = uStack_30 & 0xffffffffffffff00;
        local_50[1]._0_8_ = 0;
      }
      goto LAB_1803acadf;
    }
    pcVar6 = (char *)FUN_1803d3fa0(uStack_30 & 0xff,lVar4);
    if (pcVar6 == (char *)0x0) {
LAB_1803aca95:
      goto LAB_1803aca99;
    }
    uVar7 = 0x811c9dc5;
    cVar2 = *pcVar6;
    if (cVar2 != '\0') {
      do {
        pcVar6 = pcVar6 + 1;
        uVar7 = ((int)cVar2 ^ uVar7) * 0x1000193;
        cVar2 = *pcVar6;
      } while (cVar2 != '\0');
      if (uVar7 == 0) goto LAB_1803aca95;
    }
    local_50[0] = (uint5)(uint)local_50[0];
    cVar2 = FUN_1801f67d0(lVar4,uVar7,local_50[0]._0_8_);
    if (cVar2 == '\0') {
      uVar8 = extraout_XMM0_Qa;
      if (uVar7 == 0x87cce03e) {
        pcVar6 = (char *)FUN_18029ac00(lVar4);
        if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
          pcVar6 = (char *)FUN_18029ac00(lVar4);
          uVar8 = extraout_XMM0_Qa_00;
          if (((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) ||
             ((pcVar6 == &DAT_180cb2d28 && (DAT_180b8f9e8 != '\0')))) goto LAB_1803aca82;
        }
        else {
          FUN_18029ac00(lVar4);
        }
      }
      else {
LAB_1803aca82:
        cVar2 = FUN_18027d9c0(uVar8,lVar4,uVar7);
        if (cVar2 == '\0') goto LAB_1803aca95;
      }
    }
  }
  FUN_180180bf0(local_50 + 1);
  if ((char)uStack_38 != '\0') {
    ReleaseSRWLockShared(pRStack_40);
  }
LAB_1803acb10:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



