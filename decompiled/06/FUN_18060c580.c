// FUN_18060c580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060c580 */

undefined1 FUN_18060c580(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(undefined8 *)(lVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_18060b7f4(lVar1,&local_18,10,1);
  *param_2 = uVar3;
  uVar4 = 0;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (*(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (*(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(undefined8 *)(lVar1 + 0x2c) = uVar2;
  return uVar4;
}



