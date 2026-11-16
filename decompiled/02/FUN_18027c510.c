// FUN_18027c510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c510 */

undefined8 FUN_18027c510(longlong param_1,longlong param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  uint local_res8 [2];
  longlong local_res10;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  local_res10 = param_2;
  if (param_1 + 0x20 == 0) {
    cVar1 = '\0';
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar1 = FUN_1801fde60(param_1 + 0x20,&local_res10);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  if (param_1 + 0x28 == 0) {
    cVar2 = '\0';
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar2 = FUN_1801fde60(param_1 + 0x28,&local_res10);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  local_res8[0] = *param_3;
  cVar3 = '\0';
  if (param_1 + 0x50 != 0) {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar3 = FUN_1801ad800(param_1 + 0x50,local_res8);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
  cVar4 = '\0';
  if (param_1 + 0x61 != 0) {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    cVar4 = FUN_1801ad7b0(param_1 + 0x61,local_res8);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  if ((((cVar1 == '\0') || (cVar2 == '\0')) || (cVar3 == '\0')) || (cVar4 == '\0')) {
    return 0;
  }
  return 1;
}



