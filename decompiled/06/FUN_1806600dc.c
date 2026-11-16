// FUN_1806600dc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806600dc */

undefined4 FUN_1806600dc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) == -0x1f928c9d) {
    puVar2 = (undefined8 *)FUN_1806065f0();
    *puVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    puVar2 = (undefined8 *)FUN_180606604();
    *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_18060ab3c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



