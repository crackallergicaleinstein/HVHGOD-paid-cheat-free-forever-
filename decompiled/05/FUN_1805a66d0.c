// FUN_1805a66d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a66d0 */

int FUN_1805a66d0(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  uVar2 = param_2 - (int)param_1;
  if (param_3[0xc] == 0) {
    uVar1 = FUN_18057abe0(*param_3,uVar2 + 1,local_res8);
    param_3[0xc] = uVar1;
    if (local_res8[0] == 0) {
      FUN_18063aed0(uVar1,param_1,uVar2);
      *(undefined1 *)((ulonglong)uVar2 + param_3[0xc]) = 0;
      return local_res8[0];
    }
  }
  else {
    local_res8[0] = 0;
  }
  return local_res8[0];
}



