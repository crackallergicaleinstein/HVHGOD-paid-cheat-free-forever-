// FUN_1805b1ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b1ee0 */

undefined8
FUN_1805b1ee0(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4,char param_5
             )

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  pbVar2 = (byte *)param_1[2];
  for (pbVar3 = (byte *)*param_1; pbVar3 < pbVar2; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
      if (bVar1 != 0x25) break;
      do {
        if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < pbVar2);
    }
  }
  *param_1 = pbVar3;
  if (pbVar3 < pbVar2) {
    if (param_5 != '\0') {
      if (*pbVar3 != 0x3c) {
        return 3;
      }
      pbVar3 = pbVar3 + 1;
    }
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 1;
    if (pbVar3 < pbVar2) {
      uVar8 = (ulonglong)(uint)((int)pbVar2 - (int)pbVar3);
      if ((ulonglong)(param_3 * 2) <= uVar8) {
        uVar8 = param_3 * 2;
      }
      if (uVar8 != 0) {
        uVar4 = 0;
        do {
          bVar1 = pbVar3[uVar4];
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if ((0x7f < bVar1) || (0xf < (uint)(int)(char)(&DAT_1806750d0)[bVar1 & 0x7f])) break;
            uVar5 = uVar5 << 4 | (int)(char)(&DAT_1806750d0)[bVar1 & 0x7f];
            if ((uVar5 >> 8 & 1) != 0) {
              *(char *)(uVar7 + param_2) = (char)uVar5;
              uVar7 = (ulonglong)((int)uVar7 + 1);
              uVar5 = 1;
            }
          }
          uVar9 = uVar9 + 1;
          uVar4 = (ulonglong)uVar9;
        } while (uVar4 < uVar8);
        if (uVar5 != 1) {
          *(char *)(uVar7 + param_2) = (char)uVar5 << 4;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        }
      }
      uVar6 = (undefined4)uVar7;
      pbVar3 = pbVar3 + uVar9;
    }
    *param_4 = uVar6;
    *param_1 = pbVar3;
    if (param_5 != '\0') {
      if ((pbVar3 < (byte *)param_1[2]) && (*pbVar3 != 0x3e)) {
        return 3;
      }
      *param_1 = pbVar3 + 1;
    }
  }
  return 0;
}



