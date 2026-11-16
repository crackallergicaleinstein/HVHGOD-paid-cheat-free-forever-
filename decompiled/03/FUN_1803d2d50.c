// FUN_1803d2d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d2d50 */

int FUN_1803d2d50(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong local_res8;
  ulonglong local_18;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = local_18;
  if (param_2 + 0x1e0 == 0) {
    bVar4 = false;
  }
  else {
    local_res8 = 0;
    lVar2 = FUN_18017ea70();
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    cVar1 = FUN_1804514c0(&local_res8,param_2 + 0x1e0,8);
    if (cVar1 == '\0') {
      bVar4 = false;
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
    }
    else {
      bVar4 = true;
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
      uVar3 = local_res8;
    }
  }
  if (!bVar4) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    local_res8 = 0;
    lVar2 = FUN_18017ea70();
    *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    cVar1 = FUN_1804514c0(&local_res8,uVar3,8);
    if (cVar1 == '\0') {
      bVar4 = false;
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
    }
    else {
      bVar4 = true;
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
      local_18 = local_res8;
    }
    if (!bVar4) {
      local_18 = 0;
    }
    if (local_18 != 0) {
      bVar4 = false;
      if (local_18 + 0x178 != 0) {
        local_res8 = local_res8 & 0xffffffff00000000;
        lVar2 = FUN_18017ea70();
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
        cVar1 = FUN_1804514c0(&local_res8,local_18 + 0x178,4);
        bVar4 = cVar1 != '\0';
        lVar2 = FUN_18017ea70();
        if (*(int *)(lVar2 + 4) != 0) {
          *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
        }
      }
      if (!bVar4) {
        local_res8._0_4_ = 0;
      }
      if ((int)local_res8 - 1U < 0x80) {
        return (int)local_res8;
      }
    }
  }
  return 0;
}



