// FUN_1805fa0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa0d0 */

void FUN_1805fa0d0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar6) && (((byte)DAT_1808d5f64 & 0x20) != 0)) {
    puVar5 = *param_1;
    do {
      auVar3 = vpermq_avx2(*param_1,0x1b);
      auVar4 = vpermq_avx2(param_2[-1],0x1b);
      param_2 = param_2 + -1;
      *param_1 = auVar4;
      param_1 = param_1 + 1;
      *param_2 = auVar3;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar6 >> 1 & 0x7fffffffffffffe0)));
  }
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x1f < uVar6) && (((byte)DAT_1808d5f64 & 4) != 0)) {
    puVar5 = *param_1;
    do {
      auVar1 = *(undefined1 (*) [16])*param_1;
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8._0_8_ = auVar1._8_8_;
      auVar8._8_4_ = auVar1._0_4_;
      auVar8._12_4_ = auVar1._4_4_;
      auVar1 = *(undefined1 (*) [16])*param_2;
      auVar7._0_8_ = auVar1._8_8_;
      auVar7._8_4_ = auVar1._0_4_;
      auVar7._12_4_ = auVar1._4_4_;
      *(undefined1 (*) [16])*param_1 = auVar7;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar6 >> 1 & 0x7ffffffffffffff0)));
  }
  if (param_1 != param_2) {
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x18);
      if (param_1 == param_2) {
        return;
      }
      uVar2 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      param_1 = (undefined1 (*) [32])(*param_1 + 8);
      *(undefined8 *)*param_2 = uVar2;
    } while (param_1 != param_2);
  }
  return;
}



