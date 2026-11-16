// FUN_18058b2d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058b2d0 */

void FUN_18058b2d0(longlong param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_2[2];
  uVar6 = (ulonglong)*param_2;
  if ((*(ushort *)(param_1 + 0x40) <= *param_2) || (*(ushort *)(param_1 + 0x78) <= param_2[2])) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + uVar8 * 8);
    uVar3 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x50) + uVar6 * 8) - *piVar1,
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + uVar6 * 8) - piVar1[1]);
    *(undefined4 *)param_2 = uVar3;
    return;
  }
  if ((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) {
    uVar3 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x48) + uVar6 * 8) -
                               *(int *)(*(longlong *)(param_1 + 0x80) + uVar8 * 8),
                       *(int *)(*(longlong *)(param_1 + 0x48) + 4 + uVar6 * 8) -
                       *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar8 * 8));
    *(undefined4 *)param_2 = uVar3;
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + uVar6 * 8);
  piVar2 = (int *)(*(longlong *)(param_1 + 0x90) + uVar8 * 8);
  if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
    iVar4 = (**(code **)(param_1 + 0x2e0))(param_1,*piVar1 - *piVar2,piVar1[1] - piVar2[1]);
    lVar5 = (longlong)*(int *)(param_1 + 0x160) * (longlong)iVar4;
    *(int *)param_2 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
    return;
  }
  lVar7 = (longlong)(*piVar1 - *piVar2) * (longlong)*(int *)(param_1 + 0x160);
  lVar5 = (longlong)(piVar1[1] - piVar2[1]) * (longlong)*(int *)(param_1 + 0x164);
  uVar3 = (**(code **)(param_1 + 0x2e0))
                    (param_1,lVar7 + (lVar7 >> 0x3f) + 0x8000 >> 0x10,
                     lVar5 + 0x8000 + (lVar5 >> 0x3f) >> 0x10);
  *(undefined4 *)param_2 = uVar3;
  return;
}



