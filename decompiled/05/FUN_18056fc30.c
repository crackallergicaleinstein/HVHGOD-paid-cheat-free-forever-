// FUN_18056fc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056fc30 */

void FUN_18056fc30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    FUN_18063aed0(param_6,param_1,(longlong)param_2 - (longlong)param_1);
    local_58 = ((longlong)param_2 - (longlong)param_1) + (longlong)param_6;
    puVar8 = (undefined8 *)(local_58 + -8);
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = param_1 + 1;
    do {
      plVar2 = (longlong *)*param_6;
      lVar3 = *(longlong *)*param_2;
      local_78 = lVar3 + 0x38;
      if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
        local_78 = *(longlong *)(lVar3 + 0x38);
      }
      local_70 = *(undefined8 *)(lVar3 + 0x48);
      iVar5 = FUN_18051f420(local_78,&local_78);
      lVar3 = *plVar2;
      local_68 = lVar3 + 0x38;
      if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
        local_68 = *(longlong *)(lVar3 + 0x38);
      }
      local_60 = *(undefined8 *)(lVar3 + 0x48);
      puVar1 = puVar7 + 1;
      iVar6 = FUN_18051f420(local_60,&local_68);
      if (iVar5 < iVar6) {
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        *puVar7 = uVar4;
        if (param_2 == param_3) {
          FUN_18063aed0(puVar1,param_6,local_58 - (longlong)param_6);
          return;
        }
      }
      else {
        uVar4 = *param_6;
        param_6 = param_6 + 1;
        *puVar7 = uVar4;
        if (param_6 == puVar8) {
          uVar4 = *puVar8;
          FUN_18063aed0(puVar1,param_2,(longlong)param_3 - (longlong)param_2);
          *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)puVar1) = uVar4;
          return;
        }
      }
      puVar7 = puVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_180571b30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    puVar7 = param_3 + -1;
    puVar8 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -8);
    *puVar7 = param_2[-1];
    param_2 = param_2 + -2;
    while( true ) {
      while( true ) {
        plVar2 = (longlong *)*param_2;
        lVar3 = *(longlong *)*puVar8;
        local_68 = lVar3 + 0x38;
        if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
          local_68 = *(longlong *)(lVar3 + 0x38);
        }
        local_60 = *(undefined8 *)(lVar3 + 0x48);
        iVar5 = FUN_18051f420(local_68,&local_68);
        lVar3 = *plVar2;
        local_78 = lVar3 + 0x38;
        if (0xf < *(ulonglong *)(lVar3 + 0x50)) {
          local_78 = *(longlong *)(lVar3 + 0x38);
        }
        local_70 = *(undefined8 *)(lVar3 + 0x48);
        iVar6 = FUN_18051f420(local_70,&local_78);
        if (iVar6 <= iVar5) break;
        puVar7[-1] = *param_2;
        if (param_1 == param_2) {
          puVar7[-2] = *puVar8;
          FUN_18063aed0((longlong)(puVar7 + -2) - ((longlong)puVar8 - (longlong)param_6),param_6,
                        (longlong)puVar8 - (longlong)param_6);
          return;
        }
        param_2 = param_2 + -1;
        puVar7 = puVar7 + -1;
      }
      uVar4 = *puVar8;
      puVar8 = puVar8 + -1;
      puVar7[-1] = uVar4;
      if (param_6 == puVar8) break;
      puVar7 = puVar7 + -1;
    }
    puVar7[-2] = *param_2;
    FUN_18063aed0((longlong)(puVar7 + -2) - ((longlong)param_2 - (longlong)param_1),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = *param_6;
  }
  return;
}



