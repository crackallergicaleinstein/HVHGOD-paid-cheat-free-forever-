// FUN_18057a710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a710 */

uint FUN_18057a710(longlong *param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  code *pcVar8;
  uint local_res18 [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar2 = 0;
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar7 + 3) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar6 = (undefined1 *)((ulonglong)uVar7 + *param_1);
    if (puVar6 == (undefined1 *)0x0) goto LAB_18057a7a7;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,(ulonglong)uVar7,local_48);
    if (iVar2 != 4) {
      return 0x55;
    }
    uVar7 = *(uint *)((longlong)param_1 + 0xc);
    puVar6 = local_48;
  }
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
LAB_18057a7a7:
  local_res18[0] = 0;
  *(uint *)((longlong)param_1 + 0xc) = uVar7 + 4;
  if (iVar2 != 0x74797031) {
    return 2;
  }
  uVar1 = FUN_180578720(param_1,local_res18);
  if (local_res18[0] == 0) {
    uVar7 = *(int *)((longlong)param_1 + 0xc) + 6;
    if ((code *)param_1[4] == (code *)0x0) {
      if (*(uint *)(param_1 + 1) < uVar7) {
        return 0x55;
      }
    }
    else {
      iVar2 = (*(code *)param_1[4])(param_1,uVar7,0);
      if (iVar2 != 0) {
        return -(uint)(iVar2 != 0) & 0x55;
      }
    }
    iVar2 = -1;
    *(uint *)((longlong)param_1 + 0xc) = uVar7;
    *param_5 = 0;
    local_res18[0] = 0;
    if (uVar1 != 0) {
      do {
        uVar7 = *(uint *)((longlong)param_1 + 0xc);
        iVar3 = 0;
        if (*(uint *)(param_1 + 1) <= uVar7 + 3) {
          return 0x55;
        }
        if ((code *)param_1[4] == (code *)0x0) {
          puVar6 = (undefined1 *)((ulonglong)uVar7 + *param_1);
          pcVar8 = (code *)0x0;
          if (puVar6 != (undefined1 *)0x0) goto LAB_18057a8be;
        }
        else {
          iVar3 = (*(code *)param_1[4])(param_1,(ulonglong)uVar7,local_44);
          if (iVar3 != 4) {
            return 0x55;
          }
          uVar7 = *(uint *)((longlong)param_1 + 0xc);
          puVar6 = local_44;
          pcVar8 = (code *)param_1[4];
LAB_18057a8be:
          iVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
        }
        uVar5 = 0;
        *(uint *)((longlong)param_1 + 0xc) = uVar7 + 4;
        uVar7 = uVar7 + 8;
        if (pcVar8 == (code *)0x0) {
          if (uVar7 <= *(uint *)(param_1 + 1)) goto LAB_18057a908;
          uVar5 = 0x55;
        }
        else {
          iVar4 = (*pcVar8)(param_1,uVar7,0);
          uVar5 = -(uint)(iVar4 != 0) & 0x55;
          if (iVar4 == 0) {
LAB_18057a908:
            *(uint *)((longlong)param_1 + 0xc) = uVar7;
          }
        }
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar7 = *(uint *)((longlong)param_1 + 0xc);
        iVar4 = 0;
        if (*(uint *)(param_1 + 1) <= uVar7 + 3) {
LAB_18057aaa3:
          *param_3 = 0;
          return 0x55;
        }
        if ((code *)param_1[4] == (code *)0x0) {
          puVar6 = (undefined1 *)((ulonglong)uVar7 + *param_1);
          if (puVar6 != (undefined1 *)0x0) goto LAB_18057a969;
        }
        else {
          iVar4 = (*(code *)param_1[4])(param_1,(ulonglong)uVar7,local_40);
          if (iVar4 != 4) goto LAB_18057aaa3;
          uVar7 = *(uint *)((longlong)param_1 + 0xc);
          puVar6 = local_40;
LAB_18057a969:
          iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
        }
        *(uint *)((longlong)param_1 + 0xc) = uVar7 + 4;
        *param_3 = iVar4;
        iVar4 = 0;
        uVar7 = *(uint *)((longlong)param_1 + 0xc);
        if (*(uint *)(param_1 + 1) <= uVar7 + 3) {
LAB_18057aa99:
          *param_4 = 0;
          return 0x55;
        }
        if ((code *)param_1[4] == (code *)0x0) {
          puVar6 = (undefined1 *)((ulonglong)uVar7 + *param_1);
          if (puVar6 != (undefined1 *)0x0) goto LAB_18057a9e0;
        }
        else {
          iVar4 = (*(code *)param_1[4])(param_1,(ulonglong)uVar7,local_3c);
          if (iVar4 != 4) goto LAB_18057aa99;
          uVar7 = *(uint *)((longlong)param_1 + 0xc);
          puVar6 = local_3c;
LAB_18057a9e0:
          iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
        }
        *(uint *)((longlong)param_1 + 0xc) = uVar7 + 4;
        *param_4 = iVar4;
        if (iVar3 == 0x43494420) {
          *param_3 = *param_3 + 0x16;
          *param_4 = *param_4 + -0x16;
          *param_5 = 1;
joined_r0x00018057aa2e:
          iVar2 = iVar2 + 1;
          if (param_2 < 0) {
            return 0;
          }
LAB_18057aa70:
          if (iVar2 == param_2) {
            return 0;
          }
        }
        else {
          if (iVar3 == 0x54595031) {
            *param_3 = *param_3 + 0x18;
            *param_4 = *param_4 + -0x18;
            *param_5 = 0;
            goto joined_r0x00018057aa2e;
          }
          if (-1 < param_2) goto LAB_18057aa70;
        }
        local_res18[0] = local_res18[0] + 1;
      } while ((int)local_res18[0] < (int)(uint)uVar1);
    }
    local_res18[0] = 0x8e;
  }
  return local_res18[0];
}



