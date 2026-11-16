// FUN_180204770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180204770 */

undefined8 * FUN_180204770(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  undefined1 local_18;
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    FUN_18063ab10(&local_b8,0,0xa1);
    cVar1 = FUN_1804514f0(&local_b8,param_2,0xa1);
    if (cVar1 != '\0') {
      *param_1 = local_b8;
      param_1[1] = uStack_b0;
      param_1[2] = uStack_a8;
      param_1[3] = uStack_a0;
      param_1[4] = local_98;
      param_1[5] = uStack_90;
      param_1[6] = uStack_88;
      param_1[7] = uStack_80;
      param_1[8] = local_78;
      param_1[9] = uStack_70;
      param_1[10] = uStack_68;
      param_1[0xb] = uStack_60;
      param_1[0xc] = local_58;
      param_1[0xd] = uStack_50;
      param_1[0xe] = uStack_48;
      param_1[0xf] = uStack_40;
      param_1[0x10] = local_38;
      param_1[0x11] = uStack_30;
      param_1[0x12] = uStack_28;
      param_1[0x13] = uStack_20;
      *(undefined1 *)(param_1 + 0x14) = local_18;
      uVar2 = 1;
      goto LAB_18020480c;
    }
  }
  uVar2 = 0;
LAB_18020480c:
  *(undefined1 *)((longlong)param_1 + 0xa1) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



