// FUN_1801a4ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a4ab0 */

undefined8 FUN_1801a4ab0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_res10;
  
  if (param_2 != 0) {
    lVar3 = FUN_18017ea70();
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
    local_res10 = 0;
    cVar2 = FUN_1804514f0(&local_res10,param_2,8);
    lVar3 = local_res10;
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((cVar2 != '\0') && (lVar3 != 0)) {
      plVar6 = (longlong *)param_1[2];
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar1 = *(undefined8 *)param_1[1];
      uVar5 = FUN_1801a49b0(*param_1,uVar1,0x4d);
      cVar2 = FUN_1804513c0(uVar5,1,2);
      if (cVar2 != '\0') {
        lVar3 = FUN_18017ea70();
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        cVar2 = FUN_1801af860(uVar5,uVar1,param_2,plVar6);
        lVar3 = FUN_18017ea70();
        if (*(int *)(lVar3 + 4) != 0) {
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
        }
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



