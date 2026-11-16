// FUN_18044eb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044eb60 */

void FUN_18044eb60(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    if (*(char *)((longlong)puVar4 + 0xc) != '\0') {
      ResumeThread((HANDLE)*puVar4);
      *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    CloseHandle((HANDLE)*puVar4);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    if ((0xfff < (param_1[2] - lVar2 & 0xfffffffffffffff0U)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



