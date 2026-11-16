// FUN_18057e060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e060 */

ulonglong FUN_18057e060(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  
  uVar1 = FUN_180581fe0(param_2,param_3);
  if ((int)uVar1 == 0) {
    if ((*(byte *)(param_2 + 0x1178) & 1) == 0) {
      uVar1 = FUN_18057fec0(param_2,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      FUN_18057f700(param_2,param_4,0);
    }
    if ((*(byte *)(param_2 + 0x1178) & 2) == 0) {
      uVar1 = FUN_18057fec0(param_2,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      FUN_18057f700(param_2,param_4,1);
    }
    uVar1 = uVar1 & 0xffffffff;
    if ((*(byte *)(param_2 + 0x1178) & 1) == 0) {
      FUN_18057f1a0(param_2,0);
      FUN_18057eeb0(param_2,0);
      FUN_180581490();
      FUN_1805816e0(param_2,0);
    }
    if ((*(byte *)(param_2 + 0x1178) & 2) == 0) {
      FUN_18057f1a0(param_2,1);
      FUN_18057eeb0(param_2,1);
      FUN_180581490();
      FUN_1805816e0(param_2,1);
    }
    puVar2 = *(ushort **)(param_2 + 0x20);
    puVar4 = *(undefined4 **)(param_3 + 8);
    pcVar3 = *(char **)(param_3 + 0x10);
    puVar5 = puVar2 + (longlong)*(int *)(param_2 + 0x1c) * 0x18;
    for (; puVar2 < puVar5; puVar2 = puVar2 + 0x18) {
      *puVar4 = *(undefined4 *)(puVar2 + 8);
      puVar4[1] = *(undefined4 *)(puVar2 + 10);
      if ((*puVar2 & 1) == 0) {
        *pcVar3 = ((*puVar2 & 2) != 0) + '\x01';
      }
      else {
        *pcVar3 = '\0';
      }
      puVar4 = puVar4 + 2;
      pcVar3 = pcVar3 + 1;
    }
  }
  return uVar1;
}



