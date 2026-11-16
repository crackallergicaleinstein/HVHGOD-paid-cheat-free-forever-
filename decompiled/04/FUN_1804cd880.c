// FUN_1804cd880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cd880 */

void FUN_1804cd880(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 uVar4;
  undefined1 local_28 [12];
  float fStack_1c;
  
  lVar3 = DAT_180bb8ae8;
  auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1138);
  auVar2 = vshufps_avx(auVar1,auVar1,0xff);
  local_28 = auVar1._0_12_;
  fStack_1c = auVar2._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar4 = FUN_1804b1120(local_28);
  FUN_1804df870(param_1,param_2,param_2 + 8,uVar4,param_3,0);
  auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1128);
  auVar2 = vshufps_avx(auVar1,auVar1,0xff);
  local_28 = auVar1._0_12_;
  fStack_1c = auVar2._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar4 = FUN_1804b1120(local_28);
  FUN_1804de7c0(param_1,param_2,param_2 + 8,uVar4,param_3,*(undefined4 *)(lVar3 + 0xd60),0);
  return;
}



