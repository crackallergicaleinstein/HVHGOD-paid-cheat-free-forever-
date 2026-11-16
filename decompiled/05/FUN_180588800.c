// FUN_180588800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180588800 */

undefined8 FUN_180588800(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  if (((*(longlong *)(param_1 + 0x408) != 0) || (uVar4 = FUN_180588160(param_1,0), (int)uVar4 == 0))
     && ((puVar3 = *(uint **)(param_1 + 0x408), *(longlong *)(puVar3 + 2) != 0 ||
         (uVar4 = FUN_180595230(param_1,0,0), (int)uVar4 == 0)))) {
    uVar10 = param_2;
    if (*puVar3 < param_2) {
      uVar10 = *puVar3;
    }
    lVar6 = *(longlong *)(*(longlong *)(puVar3 + 6) + 0x10);
    uVar8 = 0;
    if (*(char *)(param_1 + 0x401) == '\0') {
      if (uVar10 != 0) {
        uVar9 = (ulonglong)uVar10;
        puVar5 = param_3;
        do {
          puVar1 = (undefined4 *)(lVar6 + 0xc);
          lVar6 = lVar6 + 0x20;
          *puVar5 = *puVar1;
          puVar5 = puVar5 + 1;
          uVar9 = uVar9 - 1;
          uVar8 = uVar10;
        } while (uVar9 != 0);
      }
    }
    else if (uVar10 != 0) {
      lVar6 = lVar6 + (ulonglong)uVar10 * 0x20;
      uVar9 = (ulonglong)uVar10;
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar7 + (longlong)param_3) =
             *(undefined4 *)(lVar7 + *(longlong *)(puVar3 + 2));
        uVar9 = uVar9 - 1;
        lVar7 = lVar7 + 4;
        uVar8 = uVar10;
      } while (uVar9 != 0);
    }
    if (uVar8 < param_2) {
      puVar5 = (undefined4 *)(lVar6 + 0xc);
      uVar9 = (ulonglong)(param_2 - uVar8);
      param_3 = param_3 + uVar8;
      do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 8;
        *param_3 = uVar2;
        param_3 = param_3 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



