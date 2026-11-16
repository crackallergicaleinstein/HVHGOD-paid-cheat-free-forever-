// FUN_1804d8fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d8fc0 */

void FUN_1804d8fc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  FUN_1804aeee0();
  FUN_1804aeee0(param_1 + 0x10);
  FUN_1804aeee0(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1804aeee0(param_1 + 0xa0);
  lVar2 = DAT_180bb8ae8;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (lVar2 != 0) {
      piVar5 = (int *)(lVar2 + 0x2998 + (longlong)*(short *)(lVar2 + 0x2994) * 8);
      if (*piVar5 != *(int *)(lVar2 + 4)) {
        iVar4 = *(short *)(lVar2 + 0x2994) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar2 + 0x2994) = sVar3;
        piVar5 = (int *)(lVar2 + ((longlong)sVar3 + 0x533) * 8);
        *piVar5 = *(int *)(lVar2 + 4);
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar1);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  FUN_1804aeee0(param_1 + 0xc0);
  *(undefined2 *)(param_1 + 0xdc) = 0;
  FUN_1804aeee0(param_1 + 0x50);
  FUN_1804e17d0(param_1 + 0x88);
  return;
}



