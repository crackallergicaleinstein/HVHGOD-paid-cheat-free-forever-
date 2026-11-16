// FUN_1805d21d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d21d0 */

ulonglong FUN_1805d21d0(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,
                       uint param_6,uint param_7)

{
  ulonglong in_RAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (((int)param_6 <= (int)param_5) && ((int)param_3 <= (int)param_7)) {
    if ((int)param_5 <= (int)param_7) {
      param_7 = -param_1[1] & param_5;
    }
    if ((int)param_6 <= (int)param_3) {
      param_6 = -param_1[1];
      in_RAX = (ulonglong)param_6;
      param_6 = (param_3 - 1) + param_1[1] & param_6;
      if (param_3 == param_6) {
        param_6 = param_6 + param_1[1];
      }
    }
    if ((int)param_6 <= (int)param_7) {
      piVar5 = *(int **)(param_1 + 0xc);
      iVar3 = (int)(param_7 - param_6) >> ((byte)*param_1 & 0x1f);
      iVar2 = iVar3 + 1;
      in_RAX = (ulonglong)iVar2;
      if (*(int **)(param_1 + 10) <= piVar5 + in_RAX) {
        param_1[0xe] = 0x62;
        return CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
      }
      iVar4 = param_5 - param_3;
      iVar1 = param_4 - param_2;
      if (iVar1 == 0) {
        do {
          *piVar5 = param_2;
          piVar5 = piVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      else {
        in_RAX = ((longlong)(int)(param_6 - param_3) * (longlong)iVar1) / (longlong)iVar4;
        param_2 = param_2 + (int)in_RAX;
        *piVar5 = param_2;
        piVar5 = piVar5 + 1;
        if (iVar3 != 0) {
          iVar6 = (param_6 - param_3) * iVar1 - (int)in_RAX * iVar4;
          in_RAX = ((longlong)(int)param_1[1] * (longlong)iVar1) / (longlong)iVar4;
          iVar1 = param_1[1] * iVar1 - (int)in_RAX * iVar4;
          iVar2 = 1;
          if (param_4 < param_2) {
            iVar6 = -iVar6;
            iVar2 = -1;
            iVar1 = -iVar1;
          }
          do {
            param_2 = param_2 + (int)in_RAX;
            iVar6 = iVar6 + iVar1;
            if (iVar4 <= iVar6) {
              iVar6 = iVar6 - iVar4;
              param_2 = param_2 + iVar2;
            }
            *piVar5 = param_2;
            piVar5 = piVar5 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      *(int **)(param_1 + 0xc) = piVar5;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



