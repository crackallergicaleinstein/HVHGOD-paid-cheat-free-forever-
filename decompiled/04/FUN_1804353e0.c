// FUN_1804353e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804353e0 */

void FUN_1804353e0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  undefined1 auStack_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  uStack_30 = DAT_180bbabe0;
  if (param_2 != 0) {
    uStack_30 = param_2;
  }
  bVar4 = *(longlong *)(param_1 + 0x60) != lVar1;
  auStack_28 = (undefined1  [16])0x0;
  if (bVar4) {
    auStack_28 = *(undefined1 (*) [16])(lVar1 + -0x10);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x38);
  if (((((*(ulonglong **)(param_1 + 0x30) == puVar2) || (puVar2[-4] != uStack_30)) ||
       ((bool)(char)puVar2[-1] != bVar4)) ||
      (*(float *)((longlong)puVar2 + -4) != *(float *)(param_1 + 0x90))) ||
     ((*(longlong *)(param_1 + 0x60) != lVar1 &&
      ((((int)puVar2[-3] != auStack_28._0_4_ ||
        (*(int *)((longlong)puVar2 + -0x14) != auStack_28._4_4_)) ||
       (((int)puVar2[-2] != auStack_28._8_4_ ||
        (*(int *)((longlong)puVar2 + -0xc) != auStack_28._12_4_)))))))) {
    uStack_14 = *(undefined4 *)(param_1 + 0x90);
    uVar3 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2;
    uStack_34 = 0;
    local_38 = (undefined4)uVar3;
    local_18 = CONCAT31(local_18._1_3_,bVar4);
    if (puVar2 != *(ulonglong **)(param_1 + 0x40)) {
      *puVar2 = uVar3 & 0xffffffff;
      puVar2[1] = uStack_30;
      puVar2[2] = auStack_28._0_8_;
      puVar2[3] = auStack_28._8_8_;
      puVar2[4] = CONCAT44(uStack_14,local_18);
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 0x28;
      return;
    }
    FUN_1802ea4d0((longlong *)(param_1 + 0x30),puVar2,&local_38);
  }
  return;
}



