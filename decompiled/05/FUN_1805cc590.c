// FUN_1805cc590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cc590 */

void FUN_1805cc590(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((longlong)param_1 + 0x34);
  uVar1 = *(int *)((longlong)param_1 + 0x2c) + 1;
  if (uVar6 < *(uint *)(param_1 + 7)) {
    do {
      lVar3 = (ulonglong)(uVar6 * 0xc) + param_1[3];
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x10),*(undefined1 *)(lVar3 + 0x11)
                                        ),*(undefined1 *)(lVar3 + 0x12)),
                       *(undefined1 *)(lVar3 + 0x13));
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x18),*(undefined1 *)(lVar3 + 0x19)
                                        ),*(undefined1 *)(lVar3 + 0x1a)),
                       *(undefined1 *)(lVar3 + 0x1b));
      uVar2 = uVar4;
      if (uVar4 <= uVar1) {
        uVar2 = uVar1;
      }
      while( true ) {
        uVar1 = uVar2;
        if ((CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0x14),*(undefined1 *)(lVar3 + 0x15))
                               ,*(undefined1 *)(lVar3 + 0x16)),*(undefined1 *)(lVar3 + 0x17)) <
             uVar1) || ((uVar4 - uVar1) - 1 < uVar5)) goto LAB_1805cc689;
        uVar2 = (uVar5 - uVar4) + uVar1;
        if (uVar2 != 0) break;
        if (uVar1 == 0xffffffff) goto LAB_1805cc695;
        uVar2 = uVar1 + 1;
      }
      if (uVar2 < *(uint *)(*param_1 + 0x10)) {
        *(uint *)((longlong)param_1 + 0x2c) = uVar1;
        *(uint *)(param_1 + 6) = uVar2;
        *(uint *)((longlong)param_1 + 0x34) = uVar6;
        return;
      }
LAB_1805cc689:
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 7));
  }
LAB_1805cc695:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



