// FUN_18057ade0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057ade0 */

longlong FUN_18057ade0(longlong param_1,char *param_2,undefined4 *param_3)

{
  size_t sVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 == (char *)0x0) {
    uVar3 = 0;
    lVar2 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    iVar4 = (int)sVar1 + 1;
    if (iVar4 < 1) {
      lVar2 = 0;
      if (iVar4 < 0) {
        uVar3 = 6;
        goto LAB_18057ae5f;
      }
    }
    else {
      lVar2 = (**(code **)(param_1 + 8))(param_1,iVar4);
      uVar3 = 0x40;
      if (lVar2 == 0) goto LAB_18057ae5f;
    }
    uVar3 = 0;
    if (iVar4 != 0) {
      FUN_18063aed0(lVar2,param_2,iVar4);
    }
  }
LAB_18057ae5f:
  *param_3 = uVar3;
  return lVar2;
}



