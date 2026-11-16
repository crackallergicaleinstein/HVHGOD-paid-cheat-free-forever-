// FUN_18056e1d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056e1d0 */

void FUN_18056e1d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  undefined8 local_50;
  
  if (param_2 == param_3) {
    return;
  }
  local_68 = param_6;
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    plVar1 = (longlong *)*param_1;
    lVar2 = *(longlong *)*param_2;
    local_78 = lVar2 + 0x38;
    if (0xf < *(ulonglong *)(lVar2 + 0x50)) {
      local_78 = *(longlong *)(lVar2 + 0x38);
    }
    local_70 = *(undefined8 *)(lVar2 + 0x48);
    iVar4 = FUN_18051f420(local_78,&local_78);
    lVar2 = *plVar1;
    local_88 = lVar2 + 0x38;
    if (0xf < *(ulonglong *)(lVar2 + 0x50)) {
      local_88 = *(longlong *)(lVar2 + 0x38);
    }
    local_80 = *(undefined8 *)(lVar2 + 0x48);
    iVar5 = FUN_18051f420(local_80,&local_88);
    if (iVar4 < iVar5) break;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
  }
  do {
    puVar6 = param_3;
    param_3 = puVar6 + -1;
    local_78 = param_5;
    if (param_2 == param_3) {
      uVar3 = *param_2;
      FUN_18063aed0((longlong)puVar6 - ((longlong)param_2 - (longlong)param_1),param_1,
                    (longlong)param_2 - (longlong)param_1);
      *param_1 = uVar3;
      return;
    }
    plVar1 = (longlong *)param_2[-1];
    lVar2 = *(longlong *)*param_3;
    local_88 = lVar2 + 0x38;
    if (0xf < *(ulonglong *)(lVar2 + 0x50)) {
      local_88 = *(longlong *)(lVar2 + 0x38);
    }
    local_80 = *(undefined8 *)(lVar2 + 0x48);
    iVar4 = FUN_18051f420(local_88,&local_88);
    lVar2 = *plVar1;
    local_58 = lVar2 + 0x38;
    if (0xf < *(ulonglong *)(lVar2 + 0x50)) {
      local_58 = *(longlong *)(lVar2 + 0x38);
    }
    local_50 = *(undefined8 *)(lVar2 + 0x48);
    iVar5 = FUN_18051f420(local_50,&local_58);
    param_5 = param_5 + -1;
  } while (iVar5 <= iVar4);
  if (param_4 == 1) {
    uVar3 = *param_1;
    FUN_18063aed0(param_1,param_2,(longlong)puVar6 - (longlong)param_2);
    *(undefined8 *)(((longlong)puVar6 - (longlong)param_2) + (longlong)param_1) = uVar3;
  }
  else {
    FUN_18056fc30(param_1,param_2,puVar6,param_4,local_78,local_68,param_7,param_8);
  }
  return;
}



