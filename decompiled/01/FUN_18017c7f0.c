// FUN_18017c7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c7f0 */

ulonglong FUN_18017c7f0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)*(int **)(param_1 + 0x38);
  if (pbVar1 != (byte *)0x0) {
    if (pbVar1 < pbVar1 + **(int **)(param_1 + 0x50)) {
      return (ulonglong)*pbVar1;
    }
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar2 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar3 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar2) {
        pbVar3 = pbVar2;
      }
      if (pbVar1 < pbVar3) {
        *(byte **)(param_1 + 0x68) = pbVar3;
        **(int **)(param_1 + 0x50) = (int)pbVar3 - **(int **)(param_1 + 0x38);
        return (ulonglong)*(byte *)**(undefined8 **)(param_1 + 0x38);
      }
    }
  }
  return 0xffffffff;
}



