// FUN_1805b6b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b6b20 */

void FUN_1805b6b20(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  param_5 = param_5 - param_3;
  param_4 = param_4 - param_2;
  iVar4 = -param_5;
  if (*(char *)(*param_1 + 0x134) == '\0') {
    iVar4 = param_5;
  }
  iVar1 = -param_4;
  if (*(char *)(*param_1 + 0x134) == '\0') {
    iVar1 = param_4;
  }
  *param_7 = 0;
  *param_6 = 0;
  if (*(char *)((longlong)param_1 + 0x48d6) == '\0') {
    return;
  }
  *(int *)(param_1[1] + 0x20) =
       *(int *)(param_1[1] + 0x20) +
       ((param_5 >> 0x10) * (param_2 >> 0x10) - (param_4 >> 0x10) * (param_3 >> 0x10));
  if (iVar1 < 0) {
    if (iVar4 < 0) {
      if (iVar4 * -2 < -iVar1) {
        *param_6 = 0;
        *param_7 = *(int *)((longlong)param_1 + 0x4904) * 2;
        return;
      }
      if (iVar1 * -2 < -iVar4) {
        *param_6 = -(int)param_1[0x920];
        *param_7 = *(int *)((longlong)param_1 + 0x4904);
        return;
      }
      lVar2 = (longlong)(int)param_1[0x920] * -0xb332;
      *param_6 = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
      lVar2 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x1b333;
      *param_7 = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
      return;
    }
    if (iVar4 * 2 < -iVar1) {
      *param_6 = 0;
      *param_7 = *(int *)((longlong)param_1 + 0x4904) * 2;
      return;
    }
    if (iVar1 * -2 < iVar4) {
      *param_6 = (int)param_1[0x920];
      *param_7 = *(int *)((longlong)param_1 + 0x4904);
      return;
    }
    lVar2 = (longlong)(int)param_1[0x920] * 0xb333;
    *param_6 = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
    lVar2 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x1b333;
    *param_7 = (int)((ulonglong)((lVar2 >> 0x3f) + 0x8000 + lVar2) >> 0x10);
    return;
  }
  if (iVar4 < 0) {
    if (iVar4 * -2 < iVar1) goto LAB_1805b6bdc;
    if (iVar1 * 2 < -iVar4) {
      iVar3 = -(int)param_1[0x920];
      goto LAB_1805b6bfb;
    }
    lVar2 = (longlong)(int)param_1[0x920] * -0xb332;
  }
  else {
    if (iVar4 * 2 < iVar1) {
LAB_1805b6bdc:
      *param_6 = 0;
      *param_7 = 0;
      return;
    }
    iVar3 = (int)param_1[0x920];
    if (iVar1 * 2 < iVar4) {
LAB_1805b6bfb:
      *param_6 = iVar3;
      *param_7 = *(int *)((longlong)param_1 + 0x4904);
      return;
    }
    lVar2 = (longlong)iVar3 * 0xb333;
  }
  *param_6 = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
  lVar2 = (longlong)*(int *)((longlong)param_1 + 0x4904) * 0x4ccd;
  *param_7 = (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10);
  return;
}



