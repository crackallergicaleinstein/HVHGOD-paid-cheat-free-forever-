// FUN_18034f9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034f9c0 */

longlong FUN_18034f9c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = param_1[2] - lVar1;
  lVar2 = lVar4 * 0x4ec4ec4ec4ec4ec5;
  if ((ulonglong)(lVar4 / 0x34) < 0x20) {
    lVar2 = param_1[1];
    uVar3 = FUN_18015bca0(0x680);
    FUN_18063aed0(uVar3,*param_1,param_1[1] - *param_1);
    lVar2 = FUN_180352450(param_1,uVar3,(lVar2 - lVar1) / 0x34,0x20);
  }
  return lVar2;
}



