// FUN_1804f89b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f89b0 */

void FUN_1804f89b0(undefined4 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  
  lVar1 = param_2[4];
  lVar2 = *param_2;
  lVar3 = (int)param_2[3] + lVar1;
  local_res10 = 0;
  FUN_1804ea040(&local_res8,*(undefined8 *)(lVar2 + 0x11d0),*(undefined4 *)(lVar2 + 0x11e0),
                0x7f7fffff,*(undefined4 *)(lVar2 + 0x2550),lVar1 + param_3,lVar3,lVar3,&local_res10)
  ;
  *param_1 = 0;
  param_1[5] = ((int)local_res10 - (int)lVar1) - param_3;
  param_1[1] = local_res8;
  param_1[2] = local_resc;
  param_1[4] = local_resc;
  param_1[3] = 0;
  return;
}



