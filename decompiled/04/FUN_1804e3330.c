// FUN_1804e3330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e3330 */

void FUN_1804e3330(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,int param_7,uint param_8)

{
  ulonglong uVar1;
  
  if (0 < (int)param_8) {
    param_3 = param_3 - param_6;
    uVar1 = (ulonglong)param_8;
    do {
      FUN_18063aed0((longlong)
                    ((param_6 * *(int *)(param_4 + 0x24) + param_5) * *(int *)(param_4 + 0x2c)) +
                    *(longlong *)(param_4 + 0x30),
                    (longlong)
                    (((param_3 + param_6) * *(int *)(param_1 + 0x24) + param_2) *
                    *(int *)(param_1 + 0x2c)) + *(longlong *)(param_1 + 0x30),
                    (longlong)(*(int *)(param_4 + 0x2c) * param_7));
      param_6 = param_6 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



