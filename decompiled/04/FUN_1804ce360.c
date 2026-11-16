// FUN_1804ce360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce360 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined * FUN_1804ce360(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = DAT_180bb8ae8;
  piVar1 = (int *)(DAT_180bb8ae8 + 0x2780);
  *(undefined4 *)(DAT_180bb8ae8 + 0x277c) = 0;
  iVar4 = *(int *)(lVar2 + 0x2784);
  if (iVar4 < 0) {
    iVar4 = iVar4 / 2 + iVar4;
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_1804d0ea0(piVar1,iVar5);
  }
  *piVar1 = 0;
  if (*(int *)(lVar2 + 0x2784) == 0) {
    FUN_1804d0ea0(piVar1,8);
  }
  *(undefined1 *)((longlong)*piVar1 + *(longlong *)(lVar2 + 0x2788)) = 0;
  *piVar1 = *piVar1 + 1;
  lVar6 = *(longlong *)(lVar2 + 0x2798);
  lVar7 = (longlong)*(int *)(lVar2 + 0x2790) * 0x50 + lVar6;
  for (; lVar6 != lVar7; lVar6 = lVar6 + 0x50) {
    (**(code **)(lVar6 + 0x38))(lVar2,lVar6,piVar1);
  }
  if (param_1 != (longlong *)0x0) {
    iVar4 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar4 = 0;
    }
    *param_1 = (longlong)iVar4;
  }
  puVar3 = &DAT_180bb8ac1;
  if (*(undefined **)(lVar2 + 0x2788) != (undefined *)0x0) {
    puVar3 = *(undefined **)(lVar2 + 0x2788);
  }
  return puVar3;
}



