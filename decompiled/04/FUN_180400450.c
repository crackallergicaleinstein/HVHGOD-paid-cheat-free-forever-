// FUN_180400450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180400450 */

undefined1 FUN_180400450(undefined8 *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *local_48;
  undefined1 local_40 [16];
  
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    return *(undefined1 *)((longlong)param_1 + 0x22);
  }
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  cVar3 = FUN_1804001c0(param_1[2]);
  cVar4 = FUN_1803ffe20(param_1[3]);
  local_40 = (undefined1  [16])0x0;
  plVar7 = (longlong *)FUN_180416b80();
  lVar1 = *plVar7;
  local_40._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_18017bf40(&local_48);
    plVar7 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar7 = (longlong)local_48 + (*plVar7 - *(longlong *)(lVar1 + 0x18));
    *(longlong **)(lVar1 + 0x18) = local_48;
    uVar8 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 0xd;
  }
  local_40._8_4_ = uVar8;
  if ((*(char *)(param_1 + 4) == '\0') ||
     (cVar5 = FUN_180414460(*param_1,param_1[1],0), cVar5 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (lVar1 != 0) {
    FUN_18017bf40(&local_48);
    plVar7 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
    *plVar7 = (longlong)local_48 + (*plVar7 - *(longlong *)(lVar1 + 0x18));
    *(longlong **)(lVar1 + 0x18) = local_48;
    *(undefined4 *)(lVar1 + 0x20) = uVar8;
  }
  if ((((*(char *)(param_1 + 4) == '\0') || (cVar3 == '\0')) || (cVar4 == '\0')) || (!bVar2)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x22) = uVar6;
  *(undefined1 *)(param_1 + 4) = 0;
  return uVar6;
}



