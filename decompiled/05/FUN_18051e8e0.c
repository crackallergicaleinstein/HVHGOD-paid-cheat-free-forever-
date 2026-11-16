// FUN_18051e8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051e8e0 */

undefined8 FUN_18051e8e0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong *plVar7;
  ushort *puVar8;
  
  uVar1 = *(ulonglong *)(param_2 + 0x50);
  lVar5 = *(longlong *)(param_2 + 0x48);
  puVar6 = (ushort *)(param_2 + 0x38);
  puVar8 = puVar6;
  if (0xf < uVar1) {
    puVar8 = *(ushort **)puVar6;
  }
  if (lVar5 == 7) {
    iVar3 = *(int *)puVar8 + -0x2078616d;
    if ((iVar3 == 0) && (iVar3 = puVar8[2] - 0x6f66, iVar3 == 0)) {
      iVar3 = (byte)puVar8[3] - 0x76;
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
  if (0xf < uVar1) {
    puVar6 = *(ushort **)puVar6;
  }
  if (lVar5 == 3) {
    iVar3 = *puVar6 - 0x6f66;
    if (iVar3 == 0) {
      iVar3 = (byte)puVar6[1] - 0x76;
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
  plVar7 = (longlong *)(param_2 + 0x38);
  if (0xf < uVar1) {
    plVar7 = (longlong *)*plVar7;
  }
  if (lVar5 == 10) {
    lVar4 = *plVar7 + -0x616d6164206e696d;
    if (lVar4 == 0) {
      lVar4 = (ulonglong)*(ushort *)(plVar7 + 1) - 0x6567;
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  plVar7 = (longlong *)(param_2 + 0x38);
  if (0xf < uVar1) {
    plVar7 = (longlong *)*plVar7;
  }
  if (lVar5 == 10) {
    lVar5 = *plVar7 + -0x6e61686320746968;
    if (lVar5 == 0) {
      lVar5 = (ulonglong)*(ushort *)(plVar7 + 1) - 0x6563;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  uVar1 = *(ulonglong *)(param_2 + 0x50);
  plVar7 = (longlong *)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_2 + 0x48);
  if (0xf < uVar1) {
    plVar7 = (longlong *)*plVar7;
  }
  if (lVar5 == 0xb) {
    lVar4 = *plVar7 + -0x637320746e696f70;
    if ((lVar4 == 0) && (lVar4 = (ulonglong)*(ushort *)(plVar7 + 1) - 0x6c61, lVar4 == 0)) {
      lVar4 = (ulonglong)*(byte *)((longlong)plVar7 + 10) - 0x65;
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  plVar7 = (longlong *)(param_2 + 0x38);
  if (0xf < uVar1) {
    plVar7 = (longlong *)*plVar7;
  }
  if ((lVar5 == 8) && (*plVar7 == 0x7365786f62746968)) {
    return 1;
  }
  piVar2 = (int *)(param_2 + 0x38);
  if (0xf < uVar1) {
    piVar2 = *(int **)piVar2;
  }
  if (lVar5 == 6) {
    iVar3 = *piVar2 + -0x6f6f6d73;
    if (iVar3 == 0) {
      iVar3 = *(ushort *)(piVar2 + 1) - 0x6874;
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
  plVar7 = (longlong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x30)) {
    plVar7 = (longlong *)*plVar7;
  }
  if ((*(longlong *)(param_2 + 0x28) == 8) && (*plVar7 == 0x6d69612069746e61)) {
    piVar2 = (int *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      piVar2 = *(int **)piVar2;
    }
    if (*(longlong *)(param_2 + 0x48) == 5) {
      iVar3 = *piVar2 + -0x63746970;
      if (iVar3 == 0) {
        iVar3 = *(byte *)(piVar2 + 1) - 0x68;
      }
      if (iVar3 == 0) {
        return 1;
      }
    }
    plVar7 = (longlong *)(param_2 + 0x38);
    if (0xf < *(ulonglong *)(param_2 + 0x50)) {
      plVar7 = (longlong *)*plVar7;
    }
    if ((*(longlong *)(param_2 + 0x48) == 8) && (*plVar7 == 0x65646f6d20776179)) {
      return 1;
    }
  }
  return 0;
}



