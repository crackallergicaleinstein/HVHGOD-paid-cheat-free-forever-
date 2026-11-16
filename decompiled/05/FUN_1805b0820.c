// FUN_1805b0820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b0820 */

int FUN_1805b0820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int local_18 [4];
  
  puVar1 = (undefined8 *)FUN_18057aad0(param_2,0x20,local_18);
  if (local_18[0] == 0) {
    puVar1[1] = param_3;
    *puVar1 = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = 2;
    param_1[1] = puVar1;
    local_18[0] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2;
  }
  return local_18[0];
}



