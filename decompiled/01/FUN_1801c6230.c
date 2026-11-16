// FUN_1801c6230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c6230 */

undefined8 FUN_1801c6230(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 in_ZMM2 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  uint local_res8 [8];
  
  auVar6 = ZEXT1664(in_ZMM2._0_16_);
  if ((param_1 == 0) || (param_2 == 0)) {
    return in_ZMM2._0_8_;
  }
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  uVar4 = 0;
  if ((ulonglong)param_2 + param_1 != 0) {
    local_res8[0] = 0;
    cVar2 = FUN_1804514f0(local_res8,(ulonglong)param_2 + param_1,4);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  auVar5 = ZEXT464(local_res8[0]);
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar4),SUB6416(ZEXT464(0),0));
  auVar1 = vblendvps_avx(auVar5._0_16_,auVar6._0_16_,auVar1);
  return auVar1._0_8_;
}



