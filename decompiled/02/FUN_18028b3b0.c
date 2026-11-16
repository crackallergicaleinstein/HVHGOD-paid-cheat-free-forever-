// FUN_18028b3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028b3b0 */

void FUN_18028b3b0(longlong param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8;
  
  if (param_1 != 0) {
    lVar6 = param_1 + 0x62;
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar6 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = local_res8 & 0xffff0000;
      cVar4 = FUN_1804514f0(&local_res8,lVar6,2);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar2 = (undefined2)local_res8;
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if (bVar1) {
      local_res8 = CONCAT22(local_res8._2_2_,uVar2) | 8;
      if (lVar6 != 0) {
        lVar5 = FUN_18017ea70();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        FUN_1801aec90(lVar6,&local_res8);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    param_1 = param_1 + 0x58;
    if (param_1 == 0) {
      bVar1 = false;
    }
    else {
      local_res8 = 0;
      cVar4 = FUN_1804514f0(&local_res8,param_1,4);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar3 = local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (((bVar1) && ((int)uVar3 < 0x7fffffff)) && (local_res8 = uVar3 + 1, param_1 != 0)) {
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      FUN_1801ad800(param_1,&local_res8);
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
    }
  }
  return;
}



