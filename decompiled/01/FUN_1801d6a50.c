// FUN_1801d6a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6a50 */

void FUN_1801d6a50(int *param_1,int param_2,int param_3,float param_4,float param_5,char param_6,
                  char param_7,char param_8,char param_9)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_38 [12];
  
  if ((param_2 == *param_1) && (param_3 == param_1[1])) {
    cVar1 = (char)param_1[7];
  }
  else {
    cVar1 = '\0';
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    param_1[1] = param_3;
    param_1[6] = 0x3f800000;
  }
  if ((param_7 == '\0') || (param_9 != '\0')) {
    *(undefined1 *)(param_1 + 7) = 0;
    cVar1 = '\0';
  }
  if (((param_6 == '\0') || (param_8 == '\0')) || (param_9 != '\0')) {
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    param_1[4] = (int)param_4;
    param_1[5] = (int)param_5;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_7 != '\0') {
    iVar4 = FUN_180615070((param_4 - (float)param_1[4]) * 0.6 + (float)param_1[2],0x43b40000);
    param_1[2] = iVar4;
    local_38[1] = (param_5 - (float)param_1[5]) * 0.4 + (float)param_1[3];
    pfVar3 = local_38;
    if (-70.0 <= local_38[1]) {
      pfVar3 = local_38 + 1;
    }
    local_38[2] = 70.0;
    pfVar2 = local_38 + 2;
    if (local_38[1] <= 70.0) {
      pfVar2 = pfVar3;
    }
    local_38[0] = -70.0;
    param_1[4] = (int)param_4;
    param_1[3] = (int)*pfVar2;
    param_1[5] = (int)param_5;
  }
  return;
}



