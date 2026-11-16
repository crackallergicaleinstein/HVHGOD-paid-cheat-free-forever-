// FUN_1804549c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804549c0 */

uint FUN_1804549c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  uVar2 = *param_1;
  lVar4 = 0x270;
  if (uVar2 == 0x270) {
    puVar3 = param_1 + 2;
    do {
      uVar2 = (puVar3[-1] ^ *puVar3) & 0x7fffffff ^ puVar3[-1];
      puVar3[0x26f] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar3[0x18c] ^ uVar2 >> 1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    uVar2 = *param_1;
  }
  else if (0x4df < uVar2) {
    lVar4 = 0xe3;
    puVar3 = param_1 + 0x272;
    do {
      uVar2 = (puVar3[-1] ^ *puVar3) & 0x7fffffff ^ puVar3[-1];
      puVar3[-0x271] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar3[0x18c] ^ uVar2 >> 1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    lVar4 = 0x18c;
    puVar3 = param_1 + 0x355;
    do {
      uVar2 = (puVar3[-1] ^ *puVar3) & 0x7fffffff ^ puVar3[-1];
      puVar3[-0x271] = -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ puVar3[-0x354] ^ uVar2 >> 1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    uVar1 = (param_1[0x4e0] ^ param_1[1]) & 0x7fffffff ^ param_1[0x4e0];
    uVar2 = 0;
    param_1[0x270] = -(uint)((uVar1 & 1) != 0) & 0x9908b0df ^ uVar1 >> 1 ^ param_1[0x18d];
    *param_1 = 0;
  }
  uVar1 = param_1[(ulonglong)uVar2 + 1];
  *param_1 = uVar2 + 1;
  uVar1 = uVar1 >> 0xb & param_1[0x4e1] ^ uVar1;
  uVar1 = (uVar1 & 0xff3a58ad) << 7 ^ uVar1;
  uVar1 = (uVar1 & 0xffffdf8c) << 0xf ^ uVar1;
  return uVar1 >> 0x12 ^ uVar1;
}



