// FUN_180571110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180571110 */

ulonglong FUN_180571110(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if (((DAT_180c62ff8 == 0) || (*(char *)(DAT_180c62ff8 + 0x164) == '\0')) ||
     (*(char *)(DAT_180c62ff8 + 0x170) == '\0')) {
    return DAT_180c62ff8 & 0xffffffffffffff00;
  }
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)*param_2 = *(undefined4 *)(DAT_180c62ff8 + 0x15c);
  *puVar1 = *(undefined4 *)(DAT_180c62ff8 + 0x160);
  *(undefined4 *)*param_4 = *(undefined4 *)(DAT_180c62ff8 + 0x168);
  uVar2 = DAT_180c62ff8 >> 8;
  *(undefined4 *)*param_5 = *(undefined4 *)(DAT_180c62ff8 + 0x16c);
  return CONCAT71((int7)uVar2,1);
}



