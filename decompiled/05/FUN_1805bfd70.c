// FUN_1805bfd70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bfd70 */

void FUN_1805bfd70(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    FUN_1805bfcb0(param_1,0);
  }
  if ((param_3 != *(int *)(param_1 + 0x198)) || (param_5 != *(int *)(param_1 + 0x19c))) {
    *(int *)(param_1 + 0x198) = param_3;
    *(int *)(param_1 + 0x19c) = param_5;
    FUN_1805bfcb0(param_1,1);
    FUN_1805bf450(param_1 + 0x1a0,param_3,param_5);
  }
  return;
}



