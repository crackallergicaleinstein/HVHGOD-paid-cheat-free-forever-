// FUN_1804b4100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b4100 */

void FUN_1804b4100(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  float fVar5;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [12];
  float fStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  fVar5 = *(float *)(DAT_180bb8ae8 + 0xcd0);
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (0.0 < fVar5) {
    auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe28);
    local_38._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    local_54 = local_38._4_4_ + 1.0;
    local_30._0_4_ = (float)param_1;
    local_50 = (float)local_30 + 1.0;
    auVar3 = vshufps_avx(auVar1,auVar1,0xff);
    local_48 = auVar1._0_12_;
    fStack_3c = auVar3._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    local_38._0_4_ = (float)param_2;
    local_58 = (float)local_38 + 1.0;
    local_30._4_4_ = (float)((ulonglong)param_1 >> 0x20);
    local_4c = local_30._4_4_ + 1.0;
    local_38 = param_2;
    local_30 = param_1;
    uVar4 = FUN_1804b1120(local_48);
    FUN_1804de7c0(*(undefined8 *)(lVar2 + 0x2c8),&local_50,&local_58,uVar4,param_3,fVar5,0);
    auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe18);
    auVar3 = vshufps_avx(auVar1,auVar1,0xff);
    local_48 = auVar1._0_12_;
    fStack_3c = auVar3._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    uVar4 = FUN_1804b1120(local_48);
    FUN_1804de7c0(*(undefined8 *)(lVar2 + 0x2c8),&local_30,&local_38,uVar4,param_3,fVar5,0);
  }
  return;
}



