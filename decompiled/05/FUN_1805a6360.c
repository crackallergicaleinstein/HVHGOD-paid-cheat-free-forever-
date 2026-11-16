// FUN_1805a6360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6360 */

undefined8 FUN_1805a6360(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  FUN_1805a5bc0();
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      iVar1 = FUN_1805753e0();
      *param_4 = iVar1;
    }
    if (param_4[1] != 0) {
      iVar1 = FUN_1805753e0(param_4[1],*(undefined4 *)(param_1 + 0x188),
                            *(undefined4 *)(param_1 + 0x18c));
      param_4[1] = iVar1;
    }
  }
  return 0;
}



