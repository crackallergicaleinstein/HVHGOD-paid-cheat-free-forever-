// FUN_18010fae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010fae0 */

longlong FUN_18010fae0(byte *param_1,longlong param_2,undefined8 param_3,byte *param_4,
                      longlong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  char local_118 [256];
  
  if ((param_5 != 0) && (param_2 != 0)) {
    if (0xf < (ulonglong)(param_2 + param_5)) {
      lVar3 = FUN_1805f9c10(param_1,param_2,param_4,param_5);
      return lVar3;
    }
    FUN_18063ab10(local_118,0,0x100);
    pbVar1 = param_4 + param_5;
    for (; pbVar2 = param_1, param_4 != pbVar1; param_4 = param_4 + 1) {
      local_118[*param_4] = '\x01';
    }
    for (; pbVar2 < param_1 + param_2; pbVar2 = pbVar2 + 1) {
      if (local_118[*pbVar2] != '\0') {
        return (longlong)pbVar2 - (longlong)param_1;
      }
    }
  }
  return -1;
}



