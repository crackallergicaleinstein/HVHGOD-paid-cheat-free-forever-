// FUN_1800e64d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e64d0 */

undefined1 (*) [16] FUN_1800e64d0(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined8 local_res18;
  
  *param_1 = (undefined1  [16])0x0;
  (*param_1)[0] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 3;
  FUN_180111c50(&local_res18,param_2);
  *(undefined8 *)(*param_1 + 8) = local_res18;
  return param_1;
}



