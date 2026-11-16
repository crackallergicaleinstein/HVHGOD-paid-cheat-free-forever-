// FUN_18050a090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050a090 */

undefined8 FUN_18050a090(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  ushort *puVar8;
  longlong *plVar9;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (param_2 == 3) {
    if (((((undefined1 *)0x180b0c8bf < puVar1) && (puVar1 < &DAT_180b0c928)) ||
        (((undefined1 *)0x180b0c9f7 < puVar1 && (puVar1 < &DAT_180b0ca60)))) ||
       (((undefined1 *)0x180b0cac7 < puVar1 && (puVar1 < &DAT_180b0cb30)))) {
      return 3;
    }
    if (((undefined1 *)0x180cc8bdf < puVar1) && (puVar1 < &DAT_180cc8dd8)) {
      return 1;
    }
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    piVar5 = (int *)(param_1 + 0x38);
    piVar4 = piVar5;
    if (0xf < uVar2) {
      piVar4 = *(int **)piVar5;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x48);
    if (4 < uVar3) {
      iVar7 = *piVar4 + -0x6f6f6c62;
      if (iVar7 == 0) {
        iVar7 = *(byte *)(piVar4 + 1) - 0x6d;
      }
      if (iVar7 == 0) {
        return 2;
      }
    }
    if (0xf < uVar2) {
      piVar5 = *(int **)piVar5;
    }
    if (4 < uVar3) {
      iVar7 = *piVar5 + -0x6d6d6167;
      if (iVar7 == 0) {
        iVar7 = *(byte *)(piVar5 + 1) - 0x61;
      }
      if (iVar7 == 0) {
        return 2;
      }
    }
    puVar8 = (ushort *)(param_1 + 0x38);
    if (0xf < uVar2) {
      puVar8 = *(ushort **)puVar8;
    }
    if (2 < uVar3) {
      iVar7 = *puVar8 - 0x6f64;
      if (iVar7 == 0) {
        iVar7 = (byte)puVar8[1] - 0x66;
      }
      if (iVar7 == 0) {
        return 2;
      }
    }
    plVar9 = (longlong *)(param_1 + 0x38);
    if (0xf < uVar2) {
      plVar9 = (longlong *)*plVar9;
    }
    if (uVar3 == 0xe) {
      lVar6 = *plVar9 + -0x666f206874706564;
      if ((lVar6 == 0) && (lVar6 = (ulonglong)*(uint *)(plVar9 + 1) - 0x65696620, lVar6 == 0)) {
        lVar6 = (ulonglong)*(ushort *)((longlong)plVar9 + 0xc) - 0x646c;
      }
      if (lVar6 == 0) {
        return 2;
      }
    }
  }
  else if (((puVar1 < &DAT_180b0cba0) || ((undefined1 *)0x180b0cd67 < puVar1)) &&
          ((puVar1 < &DAT_180b0cd68 || ((undefined1 *)0x180b0cddf < puVar1)))) {
    if ((&DAT_180b0cde0 <= puVar1) && (puVar1 < &DAT_180b0d018)) {
      return 1;
    }
    if ((&DAT_180b0d018 <= puVar1) && (puVar1 < &DAT_180b0d2d0)) {
      return 1;
    }
    if ((&DAT_180cadbf0 <= puVar1) && (puVar1 < &DAT_180cadce0)) {
      return 1;
    }
    if ((puVar1 < &DAT_180b0c858) || (&DAT_180b0c8c0 <= puVar1)) {
      return 2;
    }
    return 1;
  }
  return 0;
}



