// FUN_180267a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180267a50 */

void FUN_180267a50(int *param_1,int *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  float in_XMM0_Da;
  float fVar10;
  int local_68 [2];
  int *local_60;
  int *local_58;
  
  uVar3 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar3 & 0xfffffffffffffffc) < 0x81) {
      if ((param_1 != param_2) && (piVar9 = param_1 + 1, piVar9 != param_2)) {
        lVar8 = 4;
        do {
          piVar6 = param_1 + 1;
          iVar1 = *piVar9;
          lVar5 = (longlong)*param_1;
          lVar4 = **(longlong **)(param_4 + 8);
          fVar10 = (float)FUN_18025e030(in_XMM0_Da,lVar4 + (longlong)iVar1 * 0x98);
          in_XMM0_Da = (float)FUN_18025e030(fVar10,lVar5 * 0x98 + lVar4);
          if (fVar10 == in_XMM0_Da) {
            bVar2 = iVar1 < (int)lVar5;
          }
          else {
            bVar2 = in_XMM0_Da < fVar10;
          }
          if (bVar2) {
            in_XMM0_Da = (float)FUN_18063aed0(piVar6,param_1,lVar8);
            *param_1 = iVar1;
          }
          else {
            piVar6 = piVar9;
            while( true ) {
              piVar7 = piVar6 + -1;
              lVar4 = **(longlong **)(param_4 + 8);
              lVar5 = (longlong)*piVar7;
              fVar10 = (float)FUN_18025e030(in_XMM0_Da,lVar4 + (longlong)iVar1 * 0x98);
              in_XMM0_Da = (float)FUN_18025e030(fVar10,lVar5 * 0x98 + lVar4);
              if (fVar10 == in_XMM0_Da) {
                bVar2 = iVar1 < (int)lVar5;
              }
              else {
                bVar2 = in_XMM0_Da < fVar10;
              }
              if (!bVar2) break;
              *piVar6 = (int)lVar5;
              piVar6 = piVar7;
            }
            *piVar6 = iVar1;
          }
          piVar9 = piVar9 + 1;
          lVar8 = lVar8 + 4;
        } while (piVar9 != param_2);
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_1802698e0(&local_60,param_1,param_2,param_4);
    piVar6 = local_58;
    piVar9 = local_60;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_60 - (longlong)param_1 & 0xfffffffffffffffcU) <
        (longlong)((longlong)param_2 - (longlong)local_58 & 0xfffffffffffffffcU)) {
      in_XMM0_Da = (float)FUN_180267a50(param_1,local_60,param_3,param_4);
      param_1 = piVar6;
      piVar9 = param_2;
    }
    else {
      in_XMM0_Da = (float)FUN_180267a50(local_58,param_2,param_3,param_4);
    }
    uVar3 = (longlong)piVar9 - (longlong)param_1;
    param_2 = piVar9;
  }
  lVar4 = (longlong)param_2 - (longlong)param_1 >> 2;
  lVar8 = (longlong)param_2 - (longlong)param_1 >> 3;
  while (0 < lVar8) {
    local_68[0] = param_1[lVar8 + -1];
    lVar8 = lVar8 + -1;
    FUN_18026a660(param_1,lVar8,lVar4,local_68,param_4);
  }
  if (lVar4 < 2) {
    return;
  }
  param_2 = param_2 + -1;
  do {
    local_68[0] = *param_2;
    *param_2 = *param_1;
    FUN_18026a660(param_1,0,(longlong)param_2 - (longlong)param_1 >> 2,local_68,param_4);
    param_2 = param_2 + -1;
  } while (7 < (longlong)((4 - (longlong)param_1) + (longlong)param_2 & 0xfffffffffffffffcU));
  return;
}



