// FUN_18056fa90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056fa90 */

void FUN_18056fa90(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  
  puVar7 = param_1;
  if (param_5 <= param_4) {
LAB_18056fc0a:
    FUN_18063aed0(param_3,puVar7,param_2 - (longlong)puVar7);
    return;
  }
LAB_18056fae0:
  param_5 = param_5 - param_4;
  puVar2 = param_1 + param_4;
  lVar9 = param_4;
  if (param_5 < param_4) {
    lVar9 = param_5;
  }
  param_5 = param_5 - lVar9;
  puVar7 = puVar2 + lVar9;
  puVar8 = puVar2;
  do {
    plVar3 = (longlong *)*param_1;
    lVar9 = *(longlong *)*puVar8;
    local_68 = lVar9 + 0x38;
    if (0xf < *(ulonglong *)(lVar9 + 0x50)) {
      local_68 = *(longlong *)(lVar9 + 0x38);
    }
    local_60 = *(undefined8 *)(lVar9 + 0x48);
    iVar5 = FUN_18051f420(local_68,&local_68);
    lVar9 = *plVar3;
    local_58 = lVar9 + 0x38;
    if (0xf < *(ulonglong *)(lVar9 + 0x50)) {
      local_58 = *(longlong *)(lVar9 + 0x38);
    }
    local_50 = *(undefined8 *)(lVar9 + 0x48);
    puVar1 = param_3 + 1;
    iVar6 = FUN_18051f420(local_50,&local_58);
    if (iVar5 < iVar6) {
      uVar4 = *puVar8;
      puVar8 = puVar8 + 1;
      *param_3 = uVar4;
      if (puVar8 == puVar7) break;
    }
    else {
      uVar4 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = uVar4;
      if (param_1 == puVar2) {
        lVar9 = (longlong)puVar7 - (longlong)puVar8;
        FUN_18063aed0(puVar1,puVar8,lVar9);
        goto LAB_18056fbcb;
      }
    }
    param_3 = puVar1;
  } while( true );
  lVar9 = (longlong)puVar2 - (longlong)param_1;
  FUN_18063aed0(puVar1,param_1,lVar9);
LAB_18056fbcb:
  param_3 = (undefined8 *)(lVar9 + (longlong)puVar1);
  param_1 = puVar7;
  if (param_5 <= param_4) goto LAB_18056fc0a;
  goto LAB_18056fae0;
}



