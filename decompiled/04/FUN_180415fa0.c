// FUN_180415fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180415fa0 */

void FUN_180415fa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    FUN_18017bf40(&local_res8);
    plVar1 = (longlong *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x20) * 8 + 0x28);
    *plVar1 = *plVar1 + (local_res8 - *(longlong *)(lVar2 + 0x18));
    *(int *)(lVar2 + 0x20) = (int)lVar3;
    *(longlong *)(lVar2 + 0x18) = local_res8;
  }
  return;
}



