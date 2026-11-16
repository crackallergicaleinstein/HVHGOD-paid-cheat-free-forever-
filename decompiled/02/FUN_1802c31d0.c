// FUN_1802c31d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c31d0 */

void FUN_1802c31d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (param_5 < param_4) {
    lVar8 = param_5 >> 1;
    lVar5 = param_2 + lVar8 * 0x28;
    uVar4 = (param_2 - param_1) / 0x28;
    lVar6 = param_1;
    if (0 < (longlong)uVar4) {
      iVar1 = *(int *)(lVar5 + 0x20);
      do {
        uVar9 = uVar4 >> 1;
        lVar7 = lVar6 + uVar9 * 0x28;
        if ((iVar1 == 2) || (iVar1 - 3U < 4)) {
          bVar3 = 0;
        }
        else {
          bVar3 = (iVar1 != 1) + 1;
        }
        iVar2 = *(int *)(lVar7 + 0x20);
        if (((iVar2 == 2) || (iVar2 - 3U < 4)) || ((byte)((iVar2 != 1) + 1U) <= bVar3)) {
          lVar6 = lVar7 + 0x28;
          uVar9 = uVar4 + (-1 - uVar9);
        }
        uVar4 = uVar9;
      } while (0 < (longlong)uVar9);
    }
    lVar7 = (lVar6 - param_1) / 0x28;
  }
  else {
    lVar7 = param_4 >> 1;
    lVar6 = param_1 + lVar7 * 0x28;
    uVar4 = (param_3 - param_2) / 0x28;
    lVar5 = param_2;
    if (0 < (longlong)uVar4) {
      iVar1 = *(int *)(lVar6 + 0x20);
      do {
        uVar9 = uVar4 >> 1;
        iVar2 = *(int *)(lVar5 + 0x20 + uVar9 * 0x28);
        if ((iVar2 == 2) || (iVar2 - 3U < 4)) {
          bVar3 = 0;
        }
        else {
          bVar3 = (iVar2 != 1) + 1;
        }
        if (((iVar1 != 2) && (3 < iVar1 - 3U)) && (bVar3 < (byte)((iVar1 != 1) + 1U))) {
          lVar5 = lVar5 + uVar9 * 0x28 + 0x28;
          uVar9 = uVar4 + (-1 - uVar9);
        }
        uVar4 = uVar9;
      } while (0 < (longlong)uVar9);
    }
    lVar8 = (lVar5 - param_2) / 0x28;
  }
  FUN_1802c3420(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6,lVar5,lVar7,
                lVar8);
  return;
}



