// FUN_18017c850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c850 */

ulonglong *
FUN_18017c850(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((param_5 & 1) == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((param_5 & 2) == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((bVar6) || (bVar7)) goto LAB_18017c9b6;
  lVar3 = **(longlong **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    uVar9 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar9 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar9)) {
      *(ulonglong *)(param_1 + 0x68) = uVar9;
    }
  }
  else {
    uVar9 = 0;
  }
  lVar4 = **(longlong **)(param_1 + 0x18);
  uVar10 = *(longlong *)(param_1 + 0x68) - lVar4;
  if (param_4 == 0) {
    uVar8 = 0;
LAB_18017c93a:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar10) &&
       ((uVar8 == 0 ||
        ((((param_5 & 1) == 0 || (lVar3 != 0)) && (((param_5 & 2) == 0 || (uVar9 != 0)))))))) {
      lVar1 = uVar8 + lVar4;
      if (((param_5 & 1) != 0) && (lVar3 != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)uVar5 - (int)lVar1;
      }
      if (((param_5 & 2) != 0) && (uVar9 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar5 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar4;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar5) - (int)lVar1;
      }
      *param_2 = uVar8;
      goto LAB_18017c9bd;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar9 != 0 || (lVar4 == 0)))) {
          uVar8 = uVar9 - lVar4;
          goto LAB_18017c93a;
        }
      }
      else if ((lVar3 != 0) || (lVar4 == 0)) {
        uVar8 = lVar3 - lVar4;
        goto LAB_18017c93a;
      }
    }
  }
  else if (param_4 == 2) {
    uVar8 = uVar10;
    goto LAB_18017c93a;
  }
LAB_18017c9b6:
  *param_2 = 0xffffffffffffffff;
LAB_18017c9bd:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



