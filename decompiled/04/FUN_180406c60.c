// FUN_180406c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180406c60 */

longlong FUN_180406c60(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_18063ab10(param_1,0,0x1800);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  lVar2 = 0xc0;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18063ab10(param_1 + 0x1800,0,0x4000);
  *(undefined8 *)(param_1 + 0x5800) = 0;
  *(undefined8 *)(param_1 + 0x5808) = 0;
  *(undefined1 *)(param_1 + 0x5810) = 1;
  return param_1;
}



