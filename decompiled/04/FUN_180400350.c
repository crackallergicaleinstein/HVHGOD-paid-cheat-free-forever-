// FUN_180400350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180400350 */

undefined8 *
FUN_180400350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong local_38;
  undefined1 local_30 [16];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  local_30 = (undefined1  [16])0x0;
  plVar3 = (longlong *)FUN_180416b80();
  lVar1 = *plVar3;
  local_30._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_18017bf40(&local_38);
    plVar3 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar3 = *plVar3 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    uVar4 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 0xd;
  }
  local_30._8_4_ = uVar4;
  uVar2 = FUN_180414460(param_2,param_3,1);
  if (lVar1 != 0) {
    FUN_18017bf40(&local_38);
    plVar3 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar3 = *plVar3 + (local_38 - *(longlong *)(lVar1 + 0x18));
    *(longlong *)(lVar1 + 0x18) = local_38;
    *(undefined4 *)(lVar1 + 0x20) = uVar4;
  }
  *(undefined1 *)(param_1 + 4) = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x21) = 0;
  return param_1;
}



