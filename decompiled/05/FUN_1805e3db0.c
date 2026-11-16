// FUN_1805e3db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e3db0 */

ulonglong FUN_1805e3db0(ulonglong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)(param_3 & 0x1f);
  if (7 < uVar3) {
    uVar4 = (ulonglong)((param_3 & 0x1f) >> 3);
    uVar3 = uVar3 + uVar4 * -8;
    do {
      lVar2 = *(longlong *)param_2;
      param_2 = param_2 + 2;
      param_1 = param_1 ^ (lVar2 * -0x6c158a5880000000 |
                          (ulonglong)(lVar2 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579;
      param_1 = (param_1 << 0x1b | param_1 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 ^ (ulonglong)uVar1 * -0x61c8864e7a143579;
    param_1 = (param_1 << 0x17 | param_1 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    uVar3 = uVar3 - 4;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    param_1 = param_1 ^ (ulonglong)(byte)uVar1 * 0x27d4eb2f165667c5;
    param_1 = (param_1 << 0xb | param_1 >> 0x35) * -0x61c8864e7a143579;
  }
  uVar3 = (param_1 >> 0x21 ^ param_1) * -0x3d4d51c2d82b14b1;
  uVar3 = (uVar3 >> 0x1d ^ uVar3) * 0x165667b19e3779f9;
  return uVar3 >> 0x20 ^ uVar3;
}



