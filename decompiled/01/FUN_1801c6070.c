// FUN_1801c6070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c6070 */

undefined8 FUN_1801c6070(longlong param_1,uint param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  local_res18[0] = param_3;
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if ((ulonglong)param_2 + param_1 == 0) {
    bVar1 = false;
  }
  else {
    local_res18[0] = 0;
    cVar2 = FUN_1804514f0(local_res18,(ulonglong)param_2 + param_1,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar4 = local_res18[0];
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  if (!bVar1) {
    uVar4 = 0;
  }
  return uVar4;
}



