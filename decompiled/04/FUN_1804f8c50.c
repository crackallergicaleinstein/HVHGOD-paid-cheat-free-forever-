// FUN_1804f8c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f8c50 */

int FUN_1804f8c50(longlong param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar2) {
    iVar8 = FUN_1804b0e50(local_res10,(longlong)param_2 + *(longlong *)(param_1 + 0x20),
                          (longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    param_2 = param_2 + iVar8;
  }
  else {
    param_2 = iVar2 + 1;
  }
  iVar8 = param_2 - iVar2;
  if (param_2 < iVar2) {
    do {
      if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < param_2)) {
        uVar3 = *(ulonglong *)(param_1 + 0x20);
        uVar10 = uVar3 + (longlong)param_2;
        do {
          if (uVar10 <= uVar3) break;
          pbVar1 = (byte *)(uVar10 - 1);
          uVar10 = uVar10 - 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        FUN_1804b0e50(local_res10,uVar3 + (longlong)param_2,
                      (longlong)*(int *)(param_1 + 0x18) + uVar3);
        FUN_1804b0e50(local_res8);
        if (((local_res10[0] == 0x20) || (local_res10[0] == 9)) || (local_res10[0] == 0x3000)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        piVar9 = &DAT_18085bec0;
        do {
          if (local_res10[0] == *piVar9) {
            bVar6 = true;
            goto LAB_1804f8d5a;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 != (int *)&DAT_18085bf34);
        bVar6 = false;
LAB_1804f8d5a:
        if (((local_res8[0] == 0x20) || (local_res8[0] == 9)) || (local_res8[0] == 0x3000)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        piVar9 = &DAT_18085bec0;
        do {
          if (local_res8[0] == *piVar9) {
            bVar7 = true;
            goto LAB_1804f8d93;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 != (int *)&DAT_18085bf34);
        bVar7 = false;
LAB_1804f8d93:
        if (bVar4) {
          if (bVar7) {
LAB_1804f8db0:
            if (bVar6) goto LAB_1804f8da0;
          }
          else if (bVar5) goto LAB_1804f8da0;
          bVar4 = true;
        }
        else {
          if (bVar7) goto LAB_1804f8db0;
LAB_1804f8da0:
          bVar4 = false;
        }
        if (bVar4) break;
      }
      iVar8 = *(int *)(param_1 + 0x18);
      if (param_2 < iVar8) {
        iVar8 = FUN_1804b0e50(local_res18,*(longlong *)(param_1 + 0x20) + (longlong)param_2,
                              *(longlong *)(param_1 + 0x20) + (longlong)iVar8);
        param_2 = param_2 + iVar8;
      }
      else {
        param_2 = iVar8 + 1;
      }
    } while (param_2 < iVar2);
    iVar8 = param_2 - iVar2;
  }
  if (param_2 != iVar2 && SBORROW4(param_2,iVar2) == iVar8 < 0) {
    param_2 = iVar2;
  }
  return param_2;
}



