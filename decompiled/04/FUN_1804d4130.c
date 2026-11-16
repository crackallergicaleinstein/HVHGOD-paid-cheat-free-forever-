// FUN_1804d4130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d4130 */

void FUN_1804d4130(int *param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    puVar2 = (undefined2 *)((longlong)param_1[0xc] * 0xe + *(longlong *)(param_1 + 10));
    param_1[0xc] = param_1[0xc] + 1;
    puVar2[2] = (undefined2)param_5;
    puVar2[3] = (undefined2)param_6;
    *(char *)(puVar2 + 6) = param_2;
    *puVar2 = (short)param_3;
    puVar2[1] = (short)param_4;
    puVar2[4] = (undefined2)param_7;
    puVar2[5] = (undefined2)param_8;
    return;
  }
  if ((param_1[7] < param_3) || (iVar5 = param_1[7], param_1[1] == 0)) {
    param_1[7] = param_3;
    iVar5 = param_3;
  }
  if ((param_1[9] < param_4) || (iVar4 = param_1[9], param_1[1] == 0)) {
    param_1[9] = param_4;
    iVar4 = param_4;
  }
  if ((param_3 < param_1[6]) || (iVar3 = param_1[6], param_1[1] == 0)) {
    param_1[6] = param_3;
    iVar3 = param_3;
  }
  if ((param_4 < param_1[8]) || (iVar1 = param_1[8], param_1[1] == 0)) {
    param_1[8] = param_4;
    iVar1 = param_4;
  }
  param_1[1] = 1;
  if (param_2 == '\x04') {
    if (iVar5 < param_5) {
      param_1[7] = param_5;
      iVar5 = param_5;
    }
    if (iVar4 < param_6) {
      param_1[9] = param_6;
      iVar4 = param_6;
    }
    if (param_5 < iVar3) {
      param_1[6] = param_5;
      iVar3 = param_5;
    }
    if (param_6 < iVar1) {
      param_1[8] = param_6;
      iVar1 = param_6;
    }
    if (iVar5 < param_7) {
      param_1[7] = param_7;
    }
    if (iVar4 < param_8) {
      param_1[9] = param_8;
    }
    if (param_7 < iVar3) {
      param_1[6] = param_7;
    }
    if (param_8 < iVar1) {
      param_1[8] = param_8;
    }
    param_1[1] = 1;
  }
  param_1[0xc] = param_1[0xc] + 1;
  return;
}



