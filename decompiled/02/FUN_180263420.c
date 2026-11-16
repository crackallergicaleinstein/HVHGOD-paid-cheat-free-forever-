// FUN_180263420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180263420 */

ulonglong FUN_180263420(undefined8 param_1,longlong param_2,int param_3,char param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int local_18 [4];
  
  iVar2 = FUN_180252c10(param_2);
  local_18[1] = 0x83;
  local_18[0] = 0;
  if (iVar2 < 1) {
    lVar3 = 0x52c;
    if (iVar2 != 0) {
      lVar3 = 0x528;
    }
  }
  else {
    lVar3 = (longlong)iVar2 * 0x70 + -8;
  }
  iVar2 = *(int *)(lVar3 + param_2);
  piVar5 = local_18;
  if (-1 < iVar2) {
    piVar5 = (int *)(lVar3 + param_2);
  }
  piVar4 = local_18 + 1;
  if (iVar2 < 0x84) {
    piVar4 = piVar5;
  }
  iVar2 = *piVar4;
  if (iVar2 == 0x83) {
    if (param_3 < 1) {
      param_3 = 1;
    }
    auVar1 = vroundss_avx(ZEXT416(0),ZEXT416((uint)((float)param_3 * 0.5)),2);
    return auVar1._0_8_;
  }
  if ((param_4 == '\0') && (param_3 < iVar2)) {
    iVar2 = param_3 + 1;
  }
  return (ulonglong)(uint)(float)iVar2;
}



