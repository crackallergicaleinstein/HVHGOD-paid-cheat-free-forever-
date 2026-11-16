// FUN_180573b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573b30 */

undefined4 FUN_180573b30(longlong param_1,undefined4 param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    uVar2 = 0;
    if ((lVar1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      local_res8[0] = param_2;
      do {
        uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))(lVar1,local_res8);
      } while (*(uint *)(param_1 + 0x10) <= uVar2);
      if (uVar2 == 0) {
        local_res8[0] = 0;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  return local_res8[0];
}



