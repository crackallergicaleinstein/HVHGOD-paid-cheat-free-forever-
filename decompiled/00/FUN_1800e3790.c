// FUN_1800e3790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e3790 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e3790(void)

{
  undefined4 *puVar1;
  bool bVar2;
  
  _DAT_180cc9248 = 200;
  _DAT_180cc9240 = 0;
  DAT_180cc9250 = 0;
  _DAT_180cc9254 = 1;
  FUN_1800c1c10(&DAT_180cadce0,0);
  DAT_180b0c754 = 0x3f333333;
  DAT_180b0c758 = 0x3fa00000;
  DAT_180b0c760 = 0x3f000000;
  DAT_180b0c764 = 0x40900000;
  DAT_180cad724 = 0x41f00000;
  DAT_180cad950 = 0xc2b40000;
  DAT_180cad954 = 0x42b40000;
  DAT_180cad878 = 0x42040000;
  DAT_180b0c75c = 1;
  DAT_180cad798 = 0x42340000;
  DAT_180cad808 = 0x3f800000;
  DAT_180b0c750 = 1;
  _DAT_180b0d690 = 0x1010101;
  DAT_180cc7840 = 1;
  _DAT_180b0d6c6 = 0x1010101;
  DAT_180b0d6c4 = 1;
  _DAT_180b0d6f3 = 0x101;
  DAT_180b0d6f2 = 1;
  DAT_180b0d6f0 = 1;
  _DAT_180cad2e0 = 0;
  DAT_180c7e258 = 1;
  DAT_180cad72c = 1;
  DAT_180cad728 = 1;
  _DAT_180c7e53c = 1;
  _DAT_180c7e538 = 1;
  _DAT_180c7e530 = 0;
  FUN_1800b5ba0(&DAT_180c7e290);
  puVar1 = &DAT_180c7ec20;
  do {
    puVar1[1] = 1;
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + -2) = 0;
    FUN_1800b5ba0(puVar1 + -0xaa);
    bVar2 = puVar1 != (undefined4 *)0x180c80ea8;
    puVar1 = puVar1 + 0x1ba;
  } while (bVar2);
  puVar1 = &DAT_180c81590;
  do {
    puVar1[1] = 1;
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + -2) = 0;
    FUN_1800b5ba0(puVar1 + -0xaa);
    bVar2 = puVar1 != (undefined4 *)0x180c8f978;
    puVar1 = puVar1 + 0x1ba;
  } while (bVar2);
  return;
}



