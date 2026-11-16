// FUN_180339630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180339630 */

undefined4 *
FUN_180339630(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,undefined4 param_6)

{
  undefined1 auVar1 [16];
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  float local_58;
  char local_54;
  float local_50;
  char local_4c;
  
  FUN_180339510(&local_58);
  FUN_180339510(&local_50,param_2,param_3,param_4,param_6);
  if (local_54 == '\0') {
LAB_180339713:
    *(undefined1 *)(param_1 + 2) = 0;
    return param_1;
  }
  auVar4 = ZEXT464((uint)(local_58 / param_5));
  sVar2 = thunk_FUN_180624430(local_58 / param_5);
  auVar3 = auVar4._0_16_;
  if ((0 < sVar2) || (2.0 <= auVar4._0_4_)) goto LAB_180339713;
  if (local_4c != '\0') {
    auVar6 = ZEXT464((uint)(local_50 / param_5));
    sVar2 = thunk_FUN_180624430(local_50 / param_5);
    auVar5 = auVar6._0_16_;
    auVar3 = auVar4._0_16_;
    if (sVar2 < 1) goto LAB_1803396f8;
  }
  auVar5 = ZEXT416((uint)(auVar3._0_4_ + 0.5));
LAB_1803396f8:
  auVar1 = vmaxss_avx(ZEXT816(0),auVar3);
  auVar3 = vmaxss_avx(auVar3,auVar5);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar3._0_4_;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



