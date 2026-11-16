// FUN_1805d8590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d8590 */

int FUN_1805d8590(undefined8 *param_1,uint param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)((longlong)param_1 + 0x2074);
  iVar4 = 0;
  uVar3 = *puVar1;
  if (param_2 < uVar3) {
    iVar2 = FUN_1805788b0(*param_1,*(undefined4 *)(param_1 + 0xe));
    if (iVar2 != 0) {
      return 0;
    }
    FUN_1805da140(param_1 + 3);
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[3] = (longlong)param_1 + 0x74;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[5] = (longlong)param_1 + 0x1074;
    uVar3 = 0;
    param_1[0x410] = puVar1;
    param_1[0x40f] = puVar1;
    *puVar1 = 0;
  }
  if (((param_2 <= uVar3) || (iVar2 = FUN_1805d86a0(param_1,param_2 - uVar3), iVar2 == 0)) &&
     (param_4 != 0)) {
    do {
      uVar3 = param_4;
      if ((uint)(*(int *)(param_1 + 0x410) - *(int *)(param_1 + 0x40f)) < param_4) {
        uVar3 = *(int *)(param_1 + 0x410) - *(int *)(param_1 + 0x40f);
      }
      FUN_18063aed0(param_3,param_1[0x40f],uVar3);
      param_1[0x40f] = param_1[0x40f] + (ulonglong)uVar3;
      param_3 = param_3 + (ulonglong)uVar3;
      *(int *)((longlong)param_1 + 0x2074) = *(int *)((longlong)param_1 + 0x2074) + uVar3;
      iVar4 = iVar4 + uVar3;
      param_4 = param_4 - uVar3;
    } while ((param_4 != 0) && (iVar2 = FUN_1805d82d0(param_1), iVar2 == 0));
  }
  return iVar4;
}



