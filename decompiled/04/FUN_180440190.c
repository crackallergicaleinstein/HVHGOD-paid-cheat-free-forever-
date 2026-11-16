// FUN_180440190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180440190 */

void FUN_180440190(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  lVar3 = (longlong)param_1[1] - (longlong)puVar2;
  if ((ulonglong)(lVar3 >> 3) < 0x10) {
    puVar2 = (undefined8 *)FUN_18015bca0(0x80);
    uVar5 = *param_1;
    lVar3 = (longlong)(param_1[2] - uVar5) >> 3;
    if (lVar3 != 0) {
      uVar4 = uVar5;
      if ((0xfff < (ulonglong)(lVar3 * 8)) &&
         (uVar4 = *(ulonglong *)(uVar5 - 8), 0x1f < (uVar5 - uVar4) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(uVar4);
    }
    *param_1 = (ulonglong)puVar2;
    puVar1 = puVar2 + 0x10;
    param_1[1] = (ulonglong)puVar1;
    param_1[2] = (ulonglong)puVar1;
    if (puVar2 != puVar1) {
      do {
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      } while (puVar2 != puVar1);
      return;
    }
  }
  else {
    uVar5 = lVar3 + 7U >> 3;
    if ((undefined8 *)param_1[1] < puVar2) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return;
}



