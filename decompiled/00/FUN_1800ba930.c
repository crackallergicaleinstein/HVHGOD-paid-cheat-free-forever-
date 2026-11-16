// FUN_1800ba930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ba930 */

undefined4 FUN_1800ba930(short param_1)

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  short sVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_1 == 0x3b) || (sVar4 = param_1, (ushort)(param_1 - 500U) < 0x1b)) {
    sVar4 = 0x2a;
  }
  uVar2 = 0;
  psVar3 = &DAT_1806ff3e8;
  do {
    if (*psVar3 == sVar4) {
      if ((int)uVar2 < 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(&DAT_1806ff3ec + (longlong)(int)uVar2 * 0x20);
      }
      goto LAB_1800ba994;
    }
    uVar2 = uVar2 + 1;
    psVar3 = psVar3 + 0x10;
  } while (uVar2 < 0x2c);
  iVar1 = -1;
LAB_1800ba994:
  local_18 = 4;
  local_14 = 3;
  local_10 = 5;
  local_28 = 0;
  uStack_20 = 0x200000001;
  if ((param_1 == 0xe) || (param_1 == 0x1c)) {
    return 4;
  }
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)((longlong)&local_28 + (longlong)iVar1 * 4);
}



