// FUN_1805e41b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e41b0 */

undefined8 FUN_1805e41b0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 != (longlong *)0x0) {
    *param_1 = *param_1 + param_3;
    plVar2 = (longlong *)((longlong)param_2 + param_3);
    uVar3 = *(uint *)(param_1 + 9);
    uVar4 = (ulonglong)uVar3;
    if (uVar4 + param_3 < 0x20) {
      FUN_18063aed0(uVar4 + 0x28 + (longlong)param_1);
      *(int *)(param_1 + 9) = (int)param_1[9] + (int)param_3;
      return 0;
    }
    if (uVar3 != 0) {
      FUN_18063aed0(uVar4 + 0x28 + (longlong)param_1,param_2,0x20 - uVar3);
      uVar4 = param_1[5] * -0x3d4d51c2d82b14b1 + param_1[1];
      param_1[1] = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
      uVar4 = param_1[6] * -0x3d4d51c2d82b14b1 + param_1[2];
      param_1[2] = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
      uVar4 = param_1[7] * -0x3d4d51c2d82b14b1 + param_1[3];
      param_1[3] = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
      uVar4 = param_1[8] * -0x3d4d51c2d82b14b1 + param_1[4];
      param_1[4] = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
      param_2 = (longlong *)((longlong)param_2 + (ulonglong)(0x20 - (int)param_1[9]));
      *(undefined4 *)(param_1 + 9) = 0;
    }
    if (param_2 + 4 <= plVar2) {
      lVar5 = param_1[1];
      lVar6 = param_1[2];
      lVar7 = param_1[3];
      lVar8 = param_1[4];
      do {
        uVar4 = lVar5 + *param_2 * -0x3d4d51c2d82b14b1;
        lVar5 = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
        param_1[1] = lVar5;
        uVar4 = lVar6 + param_2[1] * -0x3d4d51c2d82b14b1;
        lVar6 = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
        param_1[2] = lVar6;
        uVar4 = lVar7 + param_2[2] * -0x3d4d51c2d82b14b1;
        lVar7 = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
        param_1[3] = lVar7;
        plVar1 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar4 = lVar8 + *plVar1 * -0x3d4d51c2d82b14b1;
        lVar8 = (uVar4 * 0x80000000 | uVar4 >> 0x21) * -0x61c8864e7a143579;
        param_1[4] = lVar8;
      } while (param_2 <= plVar2 + -4);
    }
    if (param_2 < plVar2) {
      FUN_18063aed0(param_1 + 5,param_2,(longlong)plVar2 - (longlong)param_2);
      *(int *)(param_1 + 9) = (int)plVar2 - (int)param_2;
    }
  }
  return 0;
}



