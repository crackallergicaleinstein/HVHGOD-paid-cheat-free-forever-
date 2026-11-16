// FUN_1803ab360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ab360 */

undefined8 * FUN_1803ab360(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    local_18 = 0;
    local_10 = 0;
    local_28 = (undefined1  [16])0x0;
    local_c = 0;
    cVar1 = FUN_1804514f0(local_28,param_2,0x1e);
    if (cVar1 != '\0') {
      *param_1 = local_28._0_8_;
      param_1[1] = local_28._8_8_;
      param_1[2] = local_18;
      *(undefined4 *)(param_1 + 3) = local_10;
      *(undefined2 *)((longlong)param_1 + 0x1c) = local_c;
      uVar2 = 1;
      goto LAB_1803ab3de;
    }
  }
  uVar2 = 0;
LAB_1803ab3de:
  *(undefined1 *)((longlong)param_1 + 0x1e) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



