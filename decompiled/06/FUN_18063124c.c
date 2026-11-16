// FUN_18063124c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063124c */

/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = (undefined8 *)_calloc_base(0x40);
  puVar5 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3 != puVar3 + 0x240) {
      puVar5 = puVar3 + 6;
      do {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + -6),4000,0);
        puVar5[-1] = 0xffffffffffffffff;
        puVar4 = (undefined1 *)((longlong)puVar5 + 0xe);
        *(byte *)((longlong)puVar5 + 0xd) = *(byte *)((longlong)puVar5 + 0xd) & 0xf8;
        uVar2 = 0;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0xa0a0000;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 10;
        do {
          *puVar4 = 0;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < 5);
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + 0x240);
    }
    puVar5 = puVar3;
  }
  FUN_180621380(0);
  return puVar5;
}



