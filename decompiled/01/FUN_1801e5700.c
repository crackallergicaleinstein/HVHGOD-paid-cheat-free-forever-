// FUN_1801e5700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e5700 */

void FUN_1801e5700(uint param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = (ulonglong)param_1;
  uVar5 = (ulonglong)param_2;
  uVar6 = 0;
  while( true ) {
    uVar3 = (uint)uVar5;
    if (param_2 < 10000) break;
    uVar5 = uVar5 / 10000;
    param_2 = (uint)uVar5;
    uVar3 = uVar3 + param_2 * -10000;
    *(undefined2 *)(param_3 + (uVar2 - uVar6) + -2) =
         *(undefined2 *)(&DAT_1807cb900 + (uVar3 % 100) * 2);
    *(undefined2 *)(param_3 + (uVar2 - uVar6) + -4) =
         *(undefined2 *)(&DAT_1807cb900 + (uVar3 / 100) * 2);
    uVar6 = (ulonglong)((int)uVar6 + 4);
  }
  uVar4 = uVar3;
  if (99 < uVar3) {
    uVar4 = (uint)(uVar5 / 100);
    lVar1 = uVar2 - uVar6;
    uVar6 = (ulonglong)((int)uVar6 + 2);
    *(undefined2 *)(param_3 + lVar1 + -2) =
         *(undefined2 *)(&DAT_1807cb900 + (uVar3 + uVar4 * -100) * 2);
  }
  if (uVar4 < 10) {
    *param_3 = (char)uVar4 + '0';
    return;
  }
  *(undefined2 *)(param_3 + (uVar2 - uVar6) + -2) = *(undefined2 *)(&DAT_1807cb900 + uVar4 * 2);
  return;
}



