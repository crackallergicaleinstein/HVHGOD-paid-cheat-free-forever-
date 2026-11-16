// FUN_180463450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180463450 */

void FUN_180463450(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,uint param_5,
                  char *param_6,char *param_7)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 auVar3 [64];
  undefined4 local_res10;
  float local_res14;
  undefined8 local_38;
  undefined8 uStack_30;
  
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_4[1] + 0.5)),1);
  auVar3 = ZEXT1664(auVar1);
  local_res14 = (float)FUN_1804632d0(param_2,param_3);
  local_res14 = auVar3._0_4_ - local_res14;
  auVar1 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(*param_4 + 0.5)),1);
  local_res10 = auVar1._0_4_;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((float)param_3 * DAT_180b0a41c + 0.5)),1);
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
  uVar2 = auVar1._0_8_;
  if ((((param_5 & 0xff000000) != 0) && (param_6 != param_7)) && (*param_6 != '\0')) {
    if (param_2 == 0) {
      param_2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    if (auVar1._0_4_ == 0.0) {
      uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
    }
    local_38 = *(undefined8 *)(param_1 + 0x60);
    uStack_30 = *(undefined8 *)(param_1 + 0x68);
    FUN_1804ea5f0(param_2,param_1,uVar2,&local_res10,param_5,&local_38,param_6,param_7,0,0);
  }
  return;
}



