// FUN_1805015a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805015a0 */

void FUN_1805015a0(int *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar8 [64];
  undefined2 uStack_32;
  undefined8 uStack_30;
  
  iVar6 = param_1[1];
  auVar4 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
  auVar8 = ZEXT1664(auVar4);
  if (iVar6 < 0) {
    iVar6 = iVar6 + iVar6 / 2;
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    FUN_180504820(param_1,iVar5);
  }
  auVar7 = auVar8._0_16_;
  *param_1 = 0;
  if (param_1[1] == 0) {
    FUN_180504820(param_1,8);
    auVar7 = auVar8._0_16_;
  }
  iVar6 = *param_1;
  uStack_30 = auVar4._0_8_;
  lVar3 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar6 * 0x18);
  *puVar1 = CONCAT26(uStack_32,1);
  puVar1[1] = uStack_30;
  uVar2 = vmovhpd_avx(auVar7);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18) = uVar2;
  *param_1 = *param_1 + 1;
  return;
}



