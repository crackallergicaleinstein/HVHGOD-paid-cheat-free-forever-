// FUN_180183a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180183a70 */

undefined8 * FUN_180183a70(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if ((*(int *)*param_1 != 0) && (*(int *)param_1[2] < *(int *)param_1[1])) {
    lVar9 = (longlong)*(int *)param_1[2] + (longlong)*(int *)*param_1 + *(longlong *)param_1[3];
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (lVar9 == 0) {
      bVar1 = false;
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      cVar7 = FUN_1804514f0(&local_48,lVar9,0xc);
      if (cVar7 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar5 = uStack_40;
    uVar3 = local_48;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    lVar9 = *(longlong *)param_1[3] + (longlong)*(int *)param_1[1] + (longlong)*(int *)*param_1;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    bVar2 = false;
    if (lVar9 != 0) {
      local_48 = 0;
      uStack_40 = 0;
      cVar7 = FUN_1804514f0(&local_48,lVar9,0xc);
      if (cVar7 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar6 = uStack_40;
    uVar4 = local_48;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if ((bVar1) && (bVar2)) {
      uStack_3c = (undefined4)uVar4;
      uStack_38 = (undefined4)((ulonglong)uVar4 >> 0x20);
      *param_2 = uVar3;
      param_2[1] = CONCAT44(uStack_3c,uVar5);
      param_2[2] = CONCAT44(uVar6,uStack_38);
      *(undefined1 *)(param_2 + 3) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



