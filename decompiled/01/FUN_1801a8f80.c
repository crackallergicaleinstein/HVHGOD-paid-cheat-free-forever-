// FUN_1801a8f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a8f80 */

undefined4 * FUN_1801a8f80(undefined4 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    local_res8[0] = 0;
    cVar1 = FUN_1804514f0(local_res8,param_2,4);
    if (cVar1 != '\0') {
      *param_1 = local_res8[0];
      uVar2 = 1;
      goto LAB_1801a8fd3;
    }
  }
  uVar2 = 0;
LAB_1801a8fd3:
  *(undefined1 *)(param_1 + 1) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



