// FUN_18022ef70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022ef70 */

undefined8 FUN_18022ef70(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  if (param_2 < *(int *)*param_1) {
    lVar6 = (longlong)(param_2 * 8) + *(longlong *)param_1[1];
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (lVar6 == 0) {
      bVar3 = false;
    }
    else {
      local_res8 = 0;
      cVar4 = FUN_1804514f0(&local_res8,lVar6,8);
      if (cVar4 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    lVar5 = local_res8;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (!bVar3) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)param_1[3];
      uVar2 = *(undefined8 *)(param_1[2] + 0x2a0);
      cVar4 = FUN_1804513c0(uVar2,1,2);
      if (cVar4 != '\0') {
        lVar6 = FUN_18017ea70();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        cVar4 = FUN_1801ad750(uVar2,uVar1,lVar5,param_3);
        lVar5 = FUN_18017ea70();
        if (*(int *)(lVar5 + 4) != 0) {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
        }
        if (cVar4 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



