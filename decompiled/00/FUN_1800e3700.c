// FUN_1800e3700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e3700 */

ulonglong FUN_1800e3700(undefined8 param_1,float param_2,ulonglong param_3,float param_4,
                       float param_5)

{
  undefined1 auVar1 [16];
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 in_register_00001244 [12];
  undefined1 auVar5 [64];
  float local_res10 [4];
  float local_res20 [2];
  
  auVar1._4_12_ = in_register_00001244;
  auVar1._0_4_ = param_2;
  auVar5 = ZEXT1664(CONCAT124(in_register_00001244,param_2));
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  sVar2 = thunk_FUN_180624430(auVar1._0_8_);
  if (sVar2 < 1) {
    pfVar4 = local_res20;
    if (param_4 <= auVar5._0_4_) {
      pfVar4 = local_res10;
    }
    pfVar3 = &param_5;
    if (auVar5._0_4_ <= param_5) {
      pfVar3 = pfVar4;
    }
    param_3 = (ulonglong)(uint)*pfVar3;
  }
  return param_3;
}



