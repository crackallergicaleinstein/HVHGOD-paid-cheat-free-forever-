// FUN_1801b16b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b16b0 */

longlong FUN_1801b16b0(byte *param_1,longlong param_2,undefined8 param_3,byte *param_4,
                      longlong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  char local_108 [256];
  
  if (param_2 != 0) {
    FUN_18063ab10(local_108,0,0x100);
    pbVar2 = param_4 + param_5;
    for (; pbVar1 = param_1, param_4 != pbVar2; param_4 = param_4 + 1) {
      local_108[*param_4] = '\x01';
    }
    for (; pbVar1 < param_1 + param_2; pbVar1 = pbVar1 + 1) {
      if (local_108[*pbVar1] == '\0') {
        return (longlong)pbVar1 - (longlong)param_1;
      }
    }
  }
  return -1;
}



