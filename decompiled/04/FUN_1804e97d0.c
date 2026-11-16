// FUN_1804e97d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e97d0 */

longlong FUN_1804e97d0(longlong *param_1,float param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  auVar3._0_4_ = (float)(int)(param_2 + 0.5);
  auVar3._4_12_ = SUB1612(ZEXT816(0),4);
  if ((float)param_3 < 0.0) {
    param_3 = (ulonglong)*(uint *)((longlong)param_1 + 0x14);
  }
  if (((lVar1 != 0) && (*(float *)(lVar1 + 0x14) == auVar3._0_4_)) &&
     (*(float *)(lVar1 + 0x18) == (float)param_3)) {
    return lVar1;
  }
  lVar1 = *(longlong *)(param_1[1] + 0xa0);
  lVar2 = FUN_1804e9880(param_1[1],param_1,auVar3._0_8_,param_3);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar1 + 0xa4);
  *param_1 = lVar2;
  return lVar2;
}



