// FUN_180594cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180594cc0 */

undefined4 FUN_180594cc0(longlong param_1,uint param_2,int *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((*(char *)(param_1 + 0x401) == '\0') || (lVar3 = *(longlong *)(param_1 + 0x408), lVar3 == 0))
  {
    return 0;
  }
  if (param_4 == '\0') {
    if (*(char *)(lVar3 + 0x40) == '\0') {
      uVar1 = FUN_180591f80(param_1,0);
      *(undefined4 *)(lVar3 + 0x44) = uVar1;
    }
    lVar3 = *(longlong *)(param_1 + 0x408);
    if (*(char *)(lVar3 + 0x41) == '\0') {
      return *(undefined4 *)(lVar3 + 0x44);
    }
    lVar3 = *(longlong *)(lVar3 + 0x48);
  }
  else {
    if (*(char *)(lVar3 + 0x50) == '\0') {
      uVar1 = FUN_180591f80(param_1,1);
      *(undefined4 *)(lVar3 + 0x54) = uVar1;
    }
    lVar3 = *(longlong *)(param_1 + 0x408);
    if (*(char *)(lVar3 + 0x51) == '\0') {
      return *(undefined4 *)(lVar3 + 0x54);
    }
    lVar3 = *(longlong *)(lVar3 + 0x58);
  }
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(lVar3 + 0x20) <= param_2) {
      param_2 = *(uint *)(lVar3 + 0x20) - 1;
    }
    uVar4 = (ulonglong)param_2;
    param_2 = *(uint *)(uVar4 * 4 + *(longlong *)(lVar3 + 0x30));
    uVar1 = *(undefined4 *)(uVar4 * 4 + *(longlong *)(lVar3 + 0x28));
  }
  iVar2 = FUN_1805893c0(param_1,lVar3,uVar1,param_2);
  if (iVar2 != 0) {
    *param_3 = *param_3 + iVar2;
  }
  return 0;
}



