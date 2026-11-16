// FUN_1802ff6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff6f0 */

ulonglong FUN_1802ff6f0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                       char param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  
  fVar2 = (float)param_1 * (float)param_1 + (float)param_2 * (float)param_2;
  if (fVar2 < 0.0) {
    auVar5._0_8_ = FUN_18061e150();
    auVar5._8_56_ = extraout_var;
    auVar4 = auVar5._0_16_;
  }
  else {
    auVar4 = ZEXT416((uint)SQRT(fVar2));
  }
  auVar5 = ZEXT1664(auVar4);
  fVar2 = (float)FUN_1802fb7c0(auVar4._0_8_,param_4,param_6,param_7,param_8,param_9,param_10);
  if (15.0 <= auVar5._0_4_) {
    fVar3 = (float)FUN_180636c80(param_2,param_1);
    fVar3 = fVar3 * 57.295776;
    for (fVar1 = (float)param_3 - fVar3; 180.0 < fVar1; fVar1 = fVar1 + -360.0) {
    }
    for (; fVar1 < -180.0; fVar1 = fVar1 + 360.0) {
    }
    if (ABS(fVar1) <= 2.0) {
      if (param_5 == '\0') {
        for (fVar3 = fVar3 - fVar2; 180.0 < fVar3; fVar3 = fVar3 + -360.0) {
        }
        for (; param_3 = (ulonglong)(uint)fVar3, fVar3 < -180.0; fVar3 = fVar3 + 360.0) {
        }
      }
      else {
        for (fVar3 = fVar3 + fVar2; 180.0 < fVar3; fVar3 = fVar3 + -360.0) {
        }
        for (; param_3 = (ulonglong)(uint)fVar3, fVar3 < -180.0; fVar3 = fVar3 + 360.0) {
        }
      }
    }
    else if (fVar1 <= 0.0) {
      for (fVar3 = fVar3 - fVar2; 180.0 < fVar3; fVar3 = fVar3 + -360.0) {
      }
      for (; param_3 = (ulonglong)(uint)fVar3, fVar3 < -180.0; fVar3 = fVar3 + 360.0) {
      }
    }
    else {
      for (fVar3 = fVar3 + fVar2; 180.0 < fVar3; fVar3 = fVar3 + -360.0) {
      }
      for (; param_3 = (ulonglong)(uint)fVar3, fVar3 < -180.0; fVar3 = fVar3 + 360.0) {
      }
    }
  }
  return param_3;
}



