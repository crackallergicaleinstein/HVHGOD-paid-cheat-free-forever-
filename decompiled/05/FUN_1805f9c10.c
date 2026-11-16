// FUN_1805f9c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9c10 */

longlong FUN_1805f9c10(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char local_128 [264];
  
  if (((byte)DAT_1808d5f64 & 4) != 0) {
    lVar2 = FUN_1805f6fd0();
    return lVar2;
  }
  FUN_18063ab10(local_128,0,0x100);
  pbVar1 = param_3 + param_4;
  for (; param_3 != pbVar1; param_3 = param_3 + 1) {
    local_128[*param_3] = '\x01';
  }
  lVar2 = 0;
  if (param_2 != 0) {
    do {
      if (local_128[*(byte *)(param_1 + lVar2)] != '\0') {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_2);
  }
  return -1;
}



