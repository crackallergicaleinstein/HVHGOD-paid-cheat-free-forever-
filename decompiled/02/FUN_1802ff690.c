// FUN_1802ff690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff690 */

undefined8 FUN_1802ff690(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 extraout_var [56];
  undefined1 auVar6 [64];
  
  iVar3 = 0;
  uVar5 = 0;
  auVar6 = ZEXT864(0);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar4);
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = lVar1 + 0x10;
      }
      if (lVar2 != 0) {
        auVar6._0_8_ = FUN_180615630(lVar1,*(undefined4 *)(lVar2 + 0x14));
        auVar6._8_56_ = extraout_var;
      }
      uVar5 = auVar6._0_8_;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return uVar5;
}



