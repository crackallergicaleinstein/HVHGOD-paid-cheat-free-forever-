// FUN_180414040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180414040 */

ulonglong * FUN_180414040(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  ulonglong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  
  if ((param_2 != 0) && (param_2 = param_2 + 0x80, param_2 != 0)) {
    lVar7 = 0;
    local_68 = 0;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar4 = FUN_1804514c0(&local_68,param_2,8);
    if (cVar4 == '\0') {
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
    else {
      lVar6 = FUN_18017ea70();
      uVar3 = local_68;
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      if (local_68 != 0) {
        local_68 = 0;
        local_60 = 0;
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar4 = FUN_1804514c0(&local_68,uVar3,0xc);
        bVar8 = cVar4 != '\0';
        if (bVar8) {
          local_58 = local_68;
          uStack_50 = local_60;
        }
        uStack_4c = CONCAT31(uStack_4c._1_3_,bVar8);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        local_68 = 0;
        local_60 = 0;
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar4 = FUN_1804514c0(&local_68,uVar3,0xc);
        bVar9 = cVar4 != '\0';
        if (bVar9) {
          local_48 = local_68;
          local_40 = local_60;
        }
        local_3c = bVar9;
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        local_68 = 0;
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar4 = FUN_1804514c0(&local_68,param_2,8);
        uVar2 = local_68;
        if (cVar4 != '\0') {
          lVar6 = FUN_18017ea70();
          iVar1 = *(int *)(lVar6 + 4);
        }
        else {
          lVar6 = FUN_18017ea70();
          iVar1 = *(int *)(lVar6 + 4);
          uVar2 = local_68;
        }
        if (iVar1 != 0) {
          *(int *)(lVar6 + 4) = iVar1 + -1;
        }
        if ((bVar8) && (bVar9)) {
          do {
            if (*(float *)((longlong)&local_58 + lVar7) != *(float *)((longlong)&local_48 + lVar7))
            goto LAB_18041409e;
            lVar6 = lVar7 + 4;
            lVar7 = lVar7 + 4;
          } while ((undefined4 *)((longlong)&local_58 + lVar6) != &uStack_4c);
          if ((cVar4 != '\0' && uVar2 == uVar3) &&
             (sVar5 = thunk_FUN_180624430(local_58 & 0xffffffff), sVar5 < 1)) {
            sVar5 = thunk_FUN_180624430(local_58._4_4_);
            if ((sVar5 < 1) && (sVar5 = thunk_FUN_180624430(uStack_50), sVar5 < 1)) {
              *param_1 = local_58;
              param_1[1] = CONCAT44(uStack_4c,uStack_50);
              return param_1;
            }
          }
        }
      }
    }
  }
LAB_18041409e:
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



