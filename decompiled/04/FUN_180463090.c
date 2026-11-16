// FUN_180463090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180463090 */

void FUN_180463090(longlong param_1,float *param_2,float *param_3,undefined4 param_4,float param_5,
                  float param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  fVar2 = param_6 * 0.5;
  local_res8 = *param_3 - fVar2;
  local_resc = param_3[1] - fVar2;
  local_res10 = fVar2 + *param_2;
  local_res14 = fVar2 + param_2[1];
  auVar1 = vmaxss_avx(ZEXT416((uint)(param_5 - fVar2)),ZEXT816(0));
  FUN_1804dc420(0,&local_res10,&local_res8,auVar1._0_8_,0);
  FUN_1804d9a00(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                param_6,0x200,0x7f7fffff);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



