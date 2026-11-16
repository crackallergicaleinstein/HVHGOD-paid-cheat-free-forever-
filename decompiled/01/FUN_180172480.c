// FUN_180172480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180172480 */

undefined4 FUN_180172480(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t _Size;
  int iVar2;
  undefined8 *_Buf2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar3 == puVar1) {
      return 0;
    }
    if (*(char *)((longlong)puVar3 + 0xe3) != '\0') {
      _Buf2 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        _Buf2 = (undefined8 *)*puVar3;
      }
      _Size = param_2[1];
      if ((_Size == puVar3[2]) &&
         ((_Size == 0 || (iVar2 = memcmp((void *)*param_2,_Buf2,_Size), iVar2 == 0)))) {
        return 1;
      }
    }
    puVar3 = puVar3 + 0x2d;
  } while( true );
}



