// FUN_180224cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180224cb0 */

ulonglong FUN_180224cb0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  char local_res10 [8];
  
  uVar3 = FUN_1802248c0();
  if ((uVar3 != 0) && (param_1 != 0)) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (param_1 + 0x810 == 0) {
      bVar1 = false;
    }
    else {
      local_res10[0] = '\0';
      cVar2 = FUN_1804514f0(local_res10,param_1 + 0x810,1);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    cVar2 = local_res10[0];
    uVar3 = FUN_18017ea70();
    if (*(int *)(uVar3 + 4) != 0) {
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + -1;
    }
    if ((bVar1) && (cVar2 == '\0')) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      if (param_1 + 0x811 == 0) {
        bVar1 = false;
      }
      else {
        local_res10[0] = '\0';
        cVar2 = FUN_1804514f0(local_res10,param_1 + 0x811,1);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      cVar2 = local_res10[0];
      uVar3 = FUN_18017ea70();
      if (*(int *)(uVar3 + 4) != 0) {
        *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + -1;
      }
      if ((bVar1) && (cVar2 == '\x01')) {
        return 1;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



