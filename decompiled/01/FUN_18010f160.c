// FUN_18010f160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f160 */

undefined8 FUN_18010f160(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  size_t _Size;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  if (param_1[1] == param_2[1]) {
    puVar1 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)*puVar1;
    plVar2 = *(longlong **)*param_2;
    while( true ) {
      if (puVar9 == puVar1) {
        return 1;
      }
      puVar7 = puVar9 + 4;
      plVar8 = plVar2 + 4;
      if (0xf < (ulonglong)plVar2[7]) {
        plVar8 = (longlong *)*plVar8;
      }
      _Size = puVar9[6];
      if (0xf < (ulonglong)puVar9[7]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      if ((_Size != plVar2[6]) ||
         (((_Size != 0 && (iVar6 = memcmp(puVar7,plVar8,_Size), iVar6 != 0)) ||
          (cVar5 = FUN_1800f3780(puVar9 + 8,plVar2 + 8), cVar5 == '\0')))) break;
      puVar7 = (undefined8 *)puVar9[2];
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar5 = *(char *)((longlong)*puVar7 + 0x19);
        puVar9 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
        while (cVar5 == '\0') {
          cVar5 = *(char *)((longlong)*puVar7 + 0x19);
          puVar9 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      else {
        cVar5 = *(char *)((longlong)puVar9[1] + 0x19);
        puVar3 = (undefined8 *)puVar9[1];
        puVar7 = puVar9;
        while ((puVar9 = puVar3, cVar5 == '\0' && (puVar7 == (undefined8 *)puVar9[2]))) {
          cVar5 = *(char *)((longlong)puVar9[1] + 0x19);
          puVar3 = (undefined8 *)puVar9[1];
          puVar7 = puVar9;
        }
      }
      plVar8 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar5 = *(char *)(*plVar8 + 0x19);
        plVar2 = plVar8;
        plVar8 = (longlong *)*plVar8;
        while (cVar5 == '\0') {
          cVar5 = *(char *)(*plVar8 + 0x19);
          plVar2 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      else {
        cVar5 = *(char *)(plVar2[1] + 0x19);
        plVar4 = (longlong *)plVar2[1];
        plVar8 = plVar2;
        while ((plVar2 = plVar4, cVar5 == '\0' && (plVar8 == (longlong *)plVar2[2]))) {
          cVar5 = *(char *)(plVar2[1] + 0x19);
          plVar4 = (longlong *)plVar2[1];
          plVar8 = plVar2;
        }
      }
    }
  }
  return 0;
}



