// FUN_18027ab50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027ab50 */

undefined8 FUN_18027ab50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_18017ea70();
  *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
  puVar2 = (undefined8 *)FUN_18027b1d0(local_28,param_1,param_2);
  if (*(char *)(puVar2 + 1) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  lVar1 = FUN_18017ea70();
  if (*(int *)(lVar1 + 4) != 0) {
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + -1;
  }
  return uVar3;
}



