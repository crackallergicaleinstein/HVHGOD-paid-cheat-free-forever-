// FUN_1804560c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804560c0 */

byte * FUN_1804560c0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  pbVar4 = param_1;
  FUN_18015b360();
  lVar1 = *(longlong *)(param_1 + 0x10);
  pbVar6 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar6 = *(byte **)param_1;
  }
  if (lVar1 != 0) {
    pbVar4 = (byte *)thunk_FUN_1805f7e70(pbVar6,pbVar6 + lVar1,0x5f,param_4,uVar7,pbVar4);
    if ((pbVar4 != pbVar6 + lVar1) && ((ulonglong)((longlong)pbVar4 - (longlong)pbVar6) < 4)) {
      uVar2 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = ((longlong)pbVar4 - (longlong)pbVar6) + 1;
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
      }
      pbVar6 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pbVar6 = *(byte **)param_1;
      }
      FUN_18063aed0(pbVar6,pbVar6 + uVar5,(uVar2 - uVar5) + 1);
      *(ulonglong *)(param_1 + 0x10) = uVar2 - uVar5;
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    pbVar6 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar6 = *(byte **)param_1;
    }
    iVar3 = toupper((uint)*pbVar6);
    pbVar6 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar6 = *(byte **)param_1;
    }
    *pbVar6 = (byte)iVar3;
  }
  return param_1;
}



