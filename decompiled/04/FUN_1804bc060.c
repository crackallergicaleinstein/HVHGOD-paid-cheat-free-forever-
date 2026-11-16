// FUN_1804bc060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bc060 */

void FUN_1804bc060(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 != 0) {
    sVar4 = *(short *)(param_2 + 6);
    *(float *)(param_1 + 0x28) = (float)(int)*(short *)(param_2 + 4);
    *(float *)(param_1 + 0x2c) = (float)(int)sVar4;
    if ((0 < *(short *)(param_2 + 8)) && (0 < *(short *)(param_2 + 10))) {
      fVar8 = (float)(int)*(short *)(param_2 + 8);
      fVar7 = (float)(int)*(short *)(param_2 + 10);
      *(float *)(param_1 + 0x38) = fVar8;
      *(float *)(param_1 + 0x3c) = fVar7;
      *(float *)(param_1 + 0x30) = fVar8;
      *(float *)(param_1 + 0x34) = fVar7;
      *(undefined2 *)(param_1 + 0xe8) = 0;
    }
    bVar3 = *(byte *)(param_2 + 0xe);
    *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) & 0xfb;
    *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) & 0xfb;
    *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) & 0xfb;
    *(byte *)(param_1 + 0xcf) = bVar3 & 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar2;
  if ((*(byte *)(param_1 + 0x14) & 0x40) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = 0x202;
    *(undefined1 *)(param_1 + 0xea) = 0;
    return;
  }
  cVar5 = '\0';
  if (*(float *)(param_1 + 0x30) <= 0.0) {
    cVar5 = '\x02';
  }
  *(char *)(param_1 + 0xe8) = cVar5;
  cVar6 = '\0';
  if (*(float *)(param_1 + 0x34) <= 0.0) {
    cVar6 = '\x02';
  }
  *(char *)(param_1 + 0xe9) = cVar6;
  if ((cVar5 == '\0') && (cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0xea) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0xea) = 1;
  return;
}



