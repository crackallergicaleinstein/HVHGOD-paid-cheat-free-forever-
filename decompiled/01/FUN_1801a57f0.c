// FUN_1801a57f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a57f0 */

void FUN_1801a57f0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)(param_1 + 10);
  lVar2 = 0x1d;
  do {
    *(undefined8 *)((longlong)puVar1 + -10) = 0;
    *(undefined2 *)((longlong)puVar1 + -2) = 0;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe) = 0;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x16) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1e) = 0;
    puVar1[8] = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x26) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x2e) = 0;
    puVar1[0xc] = 0;
    *(undefined2 *)(puVar1 + 0xd) = 0;
    puVar1 = puVar1 + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



