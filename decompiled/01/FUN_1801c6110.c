// FUN_1801c6110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c6110 */

ulonglong FUN_1801c6110(longlong param_1,uint param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  byte local_res18 [16];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res18[0] = param_3;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar1 = false;
  if ((ulonglong)param_2 + param_1 != 0) {
    local_res18[0] = 0;
    cVar3 = FUN_1804514f0(local_res18,(ulonglong)param_2 + param_1,1);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  bVar2 = local_res18[0];
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  uVar5 = (ulonglong)bVar2;
  if (!bVar1) {
    uVar5 = 0;
  }
  return uVar5;
}



