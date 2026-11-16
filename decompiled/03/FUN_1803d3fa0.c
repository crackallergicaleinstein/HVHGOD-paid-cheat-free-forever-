// FUN_1803d3fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d3fa0 */

longlong FUN_1803d3fa0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_1;
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 + 0x10 == 0) {
    bVar1 = false;
  }
  else {
    local_res8 = 0;
    cVar2 = FUN_1804514f0(&local_res8,param_2 + 0x10,8);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  lVar3 = local_res8;
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if ((bVar1) && (lVar3 != 0)) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    lVar3 = lVar3 + 8;
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = 0;
      cVar2 = FUN_1804514f0(&local_res8,lVar3,8);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    lVar3 = local_res8;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((bVar1) && (lVar3 != 0)) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      lVar3 = lVar3 + 0x58;
      if (lVar3 == 0) {
        bVar1 = false;
      }
      else {
        local_res8 = 0;
        cVar2 = FUN_1804514f0(&local_res8,lVar3,8);
        if (cVar2 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      lVar3 = local_res8;
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if ((bVar1) && (lVar3 != 0)) {
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        lVar3 = lVar3 + 8;
        if (lVar3 == 0) {
          bVar1 = false;
        }
        else {
          local_res8 = 0;
          cVar2 = FUN_1804514f0(&local_res8,lVar3,8);
          if (cVar2 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        lVar3 = local_res8;
        lVar4 = FUN_18017ea70();
        if (*(int *)(lVar4 + 4) != 0) {
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
        }
        if (!bVar1) {
          lVar3 = 0;
        }
        return lVar3;
      }
    }
  }
  return 0;
}



