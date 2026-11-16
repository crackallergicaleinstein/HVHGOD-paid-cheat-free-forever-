// FUN_1802826b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802826b0 */

int * FUN_1802826b0(int *param_1,short param_2)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  
  if (*param_1 == 0) {
    return param_1 + 4;
  }
  if ((param_2 == 0x3b) || (sVar7 = param_2, (ushort)(param_2 - 500U) < 0x1b)) {
    sVar7 = 0x2a;
  }
  piVar5 = (int *)0x0;
  psVar3 = &DAT_1806ff3e8;
  uVar4 = 0;
  psVar1 = &DAT_1806ff3e8;
  do {
    iVar6 = -1;
    if (*psVar1 == sVar7) goto LAB_18028271c;
    uVar4 = uVar4 + 1;
    psVar1 = psVar1 + 0x10;
  } while (uVar4 < 0x2c);
  uVar4 = 0xffffffff;
LAB_18028271c:
  if ((param_2 == 0x3b) || ((ushort)(param_2 - 500U) < 0x1b)) {
    param_2 = 0x2a;
  }
  uVar2 = 0;
  do {
    if (*psVar3 == param_2) {
      if (-1 < (int)uVar2) {
        iVar6 = *(int *)(&DAT_1806ff3ec + (longlong)(int)uVar2 * 0x20);
      }
      break;
    }
    uVar2 = uVar2 + 1;
    psVar3 = psVar3 + 0x10;
  } while (uVar2 < 0x2c);
  if (*param_1 == 2) {
    if (-1 < (int)uVar4) {
      return param_1 + (longlong)(int)uVar4 * 0x94 + 0x4a4;
    }
  }
  else if (-1 < iVar6) {
    piVar5 = param_1 + (longlong)iVar6 * 0x94 + 0x98;
  }
  return piVar5;
}



