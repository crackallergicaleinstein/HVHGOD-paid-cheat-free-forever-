// FUN_1803e1120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e1120 */

undefined4 FUN_1803e1120(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 local_res10 [2];
  
  if (param_1 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_1 + 0x58 == 0) {
    bVar1 = false;
  }
  else {
    local_res10[0] = 0;
    cVar2 = FUN_1804514f0(local_res10,param_1 + 0x58,4);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar4 = local_res10[0];
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  if (!bVar1) {
    uVar4 = 0;
  }
  return uVar4;
}



