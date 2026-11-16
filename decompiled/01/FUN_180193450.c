// FUN_180193450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180193450 */

void FUN_180193450(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)(param_1 + 8);
  puVar3 = *(undefined8 **)(lVar2 + 8);
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    FUN_1801ad260(puVar4 + 0x14);
    plVar7 = puVar4 + 0xc;
    if (7 < (ulonglong)puVar4[0xf]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1805fb9a8(plVar7);
  }
  if (*(ulonglong *)(lVar2 + 0x10) != 0) {
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      FUN_1801b2bb0(lVar2,**(undefined8 **)(lVar2 + 8),*(undefined8 **)(lVar2 + 8));
    }
    else {
      FUN_1801b66f0();
      *(undefined8 *)*(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      local_18[0] = *(undefined8 *)(lVar2 + 8);
      FUN_1800f9880(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),local_18);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar3 = *(undefined8 **)(lVar2 + 8);
  for (puVar4 = (undefined8 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined8 *)*puVar4) {
    FUN_1801ad260(puVar4 + 0x14);
  }
  if (*(ulonglong *)(lVar2 + 0x10) != 0) {
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      FUN_1801b2bb0(lVar2,**(undefined8 **)(lVar2 + 8),*(undefined8 **)(lVar2 + 8));
    }
    else {
      FUN_1801b66f0();
      *(undefined8 *)*(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      local_18[0] = *(undefined8 *)(lVar2 + 8);
      FUN_1800f9880(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),local_18);
    }
  }
  if (**(longlong **)(param_1 + 0x18) != 0) {
    plVar7 = *(longlong **)**(undefined8 **)(param_1 + 0x20);
    cVar1 = *(char *)((longlong)plVar7 + 0x19);
    while (cVar1 == '\0') {
      FUN_18018f480(*(undefined8 *)(param_1 + 0x18),plVar7[4]);
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
      cVar1 = *(char *)((longlong)plVar7 + 0x19);
    }
  }
  return;
}



