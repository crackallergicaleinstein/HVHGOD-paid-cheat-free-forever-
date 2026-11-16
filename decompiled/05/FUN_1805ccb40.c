// FUN_1805ccb40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ccb40 */

undefined1 * FUN_1805ccb40(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  uVar1 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar1 != 0) {
    do {
      uVar3 = uVar1 + uVar4 >> 1;
      puVar5 = param_1 + (ulonglong)(uVar3 * 0xb) + 7;
      uVar2 = (uint)CONCAT21(CONCAT11(puVar5[-3],puVar5[-2]),puVar5[-1]);
      if (param_2 < uVar2) {
        uVar1 = uVar3;
      }
      else {
        if (param_2 <= uVar2) {
          return puVar5;
        }
        uVar4 = uVar3 + 1;
      }
    } while (uVar4 < uVar1);
  }
  return (undefined1 *)0x0;
}



