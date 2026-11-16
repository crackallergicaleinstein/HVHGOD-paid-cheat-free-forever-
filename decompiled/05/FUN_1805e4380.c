// FUN_1805e4380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e4380 */

void FUN_1805e4380(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,int param_5
                  ,longlong param_6,int param_7)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x75e0) == 0) {
    uVar1 = 0x20000;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x74f8);
  }
  if ((param_5 == 0) && (param_4 + 0x40 + (ulonglong)uVar1 < param_3)) {
    param_2 = (ulonglong)uVar1 + param_2;
    *(undefined4 *)(param_1 + 0x76b0) = 1;
    *(longlong *)(param_1 + 0x76a0) = param_2 + 0x20;
    *(ulonglong *)(param_1 + 0x76a8) = param_4 + 0x20 + param_2;
    return;
  }
  if (param_4 < 0x10001) {
    *(undefined4 *)(param_1 + 0x76b0) = 0;
    *(longlong *)(param_1 + 0x76a0) = param_1 + 0x76b4;
    *(ulonglong *)(param_1 + 0x76a8) = param_4 + 0x76b4 + param_1;
    return;
  }
  lVar2 = (param_2 - param_4) + param_6;
  if (param_7 == 0) {
    param_6 = param_6 + param_2;
  }
  else {
    param_6 = (param_4 - 0x20) + lVar2;
    lVar2 = lVar2 + 0xffe0;
  }
  *(longlong *)(param_1 + 0x76a0) = lVar2;
  *(longlong *)(param_1 + 0x76a8) = param_6;
  *(undefined4 *)(param_1 + 0x76b0) = 2;
  return;
}



