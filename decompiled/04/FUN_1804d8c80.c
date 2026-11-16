// FUN_1804d8c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d8c80 */

void FUN_1804d8c80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1804d8fc0();
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x68);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x60);
    for (plVar4 = plVar3; plVar4 < plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_1) {
        if (plVar4 < plVar1 + -1) {
          plVar3[(longlong)plVar4 - (longlong)plVar3 >> 3] = plVar1[-1];
        }
        *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + -1;
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180473ca0(param_1 + 0xc0);
  FUN_180473ca0(param_1 + 0xb0);
  FUN_180473ca0(param_1 + 0xa0);
  FUN_1804e17d0(param_1 + 0x88);
  FUN_180473ca0(param_1 + 0x90);
  FUN_180473ca0(param_1 + 0x50);
  FUN_180473ca0(param_1 + 0x20);
  FUN_180473ca0(param_1 + 0x10);
  FUN_180473ca0(param_1);
  return;
}



