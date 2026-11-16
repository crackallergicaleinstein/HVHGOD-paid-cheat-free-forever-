// FUN_180224970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180224970 */

undefined1 FUN_180224970(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  uint local_res18 [2];
  
  lVar4 = FUN_1802248c0();
  if (((lVar4 != 0) && (param_1 != 0)) && (0 < (int)param_2)) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (param_1 + 0x810 == 0) {
      bVar1 = false;
    }
    else {
      local_res18[0] = local_res18[0] & 0xffffff00;
      cVar3 = FUN_1804514f0(local_res18,param_1 + 0x810,1);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    cVar3 = (char)local_res18[0];
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((bVar1) && (cVar3 == '\x01')) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      if (param_1 + 0x988 == 0) {
        bVar1 = false;
      }
      else {
        local_res18[0] = 0;
        cVar3 = FUN_1804514f0(local_res18,param_1 + 0x988,4);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      uVar2 = local_res18[0];
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
      if ((bVar1) && (uVar2 == param_2)) {
        return 1;
      }
    }
  }
  return 0;
}



