// FUN_1805bf6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf6b0 */

void FUN_1805bf6b0(uint *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  puVar3 = param_1 + 0x102;
  if (param_7 == 0) {
    puVar3 = param_1;
  }
  lVar7 = 0x60c;
  if (param_7 == 0) {
    lVar7 = 0x204;
  }
  puVar8 = (uint *)(lVar7 + (longlong)param_1);
  *puVar3 = 0;
  *puVar8 = 0;
  FUN_1805bf850(param_1,0,param_2,param_3,puVar3,puVar8);
  FUN_1805bf850(param_1,1,param_4,param_5,puVar3,puVar8);
  uVar10 = *puVar3;
  uVar1 = *puVar8;
  if (uVar10 != 0) {
    puVar8 = puVar3 + 1;
    uVar9 = uVar10;
    do {
      if ((1 < uVar9) && ((int)(puVar8[8] - *puVar8) < (int)puVar8[1])) {
        puVar8[1] = puVar8[8] - *puVar8;
      }
      puVar8[3] = *puVar8;
      puVar8[2] = *puVar8 + puVar8[1];
      puVar8 = puVar8 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar7 = 0x610;
  if (uVar1 != 0) {
    lVar5 = 0x610;
    if (param_7 == 0) {
      lVar5 = 0x208;
    }
    piVar6 = (int *)(lVar5 + (longlong)param_1);
    uVar9 = uVar1;
    do {
      if ((1 < uVar9) && (piVar6[1] < *piVar6 - piVar6[8])) {
        piVar6[1] = *piVar6 - piVar6[8];
      }
      piVar6[2] = *piVar6;
      piVar6[3] = *piVar6 + piVar6[1];
      piVar6 = piVar6 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar11 = 1;
  if (param_7 == 0) {
    lVar7 = 0x208;
  }
  puVar3 = puVar3 + 1;
  do {
    if (uVar10 != 0) {
      puVar3[3] = puVar3[3] - param_6;
      uVar9 = puVar3[2];
      while (uVar10 = uVar10 - 1, uVar10 != 0) {
        iVar2 = (int)(puVar3[0xb] - uVar9) / 2;
        uVar4 = iVar2 + uVar9;
        if (param_6 <= iVar2) {
          uVar4 = puVar3[0xb] - param_6;
          iVar2 = param_6;
        }
        puVar3[0xb] = uVar4;
        puVar3[2] = iVar2 + uVar9;
        uVar9 = puVar3[10];
        puVar3 = puVar3 + 8;
      }
      puVar3[2] = uVar9 + param_6;
    }
    iVar11 = iVar11 + -1;
    puVar3 = (uint *)(lVar7 + (longlong)param_1);
    uVar10 = uVar1;
  } while (-1 < iVar11);
  return;
}



