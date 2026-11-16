// FUN_1801e3c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e3c90 */

void FUN_1801e3c90(uint param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar2 = (ulonglong)param_2;
  uVar3 = uVar2;
  if (param_1 != 1) {
    do {
      uVar3 = uVar2 / 100;
      lVar1 = param_1 - uVar5;
      uVar4 = (int)uVar5 + 2;
      uVar5 = (ulonglong)uVar4;
      *(undefined2 *)(lVar1 + -2 + param_3) =
           *(undefined2 *)(&DAT_1807cb900 + (uint)(((int)uVar2 + (int)uVar3 * -100) * 2));
      uVar2 = uVar3;
    } while (uVar4 < param_1 - 1);
  }
  if (uVar4 < param_1) {
    *(char *)((ulonglong)((param_1 - uVar4) - 1) + param_3) =
         (char)uVar3 + (char)(uVar3 / 10) * -10 + '0';
  }
  return;
}



