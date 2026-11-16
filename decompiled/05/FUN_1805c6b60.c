// FUN_1805c6b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6b60 */

undefined8 FUN_1805c6b60(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x4d8);
  if ((lVar2 == 0) || (*(ushort *)(param_1 + 0x370) <= param_2)) {
    return 6;
  }
  uVar5 = (uint)CONCAT11(*(undefined1 *)((ulonglong)(param_2 * 2) + *(longlong *)(lVar2 + 0x10)),
                         *(undefined1 *)((ulonglong)(param_2 * 2) + 1 + *(longlong *)(lVar2 + 0x10))
                        );
  if ((uint)*(ushort *)(lVar2 + 2) < uVar5 + *(ushort *)(param_1 + 0x388)) {
    return 8;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x3a0);
  puVar1 = puVar4 + (ulonglong)*(ushort *)(param_1 + 0x388) * 4;
  puVar3 = (undefined1 *)((ulonglong)(uVar5 * 4) + *(longlong *)(lVar2 + 8));
  for (; puVar4 < puVar1; puVar4 = puVar4 + 4) {
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar4[3] = puVar3[3];
    puVar3 = puVar3 + 4;
  }
  return 0;
}



