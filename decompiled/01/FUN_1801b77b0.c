// FUN_1801b77b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b77b0 */

void FUN_1801b77b0(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if ((ulonglong)(param_1[1] - *param_1 >> 3) < param_2) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    puVar3 = (undefined8 *)FUN_18015bca0(param_2 * 8);
    lVar2 = *param_1;
    lVar5 = param_1[2] - lVar2 >> 3;
    if (lVar5 != 0) {
      lVar4 = lVar2;
      if ((0xfff < (ulonglong)(lVar5 * 8)) &&
         (lVar4 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar4);
    }
    *param_1 = (longlong)puVar3;
    puVar1 = puVar3 + param_2;
    param_1[1] = (longlong)puVar1;
    param_1[2] = (longlong)puVar1;
    if (puVar3 != puVar1) {
      do {
        *puVar3 = param_3;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar1);
      return;
    }
  }
  else {
    FUN_1801aff60(*param_1,param_1[1],&local_res18);
  }
  return;
}



