// FUN_1801df3c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801df3c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_1801df3c0(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 *param_4,
             undefined1 param_5,uint param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  
  iVar6 = 0;
  pcVar8 = (char *)*param_4;
  iVar4 = 0;
  if (0 < (int)param_6) {
    uVar9 = (ulonglong)param_6;
    pcVar10 = pcVar8 + param_4[1];
    do {
      iVar4 = iVar4 + *pcVar8;
      pcVar3 = pcVar8 + 1;
      if (pcVar8 + 1 == pcVar10) {
        iVar6 = iVar6 + 1;
        pcVar3 = pcVar8;
      }
      pcVar8 = pcVar3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined1 *)(param_3 - iVar4);
  for (; param_2 != puVar11; param_2 = param_2 + 1) {
    uVar1 = *param_2;
    if ((ulonglong)param_7[3] < param_7[2] + 1) {
      (**(code **)*param_7)(param_7);
    }
    *(undefined1 *)(param_7[1] + param_7[2]) = uVar1;
    param_7[2] = param_7[2] + 1;
  }
  if ((int)param_6 < 1) {
    *param_1 = param_7;
  }
  else {
    do {
      iVar4 = iVar6 + -1;
      if (iVar6 < 1) {
        pcVar8 = pcVar8 + -1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      if ((ulonglong)param_7[3] < param_7[2] + 1) {
        (**(code **)*param_7)(param_7);
      }
      *(undefined1 *)(param_7[1] + param_7[2]) = param_5;
      lVar5 = param_7[2] + 1;
      param_7[2] = lVar5;
      cVar2 = *pcVar8;
      for (puVar7 = puVar11; puVar7 != puVar11 + cVar2; puVar7 = puVar7 + 1) {
        uVar1 = *puVar7;
        if ((ulonglong)param_7[3] < lVar5 + 1U) {
          (**(code **)*param_7)(param_7);
        }
        *(undefined1 *)(param_7[1] + param_7[2]) = uVar1;
        param_7[2] = param_7[2] + 1;
        lVar5 = param_7[2];
      }
      param_6 = param_6 - 1;
      puVar11 = puVar11 + *pcVar8;
    } while (0 < (int)param_6);
    *param_1 = param_7;
  }
  return param_1;
}



