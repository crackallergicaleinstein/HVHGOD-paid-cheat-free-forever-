// FUN_1805ddd10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ddd10 */

undefined8
FUN_1805ddd10(longlong *param_1,ulonglong param_2,longlong param_3,ushort *param_4,ulonglong param_5
             ,undefined4 *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = param_2 + param_3;
  if (param_3 < 1) {
    uVar4 = param_2;
  }
  if (param_3 != 0) {
    if (param_5 < 10) {
      return 0xffffffffffffffec;
    }
    if ((char)((uint)*param_6 >> 0x10) == '\v') {
      uVar2 = (ulonglong)*param_4;
      uVar3 = (ulonglong)param_4[1];
      uVar6 = (ulonglong)param_4[2];
      param_1[0xf] = (longlong)(param_4 + 3);
      param_1[0x10] = (longlong)param_4 + uVar2 + 6;
      lVar5 = uVar6 + uVar3 + uVar2;
      param_1[0x11] = (longlong)param_4 + uVar3 + uVar2 + 6;
      uVar1 = (((param_5 - uVar6) - uVar3) - uVar2) - 6;
      param_1[0x12] = (longlong)param_4 + lVar5 + 6;
      if ((((7 < uVar2) && (7 < uVar3)) && (7 < uVar6)) && (7 < uVar1)) {
        if (param_5 < uVar1) {
          return 0xffffffffffffffec;
        }
        param_1[4] = param_2;
        *param_1 = (uVar2 - 2) + (longlong)param_4;
        param_1[1] = (longlong)param_4 + uVar3 + uVar2 + -2;
        uVar2 = param_3 + 3U >> 2;
        param_1[2] = (longlong)param_4 + lVar5 + -2;
        param_1[3] = (param_5 - 8) + (longlong)param_4;
        param_1[5] = uVar2 + param_2;
        param_1[6] = param_2 + uVar2 * 2;
        uVar2 = uVar2 + param_2 + uVar2 * 2;
        param_1[7] = uVar2;
        if (uVar2 < uVar4) {
          lVar5 = FUN_1805e3130();
          param_1[8] = lVar5;
          lVar5 = FUN_1805e3130(param_1[1]);
          param_1[9] = lVar5;
          lVar5 = FUN_1805e3130(param_1[2]);
          param_1[10] = lVar5;
          lVar5 = FUN_1805e3130(param_1[3]);
          param_1[0xb] = lVar5;
          param_1[0xc] = (longlong)(param_6 + 1);
          param_1[0xd] = (longlong)param_4;
          param_1[0xe] = uVar4;
          return 1;
        }
      }
    }
  }
  return 0;
}



