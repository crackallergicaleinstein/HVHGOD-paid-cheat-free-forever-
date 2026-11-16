// FUN_180571b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180571b30 */

void FUN_180571b30(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  
  if (param_5 < param_4) {
    lVar4 = param_5 >> 1;
    uVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    puVar8 = param_2 + lVar4;
    puVar9 = param_1;
    if (0 < (longlong)uVar5) {
      do {
        uVar6 = uVar5 >> 1;
        plVar1 = (longlong *)puVar9[uVar6];
        lVar7 = *(longlong *)*puVar8;
        local_58 = lVar7 + 0x38;
        if (0xf < *(ulonglong *)(lVar7 + 0x50)) {
          local_58 = *(longlong *)(lVar7 + 0x38);
        }
        local_50 = *(undefined8 *)(lVar7 + 0x48);
        iVar2 = FUN_18051f420(local_58,&local_58);
        lVar7 = *plVar1;
        local_68 = lVar7 + 0x38;
        if (0xf < *(ulonglong *)(lVar7 + 0x50)) {
          local_68 = *(longlong *)(lVar7 + 0x38);
        }
        local_60 = *(undefined8 *)(lVar7 + 0x48);
        iVar3 = FUN_18051f420(local_60,&local_68);
        if (iVar3 <= iVar2) {
          puVar9 = puVar9 + uVar6 + 1;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    lVar7 = (longlong)puVar9 - (longlong)param_1 >> 3;
  }
  else {
    lVar7 = param_4 >> 1;
    uVar5 = param_3 - (longlong)param_2 >> 3;
    puVar9 = param_1 + lVar7;
    puVar8 = param_2;
    if (0 < (longlong)uVar5) {
      do {
        plVar1 = (longlong *)*puVar9;
        uVar6 = uVar5 >> 1;
        lVar4 = *(longlong *)puVar8[uVar6];
        local_68 = lVar4 + 0x38;
        if (0xf < *(ulonglong *)(lVar4 + 0x50)) {
          local_68 = *(longlong *)(lVar4 + 0x38);
        }
        local_60 = *(undefined8 *)(lVar4 + 0x48);
        iVar2 = FUN_18051f420(local_68,&local_68);
        lVar4 = *plVar1;
        local_58 = lVar4 + 0x38;
        if (0xf < *(ulonglong *)(lVar4 + 0x50)) {
          local_58 = *(longlong *)(lVar4 + 0x38);
        }
        local_50 = *(undefined8 *)(lVar4 + 0x48);
        iVar3 = FUN_18051f420(local_50,&local_58);
        if (iVar2 < iVar3) {
          puVar8 = puVar8 + uVar6 + 1;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    lVar4 = (longlong)puVar8 - (longlong)param_2 >> 3;
  }
  FUN_180571e00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar9,puVar8,lVar7,
                lVar4);
  return;
}



