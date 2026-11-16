// FUN_1804703a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804703a0 */

ulonglong FUN_1804703a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = (int)uVar1 >> 1 & 0x5555U | (uVar1 & 0x5555) * 2;
  uVar4 = uVar4 >> 2 & 0x3333 | (uVar4 & 0x3333) << 2;
  uVar4 = uVar4 >> 4 & 0xf0f | (uVar4 & 0xf0f) << 4;
  piVar2 = (int *)(param_2 + 0x448);
  uVar3 = (uVar4 & 0xff) << 8 | uVar4 >> 8;
  uVar4 = 10;
  if (*piVar2 <= (int)uVar3) {
    do {
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (*piVar2 <= (int)uVar3);
    if (0xf < (int)uVar4) {
      return 0xffffffff;
    }
  }
  iVar5 = (uint)*(ushort *)(param_2 + 0x464 + (longlong)(int)uVar4 * 2) +
          (((int)uVar3 >> (0x10 - uVar4 & 0x1f)) -
          (uint)*(ushort *)(param_2 + 0x400 + (longlong)(int)uVar4 * 2));
  if ((iVar5 < 0x120) && (*(byte *)((longlong)iVar5 + 0x484 + param_2) == uVar4)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - uVar4;
    *(uint *)(param_1 + 0x18) = uVar1 >> (uVar4 & 0x1f);
    return (ulonglong)*(ushort *)(param_2 + 0x5a4 + (longlong)iVar5 * 2);
  }
  return 0xffffffff;
}



