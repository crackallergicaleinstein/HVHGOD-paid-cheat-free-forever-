// FUN_1805c14d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c14d0 */

short FUN_1805c14d0(longlong param_1,uint *param_2)

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
  sVar3 = 0;
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0xc),*(undefined1 *)(lVar2 + 0xd)),
                            *(undefined1 *)(lVar2 + 0xe)),*(undefined1 *)(lVar2 + 0xf));
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 0x10),*(undefined1 *)(lVar2 + 0x11)),
                            *(undefined1 *)(lVar2 + 0x12)),*(undefined1 *)(lVar2 + 0x13));
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar4 = *param_2 + 1;
  uVar5 = uVar6;
  if (uVar6 <= uVar4) {
    uVar5 = uVar4;
  }
  uVar6 = uVar5 - uVar6;
  if (uVar6 < uVar8) {
    puVar7 = (undefined1 *)((ulonglong)(uVar6 * 2) + lVar2 + 0x13);
    do {
      puVar1 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      sVar3 = CONCAT11(*puVar1,*puVar7);
      if (sVar3 != 0) break;
      if (uVar5 == 0xffffffff) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  *param_2 = uVar5;
  return sVar3;
}



