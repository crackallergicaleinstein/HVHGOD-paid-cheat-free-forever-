// FUN_1805d28f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d28f0 */

void FUN_1805d28f0(undefined4 *param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  param_3 = param_3 >> ((byte)*param_1 & 0x1f);
  param_4 = param_4 >> ((byte)*param_1 & 0x1f);
  if ((param_3 < 0) || ((int)param_1[0x29] < param_3)) {
    param_3 = param_4;
  }
  else if (((-1 < param_4) && (param_4 <= (int)param_1[0x29])) &&
          (((byte)(0x80 >> ((byte)param_4 & 7)) &
           *(byte *)(((longlong)param_4 >> 3) + *(longlong *)(param_1 + 0x2e))) != 0)) {
    return;
  }
  if ((-1 < param_3) && (param_3 <= (int)param_1[0x29])) {
    pbVar1 = (byte *)(((longlong)param_3 >> 3) + *(longlong *)(param_1 + 0x2e));
    *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_3 & 7));
  }
  return;
}



