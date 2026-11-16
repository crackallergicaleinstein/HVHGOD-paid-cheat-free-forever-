// FUN_1802e23f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e23f0 */

void FUN_1802e23f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (((DAT_180b0c290 != '\0') && (param_2[7] != 0)) &&
     (*(ulonglong *)*param_1 < (ulonglong)param_2[7])) {
    lVar2 = FUN_1803d4150(param_1,*(undefined4 *)(param_2 + 6));
    if (lVar2 != 0) {
      uVar3 = param_2[8];
      if ((ulonglong)param_2[8] < *(longlong *)*param_1 + 0x20U) {
        uVar3 = *(longlong *)*param_1 + 0x20U;
      }
      param_2[8] = uVar3;
      lVar2 = param_1[1];
      iVar1 = FUN_1805f68d0(lVar2 + 0x148);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (*(int *)(lVar2 + 0x194) == 0x7fffffff) {
        *(undefined4 *)(lVar2 + 0x194) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_58 = *param_2;
      uStack_50 = param_2[1];
      uStack_48 = param_2[2];
      uStack_40 = param_2[3];
      local_38 = param_2[4];
      uStack_30 = param_2[5];
      uStack_28 = param_2[6];
      uStack_20 = param_2[7];
      local_18 = param_2[8];
      FUN_1802e0940(param_1[1],&local_58);
      FUN_1805f68fc(lVar2 + 0x148);
    }
  }
  return;
}



