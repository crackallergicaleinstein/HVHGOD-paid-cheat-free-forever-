// FUN_1805ccad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ccad0 */

int FUN_1805ccad0(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    uVar1 = FUN_18057ac40(param_3,4,*(uint *)(param_1 + 0x2c),param_2,
                          *(undefined8 *)(param_1 + 0x30),local_res10);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 0x2c) = param_2;
  }
  return 0;
}



