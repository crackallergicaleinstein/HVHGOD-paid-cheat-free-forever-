// FUN_1805acc60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805acc60 */

int FUN_1805acc60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  int *piVar11;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar4 = 0;
  piVar2 = *(int **)(param_2 + 0x140);
  if (*(uint *)(param_2 + 0x13c) != 0) {
    piVar11 = piVar2;
    do {
      if (*piVar11 == 4) {
        if (((uint)piVar2[(ulonglong)uVar4 * 4 + 3] < *(uint *)(param_1 + 0xc)) ||
           (iVar5 = FUN_180578910(param_1,piVar2[(ulonglong)uVar4 * 4 + 3] -
                                          *(uint *)(param_1 + 0xc)), iVar5 != 0)) {
          return 0x53;
        }
        uVar4 = piVar2[(ulonglong)uVar4 * 4 + 2];
        local_res10[0] = 0;
        uVar6 = FUN_1805785e0(param_1,local_res10);
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        uVar10 = uVar6 & 0xffffff00;
        if (uVar10 == 0) {
          if ((uVar6 & 4) == 0) {
            uVar7 = FUN_1805785e0(param_1,local_res10);
          }
          else {
            uVar7 = FUN_180578540();
          }
        }
        else {
          if (uVar10 != 0x100) {
            return 3;
          }
          if ((uVar6 & 4) == 0) {
            uVar3 = FUN_1805787c0(param_1,local_res10);
            uVar7 = (uint)uVar3;
          }
          else {
            uVar3 = FUN_180578720();
            uVar7 = (uint)uVar3;
          }
        }
        if (local_res10[0] != 0) {
          return 3;
        }
        if (uVar10 == 0) {
          uVar4 = uVar4 / 0xc;
        }
        else {
          uVar4 = uVar4 / 5;
        }
        if ((uVar4 < uVar7) || (uVar7 == 0)) {
          return 8;
        }
        if (0xfffe < uVar7) {
          uVar7 = 0xfffe;
        }
        *(uint *)(param_2 + 0x1a8) = uVar7 + 1;
        psVar8 = (short *)FUN_18057ac40(uVar1,0x10,0,uVar7 + 1,0,local_res10);
        *(short **)(param_2 + 0x1b0) = psVar8;
        if (local_res10[0] != 0) {
          return local_res10[0];
        }
        uVar4 = 1;
        if (*(uint *)(param_2 + 0x1a8) < 2) {
          return 0;
        }
        do {
          psVar9 = psVar8 + 8;
          local_res10[0] = FUN_1805acbc0(param_1,uVar6,psVar9);
          psVar8[0xe] = 0;
          psVar8[0xf] = 0;
          if (local_res10[0] != 0) {
            FUN_18057abd0(uVar1,*(undefined8 *)(param_2 + 0x1b0));
            *(undefined8 *)(param_2 + 0x1b0) = 0;
            return local_res10[0];
          }
          if ((psVar8[9] < *psVar9) || ((int)psVar8[0xb] < -(int)psVar8[0xc])) {
            psVar8[9] = 0;
            psVar8[10] = 0;
            psVar8[0xb] = 0;
            psVar8[0xc] = 0;
            *psVar9 = 0;
          }
          uVar4 = uVar4 + 1;
          local_res10[0] = 0;
          psVar8 = psVar9;
        } while (uVar4 < *(uint *)(param_2 + 0x1a8));
        return 0;
      }
      uVar4 = uVar4 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar4 < *(uint *)(param_2 + 0x13c));
  }
  return 3;
}



