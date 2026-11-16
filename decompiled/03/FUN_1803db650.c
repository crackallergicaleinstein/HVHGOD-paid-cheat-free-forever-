// FUN_1803db650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803db650 */

undefined8 * FUN_1803db650(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  if (param_3 == '\0') {
    local_28 = *param_2;
    local_20 = *(undefined4 *)(param_2 + 1);
  }
  else {
    uVar3 = 0;
    local_38 = 0;
    uStack_34 = 0;
    local_30 = 0;
    lVar2 = FUN_18017ea70();
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    cVar1 = FUN_1804514c0(&local_38,param_2,0xc);
    if (cVar1 == '\0') {
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
      local_28 = CONCAT44(uVar3,uVar3);
      local_20 = uVar3;
    }
    else {
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
      local_28 = CONCAT44(uStack_34,local_38);
      local_20 = local_30;
    }
  }
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  return param_1;
}



