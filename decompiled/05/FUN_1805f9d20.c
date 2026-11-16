// FUN_1805f9d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9d20 */

byte * FUN_1805f9d20(byte *param_1,byte *param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x20) {
    if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x10) goto LAB_1805f9d55;
  }
  else if ((DAT_1808d5f64 & 0x20) != 0) {
    pbVar1 = (byte *)FUN_1805f8b90(param_1,param_2);
    return pbVar1;
  }
  if ((DAT_1808d5f64 & 4) != 0) {
    pbVar1 = (byte *)FUN_1805f8e70(param_1,param_2);
    return pbVar1;
  }
LAB_1805f9d55:
  if (param_3 == '\0') {
    bVar2 = 0;
    for (pbVar1 = param_1; pbVar1 != param_2; pbVar1 = pbVar1 + 1) {
      if (bVar2 < *pbVar1) {
        bVar2 = *pbVar1;
        param_1 = pbVar1;
      }
    }
  }
  else {
    bVar2 = 0x80;
    pbVar1 = param_1;
    if (param_1 != param_2) {
      do {
        if ((char)bVar2 < (char)*param_1) {
          bVar2 = *param_1;
          pbVar1 = param_1;
        }
        param_1 = param_1 + 1;
      } while (param_1 != param_2);
      return pbVar1;
    }
  }
  return param_1;
}



