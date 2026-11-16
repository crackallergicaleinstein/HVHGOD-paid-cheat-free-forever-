// FUN_18056c6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056c6e0 */

undefined8 * FUN_18056c6e0(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *local_28;
  undefined8 *local_20;
  
  uVar6 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar2 = *(undefined8 **)(DAT_180bbb2b8 + 8 + (uVar6 & DAT_180bbb2d0) * 0x10);
  puVar7 = DAT_180bbb2a8;
  if (puVar2 != DAT_180bbb2a8) {
    iVar1 = *(int *)(puVar2 + 2);
    while (*(int *)param_3 != iVar1) {
      if (puVar2 == *(undefined8 **)(DAT_180bbb2b8 + (uVar6 & DAT_180bbb2d0) * 0x10)) {
        puVar7 = puVar2;
        goto LAB_18056c795;
      }
      puVar2 = (undefined8 *)puVar2[1];
      iVar1 = *(int *)(puVar2 + 2);
    }
    puVar7 = (undefined8 *)*puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *param_2 = puVar2;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
LAB_18056c795:
  if (DAT_180bbb2b0 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("unordered_map/set too long");
  }
  local_28 = &DAT_180bbb2a8;
  local_20 = (undefined8 *)0x0;
  FUN_1801ba620(&local_28);
  puVar2 = local_20;
  *(undefined4 *)(local_20 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)local_20 + 0x14) = 0;
  if (DAT_180bbb2a0 < (float)(DAT_180bbb2b0 + 1) / (float)DAT_180bbb2d8) {
    FUN_1803d2720(&DAT_180bbb2a0);
    puVar3 = *(undefined8 **)(DAT_180bbb2b8 + 8 + (DAT_180bbb2d0 & uVar6) * 0x10);
    puVar7 = DAT_180bbb2a8;
    if (puVar3 != DAT_180bbb2a8) {
      iVar1 = *(int *)(puVar3 + 2);
      puVar7 = puVar3;
      while (*(int *)(puVar2 + 2) != iVar1) {
        if (puVar7 == *(undefined8 **)(DAT_180bbb2b8 + (DAT_180bbb2d0 & uVar6) * 0x10))
        goto LAB_18056c89c;
        puVar7 = (undefined8 *)puVar7[1];
        iVar1 = *(int *)(puVar7 + 2);
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_18056c89c:
  puVar3 = (undefined8 *)puVar7[1];
  DAT_180bbb2b0 = DAT_180bbb2b0 + 1;
  *puVar2 = puVar7;
  puVar2[1] = puVar3;
  *puVar3 = puVar2;
  puVar7[1] = puVar2;
  lVar5 = DAT_180bbb2b8;
  uVar6 = DAT_180bbb2d0 & uVar6;
  puVar4 = *(undefined8 **)(DAT_180bbb2b8 + uVar6 * 0x10);
  if (puVar4 == DAT_180bbb2a8) {
    *(undefined8 **)(DAT_180bbb2b8 + uVar6 * 0x10) = puVar2;
  }
  else {
    if (puVar4 == puVar7) {
      *(undefined8 **)(DAT_180bbb2b8 + uVar6 * 0x10) = puVar2;
      goto LAB_18056c8fb;
    }
    if (*(undefined8 **)(DAT_180bbb2b8 + 8 + uVar6 * 0x10) != puVar3) goto LAB_18056c8fb;
  }
  *(undefined8 **)(lVar5 + 8 + uVar6 * 0x10) = puVar2;
LAB_18056c8fb:
  *param_2 = puVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



