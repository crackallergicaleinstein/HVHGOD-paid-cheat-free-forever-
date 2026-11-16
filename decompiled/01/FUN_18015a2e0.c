// FUN_18015a2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a2e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_18015a2e0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  DWORD DVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar8 = (ulonglong)*(uint *)(lVar4 + 4);
    do {
      uVar6 = (uint)uVar8;
      LOCK();
      uVar1 = *(uint *)(lVar4 + 4);
      if (uVar6 == uVar1) {
        *(uint *)(lVar4 + 4) = uVar6 | 1;
      }
      else {
        uVar8 = (ulonglong)uVar1;
      }
      UNLOCK();
    } while (uVar6 != uVar1);
    if ((uVar8 & 1) == 0) {
      DVar7 = GetCurrentThreadId();
      *(DWORD *)(lVar4 + 0x18) = DVar7;
      lVar9 = FUN_180113860(lVar4 + 8);
      *(longlong *)(lVar4 + 0x10) = lVar9;
      uVar10 = FUN_1805fa36c(lVar4 + 0x10);
      while (lVar9 != 0) {
        lVar5 = *(longlong *)(lVar9 + 8);
        *(undefined8 *)(lVar9 + 8) = 0;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
        }
        LOCK();
        lVar2 = *(longlong *)(lVar4 + 8);
        *(longlong *)(lVar4 + 8) = lVar5;
        UNLOCK();
        if (((byte)lVar2 & 3) == 2) {
          FUN_1805fa36c(lVar4 + 8);
        }
        (**(code **)(lVar9 + 0x18))(lVar9);
        lVar9 = FUN_180113860(lVar4 + 8);
        *(longlong *)(lVar4 + 0x10) = lVar9;
        uVar10 = FUN_1805fa36c(lVar4 + 0x10);
      }
      LOCK();
      uVar3 = *(undefined8 *)(lVar4 + 8);
      *(undefined8 *)(lVar4 + 8) = 0;
      UNLOCK();
      if (((byte)uVar3 & 3) == 2) {
        uVar10 = FUN_1805fa36c(lVar4 + 8);
      }
      in_RAX = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    else {
      in_RAX = uVar8 & 0xffffffffffffff00;
    }
    if ((char)in_RAX != '\0') {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



