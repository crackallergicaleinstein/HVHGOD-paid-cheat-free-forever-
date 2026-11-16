// FUN_18045c750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045c750 */

void FUN_18045c750(float *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  
  lVar3 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8);
  if (param_2 != 0) {
    local_res8 = DAT_180b0a41c * 13.5 + *param_1;
    local_resc = param_1[4];
    FUN_180463dc0(uVar1,&local_res8,param_5,param_2,0x41300000);
  }
  uVar4 = DAT_180c62ca8;
  fVar5 = (float)FUN_180463350(DAT_180c62ca8,0x41533333);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 28.0 + *param_1 + 0.5)),1);
  local_res8 = auVar2._0_4_;
  local_resc = param_1[4] - fVar5 * 0.5;
  FUN_180463450(uVar1,uVar4,0x41533333,&local_res8,param_4,param_3,0);
  return;
}



