// FUN_1804555b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804555b0 */

void FUN_1804555b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  
  if (param_1 != param_2) {
    local_res18[0] = param_3;
    do {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        lVar1 = FUN_18017ea70();
        *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
        FUN_1804551e0(local_res18,lVar2,2);
        lVar2 = FUN_18017ea70();
        if (*(int *)(lVar2 + 4) != 0) {
          *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



