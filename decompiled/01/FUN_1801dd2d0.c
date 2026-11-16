// FUN_1801dd2d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dd2d0 */

undefined8 FUN_1801dd2d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int local_res20 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((char)param_4[2] == '?') {
    local_28 = *(undefined8 *)param_4;
    uStack_20 = *(undefined8 *)(param_4 + 2);
    local_38 = *param_3;
    uStack_30 = param_3[1];
    local_18 = CONCAT44(local_18._4_4_,param_4[4]);
    FUN_1801df130(local_38,param_2,&local_38,&local_28,0x22);
    return param_1;
  }
  local_res20[0] = param_4[1];
  if ((local_res20[0] < 0) && (*param_4 < 1)) {
    local_38 = *param_3;
    uStack_30 = param_3[1];
    FUN_1801dd3d0(local_38,param_2,&local_38);
    return param_1;
  }
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = local_38;
  uStack_20 = uStack_30;
  local_18 = FUN_1801df990(&local_38,local_res20);
  FUN_1801dfb30(param_1,param_2,local_res20[0],param_4);
  return param_1;
}



