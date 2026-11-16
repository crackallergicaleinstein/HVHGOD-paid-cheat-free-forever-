// FUN_1803aa580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aa580 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803aa580(undefined8 param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_48;
  PSRWLOCK pRStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c70210 != 0) {
    (*(code *)DAT_180c70210)();
  }
  local_48 = 0;
  pRStack_40 = (PSRWLOCK)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uVar4 = FUN_180244f40();
  if ((char)uStack_30 != '\0') {
    if (((param_2 != 0) && (DAT_180b8e622 != '\0')) && (DAT_180cc9372 != '\0')) {
      lVar2 = FUN_180252d60(&DAT_180c7e1f0);
      if ((*(char *)(lVar2 + 0x2b0) != '\0') ||
         (uVar4 = extraout_XMM0_Qa, *(char *)(lVar2 + 0x318) != '\0')) {
        FUN_1803dff30(extraout_XMM0_Qa,&local_88);
        local_80 = 0;
        sVar1 = thunk_FUN_180624430(local_88);
        uVar4 = extraout_XMM0_Qa_00;
        if (sVar1 < 1) {
          sVar1 = thunk_FUN_180624430(local_84);
          uVar4 = extraout_XMM0_Qa_01;
          if ((sVar1 < 1) && (param_2 + 0x4b8 != 0)) {
            lVar2 = FUN_18017ea70();
            *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
            FUN_18022ffa0(param_2 + 0x4b8,&local_88);
            lVar2 = FUN_18017ea70();
            uVar4 = extraout_XMM0_Qa_02;
            if (*(int *)(lVar2 + 4) != 0) {
              *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
            }
          }
        }
      }
    }
    FUN_1802b6de0(uVar4,param_2);
    if (DAT_180b0ca60 != '\0') {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      iVar5 = _DAT_180bb88b0;
      uVar6 = uRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      if ((((char)uVar6 != '\0') && (DAT_180bb88c9 == '\0')) && (1 < iVar5)) {
        puVar3 = (undefined8 *)FUN_1803dff30();
        *(undefined8 *)(param_2 + 0x4b8) = *puVar3;
        *(undefined4 *)(param_2 + 0x4c0) = *(undefined4 *)(puVar3 + 1);
      }
    }
    if (DAT_180cad358 == '\0') {
      _DAT_180b8e540 = 0;
    }
  }
  FUN_180180bf0(&local_48);
  if ((char)uStack_38 != '\0') {
    ReleaseSRWLockShared(pRStack_40);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



