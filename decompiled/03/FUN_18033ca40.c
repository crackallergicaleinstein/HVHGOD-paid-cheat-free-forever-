// FUN_18033ca40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033ca40 */

void FUN_18033ca40(undefined4 *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  sVar1 = thunk_FUN_180624430(param_2);
  if (sVar1 < 1) {
    iVar2 = param_1[4];
    if (iVar2 < 4) {
      param_1[4] = iVar2 + 1;
      param_1[iVar2] = (int)param_2;
      return;
    }
    iVar2 = 1;
    puVar3 = param_1;
    do {
      iVar2 = iVar2 + 1;
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while (iVar2 < 4);
    param_1[3] = (int)param_2;
  }
  return;
}



