// FUN_1805f3a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f3a30 */

undefined8 FUN_1805f3a30(longlong param_1,int *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *(undefined8 *)(param_1 + 0x5430) = 5;
  *(undefined8 *)(param_1 + 0x5410) = 0;
  *(undefined8 *)(param_1 + 0x5418) = 0;
  *(undefined8 *)(param_1 + 0x5420) = 0;
  *(undefined8 *)(param_1 + 0x5428) = 0;
  *(undefined4 *)(param_1 + 0x140c) = 0xc00000c;
  *(undefined4 *)(param_1 + 0x54d0) = 0;
  *(undefined8 *)(param_1 + 0x5464) = 0;
  *(undefined4 *)(param_1 + 0x546c) = 0;
  *(undefined4 *)(param_1 + 0x5438) = 1;
  *(undefined4 *)(param_1 + 0x543c) = 4;
  *(undefined4 *)(param_1 + 0x5440) = 8;
  if ((param_2 != (int *)0x0) && (param_3 != 0)) {
    if ((7 < param_3) && (*param_2 == -0x13cf5bc9)) {
      piVar1 = param_2 + 2;
      *(int *)(param_1 + 0x54d0) = param_2[1];
      uVar3 = FUN_1805f4880(param_1,piVar1,param_3 - 8);
      if (uVar3 < 0xffffffffffffff89) {
        lVar2 = *(longlong *)(param_1 + 0x5410);
        *(longlong *)(param_1 + 0x5428) = lVar2;
        *(ulonglong *)(param_1 + 0x5410) = (longlong)piVar1 + (param_3 - 8);
        *(ulonglong *)(param_1 + 0x5420) =
             ((uVar3 + (longlong)piVar1) - lVar2) + *(longlong *)(param_1 + 0x5418);
        *(ulonglong *)(param_1 + 0x5418) = uVar3 + (longlong)piVar1;
        return 0;
      }
      return 0xffffffffffffffe2;
    }
    *(int **)(param_1 + 0x5420) = param_2;
    *(ulonglong *)(param_1 + 0x5410) = (longlong)param_2 + param_3;
    *(int **)(param_1 + 0x5418) = param_2;
  }
  return 0;
}



