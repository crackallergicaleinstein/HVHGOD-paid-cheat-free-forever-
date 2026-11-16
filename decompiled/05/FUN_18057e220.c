// FUN_18057e220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e220 */

ulonglong FUN_18057e220(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ushort *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  
  uVar1 = FUN_180581fe0(param_2,param_3);
  if ((int)uVar1 == 0) {
    puVar2 = *(ushort **)(param_2 + 0x20);
    puVar4 = *(undefined4 **)(param_3 + 8);
    pcVar3 = *(char **)(param_3 + 0x10);
    puVar5 = puVar2 + (longlong)*(int *)(param_2 + 0x1c) * 0x18;
    if (puVar2 < puVar5) {
      do {
        *puVar4 = *(undefined4 *)(puVar2 + 8);
        puVar4[1] = *(undefined4 *)(puVar2 + 10);
        if ((*puVar2 & 1) == 0) {
          *pcVar3 = ((*puVar2 & 2) != 0) + '\x01';
        }
        else {
          *pcVar3 = '\0';
        }
        puVar2 = puVar2 + 0x18;
        puVar4 = puVar4 + 2;
        pcVar3 = pcVar3 + 1;
      } while (puVar2 < puVar5);
      uVar1 = uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}



