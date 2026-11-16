// FUN_1802f1f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f1f90 */

void FUN_1802f1f90(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  float local_48;
  float local_44;
  
  FUN_1803dff30();
  if (local_48 <= 90.0) {
    if (local_48 < -90.0) {
      local_48 = local_48 + 360.0;
    }
  }
  else {
    local_48 = local_48 + -360.0;
  }
  auVar3 = ZEXT464((uint)(local_44 * 0.017453292));
  fVar1 = (local_48 - ((90.0 - ABS(local_48)) * 10.0) / 90.0) * 0.017453292;
  auVar4 = ZEXT464((uint)fVar1);
  fVar1 = (float)FUN_180637540(fVar1);
  fVar2 = (float)FUN_180637540(auVar3._0_8_);
  *param_2 = fVar2 * fVar1;
  fVar2 = (float)FUN_180638e00(auVar3._0_8_);
  param_2[1] = fVar2 * fVar1;
  fVar1 = (float)FUN_180638e00(auVar4._0_8_);
  param_2[2] = -fVar1;
  return;
}



