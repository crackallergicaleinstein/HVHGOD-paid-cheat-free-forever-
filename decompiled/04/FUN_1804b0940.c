// FUN_1804b0940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0940 */

void FUN_1804b0940(undefined8 *param_1,longlong *param_2,char *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  
  lVar3 = DAT_180bb8ae8;
  if (*param_3 == '%') {
    if ((param_3[1] == 's') && (param_3[2] == '\0')) {
      puVar4 = &DAT_1808597dc;
      if (*(undefined1 **)param_4 != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)param_4;
      }
      *param_1 = puVar4;
      if (param_2 == (longlong *)0x0) {
        return;
      }
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (puVar4[lVar3] != '\0');
      *param_2 = (longlong)(puVar4 + lVar3);
      return;
    }
    if ((((param_3[1] == '.') && (param_3[2] == '*')) && (param_3[3] == 's')) &&
       (param_3[4] == '\0')) {
      puVar4 = *(undefined1 **)(param_4 + 2);
      iVar5 = *param_4;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_1808597dc;
        iVar2 = 6;
        if (iVar5 < 6) {
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
      }
      *param_1 = puVar4;
      *param_2 = (longlong)(puVar4 + iVar5);
      return;
    }
  }
  iVar5 = *(int *)(DAT_180bb8ae8 + 0x2ad0);
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x2ad8);
  iVar2 = FUN_1804aeff0(lVar1,(longlong)iVar5);
  if (lVar1 != 0) {
    if ((iVar2 == -1) || (iVar5 <= iVar2)) {
      iVar2 = iVar5 + -1;
    }
    *(undefined1 *)(iVar2 + lVar1) = 0;
  }
  *param_1 = *(undefined8 *)(lVar3 + 0x2ad8);
  if (param_2 != (longlong *)0x0) {
    *param_2 = (longlong)iVar2 + *(longlong *)(lVar3 + 0x2ad8);
  }
  return;
}



