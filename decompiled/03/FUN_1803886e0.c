// FUN_1803886e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803886e0 */

undefined8 FUN_1803886e0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  char local_res8;
  char local_res9;
  
  uVar1 = *(undefined8 *)*param_1;
  uVar2 = ((undefined8 *)*param_1)[1];
  cVar3 = FUN_1804513c0(uVar2,1,2);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    FUN_1801f3b90(&local_res8,uVar2,uVar1,"materials/hvhgod/character_matte_v3.vtex_c");
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    cVar3 = local_res9;
  }
  cVar4 = local_res8;
  if (cVar3 == '\0') {
    cVar4 = '\0';
  }
  if (cVar4 != '\0') {
    uVar1 = *(undefined8 *)*param_1;
    uVar2 = ((undefined8 *)*param_1)[1];
    cVar3 = FUN_1804513c0(uVar2,1,2);
    if (cVar3 == '\0') {
      local_res9 = '\0';
    }
    else {
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      FUN_1801f3b90(&local_res8,uVar2,uVar1,"materials/hvhgod/character_metal_v3.vtex_c");
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
    }
    if (local_res9 == '\0') {
      local_res8 = '\0';
    }
    if (local_res8 != '\0') {
      return 1;
    }
  }
  return 0;
}



