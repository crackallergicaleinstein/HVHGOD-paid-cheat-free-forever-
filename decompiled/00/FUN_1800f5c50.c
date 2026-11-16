// FUN_1800f5c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5c50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1800f5c50(longlong *param_1,undefined1 *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((longlong)param_3 < 1) {
    return 0;
  }
  uVar7 = param_3;
  if (param_1[0xd] == 0) {
    if (*(longlong *)param_1[7] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)param_1[10];
    }
    if (iVar4 != 0) {
      uVar6 = param_3;
      if ((ulonglong)(longlong)iVar4 < param_3) {
        uVar6 = (longlong)iVar4;
      }
      FUN_18063aed0(param_2,*(longlong *)param_1[7],uVar6);
      param_2 = param_2 + uVar6;
      uVar7 = param_3 - uVar6;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar6;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar6;
    }
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar2 = param_1[0x11];
        lVar3 = param_1[0x12];
        *(longlong *)param_1[3] = lVar2;
        *(longlong *)param_1[7] = lVar2;
        *(int *)param_1[10] = (int)lVar3 - (int)lVar2;
      }
      do {
        if (uVar7 < 0x1000) {
          if (uVar7 != 0) {
            sVar5 = fread(param_2,1,uVar7,(FILE *)param_1[0x10]);
            uVar7 = uVar7 - sVar5;
          }
          break;
        }
        sVar5 = fread(param_2,1,0xfff,(FILE *)param_1[0x10]);
        param_2 = param_2 + sVar5;
        uVar7 = uVar7 - sVar5;
      } while (sVar5 == 0xfff);
    }
  }
  else {
    do {
      if ((*(longlong *)param_1[7] == 0) || (iVar4 = *(int *)param_1[10], iVar4 < 1)) {
        iVar4 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar4 == -1) break;
        *param_2 = (char)iVar4;
        uVar7 = uVar7 - 1;
        uVar6 = 1;
      }
      else {
        uVar6 = uVar7;
        if ((longlong)iVar4 <= (longlong)uVar7) {
          uVar6 = (longlong)iVar4;
        }
        FUN_18063aed0(param_2,*(longlong *)param_1[7],uVar6);
        piVar1 = (int *)param_1[10];
        uVar7 = uVar7 - uVar6;
        *piVar1 = *piVar1 - (int)uVar6;
        *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar6;
      }
      param_2 = param_2 + uVar6;
    } while (0 < (longlong)uVar7);
  }
  return param_3 - uVar7;
}



