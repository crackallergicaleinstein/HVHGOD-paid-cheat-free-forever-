// FUN_1805ac6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac6e0 */

ulonglong FUN_1805ac6e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_58;
  uint local_54;
  undefined4 local_50 [6];
  
  piVar1 = *(int **)(param_2 + 0x140);
  uVar11 = 0;
  uVar9 = 0;
  if (*(uint *)(param_2 + 0x13c) == 0) {
    return 3;
  }
  piVar8 = piVar1;
  while (*piVar8 != 8) {
    uVar12 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar12;
    piVar8 = piVar8 + 4;
    if (*(uint *)(param_2 + 0x13c) <= uVar12) {
      return 3;
    }
  }
  if (((uint)piVar1[uVar9 * 4 + 3] < *(uint *)(param_1 + 0xc)) ||
     (iVar2 = FUN_180578910(param_1,piVar1[uVar9 * 4 + 3] - *(uint *)(param_1 + 0xc)), iVar2 != 0))
  {
    return 0x53;
  }
  uVar12 = piVar1[uVar9 * 4 + 2];
  local_58 = 0;
  uVar9 = FUN_180577bf0(param_1,8);
  local_58 = (uint)uVar9;
  if (local_58 != 0) {
    return uVar9;
  }
  uVar3 = FUN_180577e80(param_1);
  uVar13 = uVar3 & 4;
  local_54 = uVar3;
  if (uVar13 == 0) {
    uVar4 = FUN_180577e80(param_1);
  }
  else {
    uVar4 = FUN_180577e30();
  }
  FUN_180577d30(param_1);
  if ((uVar3 & 0xffffff00) == 0) {
    if (0xfffe < uVar4) {
      uVar4 = 0xfffe;
    }
    if (uVar4 == *(int *)(param_2 + 0x1a8) - 1U) {
      uVar3 = 1;
      iVar2 = *(int *)(param_1 + 0xc) + 0x10 + uVar4 * 4;
      if (uVar4 != 0) {
        if (uVar13 == 0) {
          do {
            uVar5 = FUN_1805785e0(param_1,&local_58);
            uVar9 = (ulonglong)uVar3;
            if (uVar12 < uVar5) {
              iVar6 = iVar2;
            }
            else {
              iVar6 = uVar5 + iVar2;
            }
            uVar3 = uVar3 + 1;
            *(int *)(*(longlong *)(param_2 + 0x1b0) + 0xc + uVar9 * 0x10) = iVar6;
          } while (uVar3 <= uVar4);
        }
        else {
          do {
            uVar5 = FUN_180578540(param_1,&local_58);
            uVar9 = (ulonglong)uVar3;
            if (uVar12 < uVar5) {
              iVar6 = iVar2;
            }
            else {
              iVar6 = uVar5 + iVar2;
            }
            uVar3 = uVar3 + 1;
            *(int *)(*(longlong *)(param_2 + 0x1b0) + 0xc + uVar9 * 0x10) = iVar6;
          } while (uVar3 <= uVar4);
        }
      }
      uVar9 = (ulonglong)local_58;
      if (local_58 == 0) {
        puVar10 = local_50;
        do {
          if (uVar13 == 0) {
            uVar7 = FUN_1805785e0(param_1,&local_58);
          }
          else {
            uVar7 = FUN_180578540();
          }
          *puVar10 = uVar7;
          if (local_58 != 0) {
            return (ulonglong)local_58;
          }
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar11 < 4);
        *(uint *)(param_2 + 0x1d0) = local_54;
        uVar9 = 0;
      }
      return uVar9;
    }
  }
  return 3;
}



