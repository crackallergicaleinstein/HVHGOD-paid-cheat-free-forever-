// FUN_1802197b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802197b0 */

undefined8 FUN_1802197b0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  uint *puVar6;
  byte bVar7;
  byte local_28 [16];
  
  puVar6 = (uint *)*param_2;
  puVar2 = (uint *)param_2[1];
  if (puVar6 != puVar2) {
    bVar7 = local_28[0];
    do {
      uVar1 = *puVar6;
      lVar5 = FUN_18017ea70();
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      bVar3 = false;
      if (param_1 != 0) {
        local_28[0] = 0;
        cVar4 = FUN_1804514f0(local_28,param_1,1);
        if (cVar4 == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          bVar7 = local_28[0];
        }
      }
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
      if ((!bVar3) || ((-1 < (int)uVar1 && (bVar7 != uVar1)))) {
        return 0;
      }
      puVar6 = puVar6 + 1;
      param_1 = param_1 + 1;
    } while (puVar6 != puVar2);
  }
  return 1;
}



