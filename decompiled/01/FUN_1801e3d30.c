// FUN_1801e3d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e3d30 */

void FUN_1801e3d30(uint param_1,uint param_2,char *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  uVar1 = 0;
  while (uVar3 = (uint)uVar5, 9999 < param_2) {
    uVar5 = uVar5 / 10000;
    param_2 = (uint)uVar5;
    uVar3 = uVar3 + param_2 * -10000;
    lVar2 = param_1 - uVar1;
    *(undefined2 *)(param_3 + lVar2 + -1) = *(undefined2 *)(&DAT_1807cb900 + (uVar3 % 100) * 2);
    *(undefined2 *)(param_3 + lVar2 + -3) = *(undefined2 *)(&DAT_1807cb900 + (uVar3 / 100) * 2);
    uVar1 = (ulonglong)((int)uVar1 + 4);
  }
  uVar4 = uVar3;
  if (99 < uVar3) {
    uVar4 = (uint)(uVar5 / 100);
    *(undefined2 *)(param_3 + (param_1 - uVar1) + -1) =
         *(undefined2 *)(&DAT_1807cb900 + (uVar3 + uVar4 * -100) * 2);
  }
  if (uVar4 < 10) {
    param_3[1] = '.';
    *param_3 = (char)uVar4 + '0';
    return;
  }
  param_3[2] = (&DAT_1807cb900)[uVar4 * 2 + 1];
  param_3[1] = '.';
  *param_3 = (&DAT_1807cb900)[uVar4 * 2];
  return;
}



