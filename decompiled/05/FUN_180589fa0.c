// FUN_180589fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589fa0 */

void FUN_180589fa0(longlong param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)*(short *)(param_1 + 0x1a0);
  iVar5 = (int)*(short *)(param_1 + 0x1a2);
  iVar4 = *(short *)(param_1 + 0x19c) * iVar3 + 0x2000 + *(short *)(param_1 + 0x19e) * iVar5 >> 0xe;
  if (iVar4 < 0x3ffe) {
    if (iVar4 + 0x3ffU < 0x7ff) {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
    else {
      *(int *)(param_1 + 0x2d0) = (iVar3 << 0x10) / iVar4;
      *(int *)(param_1 + 0x2d4) = (iVar5 << 0x10) / iVar4;
    }
  }
  else {
    *(int *)(param_1 + 0x2d0) = iVar3 * 4;
    *(int *)(param_1 + 0x2d4) = iVar5 * 4;
    if (*(short *)(param_1 + 0x1a0) == 0x4000) {
      pcVar1 = FUN_18058a340;
      pcVar2 = FUN_18058a360;
      goto LAB_18058a092;
    }
    if (*(short *)(param_1 + 0x1a2) == 0x4000) {
      pcVar1 = FUN_18058a350;
      pcVar2 = FUN_18058a380;
      goto LAB_18058a092;
    }
  }
  pcVar1 = FUN_18058a2c0;
  pcVar2 = FUN_18058a220;
LAB_18058a092:
  *(code **)(param_1 + 0x2f0) = pcVar2;
  *(code **)(param_1 + 0x2f8) = pcVar1;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    pcVar1 = FUN_18058c610;
  }
  else {
    pcVar1 = FUN_18058c5d0;
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      pcVar1 = FUN_18058c620;
    }
  }
  *(code **)(param_1 + 0x2d8) = pcVar1;
  if (*(short *)(param_1 + 0x198) == 0x4000) {
    *(code **)(param_1 + 0x2e0) = FUN_18058c610;
  }
  else {
    pcVar1 = FUN_18058a3a0;
    if (*(short *)(param_1 + 0x19a) == 0x4000) {
      pcVar1 = FUN_18058c620;
    }
    *(code **)(param_1 + 0x2e0) = pcVar1;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}



