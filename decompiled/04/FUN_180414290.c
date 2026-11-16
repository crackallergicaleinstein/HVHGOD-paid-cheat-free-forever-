// FUN_180414290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414290 */

undefined8 * FUN_180414290(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    local_18 = (undefined1  [16])0x0;
    cVar1 = FUN_1804514f0(&local_58,param_2,0x50);
    if (cVar1 != '\0') {
      *param_1 = local_58;
      param_1[1] = uStack_50;
      param_1[2] = uStack_48;
      param_1[3] = uStack_40;
      param_1[4] = local_38;
      param_1[5] = uStack_30;
      param_1[6] = uStack_28;
      param_1[7] = uStack_20;
      param_1[8] = local_18._0_8_;
      param_1[9] = local_18._8_8_;
      uVar2 = 1;
      goto LAB_180414308;
    }
  }
  uVar2 = 0;
LAB_180414308:
  *(undefined1 *)(param_1 + 10) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



