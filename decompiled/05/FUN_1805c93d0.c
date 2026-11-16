// FUN_1805c93d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c93d0 */

short FUN_1805c93d0(longlong param_1,uint *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar5 = *param_2 + 1;
  sVar3 = 0;
  uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 6),*(undefined1 *)(lVar2 + 7));
  uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 8),*(undefined1 *)(lVar2 + 9));
  if (0xffff < uVar5) {
    return 0;
  }
  uVar4 = uVar6;
  if (uVar6 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = uVar4 - uVar6;
  uVar5 = 0;
  if (uVar6 < uVar8) {
    puVar7 = (undefined1 *)((ulonglong)(uVar6 * 2) + lVar2 + 9);
    while( true ) {
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      sVar3 = CONCAT11(*puVar1,*puVar7);
      if (sVar3 != 0) break;
      if (0xfffe < uVar4) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + 1;
      if (uVar8 <= uVar6) {
        *param_2 = 0;
        return 0;
      }
    }
    uVar5 = uVar4;
  }
  *param_2 = uVar5;
  return sVar3;
}



