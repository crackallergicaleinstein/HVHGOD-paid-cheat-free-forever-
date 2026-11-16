// FUN_1804c9960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9960 */

void FUN_1804c9960(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = DAT_180bb8ae8;
  if ((param_3 >> 9 & 1) == 0) {
    if (*(int *)(DAT_180bb8ae8 + 0x204c) != *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x170))
    {
      return;
    }
    if (*(int *)(DAT_180bb8ae8 + 0x2048) != *(int *)(DAT_180bb8ae8 + 0x1e7c)) {
      return;
    }
    if (((param_2 & 1) != 0) ||
       (((*(byte *)(DAT_180bb8ae8 + 0x28) & 1) == 0 && ((param_2 >> 0x14 & 1) == 0)))) {
      bVar2 = false;
      goto LAB_1804c99bc;
    }
  }
  bVar2 = true;
LAB_1804c99bc:
  iVar4 = *(int *)(DAT_180bb8ae8 + 0x2120);
  if (iVar4 == 1) {
    if (bVar2) {
      if (*(int *)(DAT_180bb8ae8 + 0x21d8) == 0) {
        FUN_1804c95a0();
      }
      if ((0 < *(int *)(lVar5 + 0x2124)) &&
         (iVar4 = *(int *)(lVar5 + 0x2124) + -1, *(int *)(lVar5 + 0x2124) = iVar4, iVar4 == 0)) {
        *(undefined1 *)(lVar5 + 0x20e1) = 0;
        FUN_1804c95a0(lVar5 + 0x2128);
        if ((*(char *)(lVar5 + 0x20e1) == '\0') && (*(char *)(lVar5 + 0x20a2) == '\0')) {
          *(undefined1 *)(lVar5 + 0x20a1) = 0;
          return;
        }
        *(undefined1 *)(lVar5 + 0x20a1) = 1;
        return;
      }
    }
    if (*(int *)(lVar5 + 0x203c) == param_1) {
      *(undefined4 *)(lVar5 + 0x2124) = 1;
      return;
    }
  }
  else if (iVar4 == -1) {
    if (*(int *)(DAT_180bb8ae8 + 0x203c) == param_1) {
      if (*(int *)(DAT_180bb8ae8 + 0x2130) != 0) {
        pcVar1 = (char *)(DAT_180bb8ae8 + 0x20a2);
        *(undefined1 *)(DAT_180bb8ae8 + 0x20e1) = 0;
        *(bool *)(lVar5 + 0x20a1) = *pcVar1 != '\0';
        return;
      }
    }
    else if (bVar2) {
      FUN_1804c95a0(DAT_180bb8ae8 + 0x2128);
      return;
    }
  }
  else if ((iVar4 == 0) && (bVar2)) {
    if (*(int *)(DAT_180bb8ae8 + 0x203c) == param_1) {
      *(undefined1 *)(DAT_180bb8ae8 + 0x20e1) = 0;
      FUN_1804c95a0(lVar5 + 0x2128);
      if ((*(char *)(lVar5 + 0x20e1) == '\0') && (*(char *)(lVar5 + 0x20a2) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(lVar5 + 0x20a1) = uVar3;
    }
    if (*(int *)(lVar5 + 0x21d8) == 0) {
      FUN_1804c95a0();
      return;
    }
  }
  return;
}



