// FUN_1801e5f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e5f30 */

undefined8 *
FUN_1801e5f30(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *local_38;
  undefined4 local_30;
  
  if (param_4 == 0) {
    if (param_5 == 1) {
      if (4 < (longlong)param_3 - (longlong)param_2) {
        param_3 = (undefined4 *)((longlong)param_2 + 5);
        *param_2 = 0x302b6530;
        *(undefined1 *)(param_2 + 1) = 0x30;
        local_30 = 0;
        goto LAB_1801e6021;
      }
    }
    else if (param_2 != param_3) {
      *(undefined1 *)param_2 = 0x30;
      param_3 = (undefined4 *)((longlong)param_2 + 1);
      local_30 = 0;
      goto LAB_1801e6021;
    }
    local_30 = 0x84;
  }
  else {
    uVar2 = param_4 & 0x7fffff;
    param_4 = param_4 >> 0x17;
    if ((param_5 == 2) && (0 < (int)(param_4 - 0x96))) {
      FUN_1801e58b0(&local_38,param_2,param_3,uVar2 | 0x800000,param_4 - 0x96);
    }
    else {
      uVar1 = FUN_1801e5140(uVar2,param_4);
      FUN_1801e5af0(&local_38,param_2,param_3,uVar1,param_5,uVar2,param_4);
    }
    param_3 = local_38;
  }
LAB_1801e6021:
  *(undefined4 *)(param_1 + 1) = local_30;
  *param_1 = param_3;
  return param_1;
}



