// FUN_1801d6680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6680 */

void FUN_1801d6680(longlong param_1,short param_2,undefined8 param_3,int param_4)

{
  PSRWLOCK SRWLock;
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  SRWLock = (PSRWLOCK)(param_1 + 0xd0);
  local_50._8_8_ = 0;
  local_50._0_8_ = SRWLock;
  local_68 = param_2;
  AcquireSRWLockExclusive(SRWLock);
  local_50[8] = 1;
  if (param_4 - 2U < 2) {
    uVar4 = (((ulonglong)((int)local_68 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)local_68._1_1_) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x40);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + uVar4 * 0x10);
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar5 == lVar2) {
LAB_1801d6796:
      lVar5 = 0;
    }
    else {
      sVar1 = *(short *)(lVar5 + 0x10);
      while ((int)local_68 != (int)sVar1) {
        if (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 0x10))
        goto LAB_1801d6796;
        lVar5 = *(longlong *)(lVar5 + 8);
        sVar1 = *(short *)(lVar5 + 0x10);
      }
    }
    if (lVar5 == 0) {
      lVar5 = lVar2;
    }
    if (lVar5 != lVar2) {
      FUN_1801d95b0((longlong)(3 - param_4) * 0x40 + 0x50 + param_1,local_60,&local_68,lVar5 + 0x18)
      ;
      FUN_1801d8e90(param_1 + 0x10,local_60,lVar5);
    }
    plVar3 = (longlong *)
             FUN_1800f9910((longlong)param_4 * 0x40 + -0x30 + param_1,local_60,&local_68);
    FUN_18017edf0(*plVar3 + 0x18,param_3);
  }
  else if (param_4 == 0) {
    plVar3 = (longlong *)FUN_1800f9910(param_1 + 0x10,local_60,&local_68);
    FUN_18017edf0(*plVar3 + 0x18,param_3);
    for (lVar5 = param_1 + 0x50; lVar5 != param_1 + 0xd0; lVar5 = lVar5 + 0x40) {
      FUN_1801d94c0(lVar5,&local_68);
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



