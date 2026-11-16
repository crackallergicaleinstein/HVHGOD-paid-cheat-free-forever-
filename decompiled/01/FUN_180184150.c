// FUN_180184150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180184150 */

undefined8 FUN_180184150(uint param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 local_res18 [2];
  
  if (param_1 < 0x4001) {
    if (param_1 == 0) {
      return 1;
    }
    if ((param_2 != 0) && (uVar3 = (longlong)(int)(param_1 - 1) * 8, param_2 <= ~uVar3)) {
      lVar2 = FUN_18017ea70();
      local_res18[0] = 0;
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
      cVar1 = FUN_1804514f0(local_res18,param_2,8);
      lVar2 = FUN_18017ea70();
      if (*(int *)(lVar2 + 4) != 0) {
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
      }
      if (cVar1 != '\0') {
        lVar2 = FUN_18017ea70();
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
        lVar2 = uVar3 + param_2;
        bVar4 = false;
        if (lVar2 != 0) {
          local_res18[0] = 0;
          cVar1 = FUN_1804514f0(local_res18,lVar2,8);
          bVar4 = cVar1 != '\0';
        }
        lVar2 = FUN_18017ea70();
        if (*(int *)(lVar2 + 4) != 0) {
          *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + -1;
        }
        if (bVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}



