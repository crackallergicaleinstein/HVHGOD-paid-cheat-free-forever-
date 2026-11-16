// FUN_180251810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180251810 */

void FUN_180251810(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (param_5 < param_4) {
    lVar1 = param_5 >> 1;
    uVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    plVar7 = param_2 + lVar1;
    plVar8 = param_1;
    if (0 < (longlong)uVar5) {
      pfVar2 = (float *)&DAT_00000014;
      if (*plVar7 != 0) {
        pfVar2 = (float *)(*plVar7 + 0x24);
      }
      do {
        uVar6 = uVar5 >> 1;
        pfVar3 = (float *)&DAT_00000014;
        if (plVar8[uVar6] != 0) {
          pfVar3 = (float *)(plVar8[uVar6] + 0x24);
        }
        if (*pfVar3 <= *pfVar2) {
          plVar8 = plVar8 + uVar6 + 1;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    lVar4 = (longlong)plVar8 - (longlong)param_1 >> 3;
  }
  else {
    lVar4 = param_4 >> 1;
    uVar5 = param_3 - (longlong)param_2 >> 3;
    plVar8 = param_1 + lVar4;
    plVar7 = param_2;
    if (0 < (longlong)uVar5) {
      pfVar2 = (float *)&DAT_00000014;
      if (*plVar8 != 0) {
        pfVar2 = (float *)(*plVar8 + 0x24);
      }
      do {
        uVar6 = uVar5 >> 1;
        pfVar3 = (float *)&DAT_00000014;
        if (plVar7[uVar6] != 0) {
          pfVar3 = (float *)(plVar7[uVar6] + 0x24);
        }
        if (*pfVar3 < *pfVar2) {
          plVar7 = plVar7 + uVar6 + 1;
          uVar6 = uVar5 + (-1 - uVar6);
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
    }
    lVar1 = (longlong)plVar7 - (longlong)param_2 >> 3;
  }
  FUN_1802519d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar8,plVar7,lVar4,
                lVar1);
  return;
}



