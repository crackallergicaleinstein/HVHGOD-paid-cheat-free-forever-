// FUN_1805c8600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8600 */

short FUN_1805c8600(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  if (param_2 < 0x10000) {
    lVar1 = *(longlong *)(param_1 + 0x18) + 6;
    puVar2 = (undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x206);
    if (param_2 >> 8 == 0) {
      uVar3 = (ulonglong)((param_2 & 0xff) * 2);
      puVar4 = puVar2;
      if (CONCAT11(*(undefined1 *)(uVar3 + lVar1),*(undefined1 *)(uVar3 + 1 + lVar1)) != 0) {
        return 0;
      }
    }
    else {
      uVar3 = (ulonglong)((param_2 >> 8) * 2);
      puVar4 = puVar2 + ((ulonglong)
                         CONCAT11(*(undefined1 *)(uVar3 + lVar1),*(undefined1 *)(uVar3 + 1 + lVar1))
                        & 0xfffffffffffffff8);
      if (puVar4 == puVar2) {
        return 0;
      }
    }
    if (puVar4 != (undefined1 *)0x0) {
      uVar5 = (param_2 & 0xff) - (uint)CONCAT11(*puVar4,puVar4[1]);
      if (((uVar5 < CONCAT11(puVar4[2],puVar4[3])) && (CONCAT11(puVar4[6],puVar4[7]) != 0)) &&
         (uVar3 = (ulonglong)((uint)CONCAT11(puVar4[6],puVar4[7]) + uVar5 * 2),
         CONCAT11(puVar4[uVar3 + 6],puVar4[uVar3 + 7]) != 0)) {
        return CONCAT11(puVar4[4],puVar4[5]) + CONCAT11(puVar4[uVar3 + 6],puVar4[uVar3 + 7]);
      }
    }
  }
  return 0;
}



