// FUN_1805c98a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c98a0 */

uint FUN_1805c98a0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = param_1[3];
  uVar5 = 0;
  uVar7 = 0;
  iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x200c),*(undefined1 *)(lVar1 + 0x200d)
                                    ),*(undefined1 *)(lVar1 + 0x200e)),
                   *(undefined1 *)(lVar1 + 0x200f));
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  uVar2 = *param_2 + 1;
  if (iVar6 != 0) {
    puVar4 = (undefined1 *)(lVar1 + 0x2010);
    do {
      uVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
      uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
      uVar5 = uVar3;
      if (uVar3 <= uVar2) {
        uVar5 = uVar2;
      }
      while( true ) {
        uVar2 = uVar5;
        uVar5 = 0;
        if ((CONCAT31(CONCAT21(CONCAT11(puVar4[4],puVar4[5]),puVar4[6]),puVar4[7]) < uVar2) ||
           ((uVar3 - uVar2) - 1 < uVar8)) goto LAB_1805c99bd;
        uVar7 = (uVar8 - uVar3) + uVar2;
        if (uVar7 != 0) break;
        if (uVar2 == 0xffffffff) goto LAB_1805c99d4;
        uVar5 = uVar2 + 1;
      }
      if (uVar7 < *(uint *)(*param_1 + 0x10)) {
        uVar5 = uVar2;
        break;
      }
      uVar7 = 0;
LAB_1805c99bd:
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 0xc;
    } while (iVar6 != 0);
  }
LAB_1805c99d4:
  *param_2 = uVar5;
  return uVar7;
}



