// FUN_1800f57d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f57d0 */

longlong FUN_1800f57d0(longlong *param_1,undefined1 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  if ((ulonglong)param_1[1] <= param_3) {
    return -1;
  }
  lVar1 = lVar2 + param_1[1];
  lVar3 = thunk_FUN_1805f7e70(param_3 + lVar2,lVar1,param_2);
  lVar4 = -1;
  if (lVar3 != lVar1) {
    lVar4 = lVar3 - lVar2;
  }
  return lVar4;
}



