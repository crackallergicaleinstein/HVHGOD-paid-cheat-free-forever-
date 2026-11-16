// FUN_180284da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180284da0 */

undefined8 FUN_180284da0(ulonglong param_1,float param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  undefined8 uVar3;
  undefined1 in_ZMM2 [64];
  undefined1 auVar4 [64];
  float local_res8;
  
  auVar4 = ZEXT1664(in_ZMM2._0_16_);
  if ((char)(param_1 >> 0x20) != '\0') {
    local_res8 = (float)param_1;
    sVar2 = thunk_FUN_180624430(param_1 & 0xffffffff);
    if (sVar2 < 1) {
      local_res8 = local_res8 - param_2;
      uVar3 = 0;
      if ((0.0 < local_res8) && (local_res8 <= auVar4._0_4_ + 0.25)) {
        auVar1 = vminss_avx(auVar4._0_16_,ZEXT416((uint)local_res8));
        uVar3 = auVar1._0_8_;
      }
      return uVar3;
    }
  }
  return 0;
}



