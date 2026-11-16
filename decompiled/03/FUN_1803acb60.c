// FUN_1803acb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803acb60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803acb60(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [8];
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  int *piVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auVar13 [8];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar14;
  float fVar15;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 uStack_68;
  longlong local_60;
  PSRWLOCK pRStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c65e3c != 0) {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (param_1 + 0x18 == 0) {
      bVar3 = false;
    }
    else {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_68;
      _local_70 = auVar2 << 0x40;
      cVar6 = FUN_1804514f0(local_70,param_1 + 0x18,8);
      if (cVar6 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    auVar5 = local_70;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    auVar13 = (undefined1  [8])0;
    if (bVar3) {
      auVar13 = auVar5;
    }
    DVar7 = GetCurrentThreadId();
    if (DAT_180c65e3c != 0) {
      uVar12 = 0;
      do {
        if (((&DAT_180c660c0)[uVar12] == DVar7) &&
           ((auVar13 == (undefined1  [8])0x0 ||
            ((undefined1  [8])*(longlong *)(&DAT_180c65e40 + (ulonglong)uVar12 * 8) == auVar13))))
        goto LAB_1803acd08;
        uVar12 = uVar12 + 1;
      } while (uVar12 < 0x40);
    }
  }
  lVar8 = FUN_1803c8060(&DAT_180ccf690,local_78,param_1,param_2);
  if ((((*(char *)(lVar8 + 1) != '\0') ||
       (lVar8 = FUN_1803c8060(&DAT_180cd0770,local_78,param_1,param_2), *(char *)(lVar8 + 1) != '\0'
       )) || (lVar8 = FUN_1803c8060(&DAT_180cd1850,local_78,param_1,param_2),
             *(char *)(lVar8 + 1) != '\0')) ||
     (lVar8 = FUN_1803c8060(&DAT_180cd2930,local_78,param_1,param_2), *(char *)(lVar8 + 1) != '\0'))
  goto LAB_1803ad07e;
  if (param_1 != 0) {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    bVar3 = false;
    if (param_1 + 0x18 != 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uStack_68;
      _local_70 = auVar4 << 0x40;
      cVar6 = FUN_1804514f0(local_70,param_1 + 0x18,8);
      if (cVar6 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    auVar5 = local_70;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    auVar13 = (undefined1  [8])0;
    if (bVar3) {
      auVar13 = auVar5;
    }
    cVar6 = FUN_1803ab8e0(auVar13);
    if (cVar6 != '\0') {
LAB_1803acd08:
      if (param_2 != 0) {
        _local_70 = (undefined1  [16])0x0;
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        FUN_18029af40(param_2,local_70);
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
      }
      goto LAB_1803ad07e;
    }
  }
  local_60 = 0;
  pRStack_58 = (PSRWLOCK)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_180244f40();
  if ((char)uStack_48 == '\0') {
    if (local_60 != 0) {
      piVar9 = (int *)FUN_1801acaf0();
      if ((uStack_48._1_1_ != '\0') && (*piVar9 != 0)) {
        *piVar9 = *piVar9 + -1;
      }
      if ((char)uStack_50 != '\0') {
        if (pRStack_58 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_58);
        uStack_50 = uStack_50 & 0xffffffffffffff00;
      }
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      local_60 = 0;
    }
    if (DAT_180c703f0 != 0) {
      (*(code *)DAT_180c703f0)(param_1,param_2);
    }
    goto LAB_1803acfa9;
  }
  cVar6 = (char)uStack_48;
  if ((param_1 == 0) || (lVar8 = *(longlong *)(param_1 + 0x18), lVar8 == 0)) {
LAB_1803acfbb:
    if (local_60 != 0) {
      if (cVar6 != '\0') {
        LOCK();
        *(int *)(local_60 + 0x5c) = *(int *)(local_60 + 0x5c) + -1;
        UNLOCK();
      }
      piVar9 = (int *)FUN_1801acaf0();
      if ((uStack_48._1_1_ != '\0') && (*piVar9 != 0)) {
        *piVar9 = *piVar9 + -1;
      }
      if ((char)uStack_50 != '\0') {
        if (pRStack_58 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_58);
        uStack_50 = uStack_50 & 0xffffffffffffff00;
      }
      cVar6 = '\0';
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      local_60 = 0;
    }
    if (DAT_180c703f0 != 0) {
      (*(code *)DAT_180c703f0)(param_1,param_2);
      cVar6 = (char)uStack_48;
    }
    if (local_60 != 0) {
      if (cVar6 != '\0') {
        LOCK();
        *(int *)(local_60 + 0x5c) = *(int *)(local_60 + 0x5c) + -1;
        UNLOCK();
      }
      piVar9 = (int *)FUN_1801acaf0();
      if ((uStack_48._1_1_ != '\0') && (*piVar9 != 0)) {
        *piVar9 = *piVar9 + -1;
      }
      if ((char)uStack_50 != '\0') {
        if (pRStack_58 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_58);
        uStack_50 = uStack_50 & 0xffffffffffffff00;
      }
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      local_60 = 0;
    }
  }
  else {
    pcVar10 = (char *)FUN_1803d3fa0(uStack_48 & 0xff,lVar8);
    if (pcVar10 == (char *)0x0) {
LAB_1803acfb7:
      cVar6 = (char)uStack_48;
      goto LAB_1803acfbb;
    }
    uVar12 = 0x811c9dc5;
    cVar6 = *pcVar10;
    if (cVar6 != '\0') {
      do {
        pcVar10 = pcVar10 + 1;
        uVar12 = ((int)cVar6 ^ uVar12) * 0x1000193;
        cVar6 = *pcVar10;
      } while (cVar6 != '\0');
      if (uVar12 == 0) goto LAB_1803acfb7;
    }
    local_70[4] = 0;
    cVar6 = FUN_1801f67d0(lVar8,uVar12,local_70);
    if (cVar6 == '\0') {
      uVar14 = extraout_XMM0_Qa;
      if ((((param_2 != 0) && (uVar12 == 0x87cce03e)) &&
          (pcVar10 = (char *)FUN_18029ac00(lVar8), uVar14 = extraout_XMM0_Qa_00,
          pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) {
        uVar1 = *(uint *)(pcVar10 + 0x68);
        if ((pcVar10 == &DAT_180cb2d28) && (DAT_180b8f9e8 != '\0')) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = 1.0;
        }
        local_70._4_4_ = (float)(uVar1 >> 8 & 0xff) / 255.0;
        local_70._0_4_ = (float)(uVar1 & 0xff) / 255.0;
        uStack_68._0_4_ = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
        uStack_68._4_4_ = ((float)(uVar1 >> 0x18) / 255.0) * fVar15;
        lVar11 = FUN_18017ea70();
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
        cVar6 = FUN_18029af40(param_2,local_70);
        lVar11 = FUN_18017ea70();
        if (*(int *)(lVar11 + 4) != 0) {
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
        }
        uVar14 = extraout_XMM0_Qa_01;
        if (cVar6 != '\0') goto LAB_1803acfa9;
      }
      cVar6 = FUN_18027dcb0(uVar14,lVar8,uVar12,param_2);
      if (cVar6 == '\0') goto LAB_1803acfb7;
    }
    else if (param_2 != 0) {
      _local_70 = (undefined1  [16])0x0;
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      FUN_18029af40(param_2,local_70);
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
    }
LAB_1803acfa9:
    FUN_180180bf0(&local_60);
  }
  if ((char)uStack_50 != '\0') {
    ReleaseSRWLockShared(pRStack_58);
  }
LAB_1803ad07e:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



