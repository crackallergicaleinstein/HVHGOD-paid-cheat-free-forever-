// FUN_180597c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180597c90 */

undefined8 FUN_180597c90(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 == 0) {
    return 6;
  }
  uVar4 = *(uint *)(lVar1 + 4);
  FUN_18059bc90(*(undefined8 *)(lVar1 + 0x108),local_18);
  uVar2 = param_2;
  if (uVar4 < param_2) {
    uVar2 = uVar4;
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 < 4) {
      FUN_18063aed0(param_3,local_18,(ulonglong)uVar2 << 2);
      uVar4 = uVar2;
    }
    else {
      FUN_18063aed0(param_3,local_18,(ulonglong)uVar2 * 4);
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  if (uVar4 < param_2) {
    puVar5 = (undefined4 *)(param_3 + (ulonglong)uVar4 * 4);
    for (uVar3 = (ulonglong)(param_2 - uVar4); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0x8000;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}



