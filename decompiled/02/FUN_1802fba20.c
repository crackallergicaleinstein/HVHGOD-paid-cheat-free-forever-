// FUN_1802fba20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fba20 */

ulonglong FUN_1802fba20(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       uint *param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  
  iVar3 = ((uint)(param_2 >> 3) & 1) - ((uint)(param_2 >> 4) & 1);
  iVar2 = ((uint)(param_2 >> 9) & 1) - ((uint)(param_2 >> 10) & 1);
  if ((*(char *)(param_1 + 2) != '\0') && ((iVar3 != 0 || (iVar2 != 0)))) {
    auVar6._0_4_ = (float)iVar2;
    auVar6._4_12_ = SUB1612(ZEXT816(0),4);
    auVar7._0_4_ = (float)iVar3;
    auVar7._4_12_ = SUB1612(ZEXT816(0),4);
    fVar4 = (float)FUN_180636c80(auVar6._0_8_,auVar7._0_8_);
    uVar5 = FUN_180615070((fVar4 * 180.0) / 3.1415927 + (float)param_3,0x43b40000);
    *param_5 = uVar5;
  }
  if ((*(char *)(param_1 + 2) != '\0') && ((iVar3 != 0 || (iVar2 != 0)))) {
    return (ulonglong)*param_5;
  }
  if ((*(char *)(param_1 + 1) == '\0') && (param_3 = param_4, *(char *)(param_1 + 2) != '\0')) {
    auVar8 = ZEXT464(*param_5);
    sVar1 = thunk_FUN_180624430(*param_5);
    if (sVar1 < 1) {
      return auVar8._0_8_;
    }
  }
  return param_3;
}



