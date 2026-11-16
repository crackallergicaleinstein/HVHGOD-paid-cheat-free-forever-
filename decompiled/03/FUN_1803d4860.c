// FUN_1803d4860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d4860 */

longlong FUN_1803d4860(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_1[2] - *param_1;
  lVar1 = lVar3 * 0x2aaaaaaaaaaaaaab;
  if ((ulonglong)(lVar3 / 0x18) < 0x80) {
    lVar1 = param_1[1] - *param_1;
    lVar1 = lVar1 / 6 + (lVar1 >> 0x3f);
    uVar2 = FUN_18015bca0(0xc00);
    FUN_18063aed0(uVar2,*param_1,param_1[1] - *param_1);
    lVar1 = FUN_1802eb940(param_1,uVar2,(lVar1 >> 2) - (lVar1 >> 0x3f),0x80);
  }
  return lVar1;
}



