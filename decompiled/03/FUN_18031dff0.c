// FUN_18031dff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031dff0 */

void FUN_18031dff0(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  uVar5 = uVar2 | 2;
  *(ulonglong *)(param_1 + 0x60) = uVar5;
  *(ulonglong *)(param_1 + 0x68) =
       *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar5 ^ (uint)uVar2) & 2);
  if (param_2 != (uint *)0xfffffffffffffff8) {
    puVar4 = (uint *)FUN_1803dfb00();
    if (puVar4 != (uint *)0x0) {
      *puVar4 = *puVar4 | 0x1f;
      puVar4[5] = param_3;
      puVar4[2] = 2;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 4) = 1;
      puVar4[6] = 0;
      puVar4[7] = 0;
    }
  }
  puVar4 = (uint *)0x0;
  if (*(longlong *)(param_2 + 10) != 0) {
    puVar4 = (uint *)(*(longlong *)(param_2 + 10) + 0x10);
  }
  if (puVar4 != (uint *)0x0) {
    *param_2 = *param_2 | 2;
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *puVar4 = *puVar4 | 1;
    uVar1 = *puVar4;
    *(undefined8 *)(puVar4 + 2) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *puVar4 = uVar1 | 2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *puVar4 = uVar1 | 6;
    *(undefined8 *)(puVar4 + 6) = uVar3;
  }
  return;
}



