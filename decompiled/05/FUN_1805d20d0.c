// FUN_1805d20d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d20d0 */

undefined8 FUN_1805d20d0(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (param_3 == iVar1) {
LAB_1805d2174:
    *(undefined4 *)(param_1 + 0x40) = param_2;
    uVar3 = 0;
    *(int *)(param_1 + 0x44) = param_3;
  }
  else {
    iVar4 = (param_3 <= iVar1) + 1;
    if ((*(int *)(param_1 + 0x70) == iVar4) ||
       (((*(int *)(param_1 + 0x70) == 0 || (cVar2 = FUN_1805d1dc0(), cVar2 == '\0')) &&
        (cVar2 = FUN_1805d2340(param_1,iVar4), cVar2 == '\0')))) {
      if (iVar1 < param_3) {
        cVar2 = FUN_1805d21d0(param_1,*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 0x44),
                              param_2,param_3,*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x4c));
      }
      else {
        cVar2 = FUN_1805d21d0(param_1,*(undefined4 *)(param_1 + 0x40),-*(int *)(param_1 + 0x44),
                              param_2,-param_3,-*(int *)(param_1 + 0x4c),-*(int *)(param_1 + 0x48));
      }
      if (cVar2 == '\0') goto LAB_1805d2174;
    }
    uVar3 = 1;
  }
  return uVar3;
}



