// FUN_18034e6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e6a0 */

void FUN_18034e6a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 4;
  puVar2 = (undefined8 *)(param_1 + 0x34);
  do {
    *(undefined1 (*) [16])((longlong)puVar2 + -0x34) = (undefined1  [16])0x0;
    *(undefined2 *)((longlong)puVar2 + -0x24) = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x18;
  } while (lVar1 != 0);
  return;
}



