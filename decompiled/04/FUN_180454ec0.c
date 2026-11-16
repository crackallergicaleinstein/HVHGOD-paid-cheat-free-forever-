// FUN_180454ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454ec0 */

void FUN_180454ec0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = FUN_18017ea70();
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
    FUN_1804551e0(local_res8,lVar2,2);
    lVar2 = FUN_18017ea70();
    if (*(int *)(lVar2 + 4) != 0) {
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
    }
  }
  return;
}



