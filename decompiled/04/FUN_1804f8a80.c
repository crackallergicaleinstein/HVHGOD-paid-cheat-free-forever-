// FUN_1804f8a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f8a80 */

undefined8 FUN_1804f8a80(longlong param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int local_res8 [2];
  int local_res18 [4];
  
  if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < param_2)) {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar9 = (longlong)param_2 + uVar2;
    do {
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
        break;
      }
      pbVar1 = (byte *)(uVar9 - 1);
      uVar9 = uVar9 - 1;
    } while ((*pbVar1 & 0xc0) == 0x80);
    FUN_1804b0e50(local_res18,(longlong)param_2 + uVar2,(longlong)*(int *)(param_1 + 0x18) + uVar2);
    FUN_1804b0e50(local_res8,uVar9);
    if (((local_res8[0] == 0x20) || (local_res8[0] == 9)) || (local_res8[0] == 0x3000)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    piVar7 = &DAT_18085bec0;
    piVar8 = &DAT_18085bec0;
    do {
      if (local_res8[0] == *piVar8) {
        bVar4 = true;
        goto LAB_1804f8b43;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)&DAT_18085bf34);
    bVar4 = false;
LAB_1804f8b43:
    if (((local_res18[0] == 0x20) || (local_res18[0] == 9)) || (local_res18[0] == 0x3000)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    do {
      if (local_res18[0] == *piVar7) {
        bVar6 = true;
        goto LAB_1804f8b74;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)&DAT_18085bf34);
    bVar6 = false;
LAB_1804f8b74:
    if ((bVar3) || (bVar4)) {
      if (!bVar6) {
        if (bVar5) {
          return 0;
        }
        return 1;
      }
    }
    else if (!bVar6) {
      return 0;
    }
    if (!bVar4) {
      return 1;
    }
  }
  return 0;
}



