// FUN_1805f9ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805f9ff0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  undefined1 auVar6 [32];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  auVar6 = _DAT_18068c020;
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar7) && (((byte)DAT_1808d5f64 & 0x20) != 0)) {
    puVar5 = *param_1;
    do {
      auVar3 = vpermd_avx2(auVar6,*param_1);
      auVar4 = vpermd_avx2(auVar6,param_2[-1]);
      param_2 = param_2 + -1;
      *param_1 = auVar4;
      param_1 = param_1 + 1;
      *param_2 = auVar3;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar7 >> 1 & 0x7fffffffffffffe0)));
  }
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if ((0x1f < uVar7) && (((byte)DAT_1808d5f64 & 4) != 0)) {
    puVar5 = *param_1;
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8._4_4_ = *(undefined4 *)(*param_1 + 8);
      auVar8._0_4_ = *(undefined4 *)(*param_1 + 0xc);
      auVar8._8_4_ = *(undefined4 *)(*param_1 + 4);
      auVar8._12_4_ = *(undefined4 *)*param_1;
      auVar1 = *(undefined1 (*) [16])*param_2;
      *(int *)*param_1 = auVar1._12_4_;
      *(int *)(*param_1 + 4) = auVar1._8_4_;
      *(int *)(*param_1 + 8) = auVar1._4_4_;
      *(int *)(*param_1 + 0xc) = auVar1._0_4_;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar7 >> 1 & 0x7ffffffffffffff0)));
  }
  if (param_1 != param_2) {
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x1c);
      if (param_1 == param_2) {
        return;
      }
      uVar2 = *(undefined4 *)*param_1;
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
      *(undefined4 *)*param_2 = uVar2;
    } while (param_1 != param_2);
  }
                    /* WARNING: Read-only address (ram,0x00018068c020) is written */
  return;
}



