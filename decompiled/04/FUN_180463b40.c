// FUN_180463b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180463b40 */

void FUN_180463b40(longlong param_1,longlong param_2,float param_3,float *param_4,uint param_5,
                  char *param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [64];
  float fVar7;
  undefined4 local_res18 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res18[0] = 0;
  FUN_1804b0e50(local_res18,param_6,0);
  fVar7 = 0.5;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3 * DAT_180b0a41c + 0.5)),1);
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
  auVar6 = ZEXT1664(auVar1);
  lVar2 = FUN_1804e97d0(param_2,auVar1._0_8_,0xbf800000);
  lVar3 = FUN_1804e95f0(lVar2,(undefined2)local_res18[0]);
  uVar5 = auVar6._0_8_;
  if (lVar3 != 0) {
    fVar4 = auVar6._0_4_ / *(float *)(lVar2 + 0x14);
    auVar1 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*param_4 -
                                         (*(float *)(lVar3 + 0x10) + *(float *)(lVar3 + 8)) * fVar7
                                         * fVar4) + fVar7)),1);
    local_58 = auVar1._0_4_;
    auVar1 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((param_4[1] -
                                         (*(float *)(lVar3 + 0x14) + *(float *)(lVar3 + 0xc)) *
                                         fVar7 * fVar4) + fVar7)),1);
    local_54 = auVar1._0_4_;
    if ((((param_5 & 0xff000000) != 0) && (param_6 != (char *)0x0)) && (*param_6 != '\0')) {
      if (param_2 == 0) {
        param_2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x20);
      }
      if (auVar6._0_4_ == 0.0) {
        uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
      }
      local_50 = *(undefined8 *)(param_1 + 0x60);
      uStack_48 = *(undefined8 *)(param_1 + 0x68);
      FUN_1804ea5f0(param_2,param_1,uVar5,&local_58,param_5,&local_50,param_6,0,0,0);
    }
  }
  return;
}



