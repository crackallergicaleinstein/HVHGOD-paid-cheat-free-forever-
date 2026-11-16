// FUN_180589ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589ae0 */

undefined8 FUN_180589ae0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x70);
    return 0;
  }
  return 0xc;
}



