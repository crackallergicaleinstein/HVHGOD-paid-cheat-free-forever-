// FUN_1804c2ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2ca0 */

undefined8 FUN_1804c2ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)FUN_1804af1b0();
  if (*pcVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_1804c2c30(*(float *)(pcVar1 + 4) - *(float *)(DAT_180bb8ae8 + 0x40),
                        *(float *)(pcVar1 + 4),param_2,param_3);
  return uVar2;
}



