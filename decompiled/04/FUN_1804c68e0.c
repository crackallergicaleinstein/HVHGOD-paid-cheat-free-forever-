// FUN_1804c68e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c68e0 */

void FUN_1804c68e0(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = DAT_180bb8ae8;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  FUN_1804d0470(DAT_180bb8ae8 + 0x1fe8,*(int *)(DAT_180bb8ae8 + 0x1fe8) + 1);
  lVar2 = *(longlong *)(lVar4 + 0x1ff0);
  lVar5 = (longlong)*(int *)(lVar4 + 0x1fe8) * 0x3c;
  *(undefined4 *)(lVar5 + -0x3c + lVar2) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar5 + -0x38 + lVar2) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(lVar5 + -0x28 + lVar2) = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(lVar5 + -0x30 + lVar2) = *(undefined8 *)(lVar1 + 0x130);
  *(undefined4 *)(lVar5 + -0x20 + lVar2) = *(undefined4 *)(lVar1 + 0x15c);
  *(undefined4 *)(lVar5 + -0x1c + lVar2) = *(undefined4 *)(lVar1 + 0x164);
  *(undefined8 *)(lVar5 + -0x18 + lVar2) = *(undefined8 *)(lVar1 + 0x140);
  *(undefined4 *)(lVar5 + -0x10 + lVar2) = *(undefined4 *)(lVar1 + 0x150);
  *(undefined4 *)(lVar5 + -0xc + lVar2) = *(undefined4 *)(lVar4 + 0x1554);
  *(bool *)(lVar5 + -6 + lVar2) = *(int *)(lVar4 + 0x1538) != 0;
  *(undefined1 *)(lVar5 + -5 + lVar2) = *(undefined1 *)(lVar1 + 0x158);
  *(undefined1 *)(lVar5 + -8 + lVar2) = *(undefined1 *)(lVar4 + 0x154f);
  *(undefined1 *)(lVar5 + -7 + lVar2) = *(undefined1 *)(lVar4 + 0x158d);
  *(undefined1 *)(lVar5 + -4 + lVar2) = 1;
  fVar3 = (*(float *)(lVar1 + 0x118) - *(float *)(lVar1 + 0x28)) - *(float *)(lVar1 + 0x160);
  *(float *)(lVar1 + 0x164) = fVar3;
  *(float *)(lVar1 + 0x15c) = fVar3;
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x118);
  *(undefined8 *)(lVar1 + 0x140) = 0;
  if (*(char *)(lVar4 + 0x2840) != '\0') {
    *(undefined4 *)(lVar4 + 0x2878) = 0xff7fffff;
  }
  return;
}



