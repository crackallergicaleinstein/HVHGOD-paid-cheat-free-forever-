// FUN_180494ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180494ab0 */

void FUN_180494ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x6bf4) == '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x6c40);
    *(undefined2 *)(param_1 + 0x6bf4) = 0x101;
    *(undefined1 *)(param_1 + 0x6bfc) = 0;
    *(undefined8 *)(param_1 + 0x6c50) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0x6c58)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
    lVar2 = DAT_180bb8ae8;
    *(undefined8 *)(param_1 + 0x6c64) = 0;
    *(undefined4 *)(param_1 + 0x6c60) = 0;
    iVar1 = *(int *)(lVar2 + 0x1ff8);
    uVar6 = (ulonglong)iVar1;
    if (0 < iVar1) {
      plVar5 = (longlong *)(uVar6 * 0x38 + *(longlong *)(lVar2 + 0x2000) + -0x30);
      uVar4 = uVar6;
      do {
        if ((*plVar5 == 0) || ((*(uint *)(*plVar5 + 0x14) & 0x8000000) != 0)) break;
        uVar4 = (ulonglong)((int)uVar4 - 1);
        uVar6 = uVar6 - 1;
        plVar5 = plVar5 + -7;
      } while (0 < (longlong)uVar6);
      if ((int)uVar4 < iVar1) {
        FUN_1804c7a50(uVar4 & 0xffffffff,CONCAT71((int7)(uVar6 >> 8),1));
        return;
      }
    }
  }
  return;
}



