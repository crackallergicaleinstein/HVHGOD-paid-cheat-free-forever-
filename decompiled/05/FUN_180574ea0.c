// FUN_180574ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180574ea0 */

undefined8 FUN_180574ea0(longlong param_1,int *param_2,char param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0x23;
  }
  if (*param_2 != 0) {
    return 7;
  }
  iVar4 = param_2[1];
  if (param_2[3] == 0) {
    iVar5 = iVar4;
  }
  else {
    iVar5 = (iVar4 * param_2[3] + 0x24) / 0x48;
  }
  iVar1 = param_2[2];
  if (param_2[4] == 0) {
    iVar3 = iVar1;
  }
  else {
    iVar3 = (iVar1 * param_2[4] + 0x24) / 0x48;
  }
  if (iVar4 == 0) {
    if (iVar1 != 0) {
      iVar5 = iVar3;
    }
  }
  else if (iVar1 == 0) {
    iVar3 = iVar5;
  }
  uVar6 = iVar3 + 0x20U & 0xffffffc0;
  uVar7 = iVar5 + 0x20U & 0xffffffc0;
  if ((uVar7 != 0) && (uVar6 != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      do {
        if ((uVar6 == (piVar2[1] + 0x20U & 0xffffffc0)) &&
           ((uVar7 == (*piVar2 + 0x20U & 0xffffffc0) || (param_3 != '\0')))) {
          if (param_4 != (int *)0x0) {
            *param_4 = iVar4;
          }
          return 0;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x28));
    }
  }
  return 0x17;
}



