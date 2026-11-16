// FUN_1804eb100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804eb100 */

void FUN_1804eb100(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 in_register_000012c4 [12];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [64];
  float local_68;
  float fStack_64;
  
  auVar1._0_4_ = param_4 / 5.0;
  auVar1._4_12_ = in_register_000012c4;
  auVar1 = vmaxss_avx(auVar1,ZEXT416(0x3f800000));
  auVar5 = ZEXT1664(auVar1);
  fVar2 = auVar1._0_4_ * 0.25;
  param_4 = param_4 - auVar1._0_4_ * 0.5;
  local_68 = (float)param_2;
  fVar4 = param_4 / 3.0;
  fStack_64 = (float)((ulonglong)param_2 >> 0x20);
  fVar3 = fVar2 + local_68 + fVar4;
  fVar2 = (fVar2 + fStack_64 + param_4) - fVar4 * 0.5;
  _local_68 = CONCAT44(fVar2 - fVar4,fVar3 - fVar4);
  FUN_1804d0c90(param_1 + 0x50,&local_68);
  _local_68 = CONCAT44(fVar2,fVar3);
  FUN_1804d0c90(param_1 + 0x50,&local_68);
  _local_68 = CONCAT44(fVar2 - (fVar4 + fVar4),fVar4 + fVar4 + fVar3);
  FUN_1804d0c90(param_1 + 0x50,&local_68);
  FUN_1804d9a00(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3,
                auVar5._0_4_,0x4000,0x7f7fffff);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



