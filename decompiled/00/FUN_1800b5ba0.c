// FUN_1800b5ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b5ba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b5ba0(longlong param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined2 local_3c;
  char local_3a [2];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_54 = 0x83;
  piVar4 = (int *)(param_1 + 0x528);
  local_58 = 0;
  local_3c = 0x100;
  local_44 = 0;
  piVar3 = &local_58;
  if (-1 < *piVar4) {
    piVar3 = piVar4;
  }
  local_40 = 0;
  piVar5 = (int *)(param_1 + 0x524);
  piVar2 = &local_54;
  if (*piVar4 < 0x84) {
    piVar2 = piVar3;
  }
  pcVar7 = (char *)&local_3c;
  *piVar4 = *piVar2;
  local_58 = 100;
  piVar4 = &local_54;
  if (-1 < *piVar5) {
    piVar4 = piVar5;
  }
  local_54 = 0;
  piVar3 = &local_58;
  if (*piVar5 < 0x65) {
    piVar3 = piVar4;
  }
  *piVar5 = *piVar3;
  local_58 = 4;
  local_54 = 0;
  do {
    cVar1 = *pcVar7;
    lVar6 = 0x2ac;
    lVar8 = 0x2ac;
    if (cVar1 == '\0') {
      lVar8 = 0x2a8;
      lVar6 = 0x2a8;
    }
    iVar9 = 0;
    iVar10 = *(int *)(lVar6 + param_1);
    piVar4 = &local_54;
    if (-1 < iVar10) {
      piVar4 = (int *)(lVar6 + param_1);
    }
    piVar3 = &local_58;
    if (iVar10 < 5) {
      piVar3 = piVar4;
    }
    iVar10 = *piVar3;
    *(int *)(lVar8 + param_1) = iVar10;
    if (0 < iVar10) {
      local_50 = 0;
      local_4c = 0x83;
      if (cVar1 != '\0') {
        local_4c = 100;
      }
      do {
        if (iVar9 == 0) {
          if (cVar1 == '\0') {
            piVar4 = (int *)(param_1 + 0x52c);
          }
          else {
            piVar4 = (int *)(param_1 + 0x598);
          }
        }
        else {
          lVar6 = (longlong)(iVar9 + -1);
          if (cVar1 != '\0') {
            lVar6 = lVar6 + 3;
          }
          piVar4 = (int *)(lVar6 * 0x70 + param_1 + 0x68);
        }
        piVar3 = &local_50;
        if (-1 < *piVar4) {
          piVar3 = piVar4;
        }
        piVar5 = &local_4c;
        if (*piVar4 <= local_4c) {
          piVar5 = piVar3;
        }
        iVar9 = iVar9 + 1;
        *piVar4 = *piVar5;
        iVar10 = *(int *)(lVar8 + param_1);
      } while (iVar9 < iVar10);
    }
    piVar4 = (int *)(param_1 + 0x2a4);
    if (cVar1 == '\0') {
      piVar4 = (int *)(param_1 + 0x2a0);
    }
    local_48 = iVar10 + -1;
    piVar3 = &local_48;
    if (iVar10 + -1 < 1) {
      piVar3 = &local_44;
    }
    piVar5 = &local_40;
    if (-1 < *piVar4) {
      piVar5 = piVar4;
    }
    if (*piVar3 < *piVar4) {
      piVar5 = piVar3;
    }
    *piVar4 = *piVar5;
    for (iVar10 = *(int *)(lVar8 + param_1); iVar10 < 4; iVar10 = iVar10 + 1) {
      FUN_1800b5ac0(param_1,cVar1,iVar10);
    }
    pcVar7 = pcVar7 + 1;
  } while (pcVar7 != local_3a);
}



