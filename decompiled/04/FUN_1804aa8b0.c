// FUN_1804aa8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aa8b0 */

void FUN_1804aa8b0(undefined8 *param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  param_4 = ((float)(*(uint *)*param_1 >> 0x18) / 255.0) * param_4;
  fVar3 = 0.0;
  if (0.0 <= param_4) {
    auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)param_4));
    fVar3 = auVar1._0_4_;
  }
  fVar4 = *(float *)param_1[4];
  uVar2 = (int)(longlong)(fVar3 * 255.0 + 0.5) << 0x18 | *(uint *)*param_1 & 0xffffff;
  fVar3 = (float)FUN_1804633e0(*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],param_2,0);
  local_res8 = *(float *)param_1[1];
  local_resc = *(float *)param_1[6] + param_3;
  if (local_res8 + fVar3 <= fVar4) {
    FUN_180463450(*(undefined8 *)param_1[5],*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],
                  &local_res8,uVar2,param_2,0);
  }
  else {
    FUN_180463930(*(undefined8 *)param_1[5],*(undefined8 *)param_1[2],*(undefined4 *)param_1[3],
                  &local_res8,uVar2,param_2,
                  CONCAT44(uVar5,*(float *)param_1[4] - DAT_180b0a41c * 17.0),*(float *)param_1[4]);
  }
  return;
}



