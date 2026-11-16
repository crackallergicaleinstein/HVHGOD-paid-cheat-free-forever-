// FUN_1801c6710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c6710 */

undefined8 * FUN_1801c6710(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    local_18 = 0;
    uStack_14 = 0;
    local_10 = 0;
    cVar1 = FUN_1804514f0(&local_18,param_2,0xc);
    if (cVar1 != '\0') {
      *param_1 = CONCAT44(uStack_14,local_18);
      *(undefined4 *)(param_1 + 1) = local_10;
      uVar2 = 1;
      goto LAB_1801c6776;
    }
  }
  uVar2 = 0;
LAB_1801c6776:
  *(undefined1 *)((longlong)param_1 + 0xc) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



