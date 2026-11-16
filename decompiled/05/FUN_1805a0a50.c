// FUN_1805a0a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a0a50 */

int FUN_1805a0a50(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int local_res8 [2];
  undefined8 *local_res10;
  
  uVar12 = 0;
  local_res8[0] = 0;
  plVar4 = (longlong *)0x0;
  lVar5 = 0;
  uVar2 = *(undefined8 *)(*param_1 + 0x30);
  *param_2 = 0;
  local_res10 = param_2;
  if ((param_1[4] == 0) && (local_res8[0] = FUN_1805a0e60(), local_res8[0] != 0)) {
LAB_1805a0bff:
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  else {
    iVar1 = (int)param_1[2];
    iVar9 = *(int *)((longlong)param_1 + 0x1c) + iVar1;
    if (iVar1 == 0) goto LAB_1805a0bff;
    plVar4 = (longlong *)FUN_18057ac40(uVar2,8,0,iVar1 + 1,0,local_res8);
    if (local_res8[0] != 0) goto LAB_1805a0c21;
    if ((param_3 == (longlong *)0x0) ||
       (lVar5 = FUN_18057aad0(uVar2,iVar9,local_res8), local_res8[0] == 0)) {
      lVar3 = param_1[5];
      lVar11 = lVar3;
      if (param_3 != (longlong *)0x0) {
        lVar11 = lVar5;
      }
      uVar10 = 1;
      *plVar4 = lVar11;
      if ((int)param_1[2] != 0) {
        uVar6 = 0;
        do {
          uVar7 = *(int *)(param_1[4] + uVar10 * 4) - 1;
          if (uVar7 < (uint)uVar6) {
            uVar8 = uVar6;
          }
          else {
            uVar8 = (ulonglong)uVar7;
            if (*(uint *)((longlong)param_1 + 0x1c) < uVar7) {
              uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
            }
          }
          if (param_3 == (longlong *)0x0) {
            plVar4[uVar10] = uVar8 + lVar3;
          }
          else {
            lVar11 = uVar12 + uVar8 + lVar5;
            plVar4[uVar10] = lVar11;
            if ((uint)uVar8 != (uint)uVar6) {
              FUN_18063aed0(plVar4[(int)uVar10 - 1],uVar6 + lVar3,lVar11 - plVar4[(int)uVar10 - 1]);
              *(undefined1 *)plVar4[uVar10] = 0;
              plVar4[uVar10] = plVar4[uVar10] + 1;
              uVar12 = (ulonglong)((int)uVar12 + 1);
            }
          }
          uVar7 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar7;
          uVar6 = uVar8;
        } while (uVar7 <= *(uint *)(param_1 + 2));
      }
      *local_res10 = plVar4;
      if (param_3 != (longlong *)0x0) {
        *param_3 = lVar5;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iVar9;
      }
      goto LAB_1805a0bff;
    }
  }
  if (lVar5 != 0) {
    FUN_18057abd0(uVar2,lVar5);
  }
  if (local_res8[0] == 0) {
    return 0;
  }
LAB_1805a0c21:
  if (plVar4 == (longlong *)0x0) {
    return local_res8[0];
  }
  FUN_18057abd0(uVar2,plVar4);
  return local_res8[0];
}



