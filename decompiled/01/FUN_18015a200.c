// FUN_18015a200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a200 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18015a200(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar4 = *(uint *)(param_1 + 4);
  do {
    LOCK();
    uVar1 = *(uint *)(param_1 + 4);
    bVar8 = uVar4 == uVar1;
    if (bVar8) {
      *(uint *)(param_1 + 4) = uVar4 | 1;
    }
    else {
      uVar4 = uVar1;
    }
    UNLOCK();
  } while (!bVar8);
  if ((uVar4 & 1) == 0) {
    DVar5 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x18) = DVar5;
    lVar7 = FUN_180113860(param_1 + 8);
    *(longlong *)(param_1 + 0x10) = lVar7;
    FUN_1805fa36c(param_1 + 0x10);
    while (lVar7 != 0) {
      lVar3 = *(longlong *)(lVar7 + 8);
      *(undefined8 *)(lVar7 + 8) = 0;
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      LOCK();
      lVar2 = *(longlong *)(param_1 + 8);
      *(longlong *)(param_1 + 8) = lVar3;
      UNLOCK();
      if (((byte)lVar2 & 3) == 2) {
        FUN_1805fa36c(param_1 + 8);
      }
      (**(code **)(lVar7 + 0x18))(lVar7);
      lVar7 = FUN_180113860(param_1 + 8);
      *(longlong *)(param_1 + 0x10) = lVar7;
      FUN_1805fa36c(param_1 + 0x10);
    }
    LOCK();
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    UNLOCK();
    if (((byte)uVar6 & 3) == 2) {
      FUN_1805fa36c(param_1 + 8);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



