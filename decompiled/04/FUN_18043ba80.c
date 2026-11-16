// FUN_18043ba80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ba80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18043ba80(void)

{
  longlong *plVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined4 *)FUN_180439770();
  plVar4 = (longlong *)FUN_180439710();
  if (*plVar4 != plVar4[1]) {
    plVar5 = (longlong *)FUN_180439710();
    plVar4 = (longlong *)plVar5[1];
    if (plVar4 != (longlong *)*plVar5) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (longlong *)*plVar4;
        if ((plVar1 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,puVar3), cVar2 != '\0')) break;
      } while (plVar4 != (longlong *)*plVar5);
    }
  }
  puVar6 = (undefined8 *)FUN_180439710();
  plVar4 = (longlong *)puVar6[1];
  for (plVar5 = (longlong *)*puVar6; plVar5 != plVar4; plVar5 = plVar5 + 1) {
    plVar1 = (longlong *)*plVar5;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar3 + 0x6e,puVar3);
    }
  }
  FUN_18043ae90();
  if (*(char *)((longlong)puVar3 + 0x12) != '\0') {
    *(undefined8 *)(puVar3 + 0x102) = 0;
    *(undefined8 *)(puVar3 + 0x104) = 0;
    *(undefined8 *)(puVar3 + 0x106) = 0;
    *(undefined8 *)(puVar3 + 0x10e) = 0;
  }
  puVar3[2] = *puVar3;
  puVar3[3] = puVar3[1];
  *(undefined2 *)((longlong)puVar3 + 0x11) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x13) = 0;
  *(undefined2 *)((longlong)puVar3 + 0x15) = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x3a) = 0;
  *(undefined8 *)(puVar3 + 0x5c) = 0;
  return;
}



