// FUN_18057cc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057cc80 */

ulonglong FUN_18057cc80(undefined8 param_1,longlong *param_2,ulonglong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong local_res18 [2];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  
  uVar4 = *(uint *)((longlong)param_2 + 0xc);
  iVar2 = 0;
  if (*(uint *)(param_2 + 1) <= uVar4 + 3) {
    return 0x55;
  }
  local_res18[0] = param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    puVar5 = (undefined1 *)((ulonglong)uVar4 + *param_2);
    if (puVar5 == (undefined1 *)0x0) goto LAB_18057cd01;
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,(ulonglong)uVar4,local_28,4);
    if (iVar2 != 4) {
      return 0x55;
    }
    uVar4 = *(uint *)((longlong)param_2 + 0xc);
    puVar5 = local_28;
  }
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
LAB_18057cd01:
  *(uint *)((longlong)param_2 + 0xc) = uVar4 + 4;
  local_res18[0] = local_res18[0] & 0xffffffff00000000;
  if (iVar2 == param_4) {
    FUN_180578540(param_2,local_res18);
    if ((int)local_res18[0] != 0) {
      return local_res18[0] & 0xffffffff;
    }
    uVar4 = 0;
    uVar6 = *(int *)((longlong)param_2 + 0xc) + 0x10;
    if ((code *)param_2[4] == (code *)0x0) {
      if (*(uint *)(param_2 + 1) < uVar6) {
LAB_18057cf22:
        uVar6 = 0x55;
LAB_18057cf27:
        return (ulonglong)uVar6;
      }
    }
    else {
      iVar2 = (*(code *)param_2[4])(param_2,uVar6,0,0);
      uVar4 = -(uint)(iVar2 != 0) & 0x55;
      if (iVar2 != 0) {
        return (ulonglong)uVar4;
      }
    }
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,uVar4);
    *(uint *)((longlong)param_2 + 0xc) = uVar6;
    uVar1 = FUN_180578720(param_2,local_res18);
    if ((int)local_res18[0] != 0) {
      return local_res18[0] & 0xffffffff;
    }
    if ((uVar1 != 0) && (iVar2 = 0, uVar1 != 0)) {
      do {
        uVar4 = *(uint *)((longlong)param_2 + 0xc);
        iVar3 = 0;
        if (*(uint *)(param_2 + 1) <= uVar4 + 3) {
          return 0x55;
        }
        if ((code *)param_2[4] == (code *)0x0) {
          puVar5 = (undefined1 *)((ulonglong)uVar4 + *param_2);
          if (puVar5 != (undefined1 *)0x0) goto LAB_18057cdf6;
        }
        else {
          iVar3 = (*(code *)param_2[4])(param_2,(ulonglong)uVar4,local_24,4);
          if (iVar3 != 4) {
            return 0x55;
          }
          uVar4 = *(uint *)((longlong)param_2 + 0xc);
          puVar5 = local_24;
LAB_18057cdf6:
          iVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
        }
        uVar6 = uVar4 + 4;
        *(uint *)((longlong)param_2 + 0xc) = uVar6;
        if (iVar3 == 2) {
          uVar8 = *(uint *)(param_2 + 1);
          uVar7 = 0;
          if (uVar4 + 7 < uVar8) {
            if ((code *)param_2[4] == (code *)0x0) {
              puVar5 = (undefined1 *)((ulonglong)uVar6 + *param_2);
              if (puVar5 != (undefined1 *)0x0) goto LAB_18057ce75;
            }
            else {
              iVar3 = (*(code *)param_2[4])(param_2,uVar6,local_20);
              if (iVar3 != 4) goto LAB_18057cef1;
              uVar6 = *(uint *)((longlong)param_2 + 0xc);
              puVar5 = local_20;
              uVar8 = *(uint *)(param_2 + 1);
LAB_18057ce75:
              uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
            }
            *(uint *)((longlong)param_2 + 0xc) = uVar6 + 4;
            if ((uVar6 + 7 < uVar8) &&
               (((code *)param_2[4] == (code *)0x0 ||
                (iVar3 = (*(code *)param_2[4])(param_2,uVar6 + 4,local_res18), iVar3 == 4)))) {
              *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
              *param_5 = uVar7;
              return 0;
            }
          }
        }
        else {
          uVar4 = uVar4 + 0xc;
          if ((code *)param_2[4] == (code *)0x0) {
            if (*(uint *)(param_2 + 1) < uVar4) goto LAB_18057cf22;
          }
          else {
            iVar3 = (*(code *)param_2[4])(param_2,uVar4,0,0);
            uVar6 = -(uint)(iVar3 != 0) & 0x55;
            if (iVar3 != 0) goto LAB_18057cf27;
          }
          *(uint *)((longlong)param_2 + 0xc) = uVar4;
        }
LAB_18057cef1:
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)uVar1);
    }
  }
  return 2;
}



