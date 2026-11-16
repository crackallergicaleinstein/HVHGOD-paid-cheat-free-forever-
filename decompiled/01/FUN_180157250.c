// FUN_180157250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157250 */

void FUN_180157250(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 local_res8 [32];
  
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\0') {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uint)*pbVar1;
      *param_1 = pbVar1 + 1;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    local_res8[0] = (undefined1)*(int *)((longlong)param_1 + 0x14);
    FUN_180157850(param_1 + 7,local_res8);
  }
  if (*(int *)((longlong)param_1 + 0x14) == 10) {
    param_1[6] = param_1[6] + 1;
    param_1[5] = 0;
  }
  return;
}



