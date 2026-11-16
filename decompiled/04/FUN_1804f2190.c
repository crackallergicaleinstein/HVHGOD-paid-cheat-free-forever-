// FUN_1804f2190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2190 */

void FUN_1804f2190(undefined1 (*param_1) [16],undefined4 param_2,undefined2 param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined1 (*) [16])0x0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined4 *)param_1[1] = 0;
  }
  puVar4 = (undefined8 *)(param_1[1] + 4);
  iVar3 = 0;
  if (3 < param_4) {
    uVar1 = (param_4 - 4U >> 2) + 1;
    uVar2 = (ulonglong)uVar1;
    iVar3 = uVar1 * 4;
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0xffffffff;
        *(byte *)((longlong)puVar4 + 0xe) = *(byte *)((longlong)puVar4 + 0xe) & 0xcc | 0xc;
        *(undefined2 *)((longlong)puVar4 + 0xc) = 0xffff;
      }
      if (puVar4 + 2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 2) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
        *(undefined4 *)(puVar4 + 3) = 0xffffffff;
        *(byte *)((longlong)puVar4 + 0x1e) = *(byte *)((longlong)puVar4 + 0x1e) & 0xcc | 0xc;
        *(undefined2 *)((longlong)puVar4 + 0x1c) = 0xffff;
      }
      if (puVar4 + 4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 4) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
        *(undefined4 *)(puVar4 + 5) = 0xffffffff;
        *(byte *)((longlong)puVar4 + 0x2e) = *(byte *)((longlong)puVar4 + 0x2e) & 0xcc | 0xc;
        *(undefined2 *)((longlong)puVar4 + 0x2c) = 0xffff;
      }
      if (puVar4 + 6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 6) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
        *(undefined4 *)(puVar4 + 7) = 0xffffffff;
        *(byte *)((longlong)puVar4 + 0x3e) = *(byte *)((longlong)puVar4 + 0x3e) & 0xcc | 0xc;
        *(undefined2 *)((longlong)puVar4 + 0x3c) = 0xffff;
      }
      puVar4 = puVar4 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (iVar3 < param_4) {
    puVar4 = puVar4 + 1;
    uVar2 = (ulonglong)(uint)(param_4 - iVar3);
    do {
      if (puVar4 + -1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + -1) = 0;
        *(undefined4 *)((longlong)puVar4 + -4) = 0;
        *(undefined4 *)puVar4 = 0xffffffff;
        *(byte *)((longlong)puVar4 + 6) = *(byte *)((longlong)puVar4 + 6) & 0xcc | 0xc;
        *(undefined2 *)((longlong)puVar4 + 4) = 0xffff;
      }
      puVar4 = puVar4 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_1[1][2] = param_1[1][2] | 1;
  *(undefined4 *)*param_1 = param_2;
  *(undefined2 *)(*param_1 + 0xc) = param_3;
  *(short *)(*param_1 + 0xe) = (short)param_4;
  return;
}



