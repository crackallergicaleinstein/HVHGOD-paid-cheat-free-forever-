// FUN_1804b3f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b3f60 */

void FUN_1804b3f60(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined4 param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [12];
  float fStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar4 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  local_48 = param_2;
  local_40 = param_1;
  FUN_1804df870(*(undefined8 *)(lVar2 + 0x2c8),&local_40,&local_48,param_3,param_5,0);
  if ((param_4 != '\0') && (fVar6 = *(float *)(lVar4 + 0xcd0), 0.0 < fVar6)) {
    local_64 = local_48._4_4_ + 1.0;
    local_60 = (float)local_40 + 1.0;
    auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe28);
    auVar3 = vshufps_avx(auVar1,auVar1,0xff);
    local_58 = auVar1._0_12_;
    fStack_4c = auVar3._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    local_68 = (float)local_48 + 1.0;
    local_5c = local_40._4_4_ + 1.0;
    uVar5 = FUN_1804b1120(local_58);
    FUN_1804de7c0(*(undefined8 *)(lVar2 + 0x2c8),&local_60,&local_68,uVar5,param_5,fVar6,0);
    auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe18);
    auVar3 = vshufps_avx(auVar1,auVar1,0xff);
    local_58 = auVar1._0_12_;
    fStack_4c = auVar3._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    uVar5 = FUN_1804b1120(local_58);
    FUN_1804de7c0(*(undefined8 *)(lVar2 + 0x2c8),&local_40,&local_48,uVar5,param_5,fVar6,0);
  }
  return;
}



