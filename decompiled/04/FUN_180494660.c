// FUN_180494660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180494660 */

undefined1 (*) [16] FUN_180494660(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar8 = param_2 - DAT_180c62d48;
  lVar10 = (DAT_180c62d50 - DAT_180c62d48) / 0x28;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar10 + 1;
  uVar3 = (DAT_180c62d58 - DAT_180c62d48) / 0x28;
  if (0x666666666666666 - (uVar3 >> 1) < uVar3) {
    uVar9 = 0x666666666666666;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar1;
    if (uVar1 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar9 * 0x28);
  pauVar2 = (undefined1 (*) [16])(lVar7 + (lVar8 / 0x28) * 0x28);
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)*pauVar2 = *param_3;
  *(undefined8 *)(*pauVar2 + 8) = uVar4;
  *(undefined8 *)pauVar2[1] = uVar5;
  *(undefined8 *)(pauVar2[1] + 8) = uVar6;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined4 *)pauVar2[2] = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(pauVar2[2] + 4) = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar10 = DAT_180c62d48;
  if (param_2 != DAT_180c62d50) {
    FUN_1802ebba0(DAT_180c62d48,param_2);
    lVar10 = param_2;
  }
  FUN_1802ebba0(lVar10,DAT_180c62d50);
  lVar8 = DAT_180c62d50;
  lVar10 = DAT_180c62d48;
  if (DAT_180c62d48 != 0) {
    for (; lVar10 != lVar8; lVar10 = lVar10 + 0x28) {
      FUN_18015c010(lVar10);
    }
    lVar10 = DAT_180c62d48;
    if ((0xfff < (ulonglong)(((DAT_180c62d58 - DAT_180c62d48) / 0x28) * 0x28)) &&
       (lVar10 = *(longlong *)(DAT_180c62d48 + -8), 0x1f < (DAT_180c62d48 - lVar10) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar10);
  }
  DAT_180c62d48 = lVar7;
  DAT_180c62d50 = lVar7 + uVar1 * 0x28;
  DAT_180c62d58 = uVar9 * 0x28 + lVar7;
  return pauVar2;
}



