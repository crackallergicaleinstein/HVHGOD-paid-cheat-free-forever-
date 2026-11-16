// FUN_180589a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589a40 */

undefined8 FUN_180589a40(longlong param_1,char *param_2,int *param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 == 0) {
    if (param_4 == '\0') {
      iVar1 = *param_3;
    }
    else {
      iVar1 = FUN_18060f9f0(param_3,0,10);
    }
    if (iVar1 == 0x23) {
      *(undefined4 *)(param_1 + 0x70) = 0x23;
      uVar2 = 0;
    }
    else if ((iVar1 - 0x26U & 0xfffffffd) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0x28;
      uVar2 = 0;
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 0xc;
  }
  return uVar2;
}



