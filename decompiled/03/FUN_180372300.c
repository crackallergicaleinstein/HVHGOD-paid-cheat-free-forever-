// FUN_180372300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180372300 */

void FUN_180372300(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong *plVar8;
  
  puVar3 = (undefined *)FUN_1803728e0();
  puVar7 = &DAT_180bda4e0;
  if (puVar3 != (undefined *)0x0) {
    puVar7 = puVar3;
  }
  if (*(int *)(puVar7 + 0x80020) != 0) {
    uVar2 = *(int *)(puVar7 + 0x80020) - 1;
    *(uint *)(puVar7 + 0x80020) = uVar2;
    if (uVar2 < 4) {
      iVar1 = *(int *)(puVar7 + (ulonglong)uVar2 * 0x20008 + 0x20000);
      while (iVar1 != 0) {
        plVar8 = (longlong *)(puVar7 + (ulonglong)(iVar1 - 1U) * 0x20 + (ulonglong)uVar2 * 0x20008);
        *(uint *)(puVar7 + (ulonglong)uVar2 * 0x20008 + 0x20000) = iVar1 - 1U;
        lVar5 = *plVar8;
        if (lVar5 != 0) {
          lVar4 = FUN_18017ea70();
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          FUN_1801ad800(lVar5,plVar8 + 1);
          lVar5 = FUN_18017ea70();
          if (*(int *)(lVar5 + 4) != 0) {
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
          }
        }
        if (plVar8[2] != 0) {
          lVar4 = *plVar8;
          lVar5 = lVar4 + -0x30;
          if (lVar5 != 0) {
            lVar6 = FUN_18017ea70();
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
            FUN_1801fde60(lVar5,plVar8 + 2);
            lVar5 = FUN_18017ea70();
            if (*(int *)(lVar5 + 4) != 0) {
              *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
            }
          }
          lVar4 = lVar4 + -0x28;
          if (lVar4 != 0) {
            lVar5 = FUN_18017ea70();
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
            FUN_1801fde60(lVar4,plVar8 + 3);
            lVar5 = FUN_18017ea70();
            if (*(int *)(lVar5 + 4) != 0) {
              *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
            }
          }
        }
        iVar1 = *(int *)(puVar7 + (ulonglong)uVar2 * 0x20008 + 0x20000);
      }
    }
  }
  return;
}



