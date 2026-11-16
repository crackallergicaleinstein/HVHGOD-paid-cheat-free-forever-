// FUN_1805623a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805623a0 */

undefined8 * FUN_1805623a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  if (param_1 == param_2) {
    return param_2;
  }
  puVar7 = param_1 + 1;
  if (puVar7 != param_2) {
    puVar9 = param_1 + 2;
    do {
      plVar1 = (longlong *)*puVar7;
      plVar2 = (longlong *)*param_1;
      lVar3 = *plVar1;
      local_68 = lVar3 + 0x38;
      if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
        local_68 = *(longlong *)(lVar3 + 0x38);
      }
      local_60 = *(undefined8 *)(lVar3 + 0x48);
      iVar4 = FUN_18051f420(local_68,&local_68);
      lVar3 = *plVar2;
      local_58 = lVar3 + 0x38;
      if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
        local_58 = *(longlong *)(lVar3 + 0x38);
      }
      local_50 = *(undefined8 *)(lVar3 + 0x48);
      iVar5 = FUN_18051f420(local_50,&local_58);
      if (iVar4 < iVar5) {
        FUN_18063aed0((longlong)puVar9 - ((longlong)puVar7 - (longlong)param_1),param_1);
        *param_1 = plVar1;
      }
      else {
        puVar8 = puVar7;
        while( true ) {
          lVar3 = *plVar1;
          puVar6 = puVar8 + -1;
          local_48 = lVar3 + 0x38;
          plVar2 = (longlong *)*puVar6;
          if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
            local_48 = *(longlong *)(lVar3 + 0x38);
          }
          local_40 = *(undefined8 *)(lVar3 + 0x48);
          iVar4 = FUN_18051f420(local_48,&local_48);
          lVar3 = *plVar2;
          local_38 = lVar3 + 0x38;
          if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
            local_38 = *(longlong *)(lVar3 + 0x38);
          }
          local_30 = *(undefined8 *)(lVar3 + 0x48);
          iVar5 = FUN_18051f420(local_30,&local_38);
          if (iVar5 <= iVar4) break;
          *puVar8 = *puVar6;
          puVar8 = puVar6;
        }
        *puVar8 = plVar1;
      }
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar7 != param_2);
  }
  return param_2;
}



