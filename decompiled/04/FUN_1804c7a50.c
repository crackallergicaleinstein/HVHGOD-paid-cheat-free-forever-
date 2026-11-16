// FUN_1804c7a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7a50 */

void FUN_1804c7a50(int param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar3 = DAT_180bb8ae8;
  if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 8) != 0) {
    FUN_1804cf3e0("[popup] ClosePopupToLevel(%d), restore_under=%d\n",param_1,param_2);
  }
  if (((*(byte *)(lVar3 + 0x28cc) & 8) != 0) && (param_1 < *(int *)(lVar3 + 0x1ff8))) {
    lVar4 = (longlong)param_1 * 0x38;
    iVar5 = param_1;
    do {
      if ((*(byte *)(lVar3 + 0x28cc) & 8) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x2000) + 8 + lVar4);
        if (lVar1 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar1 + 8);
        }
        FUN_1804cf3e0("[popup] - Closing PopupID 0x%08X Window \"%s\"\n",
                      *(undefined4 *)(*(longlong *)(lVar3 + 0x2000) + lVar4),uVar6);
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x38;
    } while (iVar5 < *(int *)(lVar3 + 0x1ff8));
  }
  lVar4 = (longlong)param_1 * 0x38 + *(longlong *)(lVar3 + 0x2000);
  lVar1 = *(longlong *)(lVar4 + 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  iVar5 = *(int *)(lVar3 + 0x1ffc);
  if (iVar5 < param_1) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar2 = param_1;
    if (param_1 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_1804d1230(lVar3 + 0x1ff8,iVar2);
  }
  *(int *)(lVar3 + 0x1ff8) = param_1;
  if ((param_2 != '\0') && (lVar1 != 0)) {
    if ((*(uint *)(lVar1 + 0x14) & 0x10000000) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x3c8);
    }
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xcd) == '\0')) {
      FUN_1804c8d50();
      return;
    }
    FUN_1804c8a10(lVar4,*(int *)(lVar3 + 0x204c) == 0);
  }
  return;
}



