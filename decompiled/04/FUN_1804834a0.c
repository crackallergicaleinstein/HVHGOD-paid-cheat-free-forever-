// FUN_1804834a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804834a0 */

void FUN_1804834a0(undefined8 *param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *(undefined4 *)*param_1;
  auVar1 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(param_3 + (float)((undefined4 *)*param_1)[1] + 0.5)),1);
  local_resc = auVar1._0_4_;
  param_4 = ((float)(*(uint *)param_1[1] >> 0x18) / 255.0) * param_4;
  fVar3 = 0.0;
  if (0.0 <= param_4) {
    auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)param_4));
    fVar3 = auVar1._0_4_;
  }
  uVar2 = (int)(longlong)(fVar3 * 255.0 + 0.5) << 0x18 | *(uint *)param_1[1] & 0xffffff;
  if (*(char *)param_1[2] == '\0') {
    FUN_180463450(*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],0x4159999a,&local_res8,uVar2,
                  param_2,0);
    return;
  }
  FUN_180463930(*(undefined8 *)param_1[3],*(undefined8 *)param_1[4],0x4159999a,&local_res8,uVar2,
                param_2,*(float *)param_1[5] - DAT_180b0a41c * 24.3,
                *(float *)param_1[5] - DAT_180b0a41c * 9.3);
  return;
}



