// FUN_1804c88c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c88c0 */

void FUN_1804c88c0(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  short sVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar5 = DAT_180bb8ae8;
  lVar3 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1480) * 8 + -8;
  if (*(longlong *)(lVar3 + *(longlong *)(DAT_180bb8ae8 + 0x1488)) != param_1) {
    sVar4 = *(short *)(param_1 + 0xe2);
    iVar6 = *(int *)(DAT_180bb8ae8 + 0x1480) + -1;
    if (sVar4 < iVar6) {
      uVar8 = (ulonglong)(uint)(iVar6 - sVar4);
      lVar7 = (longlong)sVar4 * 8;
      do {
        lVar1 = lVar7 + 8;
        *(undefined8 *)(lVar7 + *(longlong *)(lVar5 + 0x1488)) =
             *(undefined8 *)(lVar1 + *(longlong *)(lVar5 + 0x1488));
        psVar2 = (short *)(*(longlong *)(*(longlong *)(lVar5 + 0x1488) + -8 + lVar1) + 0xe2);
        *psVar2 = *psVar2 + -1;
        uVar8 = uVar8 - 1;
        lVar7 = lVar1;
      } while (uVar8 != 0);
    }
    *(longlong *)(lVar3 + *(longlong *)(lVar5 + 0x1488)) = param_1;
    *(short *)(param_1 + 0xe2) = (short)iVar6;
  }
  return;
}



