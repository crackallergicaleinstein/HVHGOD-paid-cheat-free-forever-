// FUN_180601548 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601548 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_180601548(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong local_130;
  undefined8 local_128;
  undefined8 *local_118;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_f0 [128];
  undefined **local_70 [13];
  
  local_118 = param_1;
  FUN_18060357c(local_108,1,param_3,param_4,0);
  puVar1 = (undefined8 *)FUN_180605784(&local_130,0x11);
  (*(code *)*puVar1)(local_108 + (longlong)*(int *)(local_f8 + 4) + 0x10,puVar1[1]);
  FUN_180603b60(&local_f8,*param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar2 = 4;
  FUN_180603eb4(local_f0,&local_130);
  if (local_130 != 0) {
    FUN_180113930(param_1,local_130,local_128,param_4,uVar2);
  }
  FUN_180603824(local_70);
  local_70[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_70);
  return param_1;
}



