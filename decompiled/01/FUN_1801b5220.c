// FUN_1801b5220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b5220 */

undefined8 FUN_1801b5220(ulonglong param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  iVar5 = (int)param_2[1];
  if ((-1 < iVar5) && (iVar5 < param_4)) {
    param_3 = (longlong)iVar5 * 0x20 + param_3;
    local_res8 = param_1;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      local_res8 = local_res8 & 0xffffffff00000000;
      cVar4 = FUN_1804514f0(&local_res8,param_3,4);
      if (cVar4 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    iVar5 = (int)local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if ((bVar2) && (iVar5 != (int)param_2[1])) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      bVar2 = false;
      if (param_3 + 0x18 != 0) {
        local_res8 = local_res8 & 0xffffffff00000000;
        cVar4 = FUN_1804514f0(&local_res8,param_3 + 0x18,4);
        if (cVar4 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      uVar3 = local_res8;
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      iVar5 = 0;
      if (bVar2) {
        iVar5 = (int)uVar3;
      }
      if (iVar5 == *(int *)((longlong)param_2 + 0xc)) {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        bVar2 = false;
        if (param_3 + 0x10 != 0) {
          local_res8 = 0;
          cVar4 = FUN_1804514f0(&local_res8,param_3 + 0x10,8);
          if (cVar4 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        uVar3 = local_res8;
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        uVar1 = *param_2;
        uVar7 = 0;
        if (bVar2) {
          uVar7 = uVar3;
        }
        if (uVar7 == uVar1) {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          lVar6 = uVar1 + 0x18;
          if (lVar6 == 0) {
            bVar2 = false;
          }
          else {
            local_res8 = 0;
            cVar4 = FUN_1804514f0(&local_res8,lVar6,8);
            if (cVar4 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
          uVar3 = local_res8;
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
          if ((bVar2) && (uVar3 == 0)) {
            return 1;
          }
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return 0;
}



