// FUN_180577e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577e30 */

undefined4 FUN_180577e30(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(param_1 + 0x38);
  if (puVar5 + 3 < *(undefined1 **)(param_1 + 0x40)) {
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined1 **)(param_1 + 0x38) = puVar5 + 4;
    return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  }
  *(undefined1 **)(param_1 + 0x38) = puVar5;
  return 0;
}



