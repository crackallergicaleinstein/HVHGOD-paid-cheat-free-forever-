// FUN_18051f660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051f660 */

void FUN_18051f660(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_1;
  FUN_180488c60();
  FUN_18050e290(uVar1);
  FUN_180488f10();
  if ((*(longlong *)(*(longlong *)param_1[1] + 8) != *(longlong *)(*(longlong *)param_1[1] + 0x10))
     && (plVar2 = *(longlong **)param_1[2], lVar3 = *plVar2,
        *(longlong *)(lVar3 + 8) != *(longlong *)(lVar3 + 0x10))) {
    FUN_180488c60();
    lVar3 = *plVar2;
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    for (puVar5 = *(undefined8 **)(lVar3 + 8); puVar5 != puVar4; puVar5 = puVar5 + 1) {
      FUN_1805117c0(*puVar5);
    }
    FUN_180488f10();
  }
  return;
}



