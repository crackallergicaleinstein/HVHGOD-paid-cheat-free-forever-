// FUN_180579d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579d30 */

void FUN_180579d30(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(param_1 + 0xf0);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x90);
  lVar2 = puVar1[3];
  lVar3 = puVar1[2];
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 8) & 0x10000) != 0) {
    if ((*plVar5 != 0) && ((*(byte *)(*plVar5 + 8) & 2) != 0)) {
      plVar4 = *(longlong **)(param_1 + 0xe8);
      if (*plVar4 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3);
      }
      *plVar4 = 0;
      *(uint *)(*plVar5 + 8) = *(uint *)(*plVar5 + 8) & 0xfffffffd;
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
    (**(code **)(lVar2 + 0x70))(param_1);
  }
  if ((*plVar5 == 0) || ((*(byte *)(*plVar5 + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(uint *)(*plVar5 + 8) = *(uint *)(*plVar5 + 8) & 0xfffffffe;
  }
  plVar5 = (longlong *)(param_1 + 0xf0);
  if ((longlong *)*plVar5 != (longlong *)0x0) {
    if ((*(uint *)*puVar1 & 0x200) == 0) {
      plVar4 = *(longlong **)*plVar5;
      if (plVar4 != (longlong *)0x0) {
        lVar2 = *plVar4;
        FUN_1805742b0(plVar4);
        (**(code **)(lVar2 + 0x10))(lVar2,plVar4);
      }
      *(undefined8 *)*plVar5 = 0;
    }
    if (*plVar5 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



