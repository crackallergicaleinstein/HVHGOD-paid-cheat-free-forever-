// FUN_1805310f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805310f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805310f0(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != &DAT_180b0a5c8) {
    puVar2 = puVar3 + 2;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    FUN_180113930(&DAT_180b0a5c8,puVar3,*puVar2);
  }
  puVar3 = (undefined8 *)*param_1;
  uVar1 = puVar3[2];
  uVar4 = uVar1;
  if (0x20 < uVar1) {
    uVar4 = 0x20;
  }
  if ((uVar4 < uVar1) && (uVar4 != 0)) {
    do {
      puVar2 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar2 = (undefined8 *)*puVar3;
      }
    } while (((*(byte *)((longlong)puVar2 + uVar4) & 0xc0) == 0x80) &&
            (uVar4 = uVar4 - 1, uVar4 != 0));
  }
  DAT_180c7e0f0 = 0;
  _DAT_180c7e0d0 = 0;
  uRam0000000180c7e0d8 = 0;
  uRam0000000180c7e0e0 = 0;
  uRam0000000180c7e0e8 = 0;
  param_1 = (longlong *)*param_1;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  if (uVar4 != 0) {
    FUN_18063aed0(&DAT_180c7e0d0,param_1);
  }
  return;
}



