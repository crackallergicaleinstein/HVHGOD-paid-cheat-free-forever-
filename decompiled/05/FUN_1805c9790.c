// FUN_1805c9790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9790 */

int FUN_1805c9790(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x200c),*(undefined1 *)(lVar1 + 0x200d)
                                    ),*(undefined1 *)(lVar1 + 0x200e)),
                   *(undefined1 *)(lVar1 + 0x200f));
  puVar4 = (undefined1 *)(lVar1 + 0x2010);
  if (iVar2 != 0) {
    while( true ) {
      uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
      uVar5 = CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
      if (param_2 < uVar3) break;
      if (param_2 <= CONCAT31(CONCAT21(CONCAT11(puVar4[4],puVar4[5]),puVar4[6]),puVar4[7])) {
        if ((uVar3 - param_2) - 1 < uVar5) {
          return 0;
        }
        return (uVar5 - uVar3) + param_2;
      }
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 0xc;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 0;
}



