// FUN_1805e4040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e4040 */

void FUN_1805e4040(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *param_1;
  if (uVar1 < 0x20) {
    lVar6 = param_1[3] + 0x27d4eb2f165667c5;
  }
  else {
    uVar2 = param_1[4];
    uVar3 = param_1[3];
    uVar4 = param_1[2];
    uVar5 = param_1[1];
    lVar6 = (((((uVar2 << 0x12 | uVar2 >> 0x2e) + (uVar3 << 0xc | uVar3 >> 0x34) +
                (uVar4 << 7 | uVar4 >> 0x39) + (uVar5 << 1 | (ulonglong)((longlong)uVar5 < 0)) ^
               (uVar5 * -0x6c158a5880000000 | uVar5 * -0x3d4d51c2d82b14b1 >> 0x21) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar4 * -0x6c158a5880000000 | uVar4 * -0x3d4d51c2d82b14b1 >> 0x21) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
             (uVar3 * -0x6c158a5880000000 | uVar3 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
            (uVar2 * -0x6c158a5880000000 | uVar2 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  FUN_1805e3db0(lVar6 + uVar1,param_1 + 5,uVar1,0);
  return;
}



