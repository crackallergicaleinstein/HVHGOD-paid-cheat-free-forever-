// FUN_1801d6820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6820 */

void FUN_1801d6820(longlong param_1,short param_2,int param_3)

{
  PSRWLOCK SRWLock;
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined2 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  SRWLock = (PSRWLOCK)(param_1 + 0xd0);
  local_50._8_8_ = 0;
  local_50._0_8_ = SRWLock;
  local_58 = param_2;
  AcquireSRWLockExclusive(SRWLock);
  local_50[8] = 1;
  if (param_3 - 2U < 2) {
    uVar3 = (((ulonglong)((int)local_58 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)local_58._1_1_) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x40);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + uVar3 * 0x10);
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar4 == lVar2) {
LAB_1801d6916:
      lVar4 = 0;
    }
    else {
      sVar1 = *(short *)(lVar4 + 0x10);
      while ((int)local_58 != (int)sVar1) {
        if (lVar4 == *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar3 * 0x10))
        goto LAB_1801d6916;
        lVar4 = *(longlong *)(lVar4 + 8);
        sVar1 = *(short *)(lVar4 + 0x10);
      }
    }
    if (lVar4 == 0) {
      lVar4 = lVar2;
    }
    if (lVar4 != lVar2) {
      FUN_1801d95b0((longlong)(3 - param_3) * 0x40 + 0x50 + param_1,local_40,&local_58,lVar4 + 0x18)
      ;
      FUN_1801d8e90(param_1 + 0x10,local_50,lVar4);
    }
    FUN_1801d94c0((longlong)(param_3 + -2) * 0x40 + 0x50 + param_1,&local_58);
  }
  else if (param_3 == 0) {
    FUN_1801d94c0(param_1 + 0x10,&local_58);
    for (lVar4 = param_1 + 0x50; lVar4 != param_1 + 0xd0; lVar4 = lVar4 + 0x40) {
      FUN_1801d94c0(lVar4,&local_58);
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



