// FUN_18057d610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057d610 */

int FUN_18057d610(longlong param_1,char *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *local_48;
  longlong local_40 [3];
  undefined4 local_24;
  
  iVar8 = strcmp(param_2,"fallback-script");
  if (iVar8 != 0) {
    iVar8 = strcmp(param_2,"default-script");
    if (iVar8 == 0) {
      if (param_4 == '\0') {
        *(int *)(param_1 + 0x1c) = (int)*param_3;
        return 0;
      }
      return 6;
    }
    iVar8 = strcmp(param_2,"increase-x-height");
    if (iVar8 == 0) {
      if (param_4 != '\0') {
        return 6;
      }
      lVar12 = *param_3;
      if (lVar12 == 0) {
        return 0x23;
      }
      local_48 = *(longlong **)(lVar12 + 0xb8);
      if (local_48 == (longlong *)0x0) {
        iVar8 = FUN_180581200(lVar12,&local_48,param_1);
        if (iVar8 != 0) {
          return iVar8;
        }
        *(longlong **)(lVar12 + 0xb8) = local_48;
        *(code **)(lVar12 + 0xc0) = FUN_180581140;
      }
      *(int *)(local_48 + 3) = (int)param_3[1];
      return 0;
    }
    iVar8 = strcmp(param_2,"darkening-parameters");
    if (iVar8 != 0) {
      iVar8 = strcmp(param_2,"no-stem-darkening");
      if (iVar8 != 0) {
        return 0xc;
      }
      if (param_4 == '\0') {
        *(char *)(param_1 + 0x20) = (char)*param_3;
        return 0;
      }
      iVar8 = FUN_18060f9f0(param_3,0,10);
      *(bool *)(param_1 + 0x20) = iVar8 != 0;
      return 0;
    }
    if (param_4 != '\0') {
      lVar12 = 0;
      do {
        uVar9 = FUN_18060f9f0(param_3,&local_48,10);
        *(undefined4 *)((longlong)local_40 + lVar12 * 4) = uVar9;
        if ((char)*local_48 != ',') {
          return 6;
        }
        if (param_3 == local_48) {
          return 6;
        }
        lVar12 = lVar12 + 1;
        param_3 = (longlong *)((longlong)local_48 + 1);
      } while (lVar12 < 7);
      local_24 = FUN_18060f9f0(param_3,&local_48,10);
      if (((char)*local_48 != '\0') && ((char)*local_48 != ' ')) {
        return 6;
      }
      if (param_3 == local_48) {
        return 6;
      }
      param_3 = local_40;
    }
    iVar8 = (int)*param_3;
    iVar1 = *(int *)((longlong)param_3 + 4);
    iVar2 = (int)param_3[1];
    iVar3 = *(int *)((longlong)param_3 + 0xc);
    iVar4 = (int)param_3[2];
    iVar5 = *(int *)((longlong)param_3 + 0x14);
    iVar6 = (int)param_3[3];
    iVar7 = *(int *)((longlong)param_3 + 0x1c);
    if (iVar8 < 0) {
      return 6;
    }
    if (iVar2 < 0) {
      return 6;
    }
    if (iVar4 < 0) {
      return 6;
    }
    if (iVar6 < 0) {
      return 6;
    }
    if (iVar1 < 0) {
      return 6;
    }
    if (iVar3 < 0) {
      return 6;
    }
    if (iVar5 < 0) {
      return 6;
    }
    if (iVar7 < 0) {
      return 6;
    }
    if (iVar2 < iVar8) {
      return 6;
    }
    if (iVar4 < iVar2) {
      return 6;
    }
    if (iVar6 < iVar4) {
      return 6;
    }
    if (500 < iVar1) {
      return 6;
    }
    if (500 < iVar3) {
      return 6;
    }
    if (500 < iVar5) {
      return 6;
    }
    if (iVar7 < 0x1f5) {
      *(int *)(param_1 + 0x2c) = iVar2;
      *(int *)(param_1 + 0x24) = iVar8;
      *(int *)(param_1 + 0x28) = iVar1;
      *(int *)(param_1 + 0x30) = iVar3;
      *(int *)(param_1 + 0x34) = iVar4;
      *(int *)(param_1 + 0x38) = iVar5;
      *(int *)(param_1 + 0x3c) = iVar6;
      *(int *)(param_1 + 0x40) = iVar7;
      return 0;
    }
    return 6;
  }
  if (param_4 == '\0') {
    puVar10 = &DAT_18066d168;
    uVar11 = 0;
    do {
      if ((*(int *)(puVar10 + 8) == (int)*param_3) && (*(int *)(puVar10 + 0x10) == 10)) {
        *(int *)(param_1 + 0x18) = (int)uVar11;
        break;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      puVar10 = (&PTR_DAT_18066d990)[uVar11];
    } while (puVar10 != (undefined *)0x0);
    if ((&PTR_DAT_18066d990)[uVar11] != (undefined *)0x0) {
      return 0;
    }
  }
  return 6;
}



