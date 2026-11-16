// FUN_180415ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180415ff0 */

longlong * FUN_180415ff0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  plVar3 = (longlong *)FUN_180416b80();
  lVar2 = *plVar3;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  FUN_18017bf40(&local_res8);
  plVar3 = (longlong *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x20) * 8 + 0x28);
  *plVar3 = *plVar3 + (local_res8 - *(longlong *)(lVar2 + 0x18));
  *(longlong *)(lVar2 + 0x18) = local_res8;
  uVar1 = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)(lVar2 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



