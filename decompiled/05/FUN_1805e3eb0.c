// FUN_1805e3eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e3eb0 */

void FUN_1805e3eb0(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 < 0x20) {
    lVar7 = param_2 + 0x27d4eb2f165667c5 + param_3;
  }
  else {
    plVar2 = (longlong *)((longlong)param_1 + (param_2 - 0x1f));
    lVar7 = param_3 + 0x60ea27eeadc0b5d6;
    uVar4 = param_3 + 0x61c8864e7a143579;
    uVar3 = param_3 + 0xc2b2ae3d27d4eb4f;
    do {
      uVar8 = lVar7 + *param_1 * -0x3d4d51c2d82b14b1;
      uVar9 = uVar8 * 0x80000000 | uVar8 >> 0x21;
      uVar3 = uVar3 + param_1[1] * -0x3d4d51c2d82b14b1;
      lVar7 = uVar9 * -0x61c8864e7a143579;
      param_3 = param_3 + param_1[2] * -0x3d4d51c2d82b14b1;
      uVar8 = uVar3 * 0x80000000 | uVar3 >> 0x21;
      plVar1 = param_1 + 3;
      param_1 = param_1 + 4;
      uVar3 = uVar8 * -0x61c8864e7a143579;
      uVar4 = uVar4 + *plVar1 * -0x3d4d51c2d82b14b1;
      uVar6 = param_3 * 0x80000000 | param_3 >> 0x21;
      uVar5 = uVar4 * 0x80000000 | uVar4 >> 0x21;
      uVar4 = uVar5 * -0x61c8864e7a143579;
      param_3 = uVar6 * -0x61c8864e7a143579;
    } while (param_1 < plVar2);
    lVar7 = (((((uVar6 * 0x779b185ebca87000 | param_3 >> 0x34) +
                (uVar5 * -0x1939e850d5e40000 | uVar4 >> 0x2e) +
                (uVar8 * 0x1bbcd8c2f5e54380 | uVar3 >> 0x39) +
                (uVar9 * 0x3c6ef3630bd7950e | (ulonglong)(lVar7 < 0)) ^
               (uVar9 * -0x784349ab80000000 | uVar9 * -0x210ca4fef0869357 >> 0x21) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar8 * -0x784349ab80000000 | uVar8 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
             (uVar6 * -0x784349ab80000000 | uVar6 * -0x210ca4fef0869357 >> 0x21) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar5 * -0x784349ab80000000 | uVar5 * -0x210ca4fef0869357 >> 0x21) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d + param_2;
  }
  FUN_1805e3db0(lVar7,param_1,param_2,1);
  return;
}



