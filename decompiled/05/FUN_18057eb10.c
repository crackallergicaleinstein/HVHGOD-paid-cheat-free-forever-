// FUN_18057eb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057eb10 */

undefined4 FUN_18057eb10(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = 0x3a6;
  do {
    uVar1 = uVar2 + uVar3 >> 1;
    if ((uint)(&DAT_1808d40e0)[uVar1 * 2] < param_1) {
      uVar3 = uVar1 + 1;
    }
    else {
      if ((uint)(&DAT_1808d40e0)[uVar1 * 2] <= param_1) {
        return *(undefined4 *)(uVar1 * 8 + 0x1808d40e4);
      }
      uVar2 = uVar1 - 1;
    }
  } while (uVar3 <= uVar2);
  return 0;
}



