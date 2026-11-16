// FUN_18027b090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027b090 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_18027b090(code *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_58 = *param_5;
  uStack_50 = param_5[1];
  uStack_48 = param_5[2];
  uStack_40 = param_5[3];
  local_38 = param_5[4];
  uStack_30 = param_5[5];
  uStack_28 = param_5[6];
  uStack_20 = param_5[7];
  local_18 = param_5[8];
  local_78 = *param_4;
  local_70 = *(undefined4 *)(param_4 + 1);
  local_68 = *param_3;
  local_60 = *(undefined4 *)(param_3 + 1);
  (*param_1)(param_2,&local_68,&local_78,&local_58,param_6,1);
  return 1;
}



