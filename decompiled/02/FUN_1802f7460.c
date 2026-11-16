// FUN_1802f7460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f7460 */

void FUN_1802f7460(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res10 [2];
  uint local_res18 [4];
  
  if (param_2 != 0) {
    iVar1 = *(int *)*param_1;
    if (iVar1 + param_2 == 0) {
      bVar7 = false;
    }
    else {
      local_res10[0] = local_res10[0] & 0xffffff00;
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar3 = FUN_1804514c0(local_res10,iVar1 + param_2,1);
      bVar7 = cVar3 != '\0';
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
    }
    lVar6 = (longlong)*(int *)param_1[1] + *(longlong *)param_1[2] + param_2;
    if (lVar6 == 0) {
      bVar2 = false;
      uVar5 = local_res10[0];
    }
    else {
      local_res18[0] = 0;
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      cVar3 = FUN_1804514c0(local_res18,lVar6,4);
      uVar5 = local_res18[0];
      if (cVar3 == '\0') {
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        bVar2 = false;
        uVar5 = local_res10[0];
      }
      else {
        lVar6 = FUN_18017ea70();
        bVar2 = true;
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
      }
    }
    if ((bVar7) && (bVar2)) {
      local_res18[0] = uVar5 | *(uint *)param_1[3];
      if (local_res18[0] != uVar5) {
        lVar6 = (longlong)*(int *)param_1[1] + *(longlong *)param_1[2] + param_2;
        if (lVar6 == 0) {
          return;
        }
        lVar4 = FUN_18017ea70();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        cVar3 = FUN_1801ad800(lVar6,local_res18);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      if ((char)local_res10[0] == '\0') {
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
        iVar1 = *(int *)*param_1;
        if (iVar1 + param_2 != 0) {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          FUN_1801ad7b0(iVar1 + param_2,local_res10);
          lVar6 = FUN_18017ea70();
          if (*(int *)(lVar6 + 4) != 0) {
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
          }
        }
      }
    }
  }
  return;
}



