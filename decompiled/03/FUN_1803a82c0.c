// FUN_1803a82c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a82c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a82c0(undefined8 param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  PSRWLOCK pRStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_68 = 0;
  pRStack_60 = (PSRWLOCK)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_180244f40(param_1,&local_68);
  if (((((char)uStack_50 != '\0') || (((byte)(DAT_1808d9bd8 - 1U) < 2 && (DAT_1808d9bd9 == '\0'))))
      && (param_2 != 0)) && (uVar9 = (ushort)param_3 & 0x7fff, uVar9 < 0x4000)) {
    if ((param_3 - 1 < 0xfffffffe) && ((param_3 & 0x7fff) < 0x4000)) {
      uVar7 = (ulonglong)(param_3 & 0x7fff);
      puVar8 = &DAT_180b0e108 + uVar7 * 4;
      do {
        uVar10 = *puVar8;
        while ((uVar10 & 1) == 0) {
          LOCK();
          uVar1 = *puVar8;
          if (uVar10 == uVar1) {
            *puVar8 = uVar10 + 1;
            uVar4 = uVar10;
          }
          else {
            uVar4 = uVar1;
          }
          UNLOCK();
          if (uVar10 == uVar1) {
            if (((&DAT_180b0e110)[uVar7 * 8] == param_3) && ((&DAT_180b0e118)[uVar7 * 4] == param_2)
               ) {
              (&DAT_180b0e110)[uVar7 * 8] = 0;
              (&DAT_180b0e118)[uVar7 * 4] = 0;
              (&DAT_180b0e120)[uVar7 * 8] = 0;
            }
            *puVar8 = uVar10 + 2;
            goto LAB_1803a83b7;
          }
          uVar10 = uVar4;
        }
      } while( true );
    }
LAB_1803a83b7:
    local_78 = ZEXT816(0x180b0e0f8);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
    local_78[8] = 1;
    for (plVar5 = DAT_180b0e0e0; plVar5 != DAT_180b0e0e8; plVar5 = plVar5 + 3) {
      if (((*(ushort *)((longlong)plVar5 + 0xc) == uVar9) && (*plVar5 == param_2)) &&
         (*(uint *)(plVar5 + 2) == param_3)) {
        if (plVar5 != DAT_180b0e0e8 + -3) {
          lVar3 = DAT_180b0e0e8[-2];
          lVar2 = DAT_180b0e0e8[-1];
          *plVar5 = DAT_180b0e0e8[-3];
          plVar5[1] = lVar3;
          plVar5[2] = lVar2;
        }
        DAT_180b0e0e8 = DAT_180b0e0e8 + -3;
        FUN_1803d4410();
        break;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180b0e0f8);
  }
  if (local_68 != 0) {
    if ((char)uStack_50 != '\0') {
      LOCK();
      *(int *)(local_68 + 0x5c) = *(int *)(local_68 + 0x5c) + -1;
      UNLOCK();
    }
    piVar6 = (int *)FUN_1801acaf0();
    if ((uStack_50._1_1_ != '\0') && (*piVar6 != 0)) {
      *piVar6 = *piVar6 + -1;
    }
    if ((char)uStack_58 != '\0') {
      if (pRStack_60 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_60);
      uStack_58 = uStack_58 & 0xffffffffffffff00;
    }
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    local_68 = 0;
  }
  if (DAT_180c708d0 != 0) {
    (*(code *)DAT_180c708d0)(param_1,param_2,param_3);
  }
  if (local_68 != 0) {
    if ((char)uStack_50 != '\0') {
      LOCK();
      *(int *)(local_68 + 0x5c) = *(int *)(local_68 + 0x5c) + -1;
      UNLOCK();
    }
    piVar6 = (int *)FUN_1801acaf0();
    if ((uStack_50._1_1_ != '\0') && (*piVar6 != 0)) {
      *piVar6 = *piVar6 + -1;
    }
    if ((char)uStack_58 != '\0') {
      if (pRStack_60 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_60);
      uStack_58 = uStack_58 & 0xffffffffffffff00;
    }
    uStack_50 = uStack_50 & 0xffffffffffffff00;
    local_68 = 0;
  }
  if ((char)uStack_58 != '\0') {
    ReleaseSRWLockShared(pRStack_60);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



