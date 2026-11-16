// FUN_1805edc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805edc10 */

void FUN_1805edc10(int *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (4 < param_2) {
    if (*param_1 != -0x2d04adb) {
      *param_3 = 0xfffffffffffffff6;
      *param_4 = -2;
      return;
    }
    pbVar3 = (byte *)((longlong)param_1 + 5);
    for (param_2 = param_2 - 5; 2 < param_2; param_2 = (param_2 - 3) - uVar2) {
      bVar1 = *pbVar3 >> 6;
      if (bVar1 == 3) {
        uVar2 = 0;
      }
      else if (bVar1 == 2) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulonglong)((uint6)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) & 0x7ffff);
      }
      if (param_2 - 3 < uVar2) break;
      if (uVar2 == 0) {
        *param_3 = pbVar3 + (3 - (longlong)param_1);
        *param_4 = lVar4 << 0x11;
        return;
      }
      pbVar3 = pbVar3 + uVar2 + 3;
      lVar4 = lVar4 + 1;
    }
  }
  *param_3 = 0xffffffffffffffb8;
  *param_4 = -2;
  return;
}



