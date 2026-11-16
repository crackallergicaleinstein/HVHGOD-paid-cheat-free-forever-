// FUN_18059c8a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c8a0 */

ulonglong FUN_18059c8a0(char *param_1,uint param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  ulonglong in_RAX;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  if (puVar2 != (undefined1 *)0x0) {
    in_RAX = 0;
    if (*param_1 == '\0') {
      return (ulonglong)(byte)puVar2[param_2];
    }
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
        return (ulonglong)(byte)param_1[0x1c];
      }
      pbVar4 = puVar2 + 2;
      uVar6 = (uint)CONCAT11(*puVar2,puVar2[1]);
      while( true ) {
        if (param_2 < uVar6) {
          return 0;
        }
        bVar1 = *pbVar4;
        pbVar5 = pbVar4 + 3;
        uVar3 = (uint)CONCAT11(pbVar4[1],pbVar4[2]);
        if (param_2 < uVar3) break;
        pbVar4 = pbVar5;
        uVar6 = uVar3;
        if (puVar2 + *(uint *)(param_1 + 0x10) <= pbVar5) {
          return 0;
        }
      }
      *(uint *)(param_1 + 0x18) = uVar3 - uVar6;
      *(uint *)(param_1 + 0x14) = uVar6;
      param_1[0x1c] = bVar1;
      return (ulonglong)bVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



