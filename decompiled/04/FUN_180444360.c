// FUN_180444360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180444360 */

undefined8 FUN_180444360(longlong param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  if (*(ulonglong *)(param_1 + 0x20) <
      (ulonglong)*(byte *)(param_2 + 1) + *(longlong *)(param_1 + 0x18)) {
    return 0x80100009;
  }
  FUN_18063aed0(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38) + -1,*param_2,
                (ulonglong)*(byte *)(param_2 + 1) + 1);
  if (param_3 == 1) {
    uVar4 = (ulonglong)*(byte *)(param_2 + 1);
    uVar2 = *(longlong *)(param_1 + 0x18) - 1;
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x38) + uVar2);
    if (uVar2 < uVar2 + uVar4) {
      do {
        bVar1 = *pbVar3;
        if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {
          *pbVar3 = bVar1 | 0x20;
        }
        pbVar3 = pbVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (param_3 == 2) {
    uVar4 = (ulonglong)*(byte *)(param_2 + 1);
    uVar2 = *(longlong *)(param_1 + 0x18) - 1;
    pbVar3 = (byte *)(*(longlong *)(param_1 + 0x38) + uVar2);
    if (uVar2 < uVar2 + uVar4) {
      do {
        bVar1 = *pbVar3;
        if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
          *pbVar3 = bVar1 & 0xdf;
        }
        pbVar3 = pbVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(param_2 + 1);
  return 0x100000;
}



