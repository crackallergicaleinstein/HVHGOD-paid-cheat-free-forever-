// FUN_180577ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577ed0 */

undefined2 FUN_180577ed0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x38);
  if (puVar3 + 1 < *(undefined1 **)(param_1 + 0x40)) {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    *(undefined1 **)(param_1 + 0x38) = puVar3 + 2;
    return CONCAT11(uVar1,uVar2);
  }
  *(undefined1 **)(param_1 + 0x38) = puVar3;
  return 0;
}



