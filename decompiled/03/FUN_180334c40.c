// FUN_180334c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334c40 */

void FUN_180334c40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180bda1c8;
  if (DAT_180bda1c8 == DAT_180bda1d0) {
    FUN_180338440();
    return;
  }
  uVar1 = param_2[1];
  *DAT_180bda1c8 = *param_2;
  puVar2[1] = uVar1;
  puVar2[2] = param_2[2];
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 3);
  DAT_180bda1c8 = (undefined8 *)((longlong)DAT_180bda1c8 + 0x1c);
  return;
}



