// FUN_180598380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180598380 */

undefined8 FUN_180598380(longlong param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 == (uint *)0x0) {
    return 6;
  }
  if (param_3 == (uint *)0x0) {
    if (param_2 != 0) {
      return 6;
    }
    uVar7 = 0;
    if (*puVar2 == 0) {
      return 0;
    }
    do {
      lVar4 = uVar7 * 4;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(undefined4 *)(lVar4 + *(longlong *)(puVar2 + 0x42)) =
           *(undefined4 *)(lVar4 + *(longlong *)(puVar2 + 0x44));
    } while (uVar6 < *puVar2);
    return 0;
  }
  uVar6 = *puVar2;
  if (param_2 < *puVar2) {
    uVar6 = param_2;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    if (3 < uVar6) {
      puVar1 = puVar2 + 0x42;
      puVar3 = *(uint **)puVar1;
      if (((param_3 + (uVar6 - 1) < puVar3) || (puVar3 + (uVar6 - 1) < param_3)) &&
         ((puVar1 < puVar3 || (puVar3 + (uVar6 - 1) < puVar1)))) {
        FUN_18063aed0(puVar3,param_3,(ulonglong)uVar6 << 2);
        do {
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
        goto LAB_180598489;
      }
    }
    uVar7 = (ulonglong)uVar6;
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar4 + *(longlong *)(puVar2 + 0x42)) =
           *(undefined4 *)((longlong)param_3 + lVar4);
      uVar7 = uVar7 - 1;
      lVar4 = lVar4 + 4;
      uVar5 = uVar6;
    } while (uVar7 != 0);
  }
LAB_180598489:
  if (uVar5 < *puVar2) {
    do {
      uVar7 = (ulonglong)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(*(longlong *)(puVar2 + 0x42) + uVar7 * 4) = 0;
    } while (uVar5 < *puVar2);
  }
  return 0;
}



