// FUN_1805a6a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6a10 */

int FUN_1805a6a10(char *param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int local_res10 [2];
  
  uVar5 = (ulonglong)param_2;
  local_res10[0] = 0;
  if (*param_4 != 0) {
    FUN_18057abd0(param_3);
    *param_4 = 0;
  }
  if ((param_2 != 0) && (param_1[param_2 - 1] == '\0')) {
    uVar5 = (ulonglong)(param_2 - 1);
  }
  uVar3 = 0;
  uVar4 = (uint)uVar5;
  if (uVar4 == 0) {
    *param_4 = 0;
  }
  else {
    pcVar2 = param_1;
    do {
      if (0x5f < (byte)(*pcVar2 - 0x20U)) {
        *param_4 = 0;
        goto LAB_1805a6acc;
      }
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar3 < uVar4);
    lVar1 = FUN_18057abe0(param_3,uVar4 + 1,local_res10);
    if (local_res10[0] == 0) {
      FUN_18063aed0(lVar1,param_1,uVar5);
      *(undefined1 *)(uVar5 + lVar1) = 0;
      *param_4 = lVar1;
    }
    else {
      *param_4 = lVar1;
    }
  }
LAB_1805a6acc:
  return local_res10[0];
}



