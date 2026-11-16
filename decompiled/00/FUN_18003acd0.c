// FUN_18003acd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003acd0 */

undefined8
FUN_18003acd0(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
             ulonglong param_5,longlong *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_6 = 0;
  if ((0 < param_2) &&
     ((param_3 - param_2 < 0x3d && param_3 < 0x20c49ba5e353f8) && param_2 < param_3)) {
    uVar1 = param_2 * 1000;
    if (param_2 * 1000 < (longlong)param_4) {
      uVar1 = param_4;
    }
    if ((char)param_1[2] == '\x01') {
      uVar3 = param_5 - param_1[1];
      if (param_5 < param_1[1]) {
        return 0;
      }
      if ((*param_1 ^ 0x7fffffffffffffff) < uVar3) {
        return 0;
      }
      uVar3 = *param_1 + uVar3;
      if ((longlong)uVar1 <= (longlong)uVar3) {
        uVar1 = uVar3;
      }
    }
    uVar3 = param_3 * 1000 - uVar1;
    if (uVar1 <= (ulonglong)(param_3 * 1000) && uVar3 != 0) {
      uVar2 = 60000;
      if (uVar3 < 60000) {
        uVar2 = uVar3;
      }
      if (!CARRY8(uVar2,param_5)) {
        *param_1 = uVar1;
        param_1[1] = param_5;
        *(undefined1 *)(param_1 + 2) = 1;
        *param_6 = uVar2 + param_5;
        return 1;
      }
    }
  }
  return 0;
}



