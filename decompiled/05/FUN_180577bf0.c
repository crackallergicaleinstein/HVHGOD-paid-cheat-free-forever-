// FUN_180577bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577bf0 */

int FUN_180577bf0(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar5 = 0;
  uVar4 = (ulonglong)param_2;
  if (param_1[4] != 0) {
    lVar2 = param_1[6];
    if (uVar3 < param_2) {
      iVar6 = 0x55;
    }
    else {
      iVar6 = 0;
      lVar7 = 0;
      if ((int)param_2 < 1) {
        if ((int)param_2 < 0) {
          *param_1 = 0;
          return 6;
        }
      }
      else {
        lVar7 = (**(code **)(lVar2 + 8))(lVar2,param_2);
        iVar6 = 0x40;
        if (lVar7 != 0) {
          iVar6 = 0;
        }
      }
      *param_1 = lVar7;
      if (iVar6 == 0) {
        uVar3 = (*(code *)param_1[4])(param_1,*(undefined4 *)((longlong)param_1 + 0xc),lVar7,uVar4);
        if (uVar3 < param_2) {
          if (*param_1 != 0) {
            (**(code **)(lVar2 + 0x10))(lVar2);
          }
          *param_1 = 0;
          iVar6 = 0x55;
        }
        lVar2 = *param_1;
        param_1[7] = lVar2;
        if (lVar2 != 0) {
          lVar5 = lVar2 + uVar4;
        }
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
        param_1[8] = lVar5;
      }
    }
    return iVar6;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((uVar1 < uVar3) && (param_2 <= uVar3 - uVar1)) {
    param_1[7] = (ulonglong)uVar1 + *param_1;
    param_1[8] = (ulonglong)uVar1 + *param_1 + uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1 + param_2;
    return 0;
  }
  return 0x55;
}



