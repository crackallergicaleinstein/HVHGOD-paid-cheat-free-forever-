// FUN_180572630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180572630 */

undefined8
FUN_180572630(longlong *param_1,undefined8 param_2,char *param_3,longlong *param_4,
             undefined4 *param_5)

{
  size_t sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  sVar1 = strlen(param_3);
  lVar2 = 0;
  iVar3 = (int)sVar1 + 0x12;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      return 6;
    }
  }
  else {
    lVar2 = (**(code **)(*param_1 + 8))();
    if (lVar2 == 0) {
      return 0x40;
    }
  }
  lVar4 = (longlong)(int)sVar1;
  FUN_18063aed0(lVar2,param_3,lVar4);
  builtin_strncpy((char *)(lVar4 + lVar2),"/..namedfork/rsr",0x10);
  *(undefined2 *)(lVar4 + 0x10 + lVar2) = 99;
  *param_4 = lVar2;
  *param_5 = 0;
  return 0;
}



