// FUN_18046f710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046f710 */

undefined2 FUN_18046f710(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0xc0);
  if (puVar1 < *(undefined1 **)(param_1 + 200)) {
    uVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    *(undefined1 **)(param_1 + 0xc0) = puVar1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_18046f690();
    uVar3 = **(undefined1 **)(param_1 + 0xc0);
    puVar1 = *(undefined1 **)(param_1 + 0xc0) + 1;
    *(undefined1 **)(param_1 + 0xc0) = puVar1;
  }
  if (*(undefined1 **)(param_1 + 200) <= puVar1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar2 = 0;
      goto LAB_18046f79b;
    }
    FUN_18046f690(param_1,param_1);
    puVar1 = *(undefined1 **)(param_1 + 0xc0);
  }
  uVar2 = *puVar1;
  *(undefined1 **)(param_1 + 0xc0) = puVar1 + 1;
LAB_18046f79b:
  return CONCAT11(uVar3,uVar2);
}



