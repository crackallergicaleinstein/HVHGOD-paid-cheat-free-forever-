// FUN_180254bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180254bf0 */

ulonglong FUN_180254bf0(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  
  lVar5 = *(longlong *)*param_1;
  if (lVar5 != 0) {
    uVar4 = 1;
    if (*(char *)(param_1[1] + 0x6c) != '\0') {
      uVar4 = 0x800;
    }
    *(ulonglong *)(lVar5 + 0x68) = *(ulonglong *)(lVar5 + 0x68) | uVar4;
    uVar4 = ~uVar4;
    *(ulonglong *)(lVar5 + 0x60) = *(ulonglong *)(lVar5 + 0x60) & uVar4;
    *(ulonglong *)(lVar5 + 0x70) = *(ulonglong *)(lVar5 + 0x70) & uVar4;
    lVar5 = *(longlong *)*param_1;
    puVar1 = (uint *)(lVar5 + 0x20);
    *puVar1 = *puVar1 | 1;
    lVar5 = *(longlong *)(lVar5 + 0x40);
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5 + 0x10;
    }
    if (lVar2 != 0) {
      iVar3 = 0;
      piVar6 = (int *)&DAT_00000010;
      if (lVar5 != 0) {
        piVar6 = (int *)(lVar5 + 0x20);
      }
      if (0 < *piVar6) {
        plVar7 = (longlong *)&DAT_00000018;
        if (lVar5 != 0) {
          plVar7 = (longlong *)(lVar5 + 0x28);
        }
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*plVar7 + 8 + lVar5);
          puVar1 = (uint *)0x0;
          if (lVar2 != 0) {
            puVar1 = (uint *)(lVar2 + 0x10);
          }
          if (puVar1 != (uint *)0x0) {
            *puVar1 = *puVar1 | 1;
            *(ulonglong *)(puVar1 + 2) = *(ulonglong *)(puVar1 + 2) & uVar4;
          }
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar3 < *piVar6);
      }
    }
    lVar5 = *(longlong *)*param_1;
    if (*(char *)(param_1[1] + 0x6c) == '\0') {
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 0x20;
      *(undefined4 *)(lVar5 + 0x4c) = 0xffffffff;
    }
    else {
      *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) | 0x40;
      *(undefined4 *)(lVar5 + 0x50) = 0xffffffff;
    }
  }
  FUN_180254480(param_1[1],*(undefined8 *)*param_1,param_2);
  if (*(longlong *)*param_1 != 0) {
    FUN_1802d1c40();
  }
  *(undefined1 *)(param_1[1] + 0x6a) = 0;
  uVar4 = param_1[1];
  *(undefined4 *)(uVar4 + 0x70) = 0;
  return uVar4 & 0xffffffffffffff00;
}



