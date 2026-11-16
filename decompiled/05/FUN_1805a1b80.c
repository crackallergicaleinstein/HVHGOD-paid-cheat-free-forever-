// FUN_1805a1b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a1b80 */

undefined8 FUN_1805a1b80(longlong param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x4d8) + (ulonglong)param_2 * 2);
  if (uVar1 != 0xffff) {
    if (uVar1 < 0x187) {
      if (*(longlong *)(lVar2 + 0x10d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001805a1bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x10d8) + 0x28))();
        return uVar3;
      }
    }
    else if (uVar1 - 0x187 < *(uint *)(lVar2 + 0x5c0)) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x5c8) + (ulonglong)(uVar1 - 0x187) * 8);
    }
  }
  return 0;
}



