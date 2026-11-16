// FUN_180587df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587df0 */

undefined8 FUN_180587df0(longlong param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((*(longlong *)(param_1 + 0x408) == 0) && (uVar3 = FUN_180588160(param_1,0), (int)uVar3 != 0))
  {
    return uVar3;
  }
  puVar1 = *(uint **)(param_1 + 0x408);
  if ((*(longlong *)(puVar1 + 2) == 0) && (uVar3 = FUN_180595230(param_1,0,0,1), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar6 = param_2;
  if (*puVar1 < param_2) {
    uVar6 = *puVar1;
  }
  if (*(char *)(param_1 + 0x401) == '\0') {
    uVar5 = 0;
    if (uVar6 != 0) {
      FUN_18063ab10(param_3,0,(ulonglong)uVar6 << 2);
      uVar5 = uVar6;
    }
  }
  else {
    uVar5 = 0;
    if (uVar6 != 0) {
      if (3 < uVar6) {
        puVar2 = *(uint **)(puVar1 + 4);
        if (((puVar2 + (uVar6 - 1) < param_3) || (param_3 + (uVar6 - 1) < puVar2)) &&
           ((puVar1 + 4 < param_3 || (param_3 + (uVar6 - 1) < puVar1 + 4)))) {
          FUN_18063aed0(param_3,puVar2,(ulonglong)uVar6 << 2);
          do {
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
          goto LAB_180587ef1;
        }
      }
      uVar7 = (ulonglong)uVar6;
      lVar4 = 0;
      do {
        *(undefined4 *)((longlong)param_3 + lVar4) =
             *(undefined4 *)(lVar4 + *(longlong *)(puVar1 + 4));
        uVar7 = uVar7 - 1;
        lVar4 = lVar4 + 4;
        uVar5 = uVar6;
      } while (uVar7 != 0);
    }
  }
LAB_180587ef1:
  if (uVar5 < param_2) {
    FUN_18063ab10(param_3 + uVar5,0,(ulonglong)(param_2 - uVar5) << 2);
  }
  return 0;
}



