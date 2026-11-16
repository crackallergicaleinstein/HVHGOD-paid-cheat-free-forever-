// FUN_18044c8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044c8f0 */

ulonglong FUN_18044c8f0(longlong *param_1,uint *param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  uint7 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (uint7)(in_RAX >> 8);
  if (param_1 == (longlong *)0x0) {
    return (ulonglong)uVar2 << 8;
  }
  if (*param_1 == 0) {
    uVar3 = (ulonglong)uVar2 << 8;
  }
  else {
    uVar4 = 0x811c9dc5;
    for (uVar3 = 0; uVar3 < 0x100; uVar3 = uVar3 + 1) {
      bVar1 = *(byte *)(uVar3 + *param_1);
      in_RAX = 0;
      if (bVar1 == 0) {
        *param_2 = uVar4;
        return (ulonglong)(uVar3 != 0);
      }
      uVar4 = (uVar4 ^ bVar1) * 0x1000193;
    }
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  return uVar3;
}



