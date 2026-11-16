// FUN_1805c1450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c1450 */

undefined2 FUN_1805c1450(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0xc),*(undefined1 *)(lVar1 + 0xd)),
                            *(undefined1 *)(lVar1 + 0xe)),*(undefined1 *)(lVar1 + 0xf));
  if (param_2 < uVar3) {
    return 0;
  }
  param_2 = param_2 - uVar3;
  if (param_2 < CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x10),
                                           *(undefined1 *)(lVar1 + 0x11)),
                                  *(undefined1 *)(lVar1 + 0x12)),*(undefined1 *)(lVar1 + 0x13))) {
    uVar2 = (ulonglong)(param_2 * 2);
    uVar4 = CONCAT11(*(undefined1 *)(uVar2 + 0x14 + lVar1),*(undefined1 *)(uVar2 + 0x15 + lVar1));
  }
  return uVar4;
}



