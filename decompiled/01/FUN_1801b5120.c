// FUN_1801b5120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b5120 */

undefined8 * FUN_1801b5120(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined2 local_18;
  undefined1 local_16;
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    local_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_16 = 0;
    cVar1 = FUN_1804514f0(&local_98,param_2,0x83);
    if (cVar1 != '\0') {
      *param_1 = local_98;
      param_1[1] = uStack_90;
      param_1[2] = uStack_88;
      param_1[3] = uStack_80;
      param_1[4] = local_78;
      param_1[5] = uStack_70;
      param_1[6] = uStack_68;
      param_1[7] = uStack_60;
      param_1[8] = local_58;
      param_1[9] = uStack_50;
      param_1[10] = uStack_48;
      param_1[0xb] = uStack_40;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_30;
      param_1[0xe] = uStack_28;
      param_1[0xf] = uStack_20;
      *(undefined2 *)(param_1 + 0x10) = local_18;
      *(undefined1 *)((longlong)param_1 + 0x82) = local_16;
      uVar2 = 1;
      goto LAB_1801b51e4;
    }
  }
  uVar2 = 0;
LAB_1801b51e4:
  *(undefined1 *)((longlong)param_1 + 0x83) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



