// FUN_1805cc840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cc840 */

void FUN_1805cc840(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x34);
  uVar3 = *(int *)((longlong)param_1 + 0x2c) + 1;
  if (uVar1 < *(uint *)(param_1 + 7)) {
    do {
      lVar4 = (ulonglong)(uVar1 * 0xc) + param_1[3];
      uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x10),*(undefined1 *)(lVar4 + 0x11)
                                        ),*(undefined1 *)(lVar4 + 0x12)),
                       *(undefined1 *)(lVar4 + 0x13));
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x18),*(undefined1 *)(lVar4 + 0x19)
                                        ),*(undefined1 *)(lVar4 + 0x1a)),
                       *(undefined1 *)(lVar4 + 0x1b));
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
      if (((uVar3 <= CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0x14),
                                                *(undefined1 *)(lVar4 + 0x15)),
                                       *(undefined1 *)(lVar4 + 0x16)),*(undefined1 *)(lVar4 + 0x17))
           ) && (uVar5 != 0)) && (uVar5 < *(uint *)(*param_1 + 0x10))) {
        *(uint *)((longlong)param_1 + 0x2c) = uVar3;
        *(uint *)(param_1 + 6) = uVar5;
        *(uint *)((longlong)param_1 + 0x34) = uVar1;
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 7));
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



